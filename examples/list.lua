#!/usr/bin/env lua
-- MoonFonts example: list.lua
-- Lists the available bitmap fonts.

fonts = require('moonfonts')

avail = fonts.list()
print("Available fonts:")
for _, fontname in ipairs(avail) do 
   print(fontname)
end

