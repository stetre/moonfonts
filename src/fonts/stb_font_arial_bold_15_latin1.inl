// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_bold_15_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_bold_15_latin1'.
//
/* // Example usage:

static stb_fontchar fontdata[STB_SOMEFONT_NUM_CHARS];

static void init(void)
{
    // optionally replace both STB_SOMEFONT_BITMAP_HEIGHT with STB_SOMEFONT_BITMAP_HEIGHT_POW2
    static unsigned char fontpixels[STB_SOMEFONT_BITMAP_HEIGHT][STB_SOMEFONT_BITMAP_WIDTH];
    STB_SOMEFONT_CREATE(fontdata, fontpixels, STB_SOMEFONT_BITMAP_HEIGHT);
    ... create texture ...
    // for best results rendering 1:1 pixels texels, use nearest-neighbor sampling
    // if allowed to scale up, use bilerp
}

// This function positions characters on integer coordinates, and assumes 1:1 texels to pixels
// Appropriate if nearest-neighbor sampling is used
static void draw_string_integer(int x, int y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0, cd->t0); glVertex2i(x + cd->x0, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t0); glVertex2i(x + cd->x1, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t1); glVertex2i(x + cd->x1, y + cd->y1);
        glTexCoord2f(cd->s0, cd->t1); glVertex2i(x + cd->x0, y + cd->y1);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance_int;
    }
    glEnd();
}

// This function positions characters on float coordinates, and doesn't require 1:1 texels to pixels
// Appropriate if bilinear filtering is used
static void draw_string_float(float x, float y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0f, cd->t0f); glVertex2f(x + cd->x0f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t0f); glVertex2f(x + cd->x1f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t1f); glVertex2f(x + cd->x1f, y + cd->y1f);
        glTexCoord2f(cd->s0f, cd->t1f); glVertex2f(x + cd->x0f, y + cd->y1f);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance;
    }
    glEnd();
}
*/

#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF
typedef struct
{
    // coordinates if using integer positioning
    float s0,t0,s1,t1;
    signed short x0,y0,x1,y1;
    int   advance_int;
    // coordinates if using floating positioning
    float s0f,t0f,s1f,t1f;
    float x0f,y0f,x1f,y1f;
    float advance;
} stb_fontchar;
#endif

#define STB_FONT_arial_bold_15_latin1_BITMAP_WIDTH         256
#define STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT         82
#define STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_arial_bold_15_latin1_FIRST_CHAR            32
#define STB_FONT_arial_bold_15_latin1_NUM_CHARS            224

#define STB_FONT_arial_bold_15_latin1_LINE_SPACING          10

