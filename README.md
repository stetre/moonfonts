## MoonFonts: Bitmap Fonts for Lua

MoonFonts is a Lua binding library for Sean Barrett's [Bitmap fonts for C/C++ 3D programmers](http://nothings.org/stb/font).

It runs on GNU/Linux and on Windows (MSYS2/MinGW) and requires
[Lua](http://www.lua.org/) (>=5.3).

_Author:_ _[Stefano Trettel](https://www.linkedin.com/in/stetre)_

[![Lua logo](./doc/powered-by-lua.gif)](http://www.lua.org/)

#### License

MIT/X11 license (same as Lua). See [LICENSE](./LICENSE).

#### Documentation

See the [Reference Manual](https://stetre.github.io/moonfonts/doc/index.html).

#### Getting and installing

Setup the build environment as described [here](https://github.com/stetre/moonlibs), then:

```sh
$ git clone https://github.com/stetre/moonfonts
$ cd moonfonts
moonfonts$ make
moonfonts$ sudo make install
```

Compiling the code may take a few minutes because it includes all the fonts available
at http://nothings.org/stb/font.

#### Example

The example below loads a font and then prints the font data for the characters composing the string of text "Hello, World!".

Other examples can be found in the **examples/** directory contained in the release package.

```lua
-- MoonFonts example: hello.lua
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
```

The script can be executed at the shell prompt with the standard Lua interpreter:

```shell
$ lua hello.lua
```

#### See also

* [MoonLibs - Graphics and Audio Lua Libraries](https://github.com/stetre/moonlibs).
