// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_bold_8_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_bold_8_latin1'.
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

#define STB_FONT_times_bold_8_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT         32
#define STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_times_bold_8_latin1_FIRST_CHAR            32
#define STB_FONT_times_bold_8_latin1_NUM_CHARS            224

#define STB_FONT_times_bold_8_latin1_LINE_SPACING           5

static unsigned int stb__times_bold_8_latin1_pixels[]={
    0x2018804c,0x80540100,0x80405009,0x40022018,0x731cc048,0x355512e2,
    0x0a922044,0x88130002,0x0a00a040,0x10114013,0x260c414c,0x880622ad,
    0x02000500,0x47510400,0x7710202b,0x0e6a02a0,0x0ae20b26,0x91015014,
    0x1d440e07,0x41133264,0x3488e62c,0x34566113,0x2a2c310a,0x0a076229,
    0x21466e14,0x4286aa1a,0x22388a3c,0x3a0542c2,0x0501419f,0x2aae0aa6,
    0x1a8164c2,0xa872a288,0x2a1ccc2b,0x0cd5419a,0x6d4711b5,0x2236a388,
    0x50e236a3,0x19aa8335,0x550e236a,0xa84cc433,0x3986609c,0xc84e5522,
    0x306cc7e4,0x173b324b,0xb9d98622,0x26173b30,0x261b850d,0x2621b30d,
    0x20dcb061,0x3f6396a4,0x40501419,0x50d35a82,0x32dcc240,0x21de5477,
    0x2668acc2,0x433ccd15,0x33cc35d8,0x8acc33cc,0xf3345666,0xa9a2b30c,
    0xaa8ba2bb,0xd244730d,0x2278ad45,0x2228acc7,0x4935088f,0x1f1088f8,
    0x2e29e211,0x2789e269,0x1c9a069b,0x4115d054,0x80f419b8,0xcc83d01e,
    0x80f41e88,0x26e2dc1e,0xe895750a,0x991f9321,0x886798fc,0x19e61cd8,
    0xf93219e6,0x798fc991,0x547e4c86,0x9c86e2bb,0x7244731d,0x222bac83,
    0x7c4b2cc7,0xf886f20c,0x8833e20c,0x226a88a7,0x26a89e27,0x244552c2,
    0x30cc07aa,0x30b730b7,0x1f1db8b7,0x2dcc2dcc,0x24d887a2,0x96e62cca,
    0xf2d43e5a,0x44219e21,0x2219e22e,0x43e5a867,0x33c43e5a,0x3661f2d4,
    0x4a98333d,0x033488e6,0x5478836a,0x088f8965,0x447c43b3,0x22111f10,
    0x10ebb8a7,0x1d773c4f,0x1214188a,0x550cc03e,0x40faa81f,0x27620faa,
    0x207d542b,0x30220faa,0x5541d4b3,0x70aa6e0f,0x0aad8553,0x2b614c6a,
    0x20556c0a,0x54dc2a9b,0x2e0556c2,0x005402a9,0x02a310c4,0xa83e6188,
    0x5cfcc220,0x4ae7e602,0x1f32b9f9,0x261f3006,0x4008600f,0x8817c408,
    0x0b936170,0x04d85c9b,0x0b936170,0x2198049b,0x04d85c2a,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x2a000000,0x4c4143ab,0x2e1c4099,0x71120643,
    0x8912a617,0x54426a49,0x3c892a24,0x0221214c,0x2289c411,0x8adc3129,
    0x5442ae23,0x30950312,0x2201e445,0x75114088,0xb06a1ec4,0x2660cc1d,
    0x4c7baa0a,0x330ea23a,0x986e1815,0x19aa8512,0x14950a26,0x86aa1966,
    0x4c433328,0x22131109,0xba86a098,0x4130261c,0x4c199349,0x30660cc0,
    0x126a1981,0x4c3a4435,0x088f8872,0x75aa8532,0x83507950,0x97526419,
    0x436ae285,0x552544b0,0x2ea624c1,0xbc92262b,0x263b390c,0x98e22a99,
    0x9661ca60,0x6c4ef2e6,0xb30990a1,0xace4a173,0x2ea57750,0x2e57752b,
    0x546eea69,0x25126a49,0x436aa3a9,0x436aa69b,0x1b550daa,0x333020b2,
    0x0c554c11,0x49d106f2,0x5418a9a8,0x4d370b8f,0x750cc69b,0xb3b0c459,
    0x1b552dc3,0x0dcb9baa,0x38117933,0x1dbb97e2,0x4d4044b3,0xc8226a64,
    0xa55d47e4,0x5b8262fb,0x15088f88,0x5dd4177b,0x2ea57752,0x5d4d512b,
    0x5e43794a,0x91dbc841,0xc9aa23b3,0x23b391d9,0x45b31d9c,0x88b15048,
    0x40f4c48a,0x55cc41d9,0x445d5573,0x771aa26a,0xc85266dc,0x9c86c1da,
    0xdac8e41d,0x88597551,0x6987e722,0x5a862aaa,0x4b150379,0x2cca9e5a,
    0x33590a16,0xd99833e2,0x7bb308ab,0x6eccf766,0x32e1d773,0x6cc3b32c,
    0x26295261,0x4c3aee4a,0xa992a64a,0x877705c4,0xb89c1b53,0x05dd42c0,
    0xbea9dd4e,0x21d771ed,0x38ea0ebb,0x324b9850,0xbb92e629,0x9a833261,
    0x92aa1c1a,0x0d4d40a8,0x54e0ecc6,0xa8a66e0d,0x05076dc3,0x0447c415,
    0x00000183,0x00000000,0x220c0000,0x1081041a,0x04004001,0x525c0000,
    0x00000000,0x00000000,0xa8004100,0xf3060002,0x00988573,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x24998c40,0x36a388d9,0x06aa2388,0x99d5d457,
    0x92aa6088,0x9ec65c2b,0x11304cc3,0x44436a04,0x4cc13109,0x88985c09,
    0x220aa570,0x261d4aa4,0x8224b80d,0x04408989,0x262abd98,0x75b31e41,
    0x40889900,0x1d553098,0x23aa396a,0x0862b229,0xdab84444,0x656cc62a,
    0x1d132880,0x572219a2,0x5930cee1,0x13951966,0x86ea1966,0x9b86b778,
    0x2a59750e,0xbba9a60c,0x3a6a3592,0x1ca8cc48,0x3045d4ea,0x22ca8cc1,
    0xa96a2af8,0x86ef2a49,0x1793049a,0x4131a6e1,0x32ee9778,0x6d545311,
    0x6421b550,0x36045744,0x260ecc2c,0x10bc4400,0x59165a27,0x19a21886,
    0xe8873622,0x3259570e,0x82645d04,0x2ab63bca,0xc92ea09f,0x698972ba,
    0x8f4caeea,0x1dc1aea8,0x2ba9d43d,0x36a771dc,0x599ed12c,0x3d3d06f2,
    0xcda98164,0x4771aa23,0x2276a9fa,0x27259b51,0x4c3b791d,0x440f540e,
    0xb857cc1f,0x03c402cc,0x4c41b5d1,0x0cf10238,0x9718ba21,0x82dcaeb2,
    0x87cd2e1b,0x23aa4aba,0x9515d44d,0x6998ea59,0x95d4f766,0x1d42dccb,
    0x6da9d417,0x32a751d4,0x4c95f12b,0x12907664,0x2f2305b3,0x541d7708,
    0xabadde23,0x2657950c,0x5d12ea4a,0xd7301f02,0x0261bda8,0x22931e20,
    0x25980e9e,0x504d6c0d,0x19ab8a63,0x4d647b93,0xd3590331,0x4d20de54,
    0x2e165d41,0x01de4932,0xb812e000,0x25c99974,0x4cf32e97,0x0002d40f,
    0x566c45c0,0x5f525c04,0xcb842219,0x4f5c003c,0x550be23b,0x2e3d893a,
    0x411112bb,0x91f500f9,0x0000510b,0x01500000,0x33300000,0x00000550,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x80000000,0x2b664ad9,0x3ada8282,0x9874c766,0x64474c0d,0x86cc3710,
    0xb10da8d9,0x985cecc7,0x24040b9d,0x33144400,0x10c44041,0x22208833,
    0x3108428a,0x30666233,0x9988dd45,0x388e6731,0x55299540,0x4150ddcc,
    0x024570ac,0xb822a635,0x06eee1bb,0x3d688000,0x07a07de2,0xa64532d1,
    0x5e21e27a,0x89e21c82,0x13c44b37,0x447c422f,0x54d50620,0xda9d440b,
    0x4543d12c,0x4b88f6a3,0x5ed4aeee,0x417512cc,0x7126664b,0xaa994e17,
    0x4896e512,0x512995ce,0x85dc42ee,0xc8000bb9,0x0dc4420d,0x10000000,
    0x1d7c4b7f,0x2ad116e6,0x4f33f116,0x82df8878,0xaf89e21c,0x7f11c45b,
    0x75067c43,0x2e1a2679,0x2bca8974,0x51cc88f2,0x0440e889,0x32777595,
    0x206aa259,0x0a88c220,0x44ee5555,0x08044660,0x88220453,0x0000003a,
    0x20000000,0x41e25b68,0x5da20faa,0x89e33615,0x07cfc427,0x5e278872,
    0x2f109459,0x88223e20,0x5cc7f721,0xccb95d42,0x22a1f533,0x079916e2,
    0x23ccbdb8,0x0000009a,0x00000000,0x00000000,0x20000000,0x1f30caf9,
    0x7d49b0b8,0x333350ca,0x4aa7e61f,0x360ec8f9,0x47cc3e63,0x21ff70eb,
    0x5cfcc0f9,0x009a0222,0x00000004,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_bold_8_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__times_bold_8_latin1_y[224]={ 6,1,1,1,1,1,1,1,1,1,1,1,4,3,
4,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,1,2,1,2,1,2,1,2,1,1,
1,1,1,2,2,2,2,2,2,2,1,2,2,2,2,2,2,1,1,1,3,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,2,1,1,1,1,
1,1,1,1,1,2,2,3,1,0,1,1,1,1,1,2,1,3,5,1,1,2,1,1,1,2,-1,-1,-1,-1,
-1,-1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,2,0,-1,-1,-1,-1,-1,1,1,1,1,
0,1,1,0,2,2,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,2,2,1,1,0,1,1,1,1,
 };
static unsigned short stb__times_bold_8_latin1_w[224]={ 0,2,4,4,4,7,6,2,3,3,4,4,2,3,
2,3,4,4,4,4,4,4,4,4,4,4,2,2,4,4,4,4,7,6,5,5,5,5,5,6,6,3,4,6,
5,7,6,6,5,6,6,4,5,6,6,8,6,6,5,3,3,2,4,5,2,4,4,4,4,4,3,4,4,2,
3,5,2,6,4,4,4,4,4,3,3,4,4,6,4,4,4,3,2,3,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,4,4,4,4,
2,4,3,6,3,4,5,3,6,5,3,4,2,2,3,5,4,2,2,2,3,4,6,6,6,4,6,6,6,6,
6,6,8,5,5,5,5,5,3,3,3,3,5,6,6,6,6,6,6,4,6,6,6,6,6,6,5,4,4,4,
4,4,4,4,6,4,4,4,4,4,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
 };
static unsigned short stb__times_bold_8_latin1_h[224]={ 0,6,3,6,6,6,6,3,7,7,3,5,4,2,
3,6,6,5,5,6,5,6,6,6,6,6,5,6,5,3,5,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,6,6,5,7,5,6,5,6,6,6,5,5,5,7,6,7,3,1,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,5,5,5,4,6,4,7,7,7,2,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,6,7,6,5,5,
7,7,2,6,3,4,3,2,6,1,3,5,3,3,2,6,7,2,3,3,3,4,6,6,6,6,7,7,7,7,
7,7,5,7,7,7,7,7,7,7,7,7,5,8,8,8,8,8,8,4,7,8,8,8,8,7,5,6,6,6,
7,6,6,7,5,6,6,6,7,6,5,5,6,5,6,5,6,6,7,6,6,4,5,6,6,7,6,7,7,7,
 };
static unsigned short stb__times_bold_8_latin1_s[224]={ 71,56,193,59,120,125,133,183,172,168,198,
80,253,214,180,161,165,47,63,170,85,180,185,197,202,207,243,219,95,162,90,
4,13,13,1,33,20,74,68,44,56,52,79,40,34,26,16,234,7,98,246,
23,237,9,113,56,215,208,202,86,251,90,153,226,218,166,51,152,28,140,136,
65,125,122,109,112,109,130,100,192,241,70,115,89,75,84,104,145,105,39,120,
113,144,176,221,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,
232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,232,71,1,234,
246,182,222,165,239,203,212,170,137,147,214,190,232,158,227,167,174,210,155,187,
207,177,186,189,110,227,106,99,94,192,199,206,220,249,227,157,1,134,128,7,
117,105,156,152,140,176,22,43,8,1,50,64,142,213,57,36,29,15,180,130,
41,36,140,160,145,69,147,93,89,51,222,123,46,100,118,150,171,175,187,84,
79,81,74,64,125,197,31,21,71,26,76,244,93, };
static unsigned short stb__times_bold_8_latin1_t[224]={ 9,10,25,10,10,10,10,25,1,1,25,
25,18,25,25,10,10,25,25,10,25,10,10,10,10,10,18,10,25,25,25,
18,10,25,25,18,25,25,25,18,25,25,18,25,25,25,18,10,25,1,18,
18,18,18,10,18,18,18,18,1,10,1,25,25,25,18,18,18,18,18,18,
18,18,18,1,18,18,25,25,18,10,18,25,18,18,18,18,18,25,18,25,
1,1,1,25,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,
18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,9,18,1,
10,18,18,1,1,25,10,25,25,25,25,10,25,25,18,25,25,25,10,1,
25,25,25,25,25,10,10,10,10,1,1,1,1,1,1,18,10,1,1,10,
1,1,1,1,1,18,1,1,1,1,1,1,25,1,1,1,1,1,1,18,
10,10,10,1,10,10,1,18,10,10,10,1,10,18,18,10,18,10,18,10,
10,1,10,10,25,18,10,10,1,10,1,1,1, };
static unsigned short stb__times_bold_8_latin1_a[224]={ 29,38,64,58,58,116,96,32,
38,38,58,66,29,38,29,32,58,58,58,58,58,58,58,58,
58,58,38,38,66,66,66,58,108,83,77,83,83,77,71,90,
90,45,58,90,77,109,83,90,71,90,83,64,77,83,83,116,
83,83,77,38,32,38,67,58,38,58,64,51,64,51,38,58,
64,32,38,64,32,96,64,58,64,64,51,45,38,64,58,83,
58,58,51,46,25,46,60,90,90,90,90,90,90,90,90,90,
90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,
90,90,90,90,90,90,90,90,29,38,58,58,58,58,25,58,
38,86,35,58,66,38,86,58,46,63,35,35,38,67,62,29,
38,35,38,58,87,87,87,58,83,83,83,83,83,83,116,83,
77,77,77,77,45,45,45,45,83,83,90,90,90,90,90,66,
90,83,83,83,83,83,71,64,58,58,58,58,58,58,83,51,
51,51,51,51,32,32,32,32,58,64,58,58,58,58,58,63,
58,64,64,64,64,58,64,58, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT or STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_bold_8_latin1(stb_fontchar font[STB_FONT_times_bold_8_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT][STB_FONT_times_bold_8_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_bold_8_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_bold_8_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_bold_8_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_bold_8_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_bold_8_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_bold_8_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_bold_8_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_bold_8_latin1_s[i] + stb__times_bold_8_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_bold_8_latin1_t[i] + stb__times_bold_8_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_bold_8_latin1_x[i];
            font[i].y0 = stb__times_bold_8_latin1_y[i];
            font[i].x1 = stb__times_bold_8_latin1_x[i] + stb__times_bold_8_latin1_w[i];
            font[i].y1 = stb__times_bold_8_latin1_y[i] + stb__times_bold_8_latin1_h[i];
            font[i].advance_int = (stb__times_bold_8_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_bold_8_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_bold_8_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_bold_8_latin1_s[i] + stb__times_bold_8_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_bold_8_latin1_t[i] + stb__times_bold_8_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_bold_8_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_bold_8_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_bold_8_latin1_x[i] + stb__times_bold_8_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_bold_8_latin1_y[i] + stb__times_bold_8_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_bold_8_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_bold_8_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_bold_8_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_bold_8_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_bold_8_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_bold_8_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_bold_8_latin1_LINE_SPACING
#endif