static unsigned int stb__arial_bold_15_latin1_pixels[]={
    0x26200660,0x00002600,0x00001310,0x540b71d5,0x9803c81e,0xe81ccccc,
    0x02d41e9a,0x710395b7,0x2ccb817b,0x66640198,0xca881e40,0x2e4c01bd,
    0x40000988,0x01ccb83d,0x0988004c,0xb0cc16e4,0x200fea07,0x07f200ed,
    0x9807ff10,0x0ffa804f,0x205b8ea8,0x405f883e,0x2ffffffb,0x441e9ae8,
    0x5dad882f,0xc8dfbf90,0x01fb83fe,0x0bf03bfe,0xbf979dfb,0xed82ffc0,
    0x407fdc00,0x3fffa24e,0x01fb00ef,0x1ff90bd0,0x209d1fb8,0x00d8803c,
    0x566403c8,0x202cc00d,0x0004cad8,0x405f880c,0x0deafffe,0xd81cdcb8,
    0x039b9706,0xf30326df,0x5f80f207,0x6c417600,0xb104f885,0x3c9d8801,
    0x433f24e8,0x00b604fc,0x07ea01b3,0x65c2752e,0x443c81cd,0x5910f22c,
    0x4039b970,0x3c81cdcb,0x21fd9644,0x743fb0fe,0xdfbdf10f,0xe8fffe85,
    0x7ffff444,0xd10fd43f,0xc87fffff,0x07f300ef,0x82fc0793,0x7f55b65f,
    0x441f9fec,0x0079303f,0x453a0793,0x320540ff,0x644ccccc,0x544ccccc,
    0x49d3c82f,0x3fffffe8,0xf93e637c,0xfd127cc6,0xe887ffff,0x7c3fffff,
    0x3faa7cc6,0x89fd4bf1,0x2f7fe25f,0x3ffee0fe,0x8efec4e8,0x8fe61ffa,
    0x3ff51dfd,0x20fffbe2,0x1ffd83f9,0xf97e0bf0,0x5fd8cf98,0xb03f987b,
    0xffd803ff,0x0df34e81,0x3fffffe0,0x3ffffe0f,0x10fe60ff,0xdfd93adf,
    0x37c3ff51,0x4c6f93e6,0x5477f64f,0x477f61ff,0x31be1ffa,0x2fbb7c9f,
    0x222fbb7c,0xd50bee7f,0x7fc49d1f,0x9f127e40,0x9f903fe2,0x0ffe63ee,
    0xfff887f3,0x57e0bf04,0x9fccd969,0x207f664c,0x2204fff8,0x51a84fff,
    0x01be00bf,0x0f7c01be,0x7c53adf1,0xdf27e40f,0x31be4f98,0x903fe29f,
    0x903fe29f,0x3e637c9f,0x21f67f24,0x7c47d9fc,0x3ea13e66,0x217e64e8,
    0xf9afc5f9,0xbf55f985,0x87f31ba2,0xf80febfb,0x756ebf05,0x90ec7ea5,
    0x3afee09f,0xfd7f700f,0x543fc401,0x37c037c0,0x3e25fa80,0x217e69d6,
    0xf31be5f9,0x53e637c9,0x35f985f9,0x7cbf30bf,0x9f327cc6,0x9f9f309f,
    0x0bea7f88,0xfa93a3ea,0xa7c6f985,0x16f985fa,0x98db1dfd,0x7e47f43f,
    0x2bf05f83,0x47ec9f5b,0x407f4c7a,0xd03fc8fe,0x1a87f91f,0x45fa87fa,
    0x44eeeeff,0x84eeeeff,0x75be22ef,0xdf30bf54,0xf93e637c,0x5faa7cc6,
    0x0bf56f98,0x2637cdf3,0x80fff44f,0x7fc41ffe,0xfa80febd,0x21fe64e8,
    0x4cfe25fb,0x645fb87f,0x1fcc1fff,0x21be2bf3,0x5e2bf05f,0xfbffbafd,
    0x7cc2f982,0xbf30df15,0x549d1be2,0x40ffddff,0x44eeeeff,0x44eeeeff,
    0xeb7c43f9,0xbf70ff34,0xf93ea3fc,0x7f9a7d47,0x0ff35fb8,0x2a3fcbf7,
    0x7037dc4f,0xfbdf10df,0x3a3ea05d,0xfd117f44,0x5fd0fd47,0x7d41ff44,
    0xf91fcc1f,0xf83ffddd,0x2fe5f885,0x9dfcbec8,0x321fcc18,0x41ffeeef,
    0x1ffeeefc,0xbffd313a,0xdf00df05,0xf885f500,0x117f49d6,0x707f47fd,
    0xf707f47f,0xfd117f47,0xfd117f47,0x7f707f47,0x3ee03fb8,0x8015f883,
    0x7d44e8fa,0x646ffcef,0x7e77fd46,0x7d53226f,0xdff1fcc3,0x5f89fddd,
    0x0fe65f88,0x27c43f98,0x3fbbbbfe,0x77777fc4,0x32213a4f,0xf00df01d,
    0x883f500d,0x7fd49d6f,0x7e46ffce,0x320ffdce,0x20ffdcef,0x6ffceffa,
    0x7fe77fd4,0x7ee77e46,0x01ffb30f,0xf101ffb3,0x3a3ea00b,0x4fffe984,
    0xffe982f8,0xfedfd84f,0x7d4ffb20,0xff07fc44,0x313fea1d,0xfb957bdf,
    0x7d57fe07,0xfa87fc44,0x4e87fc44,0xff03d888,0x7c199999,0x90cccccf,
    0xd6f881ff,0x4fffe989,0x05ffff90,0x305ffff9,0x2609fffd,0xf904fffe,
    0x6f4c5fff,0x403bd301,0x7193003c,0x0b300805,0x66dc4010,0xfd977641,
    0x3ba3fc81,0x1019d50e,0x0157bb73,0x81fdaecc,0x903fb3fc,0x3720f67f,
    0x3ffffe03,0x3fffe1ff,0x05b91fff,0x080f6df1,0x11001100,0x00800200,
    0x00000110,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x31000000,0x540a0001,0xd300c405,0x00140d71,
    0x33620000,0x2e3aa04a,0x16b36205,0x27a60350,0x4dadc0ea,0xd1039b70,
    0x3b603d35,0x03517300,0xdcb813a2,0x807ae01c,0x2e3aa05d,0x07372e05,
    0xfd07f200,0xfa83f60b,0x4e83401f,0xe9813e20,0x19f506b8,0xcb809b30,
    0xba85a8ad,0x23aa02db,0x36f2605b,0x4c16aa03,0xadc0ea9e,0xffdfc84d,
    0x0f4d7440,0xce836f64,0x01d700fe,0x7fffffd1,0x5f102ec0,0x216e3aa0,
    0x3fffffe8,0x706ffe44,0x0eced41d,0x975b0762,0x0fd41d40,0x21e40970,
    0x3fff62c8,0x882dd40f,0x2ffffffe,0x93007930,0x32226407,0x6406ea82,
    0xcccccc83,0x02fbb7c4,0x04061300,0xbfb00880,0x1807fea3,0xb0000440,
    0x87fea3bf,0x224fbbfd,0x33333322,0x41e41e44,0x6d84ffc8,0x1e4c1cb8,
    0xf14f98df,0x1503b5b7,0x7dc73f60,0x03ffb01f,0xff01ffd8,0x7ec27c49,
    0xf0df101f,0x41ffffff,0x5f81fd5f,0x325f87f2,0x33ff621f,0x23f92fc0,
    0x27e40ff8,0x5033ff62,0xea81bffd,0x3fe20dff,0x5f8a7e40,0x3fe6a86a,
    0xf10fffff,0xfd86f88d,0x42fc3ffb,0xf0ff46fa,0xbf14f98d,0xbffd501d,
    0xe887fc41,0xfff884fe,0x13ffe204,0x4f887ffc,0x8827ffc4,0x4406f86f,
    0x5f85f8df,0x325f87f2,0x3f33fa1f,0x23f92fc7,0x45f985f9,0x227fccfe,
    0x223fcadf,0x263fcadf,0xf55f985f,0x0df3dc07,0x37c46f88,0x86b273e2,
    0x27fb04f8,0x2637c4fb,0x833ff64f,0x23fcadf8,0xf3bd15fa,0x1fd7f70d,
    0x03fafee0,0x27c57ffe,0x203fafee,0x406f86f8,0xf85fd5f8,0x25f87f25,
    0x5cbf31fc,0x1fc97e2f,0x4df10bf5,0x10bee5f9,0x93109f93,0x4c2fd49f,
    0x1dcbf16f,0x101be1f7,0x546f88df,0x3f982bbf,0x1ff3ff10,0x227cc6f8,
    0x4c41fffa,0x6d3ea4fc,0x1fd0df35,0x23fa07f9,0xfddf83fc,0x47f44f8a,
    0x86f883fc,0x24eeeeff,0x41ff35f8,0x5f87f25f,0x31fd47f2,0x3f92fc9f,
    0xbf309fe6,0x49f31fd4,0x644feffc,0x3e64feff,0x3f65fb87,0x43f24fbc,
    0x24eeeeff,0x237c46f8,0x44776df9,0x3ffea03f,0x27cc6f82,0xff927dec,
    0xedef89fd,0x5f98bf70,0x2bf30df1,0xf8df86f8,0x57e64f9f,0x86f886f8,
    0x24eeeeff,0xf93ea5f8,0x26f87f66,0x5cbf31fd,0x1fd9be2f,0x7ee7cbfa,
    0x2fb97e63,0xa93e69f5,0xfe89f34f,0xc88ffa22,0x47f60dff,0x24eeeeff,
    0x437c46f8,0x7c4fcefe,0xf82fec04,0x9eaa7d47,0x29f55e8d,0x077ec4f9,
    0xeefc87fd,0x77e41ffe,0xafc1ffee,0x3f24fdfb,0x441ffeee,0x4406f86f,
    0x23fbc9df,0x21ffbafe,0x21ffbafe,0x747fbcfe,0x2a1ffbaf,0x86ffddff,
    0x2a7fbcfe,0x2a4fd9df,0x544fd9df,0x86ffceff,0x8fec1dc8,0x237c406f,
    0xffe886f8,0x2e036c0d,0x5c1fd03f,0x3f3bbe3f,0x9fb3bf52,0xffbdffc8,
    0xeeeeff86,0x7777fc4f,0xfd2fc4fe,0x7777fc9f,0x437c44fe,0x4efc406f,
    0x3fea0dfe,0x3fea1fcd,0x3f621fcd,0x6ffd41cf,0x7ff4c1fc,0x3620efef,
    0x7fec1cff,0x5ffec6fb,0xfffe986f,0xa87b1104,0xf880df0c,0x1d837c46,
    0xfb803ea0,0xfb9df903,0x1fff541f,0x99befff6,0x84fffcbf,0x87fc44fa,
    0x07fc44fa,0xaa7fccbf,0x107fc44f,0x999ff0df,0x10040199,0x20000100,
    0x05b82000,0x00100100,0x01ee4008,0x666667fc,0x6f88df10,0x407d00d0,
    0x3ff203fb,0x201d02ff,0xd8020c00,0xfb3fc81f,0x2fc7f903,0x40fed3f2,
    0x21be23fc,0x1fffffff,0x00000000,0x00000000,0x00000000,0xfffff000,
    0x11be23ff,0x500510df,0x401fdc09,0x00014008,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x17620000,
    0x39303d50,0x80bd3015,0x09d502ea,0x2ae172d5,0x103d7038,0x10588397,
    0x2a04983b,0x2b701bdc,0x261ecc5b,0x02f6e205,0x76c09b10,0xb10e5401,
    0x1e404983,0x20b606e2,0x641e9ae8,0x201ca803,0x300addb8,0x260cb817,
    0xd80fa01f,0x3fce884f,0x5fc413a0,0x45cb542f,0x3604fdda,0x646bca85,
    0x6c1fe982,0xfffffb01,0xf13abb07,0xd01ec7d7,0xeb80bf9f,0x80d9d900,
    0x83fd32fc,0xf71fc01d,0x884d8dff,0x3e21e9ae,0x37ffec05,0x7654df4c,
    0xb2fffec0,0x0600883f,0x440fcab8,0x100c0111,0x11000223,0x4f980c00,
    0x0fc441a2,0x477f20b5,0x9f310ff9,0x6c7d49f3,0x3e201f35,0x00880f95,
    0x3f200c26,0x2d43f112,0x76f87e20,0x40035c5f,0x53e205f8,0x2aba61fc,
    0xf10e98aa,0x8fecbf69,0x64c2dfc9,0x6f5c42df,0x6fff545f,0x06fff540,
    0x930b7f26,0xffea85bf,0x3f92fc0d,0x0ec3e662,0xf00e87e0,0x3fa1981f,
    0xf31fffff,0xd00f69b1,0x3620bf9f,0x7ec40cff,0x0bf200cf,0x2a00743f,
    0x27cd3e67,0xffd881f3,0x3ef7e20c,0xc87f202d,0x776cae9a,0xda7d47ee,
    0x5fb7dd0f,0x917edf74,0x223ffbbf,0x223fcadf,0x743fcadf,0x3ba2fdbe,
    0x5bf12fdb,0x325f87f9,0x26bbf51f,0x0971f805,0x99989be6,0x3f93f710,
    0x0f99fee8,0xd02ffdc0,0xfe8ff99f,0x3f207fcc,0x804b8fc2,0x7c4fea5c,
    0x33fa17c5,0x33fe27fc,0x3ff80feb,0xb54f4c74,0x3ee7f358,0x44fe6f95,
    0x3e27f35f,0x1fe4bf15,0x2213f262,0x4fe64fc9,0x227f35f8,0x27e4c45f,
    0x221fc97e,0x181c87a1,0x217711d1,0x3fff25f9,0x08365b24,0x3205d4fa,
    0x21b8efef,0x4cbee5f9,0x640bee5f,0x20e88c2f,0x3ea3e81c,0x24d8bf13,
    0x44bee5f9,0x320bee7f,0x77cde1ee,0x6ff4d10e,0x3eef76ff,0xff76ffff,
    0x8feadfff,0x3bff24f9,0x7f7fe44f,0x3ffffee4,0xdfffff76,0x227f7fe4,
    0x5407f25f,0x3c80bf24,0x33fcb99d,0x3ff69f95,0xf301effe,0x7c4d9d71,
    0x547fdf75,0x7d53e63f,0x32093e63,0x7e47902f,0x9f50fc42,0x54d713e6,
    0x7c53e63f,0x7c413e65,0x9ed66765,0xafd65c4a,0x3047f36a,0x4bf1047f,
    0x269f51fb,0x7cd3ea4f,0x2608fe64,0x34fa823f,0x3f66f89f,0x3b6e1d01,
    0x4d88d102,0x29f50ffa,0x0cdfcdfb,0x3e73a7d0,0x7fec9f31,0x2fb97e60,
    0xc97dcbf3,0xd103fb1f,0x1ea16ed4,0x30feabf3,0xfb97e61f,0x97dcff12,
    0x54bf12c9,0x5b1f35ad,0x99fd46a2,0x8ff2bbe3,0x363fcaef,0x3ea7fbcf,
    0x3ea4fd9d,0x77c4fd9d,0x2bbe3fca,0xb3bf53fc,0xfbafe89f,0x9f13b81f,
    0xe88b60bf,0x6e77fc44,0xf33f13ff,0xcd87d403,0x2effe0f9,0x3fa0efff,
    0x67f47fbc,0x33be67fb,0xf12d80ff,0xe85c8bf9,0x2f80febf,0x89fef3fa,
    0x7c7ebdff,0x6e41fdbe,0xef88f620,0x21d90feb,0x74c4ffe9,0x7fdc44ff,
    0x7dffec1c,0x37dffec6,0xd313ffa6,0xbffd89ff,0x66ffd46f,0x5513441f,
    0xfe8b309d,0x7ffecc5e,0x1ea3ea2d,0x2f7d47d0,0x32bbff26,0x33ff620e,
    0x0e7fec41,0x2607bfae,0xd13aaa25,0x05df9107,0xcffd88f6,0x3bf73e21,
    0x81f7ecc2,0xa83eeeeb,0x03f60cfe,0x40000801,0x01000800,0x04002008,
    0x40440660,0x004ccc09,0x00c46201,0x40188151,0x00000040,0x11009802,
    0x22000098,0x10020000,0x02002200,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x2aaaa279,
    0x22017501,0x3c80addb,0x372a1644,0x4000100b,0xcdb80ac9,0x39300001,
    0x00039970,0x81bcccc8,0x4032e0cb,0xccccccc8,0x20564c2c,0x03c982ea,
    0x02f33332,0xaaa887e8,0x909702aa,0x32037999,0x9907ec03,0x6f899999,
    0xa89ffff5,0x74c0fffe,0x7c0eca9b,0xff927cc6,0x46c83ffd,0x42efccf8,
    0x7e47fefc,0x7ecc1ffe,0x3ee02fbc,0x3ffffa22,0x5f7e440e,0x7ffffc2f,
    0xf89fdc5f,0x3ffbf206,0x3f24ffff,0x413a0fff,0xfff01ffd,0x3201ffff,
    0xfffffa86,0xff87fa86,0x6f85ffff,0xfff07640,0xb7c1ffff,0x740999fc,
    0x3a63e88f,0x0e98bb89,0x7c9f31be,0x8df17ea6,0x0febdff8,0xf8beabf1,
    0xbfe89f15,0x3ee02ffc,0x7e433f22,0x7fde7ec4,0x5fd337c2,0x205f97f8,
    0x206f8ef8,0x0c9f55f8,0xf04fff88,0x5303fc8f,0x5f933310,0x6f87ff88,
    0xdff0bfa6,0x0df007bd,0x067f6df0,0x564057e6,0x4776cce8,0xfd27cc6f,
    0xffd86617,0x7dcff10f,0xf17d57e2,0xfb2fc40b,0x7e67ecc5,0x0a81ff12,
    0x42fd97e2,0x2e2fcc6f,0x3ee06fbf,0x26206f8a,0x437cbf10,0xf80febfb,
    0x6e817dc7,0xeed85e80,0x2fcc6f87,0x17ffbbfe,0x2df00df0,0x2a0effff,
    0x3a0cfeef,0xf2cc26a8,0x3ea4f98d,0x7fdc2dff,0x7ccdf10c,0xb93ffe64,
    0x3fa84cff,0xcbfe8bee,0x00df32ff,0x517dc7f5,0x337c55ff,0x205bfff7,
    0xdddff17f,0xf8bf201d,0x3fc8fe86,0x4feeeff8,0xfb807f90,0x43f4fd40,
    0x37c6f86f,0xeff803fa,0x477c4eee,0x2a4fa9cc,0x5e3fbaff,0x1be6885a,
    0xffc889f3,0x3e237c4f,0xdfc8bea7,0xffffd1ef,0x97ecbf10,0x54bf64f8,
    0x25f8805f,0x3bffa2fd,0xfffc9fe5,0x13fb87ff,0x01ddddff,0x4c6f8bf9,
    0xff0df15f,0xd83dfddd,0x22fc404f,0xdf0fd4f8,0x6c6f8ff0,0x7fc1d91f,
    0x37c4eeee,0xf97e67f8,0x223e2766,0x2a3fc956,0x74c1314f,0xff11be0f,
    0x3e61fd7b,0x0fe49f13,0x5ffbbfd0,0x12fb8fea,0xfd8150ff,0x37c2ffcb,
    0xfa989be6,0xfffe819d,0x5fb806ff,0x777e46f8,0x23fc1ffe,0x317e66f9,
    0xcfc83f70,0x1be0cffc,0xaaff8df1,0xf83f67fc,0x2c8ef806,0x3e6f89be,
    0x977556a5,0xfb83fa2d,0x1fe8bf33,0xfbdf11be,0xf89fd45d,0xd700dd15,
    0x93e25f75,0xa87fa2fd,0x677ecc5f,0x3ee37c2f,0x3fffff24,0x77777d47,
    0x82fd406f,0x7777fc6f,0x223fc4fe,0xfb93e27f,0x7fec3e42,0x1be0ffff,
    0xffff89f7,0x1be3c1ef,0x6dff5be0,0x7e67ec3f,0x7b106e42,0xffdcefc8,
    0x3f737f60,0xf8857f46,0x36fba015,0x99ddfb2f,0x3f915449,0x17fe67f4,
    0x1ffbbff5,0x3e17dc20,0x20ffeccf,0x419dfa98,0x33fe21fe,0xdff13ccc,
    0xf537c9dd,0x3e0ff889,0x44fecccf,0xe85feefc,0xff87e806,0x7c0ffdcc,
    0x42c8099f,0x0cccccff,0x27fecdbe,0xb81f7dc4,0xf903eeee,0xec885fff,
    0x7fe40dff,0xd980bf11,0x3b3ae3ef,0x37fa0fff,0x77ecc6fd,0x7ff4c2fb,
    0x42fb802d,0x00deffff,0x8df309f3,0x5ffffff8,0x4bfffff7,0x3207f66f,
    0x3ffffe3f,0x07b7304f,0x21fa017e,0x80deffff,0xfff8006f,0x0401ffff,
    0x00110000,0x10020022,0x00200790,0x676dc404,0x00200100,0x00003930,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xcc800000,
    0x0f22cccc,0x4790bd10,0x20c9803c,0x53d33dc8,0x7d93e61d,0x32e206e4,
    0x43517301,0xc83fa1fd,0x07916444,0x66666540,0xcc98994c,0x99999910,
    0x3260e5c7,0x1cb87933,0x262cb897,0x91032e2c,0x89901327,0x713322c8,
    0x66664199,0xccccc82c,0xfff8001a,0x0bf14fff,0x37c4ece8,0x1ff880bf,
    0x4f4cf7f2,0x6c9f30ea,0xff71f447,0xff9d0dfd,0x5f89fd41,0x453e63fc,
    0x6c1fc46f,0xf7ffffff,0xf317fccf,0x54bfffff,0xe88ff46f,0x7ecdf31f,
    0x2fb9bfe1,0x27f70ff2,0x127fc07f,0xf07ffc9f,0x7fffc3ff,0x7fffc4ff,
    0x7ec41fff,0x881fe0cf,0x0188c05f,0xfff702fc,0xf3003ec3,0xf0443ec9,
    0x00217dcd,0xff0beedf,0x8df14f98,0x07f403f8,0x01ffc5fe,0x7fb07fe6,
    0x2df513ee,0x54fee1fe,0x41fb0fff,0xf87f46f9,0x887ffc07,0x4cbffe4f,
    0x99be1fff,0xf71fe0ff,0x7fccfe8b,0x75f881fe,0xdf0df0bf,0xf1ff577c,
    0x3ffa3f99,0x3e637c2f,0x99be1fa4,0xacf8fea0,0x6cfe44fe,0xa7cc7f87,
    0xdf9956f8,0xf03fa099,0x8807fd1f,0x9ff883fe,0xfefd80ff,0xcfcafcc4,
    0x1fd0df2f,0x407f9be2,0x49f15fff,0xfbf74fdf,0x87f637c3,0xf32fcc7f,
    0xeff97dcb,0x2b7e25ee,0xdf0df05f,0x87f567fc,0x3faa3f90,0x3e637c0a,
    0x41be1fe5,0x33fe0efa,0x33e60ffa,0xeeeff84f,0x32df14fe,0xd07fffff,
    0xffeff81f,0x5027ec00,0x3e205fff,0xdd6f80ff,0x709f39f3,0x7f8fee7f,
    0x457eefc0,0x6df77e4f,0x27fe1fce,0x3fe0ffba,0x2a2feccc,0x7fd3e63f,
    0x3be27fff,0x3e1be07f,0x41fc9fe6,0x7c1fa1fc,0x7e67fcc6,0xef986f87,
    0x83f93fc0,0xeff81ffe,0xdf14feee,0x0673ea62,0x3ffe07f4,0x17f205fd,
    0xf8817f60,0x9f3fb06f,0x220febbe,0x3fc1fb6f,0x27fe37e0,0x27ef7e4f,
    0x3fe1fccf,0x7fc2ffff,0x7cc1dfff,0x03fcbee5,0x205ffff1,0x9be6f86f,
    0xd0fe41fb,0xbf31be0f,0x0df0fbff,0x5cdf01f9,0xf837dc1f,0x6f8a7cc7,
    0x3fa01fc4,0x2fe9ffc0,0xb800efa8,0x3fff603f,0x92fdfb84,0x3fa03fbf,
    0x203fc5f9,0x49fbf75f,0xcafdf9df,0x26abfe1f,0x3ff37f80,0x4ff79fd0,
    0x27be207f,0xdf0df06f,0xc83f72fc,0x37c1fa1f,0x1be013e6,0xf72fc12e,
    0xff03fb83,0x8df14f98,0x07f402c8,0x20ffa9fe,0xf7001ff9,0x3e3bea07,
    0x87ffcc1f,0x3ee07ffa,0x203fc2fe,0xf93ffa5f,0x3f91fff5,0x53fc037c,
    0xffd881ff,0xf881fe1c,0x0df07f75,0x3f72fcdf,0x41fa1fc8,0x4027cc6f,
    0xf80ec86f,0x7ecc7ee5,0xf98ff00f,0x3baedf14,0x1fd06eee,0xd2fec7f8,
    0x099999df,0x3fe20fee,0xdff0df51,0xf102ffc4,0xccff81ff,0xf997e3cc,
    0xb7ed7e4f,0x201be1fc,0x002fec7f,0x25f881fe,0x7c37c0fe,0x41fb97e6,
    0x7c1fa1fc,0x7c016446,0x5f80fd86,0x0ef4c7ee,0x14f98ff0,0x3ffff2df,
    0xf81fd07f,0xfe97fc47,0x707fffff,0xd89f907f,0x3a27f44f,0x42fec03f,
    0x25ffffff,0xbf27e45f,0xf0fe53ee,0xf88ff00d,0x0000001f,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00100000,0x00000000,0x26666200,0xf0098099,0x0000fe4b,0x80000000,
    0x09800108,0xf715c570,0x3981ffff,0xfd83f235,0xc8531710,0x8fecdb0f,
    0x2abf51fb,0x4444445f,0x22226dc0,0x06c40888,0xfd71026c,0x7fecc5db,
    0xc985ffdd,0x7fe442df,0x6fff540d,0x3277f5c0,0x413e60c0,0x7c47f25f,
    0xffd9ffbc,0x27f567c2,0x263fdbf1,0x205dbcbe,0x19f51fc9,0xfd10bf00,
    0x5dccbf75,0x56740ffd,0x3e27f50f,0x917ceec5,0x7fc7ee1d,0xfafd8fb3,
    0x3fffea0f,0x5f5931ff,0x3fffffea,0xfa83fd31,0xf79f901f,0x7e57741f,
    0x7745fabf,0x2ff62fdb,0x2b7e24fb,0x273e23fc,0x20c031fc,0x64bf02c8,
    0xf77ff11f,0xff8ff79f,0xff10ffac,0x7fffccbb,0xdffda84f,0x03bffd30,
    0xffe882fc,0xc83ff105,0xbb744f8f,0x7e5fcc1f,0xff37f100,0xfff113eb,
    0xccccc985,0x25fd910c,0x1fdcccc9,0xfee83f11,0xfd95f885,0x26fb8889,
    0x7c4fe67c,0x40d4bf15,0x3e24fc98,0x2300c1ce,0x44ccccca,0x7c47f25f,
    0x7c7e9fe5,0x3fc47f27,0x23faafc4,0x300befe9,0x3261dff9,0x640ccefc,
    0x2fe882ff,0x207e67c4,0xfb06e9fb,0x5ef409f3,0xc82fafbf,0x1111107f,
    0x017c6e41,0x261f83f5,0x7d40fcaf,0x2e5f8dbb,0xfffffeff,0xfffff71f,
    0xf900fead,0xffb89fdf,0xc8c031ef,0x7c7fffff,0x2fc47f66,0x9be3ecdf,
    0x10df11fb,0xfa93e27f,0xffb8802f,0xffffff71,0x17f6fdc3,0x4fec0ff6,
    0x1fefc43f,0x007de7c4,0xfdf3bdf7,0xa87fff10,0x51ffffff,0x7d407dbf,
    0x22fb0fc1,0x4777cc4f,0x26bf32fa,0x47f3026f,0x23b97e20,0x989f34fa,
    0x4034fc98,0x33333311,0x1ffbafe8,0xfb37c9f1,0x447ee5f8,0xfd9ff05f,
    0x1cffea85,0x116ffecc,0xe833df33,0x7fe4bd15,0x2fe21ccc,0x07fec0fb,
    0xd91fc76c,0xff9ffcc1,0x1fe9fe85,0x2eeeeee6,0x40b98000,0x83a8ae09,
    0x267ebcfe,0xabffd9df,0x7e577c6f,0x93ef3f63,0x24fd9dfa,0x33fb9dfa,
    0x413e60c0,0x11fcdffa,0x8fb37c9f,0x7c47ee5f,0xfffefa85,0x23ffb306,
    0x7c01cffa,0x7ec08105,0x9cc2ffff,0xb82fd41b,0x207e4398,0xb85fb1ff,
    0x000df33f,0x20000000,0x41cffde8,0xffdaeffc,0x27ff4c1e,0xb037ff22,
    0xeb8df7ff,0x418064ef,0x880403e9,0x47d9be4f,0x7c47ee5f,0x00cc2505,
    0x005cc322,0x000003c8,0x00000000,0x00000000,0x0c000000,0x01002000,
    0x01000800,0x33333333,0x00000000,0x00000000,0x17b00000,0x5555545d,
    0x777711aa,0x00003777,0x00000000,0x00000000,0x00000000,0x00000000,
    0x32e22ca8,0x93072e21,0x269d0d05,0x2b22002c,0xdc8f22c8,0x22e99361,
    0xda742aa9,0xddd12e8b,0x3225dddd,0x02cccccc,0x00000000,0x00000000,
    0x00000000,0x00000000,0x3efaa000,0x6dcd7951,0x4b6ba27a,0x57e29eaa,
    0x7bf914fa,0x277e6553,0x64457e4f,0x26b81d74,0x02fc7ffb,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x264da6c0,0x5666c84f,
    0x47dfb54b,0x3ee7f34a,0xf11ffffd,0xb8cc9f39,0x860110bd,0x00003bb9,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x2625d1b7,
    0xd03b20f9,0x236ec3fb,0x8263d10e,0x2e96c1ba,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x21bfb100,0x3bee5dea,
    0x27104c0e,0x0000000b,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x4c188000,0x00000199,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_bold_15_latin1_x[224]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,-1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
1,0,0,-1,0,0,0,0,-1,-1,0,0,0,0,1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,-1,0,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__arial_bold_15_latin1_y[224]={ 12,2,2,2,1,2,2,2,2,2,2,3,10,7,
10,2,2,2,2,2,2,2,2,2,2,2,5,5,3,4,3,2,2,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,13,2,4,2,4,2,4,2,4,2,2,
2,2,2,4,4,4,4,4,4,4,2,5,5,5,5,5,5,2,2,2,5,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,12,5,2,2,3,2,
2,2,2,2,2,5,4,7,2,0,2,2,2,2,2,5,2,6,12,2,2,5,2,2,2,5,-1,-1,-1,0,
0,0,2,2,-1,-1,-1,0,-1,-1,-1,0,2,0,-1,-1,-1,0,0,4,1,-1,-1,-1,0,-1,2,2,2,2,
2,2,2,1,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,4,2,2,2,2,2,2,2,
 };
static unsigned short stb__arial_bold_15_latin1_w[224]={ 0,3,6,8,7,12,10,3,5,4,5,8,3,5,
3,5,7,5,7,7,8,8,7,7,7,7,3,3,8,8,8,8,14,10,10,10,10,9,8,10,9,3,7,9,
7,11,9,10,9,11,10,9,8,9,10,13,9,10,8,5,5,4,8,9,4,8,8,8,8,7,5,8,8,3,
4,8,3,12,8,8,8,8,6,7,5,8,8,11,8,8,7,5,2,5,8,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,3,8,8,8,8,
2,8,5,11,5,7,8,5,11,9,5,8,5,5,4,8,9,3,4,4,5,7,12,11,12,8,10,10,10,10,
10,10,14,10,9,9,9,9,4,4,6,6,11,9,10,10,10,10,10,8,11,9,9,9,9,10,9,8,8,8,
8,8,8,8,12,8,7,7,7,7,4,4,6,6,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
 };
static unsigned short stb__arial_bold_15_latin1_h[224]={ 0,10,4,11,13,11,11,4,13,13,5,8,5,3,
2,11,11,10,10,11,10,11,11,10,11,11,7,10,8,6,8,10,13,10,10,11,10,10,10,11,10,10,11,10,
10,10,10,11,10,11,10,11,10,11,10,10,10,10,10,13,11,13,6,2,3,9,11,9,11,9,10,11,10,10,
13,10,10,8,8,9,11,11,8,9,11,8,7,7,7,10,7,13,13,13,4,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,10,13,11,8,10,
13,13,2,11,6,7,6,3,11,2,5,10,6,6,3,10,13,3,3,6,6,7,11,11,11,10,13,13,13,12,
12,12,10,13,13,13,13,12,13,13,13,12,10,12,14,14,14,13,13,7,12,14,14,14,13,13,10,11,11,11,
11,11,11,12,9,11,11,11,11,11,10,10,10,10,11,10,11,11,11,11,11,8,9,11,11,11,11,13,13,13,
 };
static unsigned short stb__arial_bold_15_latin1_s[224]={ 255,252,113,114,59,123,136,100,32,112,90,
140,96,139,145,186,192,39,156,224,208,1,10,200,65,244,191,238,122,216,131,
72,164,169,180,100,217,242,1,103,99,109,165,131,196,214,204,232,226,193,236,
40,122,30,185,171,161,150,141,153,200,137,245,165,134,40,215,31,91,23,45,
82,30,26,159,10,252,84,97,247,56,111,106,49,50,75,174,195,207,90,158,
179,252,241,104,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,255,252,23,
73,113,132,207,128,149,18,225,166,231,139,232,155,84,113,78,72,129,58,91,
120,124,240,66,183,173,91,78,191,142,185,196,88,99,120,141,210,221,231,1,
138,247,11,16,131,120,110,43,1,32,117,101,149,76,22,12,54,49,38,228,
148,214,35,26,60,223,67,10,243,1,9,44,52,67,164,19,51,17,81,205,
147,156,175,206,66,1,69,184,166,157,73,82,64, };
static unsigned short stb__arial_bold_15_latin1_t[224]={ 1,30,74,30,16,30,30,74,16,1,74,
65,74,74,74,30,30,54,42,30,42,42,42,42,42,30,65,42,65,65,65,
54,1,42,42,42,42,42,54,30,54,54,30,54,54,54,54,16,54,16,54,
42,54,42,54,54,54,54,54,1,30,1,65,73,74,65,30,65,42,65,54,
42,54,54,1,54,41,65,65,54,42,42,65,65,42,65,65,65,65,54,65,
1,1,1,74,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,
65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65,1,16,16,
42,65,42,1,1,73,42,65,65,65,74,30,73,74,54,74,74,74,54,1,
74,74,65,74,65,30,30,30,42,1,1,1,16,16,16,42,1,1,1,16,
16,1,16,16,16,42,16,1,1,1,1,1,65,16,1,1,1,16,16,42,
16,16,30,30,30,16,16,65,16,30,30,30,30,54,42,54,54,30,54,16,
30,30,16,30,65,65,30,16,16,16,1,1,1, };
static unsigned short stb__arial_bold_15_latin1_a[224]={ 60,72,102,119,119,191,155,51,
72,72,84,125,60,72,60,60,119,119,119,119,119,119,119,119,
119,119,72,72,125,125,125,131,209,155,155,155,155,143,131,167,
155,60,119,155,131,179,155,167,143,167,155,143,131,155,143,203,
143,143,131,72,60,72,125,119,72,119,131,119,131,119,72,131,
131,60,60,119,60,191,131,131,131,131,84,119,72,131,119,167,
119,119,107,84,60,84,125,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,60,72,119,119,119,119,60,119,
72,158,80,119,125,72,158,119,86,118,72,72,72,124,119,60,
72,72,78,119,179,179,179,131,155,155,155,155,155,155,215,155,
143,143,143,143,60,60,60,60,155,155,167,167,167,167,167,125,
167,155,155,155,155,143,143,131,119,119,119,119,119,119,191,119,
119,119,119,119,60,60,60,60,131,131,131,131,131,131,131,118,
131,131,131,131,131,119,131,119, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT or STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_bold_15_latin1(stb_fontchar font[STB_FONT_arial_bold_15_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT][STB_FONT_arial_bold_15_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_bold_15_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_bold_15_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_bold_15_latin1_BITMAP_WIDTH-1; ++i) {
                unsigned int value;
                if (numbits==0) bitpack = *bits++, numbits=32;
                value = bitpack & 1;
                bitpack >>= 1, --numbits;
                if (value) {
                    if (numbits < 3) bitpack = *bits++, numbits = 32;
                    data[j][i] = (bitpack & 7) * 0x20 + 0x1f;
                    bitpack >>= 3, numbits -= 3;
                } else {
                    data[j][i] = 0;
                }
            }
        }
    }

    // build font description
    if (font != 0) {
        float recip_width = 1.0f / STB_FONT_arial_bold_15_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_bold_15_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_bold_15_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__arial_bold_15_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__arial_bold_15_latin1_s[i] + stb__arial_bold_15_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__arial_bold_15_latin1_t[i] + stb__arial_bold_15_latin1_h[i]) * recip_height;
            font[i].x0 = stb__arial_bold_15_latin1_x[i];
            font[i].y0 = stb__arial_bold_15_latin1_y[i];
            font[i].x1 = stb__arial_bold_15_latin1_x[i] + stb__arial_bold_15_latin1_w[i];
            font[i].y1 = stb__arial_bold_15_latin1_y[i] + stb__arial_bold_15_latin1_h[i];
            font[i].advance_int = (stb__arial_bold_15_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__arial_bold_15_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_bold_15_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_bold_15_latin1_s[i] + stb__arial_bold_15_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_bold_15_latin1_t[i] + stb__arial_bold_15_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_bold_15_latin1_x[i] - 0.5f;
            font[i].y0f = stb__arial_bold_15_latin1_y[i] - 0.5f;
            font[i].x1f = stb__arial_bold_15_latin1_x[i] + stb__arial_bold_15_latin1_w[i] + 0.5f;
            font[i].y1f = stb__arial_bold_15_latin1_y[i] + stb__arial_bold_15_latin1_h[i] + 0.5f;
            font[i].advance = stb__arial_bold_15_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_bold_15_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_bold_15_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_bold_15_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_bold_15_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_bold_15_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_bold_15_latin1_LINE_SPACING
#endif

