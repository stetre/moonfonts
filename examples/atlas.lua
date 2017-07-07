#!/usr/bin/env lua
-- MoonFonts example: atlas.lua
--
-- This example displays in a window the complete texture atlas for a font face.
--
-- The example is derived from the text rendering examples contained in LearnOpenGL,
-- by Joey de Vries (https://learnopengl.com/#!In-Practice/Text-Rendering ).
--
gl = require("moongl")
glfw = require("moonglfw")
glmath = require('moonglmath')
fonts = require("moonfonts")

fontname = arg[1] or 'arial_48_latin_ext'

width, height = 600, 600 -- window size

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

-- Create window
glfw.version_hint(3, 3, 'core')
glfw.window_hint("resizable", false)
window = glfw.create_window(width, height, "Font Atlas ("..fontname..")")
glfw.make_context_current(window)
gl.init()

-- Define the viewport dimensions
gl.viewport(0, 0, width, height)

-- Set OpenGL options
gl.enable("cull face")
gl.enable("blend") -- comment out to see quads
gl.blend_func("src alpha", "one minus src alpha")

-- Compile and setup the shader
prog, vsh, fsh = gl.make_program_s('vertex', vertex_shader, 'fragment', fragment_shader)
gl.delete_shaders(vsh, fsh)
gl.use_program(prog)

projection = glmath.ortho(0.0, width, 0.0, height)
gl.uniform_matrix4f(gl.get_uniform_location(prog, "projection"), true, gl.flatten(projection))

-- Disable byte-alignment restriction
gl.pixel_store('unpack alignment', 1) 

-- Load font
font = fonts.load(fontname) --, true)
assert(font, "Font '"..fontname.."' is not available")

-- Generate texture with the texture atlas image
texture = gl.new_texture('2d')
gl.texture_image('2d', 0, 'red', 'red', 'ubyte', font.pixels, font.width, font.height)
gl.texture_parameter('2d', 'wrap s', 'clamp to edge')
gl.texture_parameter('2d', 'wrap t', 'clamp to edge')
gl.texture_parameter('2d', 'min filter', 'linear')
gl.texture_parameter('2d', 'mag filter', 'linear')

gl.unbind_texture('2d')

-- Configure vao/vbo for texture quad
vertex_size = 4 * gl.sizeof('float')  -- { x, y, u, v }
buffer_size = 6 * vertex_size         -- 6 vertices
vao = gl.new_vertex_array()
vbo = gl.new_buffer('array')
gl.buffer_data('array', buffer_size, 'dynamic draw')
gl.enable_vertex_attrib_array(0)
gl.vertex_attrib_pointer(0, 4, 'float', false, vertex_size, 0)

-- Prepare vertices for the quad
margin_x = width/20
margin_y = height/20
x0, y0, u0, v0 = margin_x, margin_y, 0, 0
x1, y1, u1, v1 = width-margin_x, height-margin_y, 1, 1
-- Translate baseline up by height, and reflect about it
-- (this is because OpenGL assumes (x,y) = (0,0) on the bottom left,
-- while images have it on the top left):
y0, y1, v0, v1 = height-y1, height-y0, v1, v0

A = { x0, y0, u0, v0 }    --   D __ C
B = { x1, y0, u1, v0 }    --    | /|
C = { x1, y1, u1, v1 }    --    |/_|
D = { x0, y1, u0, v1 }    --   A    B
vertices = { A, B, C, A, C, D }  -- 2 counter-clockwise triangles -> quad

-- Pack the vertex data and transfer it to the GPU:
gl.buffer_sub_data('array', 0, gl.pack('float', vertices))
gl.unbind_buffer('array')
gl.unbind_vertex_array()


glfw.set_key_callback(window, 
function (window, key, scancode, action)
   if (key == 'escape' or key == 'q') and action == 'press' then
      glfw.set_window_should_close(window, true)
   end
end)

-- Event/render loop:
while not glfw.window_should_close(window) do
   glfw.wait_events()

   gl.clear_color(1.0, 1.0, 1.0, 1.0)
   gl.clear('color')

   gl.use_program(prog)
   gl.uniformf(gl.get_uniform_location(prog, "textColor"), 0.0, 0.0, 0.0) -- black
   gl.active_texture(0)
   gl.bind_vertex_array(vao)
   gl.bind_texture('2d', texture)
   gl.bind_buffer('array', vbo)
   gl.draw_arrays('triangles', 0, 6)
   gl.unbind_buffer('array')
   gl.unbind_vertex_array()
   gl.unbind_texture('2d')

   glfw.swap_buffers(window)
end


