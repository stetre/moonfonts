// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_bold_29_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_bold_29_usascii'.
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

#define STB_FONT_times_bold_29_usascii_BITMAP_WIDTH         256
#define STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT        110
#define STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_bold_29_usascii_FIRST_CHAR            32
#define STB_FONT_times_bold_29_usascii_NUM_CHARS             95

#define STB_FONT_times_bold_29_usascii_LINE_SPACING          19

static unsigned int stb__times_bold_29_usascii_pixels[]={
    0x01bc8015,0x065c4136,0x164c0660,0x7b975100,0x55554003,0x372a6202,
    0x554400ab,0x03b102aa,0x35775300,0x00395001,0x98003033,0xb8391000,
    0x00799503,0xb98002e4,0x554001bc,0xaaaaaaaa,0x4407d100,0x70bf05fb,
    0x26c401bf,0x401fff88,0x989acfd9,0x5cc03dba,0xbff507ff,0x01bff957,
    0x502bffe6,0x037ddfdd,0xcabdffa8,0xff500cff,0xbdd9101f,0xe987d35f,
    0xfffabfff,0x20fdc01d,0xf9bfd84f,0x00fd400e,0x7fe67e40,0x3fffe006,
    0x01ffffff,0x17f602f4,0x80ff517e,0x3fe604e8,0x00bb202f,0x3fa0075c,
    0x427fec47,0xf982fff8,0x3d3fc84f,0xfb109fd3,0x5fff109f,0xd07fffb0,
    0x1fffe49f,0x56f7ffcc,0x3e406ffd,0x1ff70fe6,0x4f8817fe,0x2e6fb800,
    0xff9802ff,0x6fffffff,0x2a04fa80,0x3a2fc0ff,0x03fa205f,0x3a20bfb0,
    0x034c000d,0xdffb1ffa,0x20fffcc0,0x37cc4ff9,0x3613e23d,0x3fea05ff,
    0x17ffe41f,0xff987ff6,0x6fff883f,0xdd027ff4,0x3ffc1fa8,0x1b601ffd,
    0xf32ffc00,0xfff7009f,0x07ffffff,0x7dc0ffa0,0x3fe2fc2f,0x4013f606,
    0x000bd100,0x4ffd025c,0x7402fffb,0x27fcc6ff,0x2e1e9ff2,0x017ffdc4,
    0xff71bffa,0x23ffd41f,0xff03fff8,0x07ffc87f,0x441f913e,0x0bffa7ff,
    0x220007ea,0x00ffc6ff,0x3604deec,0x0ff7001f,0x8bf07ff2,0x1ff307fe,
    0x00ed8000,0x740b0026,0x1ffff17f,0x24fffc80,0x7ff44ff9,0xf11c43d5,
    0xfc801fff,0x1ffe64ff,0xff88dff7,0x87fff03f,0x3310fffb,0xdd3337f5,
    0xe9ffe213,0x027c42ff,0x31fff980,0x881600bf,0x3fe6006f,0x7c0ffe83,
    0x6c07fec5,0x7ff5407f,0x4c07ea2f,0x0fee8dfe,0xbbff402e,0xfa806fff,
    0x13fe67ff,0x03fdfff7,0x4037ffdc,0x7fc7fffa,0x222ffec5,0xfff03fff,
    0x72fffa87,0xffffffff,0x7ffc9fff,0xed81ffd0,0xfff10000,0x00005d7b,
    0xff0013ee,0xbf0fff0d,0x7cc1ffb8,0xfffa805f,0x7fd41762,0x4c5ffe88,
    0x3f2ffd02,0xff9805ff,0x89ff30ff,0x04fffff8,0x2017fff2,0x3a0ffff9,
    0x22fffc3f,0xff03fff8,0x2fffa87f,0x999fd993,0x7dc59bfb,0xfa89ff0f,
    0x7ff40001,0xaaaaa84f,0x003fb000,0x7ec1ffe8,0x7fdc5f86,0x4027fdc0,
    0x5f12fff9,0x7fc5ff30,0xfe82443f,0x00bfffd7,0x263ffff3,0xfffa84ff,
    0xffe80eff,0xfff9805f,0xfb07f21f,0x3fff88df,0xfa87fff0,0x546e80ff,
    0xf59d701f,0x0027c41b,0x1bfffa60,0x400bbfea,0xfe8006f8,0x7c3fcc2f,
    0x7e427ec5,0xfff9804f,0xdff10f72,0x220fffc4,0x3feffd04,0xff8804ff,
    0x09ff32ff,0x3fffffa6,0x027fffc2,0x517fffcc,0x46ffb81f,0xff03fff8,
    0x87ffb87f,0x403e44f8,0x40ed81ba,0x32201bb9,0x85fffe9e,0x3ea001fd,
    0x3ffe8004,0x52fc4fa8,0x0fff60bf,0x64bffe60,0x2a3ffb86,0xd02986ff,
    0x17fff6ff,0x47fffe60,0x36204ff9,0x361fffff,0xf9805fff,0x21e61fff,
    0x3e21fff9,0x9fff03ff,0xf984ffd8,0x500036c3,0xfacfc85f,0xa87fd40d,
    0x1f43ffff,0x0007f600,0x5c413ff6,0x0776bf0f,0x9803ffe8,0xf0bb2fff,
    0x27fe41ff,0x97fe805c,0xf500dfff,0x3fe61fff,0xffffe804,0x01bfff24,
    0xb03fffee,0x2a7bff60,0xff03fffe,0xdff517ff,0x777f7541,0x03eeffee,
    0xff713e20,0xff893fe1,0x8ffffec5,0x37c4005a,0x04ffd800,0xeaafc9d7,
    0x07ffd01c,0x365fff30,0xf137fd44,0x740905ff,0x0ffff57f,0x4cdfff70,
    0xfae804ff,0x3ffea7ff,0x6fffc807,0x3fff6018,0xf03fff9e,0xbfff97ff,
    0xfffffb83,0x04ffffff,0xfff03b60,0x7e43ffe1,0x7fffc47f,0x54000e9e,
    0xffd0004f,0x5f83fb07,0x7fec0ff4,0x2fff9803,0x24ffb899,0x04987ffc,
    0xfffe9ffa,0x17ffe400,0xe8389ff3,0x3a1fff89,0x7ec00fff,0x988002ff,
    0x207fff10,0x01313fff,0x00fdc6e8,0x3e217d40,0x747ffa7f,0x7fcc1fff,
    0xd8003fff,0xffd0001f,0x5f86fb85,0x7fe437dc,0x2fff9804,0x54ffd8b7,
    0x0d88bffb,0xffa9ffa0,0x3ffe204f,0x3227fcc5,0x47fd8f41,0x2204fffa,
    0x2db86fff,0x0fffe200,0x1001fffc,0x8007c89f,0x7ff884f8,0x7ff47ffa,
    0x7ffdc0ef,0x880621ef,0x3fe0007f,0x7c37f40f,0x2a0ffdc5,0xff9805ff,
    0xffd8f32f,0x44ffbdbe,0x1ffa020c,0x7dc0fff9,0x27fcc0ef,0x3fa3d172,
    0x207ffc85,0x7d40effd,0xff1000ff,0x0fffe07f,0x3742f980,0xf807ec00,
    0x21fff0ff,0x40dffffc,0xabfffffe,0x013ea00e,0x742ffc40,0x7e45f87f,
    0x806ff81f,0x1f12fff9,0x4c77ffd4,0x543b55ff,0xfb87fe83,0x77fd40df,
    0x644ff980,0x3fe67a4f,0x81bff500,0xff905ffa,0x3fe2005f,0x3fff883f,
    0x9f07ee00,0x202fa800,0x4bff0ffb,0xdfffffe8,0xffffcdfc,0x0fec02ff,
    0x81ff9800,0x22fc0ffd,0x7fb80ffd,0x22fff980,0x837f224c,0x0582ceeb,
    0x3f220ffd,0x02dfecdf,0xfb513fe6,0x019fdfbf,0xfcdfed88,0x3fe203df,
    0x3ffea006,0x2fffd40d,0x3f98f900,0x2013e200,0x40efabfd,0xefffffd8,
    0x13fffa61,0xc8001fe0,0x83ff906f,0x883ffc5f,0x7fcc02ff,0x0000f42f,
    0x07fe80dc,0x805fffd8,0x33104ff9,0x54c0005f,0x7000c000,0x4c999999,
    0x00cccccc,0x005442a8,0x2a001b70,0x54c402cc,0x88014c01,0xff10001a,
    0xf0bfee03,0x2a06ff8b,0x7ffc406f,0x200034c1,0x01ffa04a,0x00ffffe6,
    0x3b009ff3,0x00000000,0x00000000,0x00000000,0x00000000,0x01fb8000,
    0xb17e1fee,0x41fb80df,0x0fff89e9,0xb8000db8,0x803ff403,0x202ffffa,
    0x00004ff9,0x00000000,0x00000000,0x00000000,0x00000000,0x7402fa80,
    0x7445f82f,0x90f5c01f,0x9817fe9f,0x07b3003e,0x4c00fff0,0x1bdffffd,
    0x00017fe6,0x00000000,0x00000000,0x00000000,0x00000000,0x54019500,
    0x10bf02ee,0x6cc019fb,0x1ff5df31,0x1359d700,0x4017b753,0x005eedc8,
    0x41579930,0x002ceee9,0x00000000,0x00000000,0x00000000,0x00000000,
    0x02200000,0x00180590,0x8002cb88,0x01abcb98,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,
    0x026c0597,0x06aaaaa6,0x05555544,0x55555544,0x006602aa,0x01579730,
    0x55007a60,0xca803555,0x2aaaa202,0x0b2a0001,0x55555540,0x2ea2002a,
    0x6dd4c00b,0x300e0acc,0x062179b7,0x005e6e54,0x41579730,0x2f72a028,
    0xffabfd81,0x54407c83,0x881fffff,0x2602efeb,0x1afffffb,0x77e7fe44,
    0x7ec43eee,0x802ffb9d,0xffc9807c,0xb3bf503f,0xfff7105f,0xfff90007,
    0x7fcc07ff,0x805fffff,0x4402efc9,0xfdabeffd,0x3f207cdf,0x2ddfebad,
    0x7fe4df44,0x3ff6601f,0xdcefebdf,0xfbafe883,0xfc97f61f,0x4017cc2f,
    0x00effff9,0x3f6003f3,0xffe884ff,0x459bff50,0x7fe47fe8,0x88027c01,
    0xff883fff,0xf101ff31,0xfa8007ff,0x00ffffff,0xfffffff9,0x02ffb805,
    0x881effb8,0x9f907fea,0xfc85fd50,0x4c17ff60,0xfb882fff,0xa8ffd83f,
    0x49ff73ff,0x27c1fff9,0x5fffff80,0x7ec003e0,0x5ffc83ff,0xf703bfe2,
    0x05ffa8bf,0x7c400be6,0x47fd83ff,0x7fff06ff,0xd986c400,0xfff03fff,
    0xd80fffff,0xffc801ff,0x43fc402f,0x5f501ff9,0xff71ffc4,0x3fff983f,
    0x3e61fd40,0x7ec570ff,0x0fffe23f,0x3f7a00f9,0x00f04fff,0x741fffe4,
    0x17ffc4ff,0xff11fff6,0x2003e40d,0x7fcc3fff,0x7c17ff46,0x20a003ff,
    0x5a84fff8,0x05ff9000,0x00bfff30,0x0ffee1ea,0x97fe62e8,0x3e63fff9,
    0x87b005ff,0xff00fffa,0x45fff89f,0xfd6801fa,0x00f05fff,0x741fffe4,
    0x17ffc4ff,0xf993fff2,0x1017a03f,0x2e1fffc3,0x1fff46ff,0x0131fffc,
    0xb03ffd00,0xffa80019,0x3fffd007,0x7fe43400,0xdc85502f,0xe87ffea1,
    0x75001fff,0x880fffa8,0x7ff44fff,0x16804f87,0x781fffff,0x0ffff200,
    0xfff17fee,0x2bffff50,0x5f300efb,0x27bffaa0,0x7fe43fff,0x7c27ff46,
    0xdfffbbff,0x20ffe001,0x03effff8,0xa804ffe8,0x0c007fff,0x0effffd4,
    0x26ffc800,0x000ffff8,0x7ffffc42,0x45fff86f,0x36c0fffd,0xffff3340,
    0xf9003c1d,0xffd107ff,0xfe81ffcc,0x00dfdfff,0x3fea03ee,0x87fffd35,
    0x7ff46ffd,0x9effff86,0xc800effc,0xffff506f,0x3e607fff,0x0cefedff,
    0x003fffdc,0x7ffffc40,0x7fc000df,0x1fffea0e,0xfffb9800,0x47ffe809,
    0x1fa86ffd,0x3ffee340,0xfc801e5f,0x3bee03ff,0x3a202ffb,0x401fffff,
    0x0fff885e,0xfd0fffe6,0x87ffe8df,0x7ff44fff,0x3fff6a05,0x7fffec0e,
    0xfc84ffff,0xefffbcff,0x01bfff60,0x7fffcc00,0xf7003fff,0x0bfff90b,
    0x0fffa800,0x747fff50,0x03f884ff,0x7fffe434,0x7fe400f3,0x2ab2e03f,
    0x3fffa000,0x07f101ff,0xfff0fff7,0x746fff87,0x7ffc0fff,0x703ffdc3,
    0xa8dffffd,0xfffffdcb,0x137ff42f,0x7ff49fff,0x2600005f,0xdffffffe,
    0xfe827400,0x540005ff,0x3f200fff,0x2fffeeff,0xd0680db0,0x00f3ffff,
    0xd81fffe4,0xbfd88006,0xb81fffff,0x86ffc80f,0x7ffc3fff,0x7c3fff46,
    0x7ffd43ff,0x7fffdc01,0x7ffed400,0x3637ffc5,0x3fff67ff,0x33333106,
    0x7fdc0333,0x2204ffff,0x1bfff605,0x1fff5000,0xfacdc980,0x01f700ff,
    0xfffe8834,0x3ff2007f,0xabffa83f,0xfd101aaa,0x13fffe69,0x2fff41b6,
    0x3f61fffc,0x437ff46f,0x7fd43fff,0xfffb802f,0x8fff9003,0x7fe46fff,
    0x0ffff70f,0x3ffff662,0x3f22022d,0x0a607fff,0x007fffb8,0x007ffd40,
    0x881bff20,0xf981a03f,0x81107fff,0xfb83fffc,0xffffffff,0xf317fe43,
    0x03f88fff,0xfff0dffd,0x746ffc87,0x3fff84ff,0x400fffd4,0x2003fff8,
    0x3ffec7fd,0x7cc3ffee,0x3e200fff,0x80640fff,0x101fffe9,0x7fffcc01,
    0x3fea0000,0x7ffc000f,0x0d02f401,0x987fffa8,0x3fff24ff,0xffffe882,
    0x3a1fffff,0x7ffec1ff,0x7e407ea0,0x43fff87f,0x7ff46ffb,0x543fff83,
    0x3f6007ff,0x13ea001f,0xffa8fff9,0x00ffffc7,0xc81ffff1,0x0bffa202,
    0x2ffff800,0x3ffea000,0x0ffee000,0x03403ee0,0x7e43ffe4,0x07fff67f,
    0x777777d4,0x3ffe3fff,0x363ffdc1,0x21ffea06,0x7fc43fff,0x7c0fff47,
    0x2ffdc3ff,0x800df500,0x7ffd42f9,0xf317fea0,0x7fc40bff,0x5c06c87f,
    0x0cb881ff,0x01bffea0,0x3ffea054,0x07ff7000,0x1e60be60,0x7cc3fec0,
    0x03fff64f,0x7ec40ff2,0xf70bff62,0x2204f89f,0x3fea2fff,0x7c7fd83f,
    0x89fff05f,0x3be61ffc,0x7e41fc81,0xfb05c81e,0x417fdc7f,0xf102fffb,
    0x09f90fff,0xffc82fec,0x27ffd406,0xff503ae0,0xefc8801f,0x5c2f4001,
    0x07e8802f,0x3ffe23fb,0x7405fd02,0x3637fc47,0x200fd46f,0xfeb9effd,
    0x7f440eff,0x3e01ff52,0x0ffe26ff,0x2619fff5,0xcfffe83f,0x7f440970,
    0xea80ff66,0x7fc40aff,0x84ffc87f,0xffd00ff9,0x9fff500f,0x0376a215,
    0x4c07ffee,0x90002dfd,0x6ffff54f,0xd883cc01,0x202efedf,0xba9abfe9,
    0xefd980dd,0x07c83fec,0xf1bfff90,0xfb1079df,0x67c01df9,0x03eeced9,
    0x1bdffffb,0x3ffff660,0xdfd8803d,0xfd9003ed,0x5bffb9bf,0xbfb79901,
    0x54019fd9,0xb73004ff,0x07dfdfff,0x0fbffff2,0x10000131,0x03000015,
    0x2000a988,0x00abccaa,0x2a01a988,0x18262001,0x20026200,0x88005441,
    0x00cc001a,0x40001300,0x18019aa9,0x8004d4c4,0x2a200008,0x00000001,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xaaa80000,0x5531aaaa,0x98555555,0x55512aaa,0x4c355555,
    0x550aaaaa,0x03555555,0x54355555,0x22001aaa,0x2aaaaaaa,0x2aaaaaa2,
    0x55555550,0x55553035,0x55555543,0xaaaaaaaa,0x5555531a,0x00333555,
    0x555440c0,0x009aaaaa,0x00155554,0x55530f26,0x2a003555,0x10aaaaaa,
    0x04035555,0x33ffffa6,0xfffff510,0x1ffa8815,0x9ffffb31,0x77f54413,
    0xffffb309,0xff73013b,0x2fffd43d,0xffff7100,0xffd983bf,0x3fff261c,
    0xfa8809ff,0x3bffe0cf,0xdcffffdc,0xfb313ffe,0xffb99fff,0x2540019f,
    0x7fffe4c4,0x80bffffd,0x4005fffa,0x32623ffe,0x8807ffff,0x21bfffff,
    0x984fffc8,0x7ffc46ff,0xffffb82f,0x3e60ba00,0x3e600fff,0x07fffd01,
    0x3ffe0bd0,0xfffb8005,0x407f504f,0x400ffffd,0x2a1ef84e,0x1fdc5fff,
    0xd11fffe6,0xf1003dff,0x27fff809,0xf80efffa,0x3e2005ff,0xfff884ff,
    0x7f6402ff,0xfff106ff,0x85fff909,0xff05fffd,0x41e205ff,0x4407fff8,
    0x1bffee07,0x7ff403e0,0xfffb0005,0x8809b01f,0x2603ffff,0xffa85f06,
    0x7c43c85f,0xfffa87ff,0x404fd805,0x7fe47fff,0x05ffe85f,0xf8077e40,
    0x7406fffc,0x3e06fffb,0xfffb84ff,0x83fffcc0,0x9505fffc,0x01fffe20,
    0xffff881e,0xfe812a02,0xff10005f,0x005b8dff,0x201ffff7,0xff50d02e,
    0xf88730bf,0xfff887ff,0x9ffd100f,0x4c7fff80,0xffe87fff,0x7c008005,
    0x501ffff8,0x40bfff59,0xec884fff,0x05fffd03,0xb01ffff1,0x1fffe203,
    0xfff901e0,0xfd00f40b,0x7dc000bf,0x01d33fff,0x427fffc0,0x3ea0605a,
    0xf88305ff,0xfffd07ff,0xffffd105,0xffff07ff,0x40ffff88,0x00625ffe,
    0x7ffede00,0xfff53b04,0x027ffc0b,0x86fffb80,0x443ffff9,0x1fffe206,
    0xfff101e0,0xe80b301f,0x3ffaa5ff,0x7ffec03e,0x54001e9f,0x3a20ffff,
    0x7ffd4000,0xffff1005,0x207fffe0,0xaadfffa9,0x547fff80,0xffe85fff,
    0x41effd8d,0xf03fffe9,0x303fffe6,0x817ffead,0x10004fff,0xdc83ffff,
    0x01dc6fff,0xf00ffff1,0x09fffb00,0x5ffe803b,0xf88027cc,0x0002ffff,
    0x1e49fffd,0x2fffd400,0x87fff880,0x7c06fff9,0x7ffc04ff,0x417ffe47,
    0xfdbeeffe,0x7ffcc0ff,0x7fff4f03,0xfffa9643,0x013ffe05,0x24fffd80,
    0x1ffff8e8,0xfff8803a,0xf9807807,0x403447ff,0x01ec5ffe,0x0ffffea0,
    0x7fffd400,0xf5000699,0x3e200bff,0x7ffd47ff,0x27ffc00e,0x5c5fffe0,
    0xffd04fff,0x07ffe23f,0x53c0fffe,0x2a68dfff,0x3fe05fff,0x3e60004f,
    0x7e52e7ff,0x880b35ff,0x07807fff,0x647fffd0,0x25ffe802,0xffb0003c,
    0x360003ff,0x002edfff,0x00bfff50,0x3bbfffe2,0xf002efff,0xfff809ff,
    0x00dfffef,0xff897ffa,0x03fff82f,0x72ffff8f,0x02fffd49,0xb9109fff,
    0x3fffe803,0x3fffe61d,0x7fc402c8,0x7007807f,0x01a2dfff,0x0fcafff4,
    0xffff7000,0x3fe6000d,0x2a0005ff,0xf1005fff,0x3fff2fff,0x9fff000f,
    0x09ffff80,0xf17ffa00,0x7fff07ff,0xbfff71e0,0x5fffa83a,0x3613ffe0,
    0x3ee01fff,0x7f459eff,0xf8806bff,0x03c407ff,0x773ffff0,0x337ffa00,
    0xe98005ff,0x003ffffb,0x007fffb0,0x02fffd40,0x3a7fff88,0xff005fff,
    0x7fff809f,0x45ffe800,0xfff83fff,0xfff88f03,0x7ffd45bf,0x213ffe05,
    0x2203fffe,0x5c1effff,0x8804ffff,0x3c407fff,0xdbfff900,0x3fffa001,
    0x2003fffe,0xffff91e8,0xfff90003,0x7fd40007,0xfff1005f,0x1ffffccf,
    0x2027ffc0,0xe8007fff,0x1fffc5ff,0x8781fffc,0x541ffffd,0x3fe05fff,
    0x5fffa84f,0x437ffec0,0x001ffff8,0x4c01fffd,0x3ffe2006,0x3ffa004f,
    0x001fffb5,0xffff88ba,0xfffc8006,0x3fea0003,0xfff1005f,0x1ffffb8f,
    0x2027ffc0,0xe8007fff,0x1fffc5ff,0x8781fffc,0xfa86fff9,0x3ffe05ff,
    0x300ba104,0x3f607fff,0x3ff6006f,0x0012e00f,0x4001fffb,0xfff15ffe,
    0xf509900d,0xc8007fff,0x20003fff,0x1005fffa,0xffb0ffff,0x4ffe80df,
    0x0ffff011,0xf8bffd00,0x3fff83ff,0x0fffa0f0,0xf817ffea,0x01e204ff,
    0xfa807ff4,0x3fee003f,0x001d304f,0x4005ff98,0x3fee5ffe,0xd81b204f,
    0x2001ffff,0x0004fffd,0x401bffea,0xf887fff8,0x3f204fff,0xfff05bff,
    0xffe8001f,0x20fffe25,0x20f04fff,0xffa80ffa,0x13ffe06f,0x9f7003c8,
    0x4000ff80,0x510bfffb,0x3fa0003d,0x37ffc001,0x3207fffa,0x3ffe604f,
    0xffd000ef,0x7dc0009f,0xff3007ff,0xfff501ff,0x6ffe405f,0x1ffff880,
    0x337ffc00,0xff88bfff,0xf01fa85f,0x1fffee09,0x442fffc4,0x07e2001c,
    0x2a000b90,0x2efffffe,0x001ae000,0x26bffffb,0xf73ffffe,0xea85bfff,
    0x03ffffff,0xfffffb71,0x32a00179,0x0bdfffff,0xffffec98,0x7ffec0ce,
    0x220200df,0xceffffec,0xffffd801,0x3ffffe8d,0x29ffffd3,0x41dfffc9,
    0x7ffe541b,0xfd30bdff,0x00189fff,0x00110030,0x009a9880,0x00003000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xaa980000,0x01aaaaaa,0xaaaaaa88,0x555540aa,0xaaa982aa,
    0xaaaaaaaa,0x5555442a,0xaa89aaaa,0x32aaaaaa,0x55555555,0x2aaaaa23,
    0xaaaaaaaa,0x5555530a,0x55555555,0xaaaaa985,0xc8019aaa,0xb12effff,
    0x2aaa29ff,0x09aaaaaa,0x00014000,0x2a003930,0x0aca8802,0x40072600,
    0xdffffd98,0xfc988009,0xb981dfff,0xfd80bfff,0xfeccccff,0x64c43fff,
    0x309dffff,0x15dffff7,0x3ffff262,0xff93109d,0xfddb9bff,0x3f2623ff,
    0xeedccfff,0x7ecc47ff,0xfffedfff,0x3fff201d,0x36624e83,0xffedffff,
    0xf88003ff,0xfe880000,0x0ffee203,0xfffffd88,0x005f5001,0x01ffff88,
    0x03ffff00,0xfd006fcc,0x1bfffa05,0x01ffff88,0x2207fffd,0x3e01ffff,
    0xfea81fff,0x07fffc41,0xff983fdc,0x27ffdc7f,0xf86fff88,0x47fff880,
    0x4004fffd,0xd80004fb,0xffc883ff,0x3ff603ff,0x801fffff,0x7c4002fa,
    0xf0000fff,0x3a203fff,0xf701f804,0xff803fff,0xfffb00ff,0x07fffc07,
    0x203ffff0,0xffff81f8,0x3e60f500,0xfffb87ff,0x43fff905,0xffff1059,
    0x003fffd0,0x00007ffc,0xb887fff7,0x503fffda,0xffffb59f,0x005f5009,
    0x001ffff0,0x207fffe0,0x20b002f9,0x804ffff8,0xfb00ffff,0x7ffc07ff,
    0x3fffe00f,0x3fe07601,0x078220ff,0x360ffff3,0xff883fff,0xff80b24f,
    0x4fffc87f,0x07fff700,0x3fffe600,0x0fffe603,0x3ffea06c,0x002fa807,
    0x000ffff8,0xb83ffff0,0x2051001e,0x800efffd,0xfb00ffff,0x7ffc07ff,
    0x3fffe00f,0xff013241,0x070dc1ff,0x541fffe6,0xffb06fff,0xfff01a1f,
    0x09fff90f,0x01bfffa0,0x3ffeba20,0x0fffe603,0x05fff804,0xf8002fa8,
    0xf0000fff,0x07643fff,0x7ffd4000,0xffff002f,0x0ffff601,0x200ffff8,
    0x0341ffff,0x3b07fffc,0x0ffff300,0x203fffe2,0x04abfff9,0x7f43fffc,
    0xfda800ff,0x6c002fff,0x4407fff3,0x6c003fff,0x333263ff,0xcccdfdcc,
    0x3ffe01cc,0xfff0000f,0x001fd13f,0xbffff100,0x07fffc00,0x203fffd8,
    0x3e00ffff,0x01ae1fff,0x7c43fffe,0x7fff9801,0x40bfffe0,0x400deffe,
    0x7fe47fff,0xf73b003f,0x35400dff,0x7c407fff,0x7fc003ff,0x3fffee1f,
    0xffffffff,0x3fffe03f,0xffff0000,0x000dffd7,0x01ffff90,0x55ffffc0,
    0xfffeaaaa,0x03fffe03,0xcaaffff8,0xffff806f,0x9801ffda,0x3fa07fff,
    0xfff504ff,0x9ffff00b,0x0017fffb,0x7fffc5a6,0x3e0f8801,0x3fe203ff,
    0x3fe6003f,0x4ccccc45,0x99999bfb,0x03fffe00,0x7ffffc00,0x0004ffff,
    0x00ffffe6,0x999ffff0,0x7fffd999,0x007fffc0,0xfffdffff,0xdffff00d,
    0xf3003fff,0x7ff40fff,0x0bffa05f,0x32ffffe0,0x800cfffe,0x17fff62c,
    0x7fff0ba0,0x01fffc40,0x2001ff70,0xff8002fa,0xff0000ff,0xffff93ff,
    0x3ffa0007,0xfff8006f,0x7fffb00f,0x007fffc0,0x3aa3ffff,0x0ffff806,
    0xff3003f7,0x7fff40ff,0x401fee04,0x7fd47fff,0x31a202ff,0x6401ffff,
    0x203fff84,0x2003fff8,0x3ea001fe,0xffff8002,0xffff0000,0x07ffff63,
    0x3ffff700,0xffff8040,0x07fffb00,0xf007fffc,0x03443fff,0x3b07fffc,
    0x0ffff300,0x101ffffc,0x3ffe009f,0x0ffffb87,0xfffd0770,0x3333e609,
    0x04dfffcc,0x2007fff1,0x7d4002fb,0xffff8002,0x7fc1cc00,0xfffd11ff,
    0x3fe2001f,0xf82c04ff,0xffb00fff,0x7fffc07f,0x07fffe00,0x1ffff00b,
    0xf30220dc,0x3fe20fff,0x00ec01ff,0xf887fff8,0xddf02fff,0xffffdddd,
    0xfffff501,0x20ffffff,0x9803fff8,0x2fa8003f,0x0ffff800,0x7ffc1640,
    0x3fffe61f,0xffffb006,0xff834c01,0xfffb00ff,0x07fffc07,0x283ffff0,
    0x20ffff80,0x3e606419,0xfff507ff,0x7c00b00b,0xffff07ff,0x7f409707,
    0xfffa83ff,0x7fffffff,0x807fff10,0xa80903e8,0xfff8002f,0x207e200f,
    0x7d41ffff,0x7d404fff,0x2ec02fff,0xb00ffff8,0x7fc07fff,0x3ffe00ff,
    0xfff8001f,0x261e200f,0xffd07fff,0x572fd83f,0x43fffc00,0xe81ffff9,
    0x1bffee00,0x26666662,0xf301bfff,0xaed807ff,0x403daaaa,0x7c400098,
    0x3f600fff,0x81ffff80,0x104ffffc,0x440bffff,0xffff04fc,0x0ffff603,
    0x007fffc4,0x8003ffff,0x101ffff8,0xffff30dd,0x885fff50,0x4400d5ff,
    0xffc87fff,0x4406b85f,0x2002ffff,0x3e603fff,0x3ff204ff,0x02ffffff,
    0xfff30000,0x7fda887f,0x82ffff88,0x84fffff8,0x880ffffc,0xf883fffa,
    0xffd02fff,0x3ffe609f,0xffff101f,0xfff98005,0x2ffdcc3f,0x88ffffd4,
    0xfd01effb,0x7cc003df,0xff932fff,0x06f881bf,0x00efffd8,0x5407fff0,
    0xff505fff,0x1fffffff,0xec980000,0xffffffff,0x2e27ffff,0x0cfffffe,
    0xffffffb3,0x3fffe65d,0xffffffff,0x3b222fff,0x89cfffff,0xcfffffdb,
    0xffffd932,0x3fae239f,0x401cffff,0xfffffec9,0x4fffffff,0x3fffff26,
    0x401befff,0x326003b8,0xfffffffe,0xffb80cde,0xffca83df,0xf802efff,
    0xffcb83ff,0x3e23dfff,0xffffffff,0x00000007,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x22000000,
    0x44008009,0x104c4009,0x18800300,0xa7fff440,0x002fffe9,0x3fffee0c,
    0x013ff62f,0x0ba95c40,0xffff9000,0xdffff71b,0x400bff23,0x03100018,
    0xfffd300c,0x1bffb1bf,0x7f777ff4,0x39100fff,0x7001c800,0x107dfdbf,
    0x9dd30dff,0x3bbee09f,0xbfd303de,0x7f4c03bf,0xff102ded,0x17ffd49f,
    0x74dbfff6,0x27ffe46f,0x64c00274,0x39ff73ff,0x3fff9000,0x361fffdc,
    0x46fffec3,0xfd82fffd,0xfffd8eff,0x813fff24,0x3f31fffe,0xfffc89d0,
    0x8017f203,0x1fd806fb,0xff90fff6,0xc87fd45f,0xf537cc5f,0x3e1ff307,
    0x2ffa80ff,0x3fe05ff1,0x0bffe24f,0x3fe3bffa,0x3ffe20ff,0x2a000f86,
    0x6d41dffe,0x1000beff,0xfff89fff,0xefff8345,0x80fffdbe,0xfcbeeffe,
    0xffbcebff,0xbfff302f,0x3e2340f6,0x27dc06ff,0x02fff880,0xffc93fe6,
    0xf0fffdc7,0x90ffd4df,0x7c2641df,0x10fff26f,0x1ffe8fff,0x3e24ffe8,
    0xeffd82ff,0xfc85fc9d,0x2012a0ff,0x00cfffc8,0x0e7ffe44,0xf53ffec0,
    0x41261fff,0xff11fffe,0x3fffb05f,0xfd0ffff4,0x7ffe409f,0xffb0a05b,
    0x88cd885f,0x3603b71f,0x3ea07faf,0x11ffee6f,0x27fdc7d9,0x7ff49ff3,
    0xffb8711e,0xf90bfe64,0x84ffd8df,0x3fe24ffe,0x2fffd82f,0x27ffc402,
    0x7fed403b,0xfb50002e,0x7fcc05df,0x7fff5b2f,0x2fff4072,0xfb05fff1,
    0x46ffd8df,0x3e205ffd,0xf5000fff,0xdff50bff,0x07ffb1b1,0x80ff29f3,
    0xfffb11db,0x26fff600,0x3ee6ffa9,0xffb03fff,0xffe80887,0x7437fe45,
    0x3ffe24ff,0x00fffd82,0xb11fffb0,0x39ffd710,0x3f260000,0xffe80cff,
    0x2dffd58d,0xf17ffa06,0xdffb07ff,0x7ec6ffd8,0x7ffe406f,0x1fffd002,
    0x37b73ae0,0x0fe80bdc,0xf91003fe,0x3a00fffb,0xcccccdff,0x3ffffe24,
    0x004ffe84,0xffc8bfff,0x224ffe87,0xffd82fff,0x3ffe6007,0xfffb82bb,
    0xf5000002,0xfff907ff,0x33ffee59,0xf17ffa03,0xdffb07ff,0x7ec6ffd8,
    0x7ffc406f,0x3fffc806,0xa8097900,0x5027d43f,0x0fff71df,0x4013ffa0,
    0x44fffff9,0xff006fff,0x0fffc8bf,0xff127ff4,0x0dffb05f,0x06effe80,
    0x00fbff6a,0x3ffae200,0xffff301d,0x03fffe21,0x7fc5ffe8,0x46ffd83f,
    0x7fec6ffd,0x7fff4406,0x1bffe202,0x0ff5ba60,0x03fd06f8,0x3fee1ff9,
    0x0bff9007,0x3fffec40,0x2003fffa,0x7fe45ffe,0x225ffe87,0xffd82fff,
    0x7ffd4006,0xfffc8803,0x7e4c001c,0xfe800bff,0x037fec5f,0xfff17ffa,
    0xd8dffb07,0x37fec6ff,0x1bffab60,0x2c2fffd8,0x0ffba7fc,0x5f9817dc,
    0xff72ffcc,0x2a3ec88f,0x12181fff,0x7e41fff9,0xffc804ff,0x6c2ffec5,
    0x3fff25ff,0x006ffd83,0x4000fff8,0x402dffda,0x002dffea,0x3ea17fdc,
    0x2fff403f,0x3f60fffe,0x237fec6f,0x52a06ffd,0xfa83fffa,0x6c3545ff,
    0x550df11f,0x3f20aa80,0xfffd98ff,0x447ffee0,0x8aa1efff,0x223fec3d,
    0x1222ffff,0xffe8dff1,0xcbfffb81,0xfd84fffd,0x4fc8006f,0x3ff26000,
    0xfff710cf,0x3e200019,0xe801ff07,0x3ffe25ff,0x6c6ffd83,0x37fec6ff,
    0x3ffe0f98,0x07fff40f,0x00000dd5,0x3fffee00,0x92cfffce,0x7fe45fff,
    0x7ec4ddff,0x3ee13f22,0x80edefff,0x9ff11ffb,0x467ffec0,0x7f43ffff,
    0x1f88007f,0x7fd50000,0x0000bbee,0x805c826c,0x3fe67fff,0x47ffe84f,
    0x7ff47ffe,0x46ffecc7,0x92fffffc,0xffddffff,0x000000bf,0xd93ff620,
    0x1bfe63ff,0x213fffee,0x04fdefec,0x037fffea,0x2fecffa8,0x36001880,
    0x001dffff,0x4c000014,0x80000331,0xd8031009,0xfe8cffff,0x3ff63fff,
    0xffff95ff,0xbffffb1b,0x00000000,0x04000000,0x33006008,0x001310c0,
    0x15100066,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x97077660,0x64c1ca81,0x2eeeee62,
    0xbbbbbbbb,0xfd100001,0x1176445f,0x05555555,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x3fffa000,0x7d4bff70,0xb8fff47f,
    0xffffffff,0x223fffff,0x2e02dfeb,0xfb97fe61,0xffff50ff,0x7ffccfff,
    0xffffffff,0x000001ff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2ffff800,0x7fdcfffb,0x27fff10f,0x88888888,0x20888888,0xcffffefc,
    0x3fe61a21,0x2a3fffb0,0x27ffffff,0xccccccc8,0x01cccccc,0x00000000,
    0x00000000,0x00000000,0x00000000,0xb8000000,0xbff74fff,0x3fe3ffd4,
    0x3a00002f,0x3bfff2a0,0x25f303fe,0x2aa25ff9,0x0002aaaa,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xffa8fc20,0xfb17fe24,
    0x2aaaa61f,0xaaaaaaaa,0x2e20731a,0x14c02efe,0x00000006,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x217fc698,0x737dc3fe,
    0xffffffff,0x007fffff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xb0f60000,0x4c1fc81f,0x2666624f,0x99999999,
    0x00000009,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40000000,0xa86b81c8,0x00005f07,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x03000000,0xc82441cc,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__times_bold_29_usascii_x[95]={ 0,2,2,0,1,1,1,1,1,0,1,0,0,0,
1,0,0,1,0,0,0,0,0,0,0,0,2,1,0,0,0,1,1,0,0,1,0,0,0,1,0,0,0,0,
0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,2,0,0,1,-1,0,1,0,0,1,1,0,0,0,0,
-1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,2,1,0, };
static signed short stb__times_bold_29_usascii_y[95]={ 23,5,5,5,5,5,5,5,5,5,5,7,19,15,
19,5,5,5,5,5,5,5,5,5,5,5,10,10,8,11,8,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,26,5,10,5,10,5,10,5,10,5,5,
5,5,5,10,10,10,10,10,10,10,6,11,11,11,11,11,11,5,5,5,13, };
static unsigned short stb__times_bold_29_usascii_w[95]={ 0,5,11,13,12,24,20,5,8,8,11,15,6,9,
5,8,13,11,12,12,13,13,13,13,13,13,5,6,15,15,15,11,23,19,17,17,18,17,16,20,20,10,13,21,
17,25,19,19,16,19,20,13,17,19,19,26,19,19,18,6,8,6,13,15,6,12,14,12,13,11,11,13,14,7,
8,15,8,22,14,13,14,15,12,9,9,14,13,19,13,13,12,8,2,8,15, };
static unsigned short stb__times_bold_29_usascii_h[95]={ 0,19,9,19,20,19,19,9,24,24,11,15,9,4,
5,19,19,18,18,19,18,19,19,19,19,19,14,18,13,7,13,19,24,18,18,19,18,18,18,19,18,18,19,18,
18,18,19,19,18,23,18,19,18,19,19,19,18,18,18,23,19,23,10,3,5,14,19,14,19,14,18,19,18,18,
24,18,18,13,13,14,19,19,13,14,18,13,13,13,12,18,12,24,24,24,6, };
static unsigned short stb__times_bold_29_usascii_s[95]={ 251,140,76,177,107,191,216,88,31,1,228,
237,69,139,133,86,109,212,224,138,198,151,165,237,72,1,14,248,111,94,127,
214,49,178,160,226,127,109,92,179,60,81,44,19,1,213,24,120,173,80,142,
200,124,28,48,1,84,104,41,100,15,73,240,149,126,1,123,42,95,20,244,
58,190,205,40,68,239,178,163,55,162,146,84,32,163,69,97,143,201,146,215,
22,19,10,110, };
static unsigned short stb__times_bold_29_usascii_t[95]={ 1,1,99,1,1,1,1,99,1,1,85,
66,99,99,99,26,26,66,66,26,66,26,26,1,26,26,85,46,85,99,85,
26,1,66,66,26,66,66,66,26,66,66,26,66,66,46,26,1,46,1,46,
26,46,46,46,46,46,46,66,1,26,1,85,99,99,85,26,85,26,85,26,
26,46,46,1,46,46,85,85,85,1,1,85,85,46,85,85,85,85,66,85,
1,1,1,99, };
static unsigned short stb__times_bold_29_usascii_a[95]={ 105,140,233,209,209,419,349,116,
140,140,209,239,105,140,105,116,209,209,209,209,209,209,209,209,
209,209,140,140,239,239,239,209,390,303,279,303,303,279,256,326,
326,163,209,326,279,395,303,326,256,326,303,233,279,303,303,419,
303,303,279,140,116,140,243,209,140,209,233,186,233,186,140,209,
233,116,140,233,116,349,233,209,233,233,186,163,140,233,209,303,
209,209,186,165,92,165,218, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT or STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_bold_29_usascii(stb_fontchar font[STB_FONT_times_bold_29_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT][STB_FONT_times_bold_29_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_bold_29_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_bold_29_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_bold_29_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_bold_29_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_bold_29_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_bold_29_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__times_bold_29_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__times_bold_29_usascii_s[i] + stb__times_bold_29_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__times_bold_29_usascii_t[i] + stb__times_bold_29_usascii_h[i]) * recip_height;
            font[i].x0 = stb__times_bold_29_usascii_x[i];
            font[i].y0 = stb__times_bold_29_usascii_y[i];
            font[i].x1 = stb__times_bold_29_usascii_x[i] + stb__times_bold_29_usascii_w[i];
            font[i].y1 = stb__times_bold_29_usascii_y[i] + stb__times_bold_29_usascii_h[i];
            font[i].advance_int = (stb__times_bold_29_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__times_bold_29_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_bold_29_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_bold_29_usascii_s[i] + stb__times_bold_29_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_bold_29_usascii_t[i] + stb__times_bold_29_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_bold_29_usascii_x[i] - 0.5f;
            font[i].y0f = stb__times_bold_29_usascii_y[i] - 0.5f;
            font[i].x1f = stb__times_bold_29_usascii_x[i] + stb__times_bold_29_usascii_w[i] + 0.5f;
            font[i].y1f = stb__times_bold_29_usascii_y[i] + stb__times_bold_29_usascii_h[i] + 0.5f;
            font[i].advance = stb__times_bold_29_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_bold_29_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_bold_29_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_bold_29_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_bold_29_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_bold_29_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_bold_29_usascii_LINE_SPACING
#endif

