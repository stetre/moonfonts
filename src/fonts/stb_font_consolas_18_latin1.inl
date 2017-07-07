// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_18_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_18_latin1'.
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

#define STB_FONT_consolas_18_latin1_BITMAP_WIDTH         256
#define STB_FONT_consolas_18_latin1_BITMAP_HEIGHT        106
#define STB_FONT_consolas_18_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_18_latin1_FIRST_CHAR            32
#define STB_FONT_consolas_18_latin1_NUM_CHARS            224

#define STB_FONT_consolas_18_latin1_LINE_SPACING          12

static unsigned int stb__consolas_18_latin1_pixels[]={
    0x00006a35,0x21881540,0x20014c09,0x157300b8,0xdb5eeea8,0x572a03dd,
    0x022000bd,0x0d5d4060,0x8802bba8,0x03715400,0x32203c98,0x285e4c04,
    0x800dc550,0x00197028,0xb8355531,0x0991000c,0x1d826d36,0x0f6c0095,
    0xc8bf17e8,0x227ec007,0x21fdced8,0x9df6ecc9,0x27bf9039,0x5d002fec,
    0x7f4c7a80,0xeefd85ee,0x5dd700df,0x40bf3740,0x37a204f9,0xfb7d00de,
    0x5f9ba0bd,0x7ec09900,0x3bffee00,0x400fd85f,0x6c0dede8,0x21fb09b4,
    0x0db802f9,0x641b8ea0,0x20f54007,0x6c835c5d,0xb04f807f,0x1cfa8809,
    0x80db1ae0,0x413ea2fb,0x82204a9d,0x10022008,0x260804c3,0x00882201,
    0x300bf2ea,0x57ffee01,0x8801305d,0x369b0261,0x3ee17dc4,0x90000001,
    0x0d70000f,0x1fdb207e,0x1ee05f10,0x3ffffec4,0x206d8bb0,0x507d84f8,
    0x206a03ff,0x02bba829,0x2a015dd4,0x5dd402bb,0x3fbbf602,0x22981a85,
    0x0bb5fffe,0x06a05775,0x49b4d8a6,0x41db05f8,0x30eb82e9,0x321d705d,
    0x2a2eec8e,0x3a1eeeee,0x2d909b02,0x40be203f,0xf35f907b,0xdfffb102,
    0x7cc0f7dc,0xa881fa81,0x1f20fe02,0x01bfddfb,0x01bfddfb,0x01bfddfb,
    0x81bfddfb,0x87fd92fb,0x3fe7c83f,0xfd8bb5ff,0x1fc0dfee,0x9369b3e4,
    0x85f100fc,0x3745e86e,0x5bdf92f4,0x2aaa63fb,0x3a2f32fb,0x6c84cbff,
    0x80fc407f,0x1aadd07a,0x4afabbe2,0x544fdcf9,0xa82f980f,0x907f02ff,
    0x9f517dcf,0x13ea2fb8,0x227d45f7,0x893ea2fb,0xf1f6ba4f,0x7ff4f907,
    0x17dcbb5f,0xc83f89f5,0xdd26d367,0x0fdc4f80,0x21fb85f3,0xf13f22f9,
    0xadcbe209,0x85b9f8ce,0x7cc07f6c,0xfb03f100,0x21f90b75,0x6fa9b21f,
    0x0be603ee,0x1fc17b76,0xd84f8be4,0x9f613e27,0x227d84f8,0x3e67d84f,
    0x41f51f12,0x3e67c83f,0x3e2bb5ff,0x41fc7d84,0x8a6cf27c,0x2236c04f,
    0x3e21f24f,0xb0f91f24,0x5ecbe20d,0x5b8f98f9,0xb507f6c8,0x1deb805d,
    0x3617ffa2,0x23641f15,0x503f53f9,0x7caf883f,0x26f907f0,0xf31fa82f,
    0x3e63f505,0x5f31fa82,0x47ea3f50,0x1fc3f36b,0x57b223e4,0xf505f35d,
    0x83e41fc3,0xb805f34d,0x09f3ec0f,0x3e44f9f6,0xd2f88364,0x25deaf55,
    0xca83fb64,0x0e76403e,0xbd17ffd4,0xe89f31e6,0x1f705f34,0x82f98fa8,
    0x3f57c83f,0x07ea5f30,0x40fd4be6,0x303f52f9,0x9ec3ee5f,0x320fe2f9,
    0x3f55d807,0x41fc5f30,0x3e69b07c,0x2a0fd401,0xf501f9af,0x87c83f35,
    0x3a5f105d,0x0f6d76ba,0xf501fdb2,0xf003e201,0x55ee5fb7,0xf99efa86,
    0x0bd11ba2,0x1fc27cdb,0x980fbbe4,0xf301f72f,0x3e603ee5,0x5f301f72,
    0xfa8fc7e6,0x01f20fe1,0x4c07dd76,0x1f20fe2f,0x403f8a6c,0x6cde80fb,
    0x64366f40,0xf881fc47,0x57af55d2,0x07f6c81f,0x07a817c4,0xf35e8fc4,
    0xfb102b9b,0xaadfb89f,0x91fc41fe,0x2f907f0f,0x51fa81fa,0x2a3f503f,
    0xf51fa81f,0x3e23f503,0xf83ee7aa,0x5d807c83,0x43f503f5,0x4f27c83f,
    0xfb017a4d,0x700ffee0,0x35f907ff,0x3e201fd3,0xf9df17b2,0x1fdb20bd,
    0x1ea05f10,0xa93e2f30,0xf507efff,0x3bffd509,0x17d41f50,0x7cdb613e,
    0x5f30fb82,0x0be61f70,0x417cc3ee,0x533be0fb,0x6c27c5e8,0x5f35e806,
    0x427c1f70,0x926d366d,0xf104f80d,0x0ff8801f,0x0dffffc8,0x8a64be20,
    0xfb640532,0x540be203,0xd7f97b07,0x0ace883f,0x05e817a0,0x3ffffff6,
    0xd2fc2f44,0x3745e88d,0x88dd17a2,0x3a23745e,0x755ffcc5,0x2fc2f40f,
    0x46e8fe20,0x7c2f45e8,0xf526d365,0x4407ea03,0x04f8804f,0x1fa800f9,
    0x2d9000f5,0xb817c03f,0x9dffdb07,0x3530be03,0x7dc07f95,0x59f12a9c,
    0xfb8fb555,0x2a1fda9c,0x40feaadf,0x0feaadfa,0x7f556fd4,0x7556fd40,
    0xdfffb80f,0xda9cfb80,0x7556ec1f,0x2ab7ea0f,0x4e7dc0fe,0x6d361fda,
    0x3e2076c4,0x801dd105,0x0f900ee8,0x0fe0fd80,0x00fed900,0x901ba0bb,
    0x541f8809,0xc802efff,0x03f53fff,0xfffb83f5,0xdffea81e,0x1bffd500,
    0x037ffaa0,0x806fff54,0xffb801dc,0xffd981ef,0xdffea81d,0x3dfff700,
    0xe889b4d8,0x36a07ec5,0x3f6a01ff,0xd01f201f,0xf987ff9b,0x64c3dcbd,
    0x399df6ec,0x3f29df50,0x201ec02f,0x08000079,0x04f8836c,0x08002001,
    0x00800200,0x004002c8,0x08002000,0x4c26d360,0x9303f72f,0x0bc98017,
    0x32602540,0x997101cc,0x27999305,0x5101cccc,0x00006f27,0x00000018,
    0x00000000,0x00000000,0x00000000,0x53600000,0x0a21504d,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x0ae57000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x26000000,0x1002203c,
    0x00cb8099,0x5e4c0a80,0x03c98050,0xc980dc55,0x5d44050b,0x0065c0bc,
    0x32207930,0x81b8aa04,0x326000cb,0x53099103,0x20793000,0x86206e2a,
    0x800aa009,0x5415c42a,0x4c00aa21,0x0bbae04f,0x006f6f44,0x7d4001fb,
    0x2f7edf40,0x37409f30,0x3f6fa0bf,0xddfd305e,0x001fb0bf,0x37a209f3,
    0x3e6e80de,0x3001fb05,0x3b7a209f,0x8007e60d,0xf9ba04f9,0x0bf17e85,
    0x3600ffb2,0x93f3e61e,0x027d40fa,0x263a0044,0x004c3105,0x85d80026,
    0x01100660,0x04022088,0x03be2033,0x22002603,0x80986200,0x09802208,
    0x86200880,0x10026c09,0x02208801,0xda81b8ea,0x36e02d88,0xd17aae40,
    0x2a0f6207,0xddc82981,0x200aa203,0x3f1002a8,0xa94c0aa8,0x2a206a02,
    0x202a8802,0x554400fc,0x2a20aaaa,0x220aaaaa,0x20aaaaaa,0x0aaaaaa8,
    0x2aaaaaa6,0x2aaaaa60,0x2aaaa60a,0x003ea0aa,0xaa980aa2,0x0000aaaa,
    0xaae40000,0x3e000d97,0x05507c83,0x5402ffa8,0x86c802ff,0xfbb643ff,
    0xfa82fa82,0x17fd402f,0xef9805e8,0x3e61eeee,0x261eeeee,0x21eeeeef,
    0x1eeeeef9,0x3bbffbaa,0x3bffbaa1,0x3ffbaa1e,0x401fc1ee,0xdd502ffa,
    0xc883ddff,0xec880dee,0xeec880de,0x33afea0d,0xdd9101f9,0x3e41fc1b,
    0x4077ffb2,0x6ec05edd,0xf82f805e,0x0dd3647f,0x17b760bd,0x3e0bdbb0,
    0x402f9804,0x17cc02f9,0xe800be60,0xe805e805,0x3601ae05,0x05e805ed,
    0x03faabba,0x81fd55dd,0x20feaaee,0x203e8bca,0xf0feaaee,0x5ec4f907,
    0x7c40feba,0x2be207ca,0xf83dc07c,0xfa9b23fc,0x3e207ee3,0x2be207ca,
    0x803f887c,0x17cc02f9,0xf300be60,0x402f4005,0x205e805e,0x2be202f8,
    0x705e807c,0xf727c41f,0x1f727c41,0x06c827c4,0xf4f883ee,0xf980f907,
    0x17cc7d42,0x02f98fa8,0x365fc13a,0xf88fd8d9,0x5f31f504,0x0be63ea0,
    0x0be6013a,0xf9805f30,0x0017cc02,0x00bd00bd,0x205d80bd,0x402f98fa,
    0xbb0bd05e,0xbd2ec2f4,0x23f30bb0,0xf5d85e80,0x4cc0f907,0x09f36c3f,
    0xf304f9b6,0x4be6fe01,0x7de7cc6c,0x827cdb00,0x1b213e6d,0x33337e60,
    0x6666fcc4,0x6666fcc4,0x6666fcc4,0x3a017a04,0x4c05e805,0x27cdb00f,
    0x7ffc17a0,0x3fe6ffff,0x3e6fffff,0x86ffffff,0x7c5fface,0xf6ffffff,
    0xfdb8f907,0x8fe23fff,0x323f887c,0x9fc0bb07,0xff90d96d,0x7c8fe207,
    0x21f23f88,0x77cc02fa,0x3e60eeee,0x260eeeee,0x20eeeeef,0x0eeeeef9,
    0x0bd00bd0,0x09d00bd0,0x203e47f1,0xd00bd05e,0x200bd00b,0x45f17f6b,
    0x641fc05e,0x3f88be67,0x42fa83ea,0x10bea0fa,0xf99fc05f,0x06f886ca,
    0x42fa83ea,0x10bea0fa,0x497559fb,0x17cc02f9,0xf300be60,0x402f4005,
    0x805e805e,0x507d40fa,0xd82f405f,0x007ec00f,0x3f3003f6,0xfd8f63f1,
    0x9b613e00,0xfb1fcc6d,0xd89fffff,0x44ffffff,0xbd1fc06b,0xd817a0d9,
    0x44ffffff,0x4ffffffd,0x47dfff50,0x17cc02f9,0xf300be60,0x402f4005,
    0x005e805e,0xffffd87f,0x417a04ff,0x0999bef9,0x2666fbe6,0x266fbe60,
    0x8bf93a09,0x26fbe62f,0xbf0bd099,0x7fdcd7e4,0x55559f13,0x5567c4fb,
    0x01fc7daa,0x06dfa8fe,0x2b3e20bd,0x3e27daaa,0x07daaaac,0x017cc1b2,
    0x5f300be6,0x2002f980,0x805e805e,0x44d9005e,0x7daaaacf,0xfe9817a0,
    0x7f4c1fff,0x7f4c1fff,0x41d71fff,0xfe984ffa,0x39f71fff,0x7f443fb5,
    0x3f53f9ef,0x07ea3f50,0x007d47ea,0x20dfd0fe,0x503f505e,0x2a07ea3f,
    0x2607d01f,0x20aaaacf,0x0aaaacf9,0x2aaab3e6,0x2aab3e60,0x3baaa60a,
    0x3aaa60aa,0x2aa60aae,0x2200aaee,0xf503f51f,0x577554c3,0x0c00600a,
    0x80000180,0x3dfff701,0x106d8020,0x7c41b69f,0x87f00994,0x20bd06fb,
    0x369f106d,0x3209f106,0xfffff300,0x7fffcc3f,0x3ffe61ff,0x3fe61fff,
    0x3ee1ffff,0x2e2fffff,0x22ffffff,0x2ffffffb,0x106d9e40,0x7fffdc9f,
    0x000002ff,0x00000000,0x00000004,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,
    0x4c310029,0x8021a880,0x2005502a,0x80dd4c0a,0x55102618,0x0086a200,
    0x05510154,0x15405500,0x01001a88,0xa8002a88,0x1882a802,0x00550026,
    0x20ae2154,0x06f32a1a,0x37441dc0,0x45fa00f9,0xcdfee85f,0xf07fd906,
    0x647f100d,0x7e84feef,0x09f50bf1,0x0d9bfdd0,0xf501ff64,0x00f6c009,
    0x7d4fb9f9,0xfff502ef,0x0027d407,0x1ed803db,0x40bf17e8,0xed803fec,
    0xf50ffea1,0x3ff7be61,0xfa81f803,0x2a00f91f,0x644a06e3,0xd88da80c,
    0x7c4037c2,0x07e43f53,0xb101b8ea,0x19912807,0x0b6236a0,0xdb803d88,
    0x33fff600,0x4c2fd982,0x201fc9cf,0x0db803d8,0x3a806dc0,0x446d406e,
    0x3036e02d,0x01f447d3,0x3fb621fa,0x3e47900f,0x00000000,0x7f100bf0,
    0x001f71b2,0x00000000,0xa8000000,0x37405f88,0x017c43ee,0x00000000,
    0xd0000000,0x3e403647,0x3bfab7e6,0xec8ec800,0xdffec82e,0x1dffec81,
    0x41dffec8,0xfdfd705e,0x43fb9b67,0x6442e85b,0xd9100dee,0x3b2201bd,
    0xffd900de,0xbdd9103b,0x3ffb2201,0x3f51f203,0x216e03ee,0x0ba16e2e,
    0x103bffd9,0xb701bdd9,0x777445d0,0x0fccfa05,0xf9b62f40,0xefc804ea,
    0x3621fdad,0x220febab,0x20febabd,0x0febabd8,0x59fd117a,0x7d5b67f9,
    0x23f87c82,0x1feabef8,0x7f55f7c4,0x755f7c41,0x5d5ec41f,0x2fbe20fe,
    0x77441fea,0x17607dab,0x640ff3ba,0x21f23f87,0x2eaf623f,0x2fbe20fe,
    0x43e41fea,0x1f6aa23f,0x2207d2b8,0x53f85ecc,0x3f201b2f,0x3e6027c4,
    0x2017cc02,0xf917a2f9,0x96d9fc41,0x8fe1f20f,0x36c5f86d,0x3e1b62fc,
    0x362f9805,0x07e45f86,0x7f7545f3,0x201ffc81,0x1f23f87c,0x45f300fe,
    0x3e45f86d,0x807c81fc,0x3bba206c,0xa64be23f,0xf926c47b,0x7ccc0db0,
    0x80fe6603,0xd17a3f99,0x2db3f88d,0xf87c84fa,0xf1f20fe3,0x83f8f907,
    0x1fccc07c,0x4f8f907f,0x407ee5f8,0x8f93fdfc,0x1f23f87c,0x3f9980fe,
    0xf91f20fe,0x01f207f0,0x7dc003f3,0x7b8fcfe2,0x87c8ffcc,0x7ffedc6c,
    0x7ffedc3f,0x7ffedc3f,0x89f13a3f,0x7dcdb3f8,0x4fe1f20d,0x227b82f8,
    0x3e27b82f,0xfdb87b82,0x05f13fff,0x6d83f8f7,0xd9fcc1ea,0x43e46d9f,
    0x0fe1f23f,0x27ffffb7,0x647b82f8,0x0f903f87,0x009fb4e8,0xd3d6ec9f,
    0x1f25fb0b,0x222f9976,0xf88be63f,0x3f88be63,0xf889f0ae,0x24fa8db3,
    0x7f13f87c,0x41fc4f90,0x320fe27c,0x7f117cc7,0xf1f20fe2,0x824cbd07,
    0x9ffd10fb,0x323f87c8,0x8be63f87,0x907f13f8,0x03f87c8f,0xfab5c0f9,
    0x517cc04d,0x03fb3bff,0xf11f21f9,0x8fe636c7,0xdb1fcc6d,0x3a023f98,
    0x86d9fec6,0xfa83ee7c,0xd17a17a3,0x85e8bd0b,0x3e636c5e,0xd17a17a3,
    0x8043f88d,0x07fe21fa,0x71fd41f7,0xdb1fd41f,0x217a3f98,0xf507dc5e,
    0x7cc1f207,0x264cae89,0xa86eb999,0x5c41efff,0x266bf24f,0x26bf20fe,
    0x2bf23ffb,0x3f23ffb9,0xf13ffb9a,0xdd9cfb8d,0x2662db3f,0x2e73e25e,
    0x273ea3ff,0x67d40fd9,0x7d40fd99,0x640fd99c,0x23ffb9af,0x0fd99cfa,
    0x7f4ce7d4,0x3e207f60,0x45ffd9ae,0x3ffb9cf8,0x3fee73e2,0x3ee6bf23,
    0x2673ea3f,0x4e7c40fd,0x26623ffb,0x53a099fc,0xf93ffff9,0xf5019fff,
    0x2a176c03,0x440dfffe,0x23f9effe,0x3f9effe8,0x3e7bffa2,0xff90df13,
    0xfdb6cfeb,0x77f5c0df,0x7ffd43e9,0xdfff501e,0x3bffea03,0x9effe881,
    0x77ffd43f,0x3dfff501,0xfd301fd8,0xb87f75df,0x5c3e9efe,0x223e9efe,
    0x43f9effe,0x701efffa,0x5c7d3dfd,0x74ffffff,0x1889901d,0x00003b80,
    0x00200100,0x00002004,0x01000800,0x00100040,0x20008002,0x00000400,
    0x08008004,0x00800200,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x415c4000,
    0x1e88b71a,0x44026188,0xa880bcba,0x55510bcc,0x37730355,0x202bba80,
    0x028821a8,0xbb805510,0x05501a80,0x85555551,0x0555105e,0x2a0b32ea,
    0x0fe602cc,0x1a815dcc,0x705d3298,0x8005501d,0x7ecc0ab9,0x1970eeef,
    0x3fea5dd9,0x47c87d43,0xf17e82f8,0xfddfd30b,0xfeeffa8b,0xbfdddd36,
    0x6fe676c4,0xdfeefd80,0x6cdfee80,0x7d4003ea,0xa8dd9104,0x43fec80f,
    0x25eeeef9,0xeffc87f8,0x3bbfa20e,0x377fa27e,0x84fb80ef,0xf84fddfc,
    0x21ba7c83,0x2009f05e,0x221feffb,0x0afea9df,0x3fb5bdd9,0x1f447d33,
    0xa82f88f9,0x1df106e3,0x3037e618,0x88bd2f40,0xf517dc5e,0x83322509,
    0x362000fa,0x744bd503,0x2d88da83,0x811007e6,0x07f202fc,0x0fe60fb8,
    0xf517d40c,0x27c83f85,0x40be61fb,0x409f004f,0xf907d47b,0xc8fa4f89,
    0x0be23e46,0x2007e400,0x55e8006e,0xf159711f,0x1f613e23,0x0003ea00,
    0xd90fdb80,0x007e6000,0x200fcc33,0x223e406e,0x5e81503f,0x641fc5f8,
    0x47c93e27,0xeeeefeea,0x3201f982,0x0f907d47,0x1f99f4db,0x10be23e4,
    0x17a0bddd,0xd0007f10,0x9df7532b,0xf505f33d,0x6fec65c3,0x3e983ea1,
    0x442f7744,0x81f98fca,0xf985eee8,0x0d926c01,0x7cc05f90,0x3e203f64,
    0xffb11fc1,0x6c7c83f8,0xf55113e7,0xf703555b,0x4c67cc01,0x3643e46e,
    0x1f20fa57,0xdaa885f1,0xf9809f07,0xe80aaaa2,0xc81f37b5,0x5f303f54,
    0x3f5e7764,0x217e61f5,0xd887daa8,0x2a207d1c,0xeff987da,0xdb2ec0be,
    0xe887dffb,0xdff502ef,0x887e603d,0x8f9df32f,0x7d47c83f,0x13e01f9a,
    0x667ee644,0x7ff7cc4c,0x2f43e40d,0x20fc8364,0x21f202fb,0x0fd403f8,
    0xaf40dfdb,0x75b879be,0x645f301f,0x7d47e63f,0x7c805f98,0xf9006c80,
    0xdfb75510,0x37fd2ec1,0xfd507f93,0xfffe985f,0x317ff4c2,0x3ee9f75f,
    0x21f20fe0,0x27c06cde,0xeefeee98,0x6402ec5e,0x3e61fc47,0xb9cfc811,
    0x0f900dfe,0x05f3013e,0x4daf40d9,0xfaa6427f,0x1f21fa81,0x2fd7d4fe,
    0x7cc07c80,0x200f9001,0x5e97a2fb,0x3fa606d8,0x3f629f32,0x7fc41761,
    0x07f1ee2f,0x07ff70f9,0x0fb804f8,0x2af33f60,0x75cd7e41,0x7fce740e,
    0x23bfbf26,0x20f903fb,0x427c406e,0xb5d7e06c,0x267d5feb,0x320fb82f,
    0xfbf53f87,0xd01f2003,0x7c813f69,0x2f47f100,0x880f90bb,0x2bf0db4f,
    0x03be03f8,0x6d84f8db,0x7c00ff88,0x200fb804,0x4ffeeef9,0x033ffff2,
    0xc8fc4cd7,0x83e40016,0x07ec02fb,0x89fc41b2,0x3a3d422f,0x1f22f446,
    0x7ec7d4fe,0x2e07c800,0x6409bf56,0x743f5007,0x0bd03f26,0x3a17a9f0,
    0x3640bf15,0xf0bd0fe2,0xd009f10b,0x401f700b,0x1f27d85e,0x26c83f30,
    0x07c8007c,0x92eab3fa,0x6d99bff8,0x41fd5595,0x2fb88bfb,0x7f556fd4,
    0xa9fc3e40,0x400ee88f,0xd13f307c,0x43e40995,0x45fb9998,0x2677e26e,
    0x266b21fc,0x37f91fda,0x1fe45f93,0xee99df98,0x6d4e7dc0,0x0077441f,
    0x40ccdfdc,0x09f100fb,0x3a03e4fb,0x7c837624,0x3f933100,0xdfff9013,
    0xffffd887,0x03dffd34,0x203dffd5,0xc80dffea,0x21f53f87,0x4cc40ef8,
    0x53a099fc,0x223ffff9,0x7099fc99,0xdd07dfff,0x42effe98,0x41dffffe,
    0xc83ffffc,0x7f4c0eff,0xfff700df,0x0ffed43d,0x3ffec880,0x3f600fb8,
    0x322feccd,0xfa83ae07,0x200953ff,0x4ffffffb,0x00440020,0x80100000,
    0x1f53f87c,0x3fee37cc,0x1d74ffff,0xfffb8990,0x00624fff,0x26002079,
    0x44008800,0x400100ca,0x00179300,0x00fb8020,0x205e6654,0x0000004a,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x6f6e4000,0xa881a82d,0x802982aa,0x2009aaaa,0x510deed9,
    0x00015101,0x14c37950,0x55555400,0x55555510,0x9aaaa855,0x10065400,
    0x2aaaa055,0x55512aaa,0xa8055555,0x2981a81a,0x15555553,0x5006aaa6,
    0x50530a21,0x506f2a03,0x3a20d405,0x4c3fcacf,0x7f7440ff,0xfd807c87,
    0xfb82ffee,0x1ba1cabd,0xb83d89ba,0x7fbbfd05,0xff1001f2,0x2b665ddf,
    0x20eaaaaa,0x82fffeef,0x2a01ffe9,0xffff82ff,0xddd35fff,0x201dddff,
    0x83f83ffa,0xdffdd57c,0x3fbbf23d,0x1ae3f04f,0x441fc8f9,0x2e3fdcfe,
    0x5c2fa82f,0x360fe20f,0x3e43e404,0x3fb12ec0,0x3ea02fc4,0x3f907ea2,
    0xf707f355,0xeefc8443,0x2775c03c,0x362dda4c,0x1fd88fe0,0x807f37f2,
    0xf1005edd,0x22017a07,0x83f83fcf,0x7c85e87c,0x43e207dc,0x5f53e45c,
    0x07dc1db0,0xdd0bd0dd,0x90003f88,0xbb00f90f,0x007d4dd0,0x3a09d3ec,
    0xdb06ffff,0x7e667e40,0x09d7d00e,0x0da6cc93,0x199ba0fe,0x2be203f7,
    0x01f7007c,0x23b2017a,0x7c83f83f,0x447c85e8,0x99f9912f,0x4df259dd,
    0x7f09f03f,0x03f71fd4,0xd13f889f,0x87c80bdd,0x41dfd8fc,0x1f27c85d,
    0x07ddfc40,0x20fd15f8,0xf31f205d,0x09d1f509,0x41b78893,0xf707c83f,
    0x3e63ea03,0xd027c402,0xf89f980b,0x87c83f83,0x7d47c85e,0xf99fb910,
    0x3a3f259d,0x13a0fe05,0x209f11fb,0xa89fc44f,0x43e407da,0x27ebcefc,
    0x3ee3cfec,0x32003f50,0x45f303ff,0x3baa20fb,0x21f21aaa,0x9dd4d86d,
    0x5cc52619,0x5c1fc1b5,0xb01fb80f,0x3ee027cd,0x9d017a00,0x33be0fe2,
    0x5e87eccc,0x1edccfc8,0xf90ba6a8,0x446e80db,0x7de7cc5e,0x3fd8bd00,
    0x43e407c8,0x747e63fc,0x47ea4eff,0x1be004f8,0x87ea1fa8,0x4ffffff8,
    0xf11ba1f2,0x4c333ba3,0x83619d54,0xb81fa83f,0x323f881f,0xd013e207,
    0xf8875c0b,0xeeeeef83,0xfc85e87f,0x5c0dfeee,0xddf90be5,0xfddef980,
    0x03ffc84f,0x3fb66fee,0x3e407c83,0xbb1fc3e4,0x6fec1f70,0x3ff20b9a,
    0x7c43ffff,0x02ec1f24,0x5c3fa8f9,0x4d2613a6,0x707f06c4,0x503f701f,
    0xb817d41f,0x982f400f,0x3e0fe22f,0x85e87c83,0xa9a7cc7c,0x22bfaaed,
    0x4404f9fc,0x883e8acb,0xdffc806f,0x407c83f8,0x3f87c87c,0x2a1b6176,
    0x2621efff,0xe8099de9,0xbb05fddf,0x7f667e40,0x4feefe85,0xf8360498,
    0x3f706e83,0xffffffb0,0x3a013e09,0xddddf905,0x41fc5ddf,0x7c85e87c,
    0xddfd76e8,0xbbe4ddfd,0x0be2003f,0x7c4002f4,0x3e407c83,0xbb1fc3e4,
    0x0d903fa8,0x2abbaaa6,0x66ee7d40,0x3205d81f,0xfa82cdef,0x4984fccc,
    0x0fe0d8b7,0x07ee07f7,0xb55559f1,0xd001f70f,0x2aaaa60b,0x0fe0adfb,
    0x3217a1f2,0x4fa2fc47,0x3f67c879,0x740bb001,0x83f88005,0x643e407c,
    0x2bb63f87,0x13a05fdb,0x777ff754,0x13742fc2,0x35555dd5,0xd17601f2,
    0x4526133b,0x75bf06c1,0xdaa88bfb,0x03f51abf,0x005f83f5,0x1fc400bd,
    0xa9be41fc,0xf90aaeea,0xe83fd755,0xe8f90f52,0x7e55440e,0x0017a00e,
    0x64cc4fe2,0x9331099f,0x21f2133f,0x37bff63f,0x7400e402,0x82202205,
    0xfffffff8,0x2f880f95,0xf99ffff4,0x0feeeeee,0x20b7bffe,0x5ffffffb,
    0xb93e20db,0x00bd001f,0x41fc1fc4,0xfffff77c,0x3bfff25f,0x0d71f81c,
    0x545f88f9,0x5e803def,0x3ee39000,0xf74fffff,0x329fffff,0x00003f87,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xaaaaa880,0x2aaaaa0a,0x981552aa,0x15303512,
    0x551a80a6,0xaaa88d40,0x32a20aaa,0x55554c1b,0x55300d40,0x20aa0155,
    0x9000542a,0x220a6009,0x0000deec,0x3aafbf62,0xc802602e,0x16e1dffe,
    0xbddb30ba,0x27ff6441,0x8837bb22,0x3f632e6e,0x985dd41d,0x21eeeeef,
    0x5ffffffe,0x3a6c87ff,0x0f72fc46,0x880fc9fc,0xddddf33f,0x3bbfa63d,
    0x3fbbf22f,0xfb813e5f,0xff83ffee,0x3fb1fea1,0x2a017600,0x55f7c45f,
    0x417a01fe,0xcbffbac9,0x107f880f,0x21fd757b,0x3ee3f87c,0x3ba1cabd,
    0x57743aaa,0x3ff50fea,0x9faf3bb2,0xf98efefb,0xf1fb8002,0x3e66c8ff,
    0x07b83f23,0x5c17ccbe,0x4405f30f,0x44f93ec4,0x5c09f3fb,0xf883f627,
    0x321fb63e,0x405d803f,0xf86d83fb,0x74017a05,0x02f40be5,0x21f25f30,
    0x4c0bf13f,0x883ee02f,0x3fc8f24f,0x3f5087e6,0xf88005f3,0x6c8ff3e4,
    0x21fcc7e4,0x5f87e07a,0x00be66d8,0x21f21f70,0x3dc09f6f,0x6bf88bea,
    0x3ee0f7f1,0xaeeaaa84,0xf817ec2a,0x17a07c83,0x3e677660,0xf9980003,
    0x2a7f0f93,0x2bbe200f,0x05d85e80,0x320fe1f2,0x4002f98f,0x9b2fe0ee,
    0x376fc46c,0xf12a87d4,0x7f107e43,0x2e0017cc,0x2dd0f90f,0xf71ee04f,
    0x5cfcfcc1,0xbf300f9d,0x3ffffe21,0x03dd17ff,0x89ee0be2,0xaaaeeaaa,
    0xfffffb10,0x2aaa27ff,0x2e0aaaaa,0xf93ffffd,0x201f27f0,0x3e0dffd9,
    0x06ffffff,0xf90fe1f2,0x2aab3e65,0x7f07ee02,0x2a1b25f3,0xf0f981ff,
    0x2f983e2d,0xcdf983ea,0x92f404cc,0x09f4f98f,0x27e557dc,0x2bb363e6,
    0x0bf600f9,0x027d42ec,0x4cf907f1,0xeeeffeee,0x41763f70,0xeeeeeee9,
    0x7c45f30e,0x2e7f0f93,0xff71001f,0x320017a1,0x3fd13f87,0x377777cc,
    0xb3f84f88,0x3fe61b2d,0xff99f980,0xb2fc0f99,0xeeeef98d,0x643f900e,
    0x3e6fdbaf,0x3ffbee04,0x7fa8f982,0x3fd101f3,0xdf982ec0,0x0bd0bd00,
    0x3a5d82f4,0x46d80006,0x541f73f9,0x8009f33f,0x801fb2f9,0x4fe1f22a,
    0xf9ceeefe,0xf01db002,0x21b2be67,0x9f885fee,0xc879becc,0x05f30fe7,
    0xdf90bf20,0x204f87bd,0x9ea1b67b,0xe983f34f,0x102ec00e,0x39f501dd,
    0x2f401fb3,0xcfec9fb8,0x20350099,0x3ffb9afc,0x7ff739f1,0x85cd6fec,
    0x0fd999a9,0x13337df3,0x43e47fe6,0x3555553f,0x3f7005f3,0x6cde8fe0,
    0x41fd4fe4,0x7aeb9faf,0x40faaf98,0x2fc802f9,0x027c07c8,0x2a1fc4f7,
    0x50fc4227,0x006a00bf,0xff503fb1,0x05e803df,0xff71bfb1,0x20ff103f,
    0x3f9effe8,0x0fa7bfae,0x2a3dfff9,0x4c2effff,0xf11ffffe,0x0fe1f21f,
    0xf8805f30,0xdfa8fe04,0x0fd93e66,0x7cf8be7c,0xf30db9f0,0x902fc805,
    0x2e04f80f,0x0f707ec7,0x403d87e2,0x09999998,0x00081720,0x0101006a,
    0x800404d8,0x4c401000,0x00101800,0x2017cc00,0x2aaaabfd,0x3a6fe87f,
    0xff17e60f,0xfc837f49,0xaacf983f,0x55bf70aa,0xf01f2555,0x2e35555b,
    0x0f71fcc7,0xfd000be2,0x00bfffff,0x00000000,0x00000000,0x00000000,
    0x02f98000,0x7ffffffc,0x76fb87f6,0x745f905f,0x541bee2f,0xfff980ff,
    0xfffb1fff,0x01f2dfff,0x29ffffff,0x1ee7d87b,0x000017c4,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xb8800000,0x3bbaa1bc,
    0xab981eee,0x25d85d80,0x74cb605b,0x1d10eb82,0x6c417db5,0x02ec8de8,
    0x0ddcc033,0x21540206,0x4080acb8,0x1a802040,0x2202ee20,0x4260883d,
    0x221a88a9,0xffd2a82a,0xa80bffff,0x2eeeeee2,0x3ea0661b,0x2ee21fff,
    0xd8791040,0x87eded45,0x0feaaaa8,0x21f5df64,0xb87f24f9,0x3745f107,
    0x7f9f32f4,0x5efcc7f9,0x7906cdcf,0x4bfb7ea0,0xa8be61fb,0x7e6d47fe,
    0x1f89fc46,0x4c1b21f5,0xddfa80ff,0x207fd42f,0x47e57e7e,0x227cc3f9,
    0x5555536f,0xd0f6c035,0x27fddddd,0x4cc41ffa,0x3fbfa099,0x3fee3f11,
    0x2f980fa1,0xadb85f50,0x7dc2d8ce,0x87d43f9a,0x7dc3f32b,0xef98be60,
    0xb4f99760,0x3661f31f,0x3a1e9bb8,0x99fd9b64,0x03e5ec4f,0xbd3641f5,
    0xd07f15d8,0x647d0bb5,0x1541fe86,0x3e23f237,0x1be2d883,0x000ca800,
    0x007fea7f,0xb7fb0f98,0x19077ccf,0x82feed88,0xab8e84f8,0xefd859bb,
    0x2df1f985,0xc8fe20f9,0x92a17cc7,0x3e69b1f9,0x0fb77ae0,0x3f635c5f,
    0x2a1f204f,0x5c7e64fd,0xfa9fc40e,0x20fc5aa0,0x3f21ee1f,0x7c5ee000,
    0x3f6bd003,0x004fffff,0x01547f00,0x3dd70e20,0x7cbb0008,0x2ef06e82,
    0xf88688ee,0xfd35f00f,0x7cdb0f53,0x2600fcc4,0x03e69b1f,0x49d05ff7,
    0x00ffd45d,0x3fb730f9,0xe82f43ee,0x717c5f15,0x99764e8d,0x2d4003fb,
    0x54f2003b,0x01aaaaaa,0x00037000,0x32000000,0x7ec2fece,0x3b571d00,
    0x09ffb0b3,0x2f3732fa,0x0fa9fa86,0x3e600fcc,0x4c3e69b1,0x20edbcde,
    0x261fdefb,0xf901fdcf,0x29d1fc40,0xd87dc2f9,0xa8fe16e6,0x37a0efef,
    0x00000002,0x00000000,0x00000000,0xb82a2ea2,0x26f6e01f,0x57dc2dc9,
    0x9fcd82fb,0xb9f05cea,0x9803f30b,0x43e69b1f,0x260a7928,0xd93e60bb,
    0x3bffae1f,0x41fdb974,0x261f71f9,0x0443f52f,0x00662044,0xccccccc8,
    0x777754cc,0x00000003,0x00000000,0x55554000,0x333bf32a,0xebbec813,
    0x3fb27cc3,0x7ff16fc8,0x260bff20,0xd8fcc01f,0x07901f34,0x44aaaaaa,
    0x2aa60c83,0x159931aa,0x3885c370,0x000000ea,0x99999990,0x3fff2799,
    0x0000003f,0x00000000,0x3bba0000,0xffff95ee,0x155109ff,0x77c46e88,
    0x2fd93ee0,0x3e60ff10,0x4d8fcc01,0xee8001f3,0x00005eee,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__consolas_18_latin1_x[224]={ 0,3,2,0,0,0,0,3,2,2,1,0,2,2,
3,1,0,1,1,1,0,1,1,1,1,0,3,2,1,1,1,2,0,0,1,0,0,1,1,0,0,1,1,1,
2,0,1,0,1,0,1,0,0,0,0,0,0,0,0,3,1,2,1,0,0,1,1,1,0,1,0,0,1,1,
1,1,1,0,1,0,1,0,1,1,0,1,0,0,0,0,1,1,4,2,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,1,0,0,0,
4,1,0,0,1,1,1,2,0,0,1,0,2,2,0,1,0,3,3,1,1,1,0,0,0,1,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,
0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
 };
static signed short stb__consolas_18_latin1_y[224]={ 13,0,0,1,-1,0,0,0,-1,-1,0,3,10,7,
10,0,1,1,1,1,1,1,1,1,1,1,4,4,3,6,3,0,0,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,15,0,4,0,4,0,4,0,4,0,0,
0,0,0,4,4,4,4,4,4,4,1,4,4,4,4,4,4,0,-2,0,6,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,13,4,-1,1,1,1,
-2,0,0,1,1,4,7,7,0,1,0,2,0,0,0,4,0,6,13,0,1,4,0,0,0,4,-2,-2,-2,-2,
-2,-3,1,1,-2,-2,-2,-2,-2,-2,-2,-2,1,-2,-2,-2,-2,-2,-2,4,-1,-2,-2,-2,-2,-2,1,0,0,0,
0,0,0,-1,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,0,0,0,0,0,
 };
static unsigned short stb__consolas_18_latin1_w[224]={ 0,4,6,10,9,10,10,3,6,6,8,10,5,6,
4,8,10,8,8,8,10,8,8,8,8,9,4,5,8,8,8,7,10,10,8,9,10,8,8,9,9,8,7,9,
7,10,8,10,8,10,9,9,10,9,10,10,10,10,9,5,8,5,8,10,6,8,8,8,9,8,10,10,8,8,
7,9,8,10,8,10,8,9,9,8,9,8,10,10,10,10,8,7,2,7,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,4,7,9,10,10,
2,8,8,10,7,8,8,6,9,8,8,9,6,6,9,9,9,4,3,7,7,8,10,10,10,7,10,10,10,10,
10,10,11,9,9,9,9,9,9,9,9,9,10,9,10,10,10,10,10,8,10,9,9,9,9,10,8,8,9,9,
9,9,9,9,10,8,9,9,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,9,9,9,9,10,8,10,
 };
static unsigned short stb__consolas_18_latin1_h[224]={ 0,14,5,12,17,14,14,5,18,18,9,10,7,2,
4,15,13,12,12,13,12,13,13,12,13,12,10,13,11,5,11,14,17,12,12,13,12,12,12,13,12,12,13,12,
12,12,12,13,12,16,12,13,12,13,12,12,12,12,12,17,15,17,7,2,5,10,14,10,14,10,13,13,13,13,
17,13,13,9,9,10,13,13,9,10,13,10,9,9,9,13,9,17,19,17,4,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,13,17,12,12,12,
19,16,5,13,9,8,5,2,9,4,7,11,8,8,5,13,16,4,3,8,9,8,13,13,13,13,15,15,15,15,
15,16,12,15,15,15,15,15,15,15,15,15,12,15,16,16,16,16,16,8,16,16,16,16,16,15,12,14,14,14,
14,14,14,15,10,12,14,14,14,14,13,13,13,13,14,13,14,14,14,14,14,10,13,14,14,14,14,17,17,17,
 };
static unsigned short stb__consolas_18_latin1_s[224]={ 254,40,174,212,99,235,146,188,7,14,82,
157,159,176,245,43,183,133,71,229,173,133,147,153,166,233,235,249,137,192,118,
138,60,142,203,32,122,62,1,42,184,194,52,223,89,107,20,71,80,126,97,
156,162,194,51,40,29,243,10,77,175,71,141,165,181,190,1,208,45,226,225,
236,29,11,52,92,20,71,240,146,247,1,61,217,215,199,50,39,28,204,9,
83,4,91,234,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,
111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,254,142,109,
80,69,58,1,117,165,60,1,123,211,176,18,225,150,127,249,116,201,12,223,
220,250,108,91,132,218,1,112,175,32,184,21,84,73,137,99,95,105,115,125,
135,145,155,165,195,38,52,233,158,169,180,191,99,202,213,1,244,148,62,90,
55,107,177,30,20,10,11,168,49,246,225,215,205,102,208,123,22,128,82,74,
117,96,85,187,179,238,157,167,198,64,21,43,32, };
static unsigned short stb__consolas_18_latin1_t[224]={ 1,38,94,67,1,21,38,94,1,1,94,
81,94,100,94,21,53,67,81,38,67,53,53,67,53,67,81,38,81,94,81,
38,1,67,67,53,67,81,81,53,67,67,53,67,81,81,81,53,81,1,81,
53,67,53,81,81,81,67,81,1,21,1,94,100,94,81,38,81,38,81,53,
53,67,67,1,53,67,94,81,81,53,67,94,81,53,81,94,94,94,53,94,
1,1,1,94,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,
67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,1,53,1,
67,67,67,1,1,94,53,94,94,94,100,94,94,94,81,81,94,94,53,1,
94,94,94,94,94,38,53,53,53,21,21,21,21,21,1,67,21,21,21,21,
21,21,21,21,21,67,21,1,1,1,1,1,94,1,1,21,1,1,21,67,
38,38,38,38,38,38,21,81,67,21,21,21,21,53,38,53,53,38,53,38,
38,38,38,38,81,38,38,38,38,38,1,1,1, };
static unsigned short stb__consolas_18_latin1_a[224]={ 158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_18_latin1_BITMAP_HEIGHT or STB_FONT_consolas_18_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_18_latin1(stb_fontchar font[STB_FONT_consolas_18_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_18_latin1_BITMAP_HEIGHT][STB_FONT_consolas_18_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_18_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_18_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_18_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_18_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_18_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_18_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_18_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_18_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_18_latin1_s[i] + stb__consolas_18_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_18_latin1_t[i] + stb__consolas_18_latin1_h[i]) * recip_height;
            font[i].x0 = stb__consolas_18_latin1_x[i];
            font[i].y0 = stb__consolas_18_latin1_y[i];
            font[i].x1 = stb__consolas_18_latin1_x[i] + stb__consolas_18_latin1_w[i];
            font[i].y1 = stb__consolas_18_latin1_y[i] + stb__consolas_18_latin1_h[i];
            font[i].advance_int = (stb__consolas_18_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_18_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_18_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_18_latin1_s[i] + stb__consolas_18_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_18_latin1_t[i] + stb__consolas_18_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_18_latin1_x[i] - 0.5f;
            font[i].y0f = stb__consolas_18_latin1_y[i] - 0.5f;
            font[i].x1f = stb__consolas_18_latin1_x[i] + stb__consolas_18_latin1_w[i] + 0.5f;
            font[i].y1f = stb__consolas_18_latin1_y[i] + stb__consolas_18_latin1_h[i] + 0.5f;
            font[i].advance = stb__consolas_18_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_18_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_18_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_18_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_18_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_18_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_18_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_18_latin1_LINE_SPACING
#endif

