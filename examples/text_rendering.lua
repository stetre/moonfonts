#!/usr/bin/env lua
-- MoonFonts example: text_rendering.lua
--
-- This example renders a few lines of text in a window.
--
-- The example is derived from the text rendering examples contained in LearnOpenGL,
-- by Joey de Vries (https://learnopengl.com/#!In-Practice/Text-Rendering ).
--
gl = require("moongl")
glfw = require("moonglfw")
glmath = require("moonglmath")
fonts = require("moonfonts")
rgb = glmath.vec3

fontname = arg[1] or 'arial_48_latin1'

width, height = 600, 400

lyrics = [[Giant steps are what you take
Walking on the Moon
I hope my legs don't break
Walking on the Moon]]

vertex_shader = [[
#version 330 core
layout (location = 0) in vec4 vertex; // { x, y, u, v }
uniform mat4 projection;
out vec2 TexCoords;

void main() {
   gl_Position = projection * vec4(vertex.xy, 0.0, 1.0);
   TexCoords = vertex.zw;
}
]]

fragment_shader = [[
#version 330 core
in vec2 TexCoords;
uniform sampler2D text;
uniform vec3 textColor;
out vec4 color;

void main() {    
   vec4 sampled = vec4(1.0, 1.0, 1.0, texture(text, TexCoords).r);
   color = vec4(textColor, 1.0) * sampled;
}
]]

-- Create the window:
glfw.version_hint(3, 3, 'core')
glfw.window_hint("resizable", false)
window = glfw.create_window(width, height, "MoonFonts text rendering example")
glfw.make_context_current(window)
gl.init()

-- Define the viewport dimensions:
gl.viewport(0, 0, width, height)

-- Set OpenGL options:
gl.enable("cull face")
gl.enable("blend") -- comment out to see quads
gl.blend_func("src alpha", "one minus src alpha")
gl.pixel_store('unpack alignment', 1) -- Disable byte-alignment restriction

-- Compile and setup the shader:
prog, vsh, fsh = gl.make_program_s('vertex', vertex_shader, 'fragment', fragment_shader)
gl.delete_shaders(vsh, fsh)

-- Set the projection matrix:
projection = glmath.ortho(0.0, width, 0.0, height)
gl.use_program(prog)
gl.uniform_matrix4f(gl.get_uniform_location(prog, "projection"), true, gl.flatten(projection))

-- Load the font:
font = fonts.load(fontname, true)
assert(font, "Font '"..fontname.."' is not available")

-- Generate texture
texture = gl.new_texture('2d')
gl.texture_image('2d', 0, 'red', 'red', 'ubyte', font.pixels, font.width, font.height)
-- Set texture options
gl.texture_parameter('2d', 'wrap s', 'clamp to edge')
gl.texture_parameter('2d', 'wrap t', 'clamp to edge')
gl.texture_parameter('2d', 'min filter', 'linear')
gl.texture_parameter('2d', 'mag filter', 'linear')
gl.unbind_texture('2d')

-- Configure vao/vbo. 
-- The buffer will hold the vertex data for one texture quad.
vertex_size = 4 * gl.sizeof('float')  -- { x, y, u, v } (position and uv coordinates)
buffer_size = 6 * vertex_size         -- 6 vertices
vao = gl.new_vertex_array()
vbo = gl.new_buffer('array')
gl.buffer_data('array', buffer_size, 'dynamic draw')
gl.enable_vertex_attrib_array(0)
gl.vertex_attrib_pointer(0, 4, 'float', false, vertex_size, 0)
gl.unbind_buffer('array')
gl.unbind_vertex_array()


function RenderText(prog, text, x, y, scale, color)
   gl.use_program(prog)
   gl.uniformf(gl.get_uniform_location(prog, "textColor"), color.r, color.g, color.b)
   gl.active_texture(0)
   gl.bind_vertex_array(vao)
   gl.bind_texture('2d', texture)

   -- Note: the font data assumes (0,0) on the top left, while OpenGL assumes it
   -- on the bottom left, so we have to flip the y coordinate of the texture.
   -- To do so, we move down the baseline, and then we reflect the around it.
   --  
   -- (0,0)----------------->+X    / \+Y
   --   |                           |
   --   |   y1  __                  |   y1' __          yr' = yr + line_spacing  (baseline)
   --   |      |\/|                 |      |\/|         y0' = yr' - y1'
   --   |      |/_|          -->    |      |/_|         y1' = yr' - y0'
   --   |   y0                      |   y0'             x0' = x0
   --   |   yr -----------          |   yr'---------    x1' = x1
   --   |                           |
   --  \ /+Y                      (0,0)---------------->+X
   -- 
   
   local x_base = x

   y = y + font.line_spacing * scale

   -- Iterate through all characters
   for _, codepoint in utf8.codes(text) do
      local c = font.fontchar[codepoint]
      if not c then
         if utf8.char(codepoint) == '\n' then -- go to the beginning of a new line
            y = y - font.line_spacing*1.4 * scale
            x = x_base
            goto continue
         end
      end

      -- Update vbo for each character
      local x0, y0, u0, v0 = x + c.x0f*scale, y - c.y1f*scale, c.s0f, c.t1f
      local x1, y1, u1, v1 = x + c.x1f*scale, y - c.y0f*scale, c.s1f, c.t0f

      local A = { x0, y0, u0, v0 }    --   D __ C
      local B = { x1, y0, u1, v0 }    --    | /|
      local C = { x1, y1, u1, v1 }    --    |/_|
      local D = { x0, y1, u0, v1 }    --   A    B
      local vertices = { A, B, C, A, C, D }  -- 2 counter-clockwise triangles -> quad

      -- Bind quad vertices and render
      gl.bind_buffer('array', vbo)
      gl.buffer_sub_data('array', 0, gl.pack('float', vertices))
      gl.draw_arrays('triangles', 0, 6)

      -- Advance base point for the next glyph
      x = x + c.advancef * scale
      ::continue::
   end
      
   gl.unbind_buffer('array')
   gl.unbind_vertex_array()
   gl.unbind_texture('2d')
end


glfw.set_key_callback(window, 
function (window, key, scancode, action)
   if (key == 'escape' or key == 'q') and action == 'press' then
      glfw.set_window_should_close(window, true)
   end
end)

-- Main loop
while not glfw.window_should_close(window) do
   glfw.wait_events()
   gl.clear_color(0.0, 0.0, 0.0, 1.0)
   gl.clear('color')
   RenderText(prog, lyrics, width*.02, height*.98-font.line_spacing, 1.0, rgb(1.0, 1.0, 1.0))
   glfw.swap_buffers(window)
end

