#!/usr/bin/env lua
-- MoonFonts example: hello.lua
--
-- Loads a font and prints the font data for the characters composing the
-- text "Hello, World!".

fonts = require('moonfonts')

fontname = 'consolas_24_latin1'
text = "Hello, World!"

-- Load the font:
font = fonts.load(fontname)
assert(font, "font not available")

-- Print some font information:
print("Font name: "..font.name)
print("No. of characters: "..font.num_chars)
print("Size of pixels data: "..#font.pixels.." (".. font.width.."x"..font.height..")")
assert(#font.pixels == font.width*font.height)
print("Line spacing: ".. font.line_spacing)

-- Given a text string, print the font data for the characters it is composed of:
print("Font data for the characters composing the text '".. text .."':")

for _, codepoint in utf8.codes(text) do
   local c = font.fontchar[codepoint]
   assert(codepoint == c.codepoint)
   print(string.format(
      "'%s' (%u): x0=%d, x1=%d, y0=%d, y1=%d s0=%.2f s1=%.2f, t0=%.2f, t1=%.2f advance=%d", 
      utf8.char(codepoint), codepoint, c.x0, c.x1, c.y0, c.y1, c.s0, c.s1, c.t0, c.t1, c.advance))
end

