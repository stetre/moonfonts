// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_16_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_16_usascii'.
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

#define STB_FONT_consolas_bold_16_usascii_BITMAP_WIDTH         128
#define STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT         88
#define STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_bold_16_usascii_FIRST_CHAR            32
#define STB_FONT_consolas_bold_16_usascii_NUM_CHARS             95

#define STB_FONT_consolas_bold_16_usascii_LINE_SPACING          11

static unsigned int stb__consolas_bold_16_usascii_pixels[]={
    0x300a23d5,0x98053001,0xa98aaaa0,0x801101aa,0x80000019,0x05a801a9,
    0xf7000002,0x7c13fe63,0x03ffa206,0xffff3fd4,0x10ffff21,0xf301dffb,
    0x98007e8d,0x3fff624f,0x221b600e,0x74fe25fe,0x7ddfec07,0x2e03f221,
    0x017f705f,0x87e437cc,0x9ee880fc,0x0ffc46e9,0xf9000bea,0x7f5e7f43,
    0x7fffec45,0x6c7e3b21,0x7f901fa5,0x03f983f7,0x00fb07f9,0xfc87e402,
    0x3e60fc80,0x37c0ff61,0x7ccbf100,0x9fd07fc5,0xfae4399f,0x01fa0fab,
    0x883f75f9,0x361fe04f,0xdffffd07,0x03f21f90,0xf33517f1,0xfc817e27,
    0x5c5f7001,0xf997ec3f,0xfbf505f6,0xeafe87f3,0x2ebf20df,0xb027c41f,
    0x9707e81f,0x1f90df99,0xd3f503f2,0x3ee9d9ff,0x4017e203,0x3217e46e,
    0x1fbff13f,0x21b66e60,0x25fddffe,0xe81fbafb,0x12fb80af,0x1be00bf5,
    0x207e43f2,0xebf9fbec,0xfd803fb5,0x321fd400,0xf517e42f,0x7d405dff,
    0x9fe2fe81,0x881fbafb,0xd4f984fe,0x1be001df,0x207e43f2,0xebf8edde,
    0x9f300fd4,0x7d40fd80,0x36217ec4,0xbf884fff,0xfd1fa1ca,0x07ee7ee1,
    0x3e602bfa,0x2009f934,0xf90fc86f,0xf9edce81,0x001fb4fa,0x427c40fd,
    0x0ff10ef8,0x361feb72,0xfd0fdfae,0x73d50fe8,0x204f883f,0x803743fb,
    0xf90fc86f,0xfaedce81,0x005f72fa,0x07f205f7,0x1ff67fec,0x546f8cd8,
    0x3a7d5c9f,0x2e31fe27,0xb027c41f,0xf007d83f,0x3f21f90d,0x7ffe6f40,
    0x009f30ef,0x01be21be,0xf987fff7,0x223ffefd,0x25f1d73e,0x23febbfe,
    0x441fbbfc,0xb0df104f,0x321be00f,0xed81f90f,0x7c0b89c8,0x41fc800f,
    0x2fb802fb,0x2dfffd88,0x4bfd1364,0x643ffffd,0x7cc1fbaf,0xf903fd03,
    0xf90bf300,0x3f703f21,0x100bf500,0x3007e8bf,0xf987dbff,0x01100000,
    0xd511fb84,0x209f903f,0x55642df9,0x3f6aa3fe,0x22357f90,0x703989ef,
    0x4497009f,0x3f6a002c,0x0003d41d,0x98fdc000,0x809d03ff,0x3ffe0feb,
    0x87fffc4f,0x3e63fffc,0x17604fff,0x00000000,0x70000000,0x0000043f,
    0x98099881,0x26662199,0x00009880,0x00000000,0x88000000,0x00000001,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00a00000,0x04c40000,0x83fc87f9,0x00d4c019,
    0x7bd09dd9,0x6ff41bff,0xbdffd702,0x1fffffc8,0x03f57e20,0x03f44fc8,
    0x4409fff9,0xdf31fffd,0x1fd40fe8,0x0efffe88,0x227ee7e4,0x25fddffe,
    0x7e45ffec,0x3f25fcbe,0x200bfeab,0x200fd5f8,0x303f43fb,0x7ec09f95,
    0x47fa0bac,0x03fa85f9,0x8bff79fd,0x5fd17e6f,0x97f443fc,0xe97e27f8,
    0xf100bea7,0x80801fab,0x04fa807e,0x94fb81fe,0x7fffdc3f,0xf8bf54ff,
    0x3ea3fa0f,0x03fa3f44,0x127ccff2,0xfc8fecbf,0x5fffeb81,0xf92fdcfd,
    0xfbfe89ff,0x027d40df,0xfb7c40df,0x677ee546,0xfd87f72c,0x217fbea2,
    0x3307f47e,0x893ea3fd,0x3fffea5f,0xfcbefc84,0x83beafd5,0x7f44fdca,
    0x7d43fedf,0x77ff74c4,0x3fcfc85e,0x5f907f50,0x3fea3fc8,0xf13f4535,
    0x327ffc4f,0xbd2fdcbf,0x4ff10153,0xdf3fd5f8,0xfd13ea01,0x9f517e65,
    0xccffcc98,0x00fff984,0x85f907f5,0xfddf32fc,0x5dff4f95,0x037e23fe,
    0x97ff73fa,0x4c2accff,0x7f57e24f,0x13ea01ff,0x2a2fc4fd,0x201be04f,
    0x0fea05fe,0x23fb13ee,0x7eff89fc,0x20fffffa,0x7fff303e,0x7fffe4bf,
    0xf893ea5f,0x409f9fd5,0xf13f44fa,0x3e04fa8b,0x201fe806,0x0ef984fa,
    0x47f61ff1,0x23fa4ff9,0x21002600,0xe8bf35f8,0x7dcbf30f,0x07fd1fd5,
    0x44fd13ea,0xf027d45f,0x13f6a60d,0x4557ff30,0x23fecffe,0x5ffbaefb,
    0x0ff301fa,0x77d57e20,0xcfe8ff31,0x22fd5ffd,0x3f2aa1ff,0x7c4fd2ad,
    0x55bf9555,0x3ff20df0,0x9fff9004,0x41fffec4,0x4fddfffc,0x06f980fd,
    0x7fe4bf10,0x7fcc1eff,0x54fd5faf,0xffffd0ff,0x5f89fadf,0x0dfffffd,
    0x002620df,0x80080260,0x02006200,0x99881300,0x00000400,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xa980d440,
    0x4cccc40a,0x9804c401,0x2204c41a,0x40355301,0x353009a9,0x33331001,
    0x10980c43,0x83333333,0x21999999,0x20dfffd8,0x324ffffc,0x441fffff,
    0x74c2fffd,0x9f50efff,0x3fa60fe8,0x7fd41fff,0x7ffdc6ff,0xf92fc87f,
    0x43ecffff,0xffff53f8,0x7ffc1fff,0x33f67fff,0x26aa4fd9,0x9bf91ffa,
    0x67fc4199,0x457f40ab,0xe89f54fb,0x2a73fa0f,0x2b3fea0b,0x2afff24b,
    0x535ff85b,0x43e4ff55,0xfb5513f8,0x66641559,0x4bf35fec,0x5f900ff8,
    0x2fd803f2,0x2bf13fc0,0x887f44fa,0x817f407f,0xda800ff8,0x33e4fd01,
    0x0bf20be2,0x7d43fe20,0x303ffd13,0x04dfe4fd,0x404d47fc,0x51fd9dfc,
    0x3e0fe89f,0x07f881ef,0x400013ea,0x3ea3ee7e,0x2fc82f99,0x3ee3fe80,
    0x22fdffaa,0x3f22fffc,0x3fe25fff,0xfd82ffff,0xd13ea3ff,0x77ffcc1f,
    0xfb817e62,0x000fff93,0x7e47dcfd,0x2fc81f9b,0x3ee2fdc0,0x21fc8dfe,
    0x313ffca9,0x3e69fd73,0x4c7fb9bf,0xf51ffdff,0x5c40fe89,0x0df33ffe,
    0x7fca9fe4,0x4fd01eb8,0xf9eff8fb,0x2202fc81,0x1ffd40ff,0x1be201fb,
    0x46f8afd4,0x543fa0fe,0x7e89f36f,0x7f8b7e40,0x0fd13ea0,0xa9fa0dfd,
    0x0fbfbfbf,0x3fa02fc8,0x3e26f882,0x5c1be606,0x7e83fe5f,0x26ff1be2,
    0x2603fc5f,0x440ffa6f,0x2a1fa0ff,0x2a7f887f,0x0fef8ddf,0xbf702fc8,
    0x7f5efec0,0x3ff2aee2,0x3ffb7773,0x27edf7e4,0x93f2b3fe,0x23fdacfe,
    0x3ffccce9,0x9b73bfea,0x87fccffc,0xfd7995f8,0xfd9ffcc9,0x882fc80f,
    0x25eeeeff,0x742fffd8,0x3f62efff,0xffc81dff,0xfffe984f,0x3fffa20c,
    0x7ffffc44,0x4fffea83,0x12ffffdc,0x3fee1dd9,0x43fe60df,0x05f907fb,
    0xfffffff1,0x20098020,0x10030008,0x98801003,0x08801000,0x00103c98,
    0x00000000,0x00000000,0x00000000,0x00000000,0x33000000,0x22062033,
    0x20333309,0x304c4098,0x20cc1883,0x4c026219,0x20330cc1,0x33333109,
    0x406204c1,0x99988099,0x3ffe0099,0x21fe44ff,0xfffff2fd,0xf337d419,
    0xc8bfe61f,0x2e3ff10f,0x7c0fee7f,0x2fd9bee7,0xfffea7dc,0xe89f34ff,
    0xc87ff887,0x323fffff,0xff95ff2f,0xf987fc47,0x3faabfe6,0x3fd97ec5,
    0x0fc9bfe6,0x9ffa7ff3,0x22ff03fb,0xb13ee0ff,0x33f6aa3f,0x7e89f31a,
    0x641fffb8,0x3e0aaacf,0x27dcff5f,0xf17ecff2,0x3e63fc4f,0x7fcc6f9e,
    0x3e61f92f,0x70fdf8ee,0x7edfe07f,0x1fe3fc42,0x89f30bf2,0x3fbfd87e,
    0x3b5017e4,0x443fc9fe,0x3fc6f9ff,0x3fff61fe,0xcafe7cc2,0xf7f7f50f,
    0x40fee1f7,0xfd05faff,0x3f213e63,0x4ccefcc2,0x6f8ef87e,0xff0017e4,
    0xf901bfdd,0x2a7f83fd,0x86ff886f,0xfc9fdbf9,0x59ff3f50,0x7c0fee1f,
    0x7f900fff,0x0bf20bf2,0xfffffff3,0x41fd3fa8,0x01eeeefc,0x403bfbfe,
    0xeff86ff8,0xffa81fff,0x7cdfcc0f,0xb1f50fcd,0x3ee3f55f,0x07fbff03,
    0x407f57e6,0x677cc2fc,0x8fe47fcc,0x3bbf22fc,0x7c3261ee,0x7e40bf77,
    0x0bceff82,0x98bfbfd0,0x21fbfb3f,0x3f57b8fb,0x47fc0fee,0xf3ff00ff,
    0xf30bf20b,0x67f47e89,0x0bf25fdc,0x74ff5ff8,0xf05f901f,0xf19f700f,
    0xfa9fcc3f,0xf50f70ff,0xbfc0fee3,0xfbf905fb,0xf30bf207,0x3fe67e89,
    0x3f27ffff,0x3fcff602,0x0bf20bf7,0x1ff101fe,0x23f99bee,0x30f90ffe,
    0x333bee5f,0x1ff4ff3c,0x2e07ffd4,0xf32cdfec,0x0bee7e89,0x00bf23fb,
    0x1ff13fc1,0x0ff05f90,0x97fc4fc8,0x43fee3f9,0xf72f987c,0x9fedffff,
    0x7fc40ff9,0xfffffe86,0x27e89f34,0xca7dc0fd,0x0000002f,0x00000000,
    0x00000000,0x00000000,0x99988000,0x13331099,0x33026200,0x01530013,
    0x02a60098,0x06666666,0x40000c31,0x00005419,0x3ffff200,0xfffff54f,
    0x237fc407,0xa85fffff,0xea84ffff,0xfffe985f,0x3ffffe24,0x1f9b647f,
    0x503fffe4,0x07fe61ff,0x217ffec4,0x7e43fffc,0xbf51aaac,0x3607ff95,
    0x557fc6ff,0x5df643fd,0x3fffa2ff,0x74d7fc45,0xb999912f,0x1f56d8df,
    0x82556fe4,0x7fd41efb,0x6e6ffc42,0x3ff3bf23,0x7d40bf24,0x3ea1fe64,
    0xf337c6fb,0x323fb80b,0x27d45f9b,0x97ec0bf3,0xefeeffe9,0xfd807fb2,
    0x47fd300e,0x4df104fc,0x40bf27f8,0x10ff44fa,0x4df1bedd,0x1fe403fc,
    0x97ea2fcc,0x4df106f8,0xcfecefc8,0x839fff51,0xfe8805fe,0x3ea01fd4,
    0xffc87f44,0x89f52fff,0x7c7f22fd,0x2fffffc6,0x2603fe20,0x5e7fc45f,
    0x07f907fd,0x3261b27f,0x3fea1fff,0xe8f7dc02,0xe89f500f,0x999bf90f,
    0x3fd13ea3,0x7c6f93e6,0x105fecaf,0x17e605fd,0x1bfbffea,0x4be21fe2,
    0x227e405d,0xdfb03fe9,0xf981fec1,0x2fc9fe27,0x7fc49f50,0xffdddf90,
    0xff89be5d,0x301ff440,0x7cc440bf,0x7e43fc85,0x327fffff,0x882feaab,
    0x17fa25fe,0x8f737fe6,0x23fecefe,0x49f502fc,0x3fff65fc,0x4df3ffff,
    0x17f446f8,0x36017e60,0x207fc42f,0x2dfabfc9,0x013ffff6,0x501f44bb,
    0x6c45fffd,0x6fe43fff,0x9df52ccc,0x6f803fff,0x1ff667fc,0x97bbbffa,
    0x24cefdcb,0xc85ffdcb,0xf11f503f,0x00013107,0x01002000,0x53fffff2,
    0x00cefffa,0x77ffc6f8,0xfffff82c,0x3ffffa7f,0x0b7ffa7f,0xbdc03fe2,
    0x000002f8,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x05f89fe0,0x90ff2000,0xa7c1fa7f,0x34fffffd,0x03fe21ff,
    0x2eeee3d9,0xfea822bb,0xffeb84ff,0x37fef7a3,0xf79f9d70,0x3e07ee09,
    0x57e57e27,0x0fa81ffe,0x43fa37cc,0x973f887d,0x7e47ff99,0xbff05fb5,
    0x53fffffa,0xb55972fc,0x6d6fd47f,0xfdbffd3f,0x3bf7bee7,0x81fb80fc,
    0x7e57e27f,0x2ee6fcdf,0x3fa1d8f9,0x47e4bf31,0xc82f99ea,0x5fdfe85f,
    0x3200df70,0x749f302f,0x32feb7c7,0x3ea7eebf,0x1fb82faa,0x657e27f8,
    0xefb9fa5f,0x53ee2eef,0x367ee1fc,0x7d41facf,0x0fff880e,0x2eee9f30,
    0x43f72bbb,0xf15feedb,0x3affdddf,0x47dd7e27,0xf52f99fa,0x21ffffff,
    0x7e57e27f,0xdff50622,0x8df6f883,0xfbfffbf9,0x4407fe20,0x76440fff,
    0xffffff0e,0x6fec7aab,0x9df15fbb,0x89fa9999,0x3f51f75f,0x373265f3,
    0x4fd0ccdf,0x405f95fc,0x43fdfdfd,0x7c43fcfc,0x747efbfe,0x3f7fa02f,
    0x000164c5,0xf2fd4ff1,0xbf13f40f,0x267ea3ee,0xd81fb82f,0xf95ffddf,
    0x47cccc05,0x07ffcc0a,0x26ffb7fc,0x22cccffc,0x007fd4fc,0xf77ff000,
    0x5577e4bf,0xafc4fd2b,0xf99fa8fb,0xf981fb82,0x5f95faff,0x7401d300,
    0x367fd05f,0x3ffffa5f,0x7c4df54f,0x5400001f,0x645fafff,0x4fd3ffff,
    0xf51f75f8,0x19305f33,0x02fc80c0,0x00000000,0x00000000,0x00110018,
    0x00000000,0x00000000,0x00000000,0x10000000,0x20804403,0x3d700008,
    0xaa844444,0x01aaaaaa,0x00000000,0x00000000,0x3ee07fb0,0x47fafc45,
    0x23711efc,0x3ffe6ff8,0xffffff6f,0x00000bff,0x00000000,0x9f500000,
    0x897e601f,0x6fd4dd5f,0x361fbbfe,0x4f33323f,0x99999999,0x00000000,
    0x00000000,0x0bd3e800,0x5cdd4f80,0x10dffd17,0x00000000,0x00000000,
    0x2e000000,0x4003f50f,0xaa80bb3e,0x00000000,0x00000000,0x00000000,
    0x004d85b1,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__consolas_bold_16_usascii_x[95]={ 0,3,1,0,0,0,0,3,2,1,1,0,1,1,
2,0,0,0,0,1,0,1,0,0,0,0,2,1,0,1,1,2,0,0,1,0,0,1,1,0,0,1,1,1,
1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,1,1,0,0,0,0,1,1,
0,1,1,0,1,0,1,0,1,1,0,1,0,0,0,0,1,1,3,1,0, };
static signed short stb__consolas_bold_16_usascii_y[95]={ 11,-1,-1,0,-1,-1,0,-1,-1,-1,-1,2,8,5,
8,-1,0,0,0,0,0,0,0,0,0,0,2,2,2,4,2,-1,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,0,12,-1,2,-1,2,-1,2,-1,2,-1,-1,
-1,-1,-1,2,2,2,2,2,2,2,0,3,3,3,3,3,3,-1,-2,-1,4, };
static unsigned short stb__consolas_bold_16_usascii_w[95]={ 0,3,7,9,9,9,10,3,6,6,7,9,5,6,
4,8,9,8,8,7,9,7,9,8,8,8,4,5,8,7,7,6,9,9,8,8,9,7,7,9,9,7,7,8,
7,9,9,9,8,9,8,8,9,9,9,9,9,9,8,5,9,5,9,9,6,8,8,7,8,8,9,9,7,7,
8,8,7,9,7,9,8,8,8,7,8,7,9,9,9,9,7,7,3,7,9, };
static unsigned short stb__consolas_bold_16_usascii_h[95]={ 0,13,5,11,14,13,12,5,16,16,8,9,6,3,
4,14,12,11,11,12,11,12,12,11,12,11,10,12,10,6,10,13,16,11,11,12,11,11,11,12,11,11,12,11,
11,11,11,12,11,14,11,12,11,12,11,11,11,11,11,16,14,16,6,3,5,10,13,10,13,10,12,13,12,12,
16,12,12,9,9,10,13,13,9,10,12,9,8,8,8,12,8,16,17,16,5, };
static unsigned short stb__consolas_bold_16_usascii_s[95]={ 105,124,36,74,95,105,117,124,59,13,64,
37,110,59,54,76,1,47,38,11,19,19,27,65,37,56,122,84,92,116,101,
10,49,104,29,65,9,1,114,74,94,86,90,67,59,49,39,107,20,85,1,
56,108,46,76,98,29,10,118,43,66,37,19,66,29,1,115,109,36,10,78,
26,62,54,28,45,70,27,19,117,1,17,55,84,98,47,72,82,100,88,92,
20,1,5,44, };
static unsigned short stb__consolas_bold_16_usascii_t[95]={ 15,1,80,58,1,1,19,70,1,1,70,
70,70,80,80,1,33,58,58,33,58,33,33,58,33,58,46,33,58,70,58,
19,1,46,58,33,58,58,46,33,46,46,33,46,46,46,46,19,46,1,46,
33,33,33,46,33,46,46,33,1,1,1,80,80,80,70,1,58,19,70,19,
19,19,19,1,19,19,70,70,58,19,19,70,58,19,70,70,70,70,19,70,
1,1,1,80, };
static unsigned short stb__consolas_bold_16_usascii_a[95]={ 141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT or STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_16_usascii(stb_fontchar font[STB_FONT_consolas_bold_16_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT][STB_FONT_consolas_bold_16_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_16_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_16_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_16_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_bold_16_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_16_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_16_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_16_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_16_usascii_s[i] + stb__consolas_bold_16_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_16_usascii_t[i] + stb__consolas_bold_16_usascii_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_16_usascii_x[i];
            font[i].y0 = stb__consolas_bold_16_usascii_y[i];
            font[i].x1 = stb__consolas_bold_16_usascii_x[i] + stb__consolas_bold_16_usascii_w[i];
            font[i].y1 = stb__consolas_bold_16_usascii_y[i] + stb__consolas_bold_16_usascii_h[i];
            font[i].advance_int = (stb__consolas_bold_16_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_16_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_16_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_16_usascii_s[i] + stb__consolas_bold_16_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_16_usascii_t[i] + stb__consolas_bold_16_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_16_usascii_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_16_usascii_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_16_usascii_x[i] + stb__consolas_bold_16_usascii_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_16_usascii_y[i] + stb__consolas_bold_16_usascii_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_16_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_16_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_16_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_16_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_16_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_16_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_16_usascii_LINE_SPACING
#endif

