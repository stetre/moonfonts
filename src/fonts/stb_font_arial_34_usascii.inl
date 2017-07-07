// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_34_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_34_usascii'.
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

#define STB_FONT_arial_34_usascii_BITMAP_WIDTH         256
#define STB_FONT_arial_34_usascii_BITMAP_HEIGHT        140
#define STB_FONT_arial_34_usascii_BITMAP_HEIGHT_POW2   256

#define STB_FONT_arial_34_usascii_FIRST_CHAR            32
#define STB_FONT_arial_34_usascii_NUM_CHARS             95

#define STB_FONT_arial_34_usascii_LINE_SPACING          22

static unsigned int stb__arial_34_usascii_pixels[]={
    0x40000026,0x00c00018,0x04c00330,0x3ee80620,0x25ddddd5,0x405eeeed,
    0x100000ea,0x04400000,0x80988000,0x00000019,0x10002000,0x00000013,
    0x200007f6,0xfffffedb,0xff3001ce,0x07fcc05f,0x407ffd50,0x53fe04f9,
    0xf3fffffa,0x220fffff,0x30003fc9,0x7bffffd9,0x7ee4c000,0x000befff,
    0xff883ff0,0xbffb7300,0x976d3ae5,0x00adffdb,0x013fff62,0x730007fc,
    0x3ae5bffb,0x0006f985,0xffffff91,0x3dffffff,0x2ffff980,0x2601ff30,
    0x3a03ffff,0x453fe00f,0xff3ffbaa,0xfc88555d,0x01cfffff,0xfffffe88,
    0x003fffff,0x7fffffdc,0x4004ffff,0x07fa87f9,0xfffffff3,0x2ffebf97,
    0xfffffffd,0xfeffe880,0x027dc05f,0xffffff50,0x320df99f,0x7fd4003f,
    0x2e61acff,0x404ffffd,0xf305ffb9,0x33ff201f,0x807f900a,0x3ff981aa,
    0x7ff40bff,0x2fffffff,0x37fffea0,0xffffebab,0xfffe9804,0xfffdbacd,
    0xdf5000df,0xff10bf70,0xfff5115f,0x3bfffebf,0x50dff711,0x0bfe61df,
    0x88007fc4,0xfb88bfff,0xff106fff,0x3bfee001,0x3ff66002,0x307fc806,
    0x13fa01ff,0x0001ff30,0x5ff9ffcc,0xf53bff90,0x301fff71,0x2201bfff,
    0x7404fffb,0x3ea01eff,0x9f9005ff,0xffd07fb0,0x2bfff101,0xfa80efff,
    0x2e17e44f,0x009f705f,0x74407ff4,0x13f606ff,0x0017fee0,0x5404ffb8,
    0x0ff980ff,0xfd807ff0,0x7fcc0004,0x3fe0bff3,0x7fdc3ea6,0x003ffe83,
    0x3205fff5,0xff3004ff,0x05fd007f,0x3ff985fd,0x7fd7fee0,0xf1ff601f,
    0x887fa83f,0xff5000ff,0x037fd407,0x7cc01ff5,0xfa80003f,0x03fe602f,
    0x7fc03fe6,0x007fe202,0x3fe60fba,0xff30bff3,0xff887d47,0x0037fdc5,
    0x3e21bff2,0x3ea000ff,0x0ffc00ff,0xff703fe2,0xfaffc401,0x8ffd406f,
    0x3fcc0ff8,0xf70027e4,0x40dff00f,0x3fa03ff8,0x5bff9305,0x0df91664,
    0x7cc0ffcc,0x405ff00f,0x9ff006fc,0x3fe7ff30,0x2a1ffa85,0x7ff4020f,
    0x1ffd8001,0x40017fec,0x3bb23ffc,0xeeeeffee,0xf92eeffe,0x3ebfd00f,
    0x97fcc04f,0x3fd40ff8,0xd8003fe2,0x06fd806f,0xefb837ec,0xfffffd80,
    0x262ff9af,0x3ff301ff,0xf101ff30,0x027fc05f,0xff984ff8,0xff30bff3,
    0x22007d49,0xf70005ff,0x007ff89f,0x7ecbff50,0xffffffff,0xd3ffffff,
    0x2bfb00df,0x7fc403ff,0xdf707fe4,0x74004fc8,0x06fc805f,0x7fc07fd4,
    0x99cffc82,0x41ffdffd,0x3ff304fe,0xf101ff30,0x07fe605f,0x7cc27fc0,
    0x3e0bff3f,0x801f50ef,0x50004ffa,0x37fc4dff,0x27ff8800,0xadfeaaa9,
    0xaadfeaaa,0xfb00dfd1,0xf100ffeb,0xd12fe49f,0x007fc47f,0x3201bfe0,
    0x0ffcc06f,0x3fee1fea,0x87fff983,0x5ff106fc,0xf101ff30,0x03fea05f,
    0x7cc27fc0,0x320bff3f,0x00fbbfff,0x8001ffdc,0x3fe67ff8,0x3ffe0005,
    0xff05fd00,0xd00ffb03,0x3013febf,0x7ffc45ff,0x27e46ffc,0x4037f400,
    0x7fc406fd,0x3ea27e42,0x17ffe04f,0x3ff81fea,0xfa80ff98,0x00ff700f,
    0x7fcc27fc,0x7ec0bff3,0x200bffff,0x20002ffc,0x13fea7ff,0x01ffd800,
    0x0ff881ff,0x7c00ffc8,0xa80bff5f,0x7ff4c1ff,0x03fe20df,0x003ff200,
    0x9ff00dff,0x7fec1ff8,0x213ff200,0x1bf607f9,0x3fa03fe6,0x801bf605,
    0x3ff984ff,0xfeb80bff,0xc81effff,0x3a0002ff,0x07ff70ff,0x40ffec00,
    0x06fa87f9,0x7cc07ff5,0x401fff5f,0x02a207fd,0x79730ff6,0x80ffea03,
    0xfe806ffa,0xff03fe25,0x82ffa809,0x3fa206fa,0x983fe62d,0x3fa02ffd,
    0x213fe005,0x0bff3ff9,0x3ffff660,0x01ffdc4f,0x7ccdff00,0x3fa0004f,
    0xc85fb80f,0x03ffa05f,0xfffaffec,0x009ff304,0x7dc1ff30,0xfd03ffff,
    0xdffd103f,0x7c4dfb00,0x2017fcc7,0x4fc80ffb,0x98fff440,0x3dff10ff,
    0x2004ff80,0x3ff984ff,0x7d400bff,0x2e3fffca,0xf30004ff,0x005ff8bf,
    0x9989ffe0,0xd9999dfd,0x260999cf,0x3f622eff,0x9ffff5ff,0x0037fd41,
    0x3fe23fd8,0x981ffc9c,0xfbaacfff,0xfd806fff,0xff71be67,0xd07fd803,
    0x3ff9007f,0x7fc43fe6,0x027fc405,0xff309ff0,0xa8017fe7,0x4cfff30f,
    0xf50005ff,0x006fe89f,0x7ecdff10,0xffffffff,0x43ffffff,0xfffffffa,
    0xfdff5ffd,0x1dfffdff,0xb8ff3000,0x982fe44f,0xbfffffff,0x6ff806fe,
    0x1ff91fe6,0xf985ff80,0x3ffa201f,0x5c1ff30c,0x3fe00dfe,0x213fe005,
    0x0bff3ff9,0xffb07d40,0x0007ff43,0x3f217fec,0xffc8001f,0x3fffff63,
    0xffffffff,0xffe983ff,0x3ebff4ff,0xefffd8cf,0x7fb0000c,0x3fcc2fd8,
    0x39dfb710,0xff1017fa,0x7fdc7f8b,0x10ffee02,0xffb809fd,0x7407fcc0,
    0x01ffe05f,0xff984ff8,0x5510bff3,0x3fea0fa8,0xc817fee2,0x21bfea0b,
    0x44006ffa,0x7f980fff,0x98006fa8,0x4ffaffc1,0x2600004c,0x441ff87f,
    0xfd0000ff,0x45ff980b,0x13fe60fe,0x360fffc4,0x27f400ff,0x7d407fcc,
    0x01ffd00f,0x3e613fe0,0xfb0bff3f,0xf507d41f,0x17ffc45f,0xff8bfff8,
    0x07ffd01f,0xb827fec0,0x004fc85f,0x3febff00,0xfd800004,0x220ffc43,
    0x02b260ff,0x5404ff88,0x217e43ff,0x7f440fff,0x5ff910ff,0x982ff880,
    0x1ff980ff,0x2003ff90,0x3ff984ff,0x7ff70bff,0x3ffb07d4,0xa84fffa8,
    0x04fffffe,0x8037ffe2,0x900effe8,0x007fb09f,0x7fd7fe00,0x7cc00004,
    0xf987ff06,0xb01ffcc7,0xffb803ff,0x3ea2fdc1,0xeffb9bff,0x3fffcdff,
    0x981ff980,0x2ff880ff,0x2005ff50,0x3ff984ff,0xdff10bff,0x7fc43ea1,
    0x7dfff706,0xfffd7335,0xfffa801f,0xfca99ace,0x3fa01eff,0x0001ff82,
    0x13febff0,0x07fd0000,0x8bf917f6,0x260bfff8,0xfd805ffc,0x5c0ff986,
    0xb9efffff,0x01ffffff,0xf303ff30,0x05ff101f,0xff801ffc,0xff3ff984,
    0x2bfff60b,0x2fffb9fa,0x3ffffe60,0xffffffff,0x7ff4c02f,0xffffffff,
    0x03fe200d,0x00001ff1,0x027fd7fe,0x40df5000,0xffc8cff9,0xeffffa81,
    0xd005ffff,0x217f609f,0x360befda,0x4cc0bdff,0x981ff980,0x3ff880ff,
    0x7c01bf60,0xf3ff984f,0x7ffec0bf,0x04ffffff,0xffffeb88,0xffe99cff,
    0x7ff5401e,0x801bdfff,0x06fa87f9,0x7d7fe000,0x3a00004f,0x7ffe402f,
    0x3f6603ff,0x003dffff,0x3e201ff5,0x6400004f,0x1ff981ff,0xff00ff98,
    0x00ffcc07,0x7fcc27fc,0xec80bff3,0x01efffff,0x019a9880,0x4c003ff5,
    0x2a88001a,0x00001a98,0x26000000,0x9d93005e,0x06a62003,0x3013fa00,
    0x200009ff,0xff502ffc,0x201ff301,0x2fec03ff,0x260ffe20,0x00bff3ff,
    0x0002ff22,0x001c4000,0x00000000,0x00000000,0x00000000,0x03fea000,
    0x00bbfee0,0x01fff540,0xff301ff5,0x1013fe01,0x3f2103ff,0xff53312f,
    0x06677fe7,0x00001f50,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2a002fd8,0x401ceffe,0x01effeb9,0x7cc1bfa6,0x03ffb00f,0xfff84fb8,
    0xffff50ff,0x3ffffe7f,0x4007d407,0x19999999,0xdddd5044,0xdddddddd,
    0x003ddddd,0x00000000,0x00000000,0x00000000,0x2a000df3,0xeeffffff,
    0x3ffffffe,0x0ffffe60,0xf9807fcc,0x3fe03fff,0x87fffe60,0xf3fffffa,
    0x880fffff,0xfffff001,0x3fe61fff,0xffffff55,0xffffffff,0x00003fff,
    0x00000000,0x00000000,0xfb000000,0xedb80003,0xefffffff,0x7fcc00bc,
    0x03fe604f,0x203fffb8,0x06a624fa,0x00000000,0x3ffffffe,0x44bff30f,
    0x88888888,0x08888888,0x00000000,0x00000000,0x00000000,0x00005500,
    0x00135310,0x88015510,0x0a98802a,0x00001540,0x77000000,0x21777777,
    0x00005ff9,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00010000,0x40000400,0x00400098,0x10000330,0x01774c00,0x0000276c,
    0x276c0001,0x0acedc98,0x0000fba0,0x02af7b2a,0x55555510,0x44035555,
    0x002cedca,0x7dd2f740,0xdfffd980,0x36e20000,0x02ceffff,0x4c01fe80,
    0x2dffffec,0x1000bfa0,0x79dffdb7,0x2037fc01,0x0e983ff9,0x2fffdb80,
    0xb85ff800,0x1fffffff,0x40009ff0,0xffffffe8,0x3ffea00e,0x4fffffff,
    0xfffffd30,0x3e0001df,0xb813fe6f,0x1fffffff,0xffffc800,0x1effffff,
    0x440ff100,0xfffffffd,0x4fb81eff,0x3fffea00,0x01ffffff,0x7e401ff9,
    0x007fd40f,0x07ffffee,0xf317fe00,0xfff957df,0x0009ff03,0x2f3fffa2,
    0xf701fffe,0xffffffff,0xbfff509f,0x00dfff97,0x4ff9bfe0,0x715dff30,
    0x22001fff,0xabdefffe,0x03fffedb,0xff305fa8,0xfd7579ff,0x6f983fff,
    0x9bfff700,0x7fffd955,0x7407ff30,0x00ffb85f,0x0ab3ffe2,0x3a2ffc00,
    0x86ff985f,0xf90004ff,0x0dff307f,0x74001bf6,0x7fe441ff,0x26ff8003,
    0x1ffb04ff,0xd002ffc8,0xfc805fff,0x1fec00ff,0x8067ffc4,0x7c0fffc8,
    0x7ffc400f,0x03ffea01,0x7fcc1bfa,0x200ffb82,0x80004ff9,0x03ff25ff,
    0x3fe0ffd4,0x0fff0004,0x7f407fec,0x3ffa8005,0x000dff10,0x827fcdff,
    0x3ff986fe,0x00effb80,0xf809ff50,0x05ffe80f,0xfd89ff90,0x027fd403,
    0x7dc1ffd4,0x707fc81f,0x7fd401ff,0x5ff80002,0xff881bfe,0x40027fc5,
    0x3ea04ff9,0x01ffc42f,0x2e02ff40,0x6ff8004c,0x7fec13fe,0x2007fdc0,
    0x4000fff8,0xdf300ffe,0x001fff50,0xfa83ffe2,0x007fec05,0xff885ff8,
    0x7544ff84,0xa85eeffe,0xdb9801ff,0x2bff2dff,0x7ec03ff9,0xfeba7fc7,
    0x00200cef,0xff983ff7,0x17fcc001,0xdff00000,0xffb827fc,0x201bfa25,
    0xa8003ffa,0x09f700be,0xb8005ffb,0x01fe20ac,0x2e005ff9,0xa8ffb02a,
    0x7ffdc1ff,0x3bb26fff,0x981eeeff,0xbfffffff,0x03ff75ff,0x3fe1ffb8,
    0xffffffdd,0xffb0001e,0x54c1ff70,0x003fea00,0x26ff8000,0x3ffa04ff,
    0x801fff9b,0x00001ffb,0xff885fd0,0x7f400007,0x03bfea01,0x8bfea000,
    0xfc9886fd,0x3ff609af,0x442fffff,0xfb98bfff,0x3ff95fff,0x3e2ffb80,
    0xc98aefff,0x26000fff,0xefc83ffd,0x2effffc9,0x3f6e7fb8,0x20000cef,
    0x813fe6ff,0x0efffff9,0x001ffb00,0x30ff1000,0x80000dff,0x3fa204fc,
    0x40002cff,0x07ff15ff,0x4c407fdc,0x4099bffb,0xff980ffe,0x801ff95f,
    0x3ffe2ffa,0x04ffa80e,0x17fffec4,0xffffffe8,0x7e44ffff,0xffffffb6,
    0x3fe0003d,0xfb013fe6,0x7c001bff,0x5000006f,0x0bff50bf,0x06f98000,
    0x7fffff44,0x7e4001bd,0x5c01ff57,0x3fea00ff,0x407ff301,0x1ffb5ffb,
    0x3e2ffa80,0x3ffa01ff,0x3fffe600,0x5dfff00e,0x8bffee21,0x9befeefd,
    0x000fffda,0x13fe6ff8,0x77fffec4,0x0bff3000,0x99999988,0x83fc8099,
    0x00004ffa,0x64400ff8,0xffffffff,0xaff9800c,0x7fdc05fd,0x407fea00,
    0x3e200ffb,0x300ffb5f,0x037fc7ff,0xb980bfea,0x443fffeb,0x3fe605fe,
    0x09fffb0f,0x20013fee,0x213fe6ff,0xffebfff9,0x4ffa8045,0x7ffffdc0,
    0x1ff85fff,0x0004ffa8,0x1002fd80,0xffffffb5,0xfbfd003f,0x0ffb805f,
    0x6407fea0,0x95fe807f,0xffa801ff,0xf3013fe2,0x7ecc007f,0xff90004f,
    0xd01bff65,0xff8001ff,0xff513fe6,0x8fffe23d,0x37fcc5fe,0x3ffffee0,
    0x3fcc5fff,0x0005ff88,0x0004fb80,0x7ffffb73,0x07fffb80,0x2a00ffb8,
    0x0dfd01ff,0x3feebfd0,0xf17fd400,0x4ff8807f,0x037fc400,0xf93ffa80,
    0x1ffb807f,0xff37fc00,0x4c0ffe89,0x4ff99fff,0x1007ffc4,0xff555555,
    0x3e04fb8b,0x9800006f,0xd880007f,0x7fc407ff,0x0ffb804f,0x7407fea0,
    0x55fd806f,0xffb803ff,0xf100ffe1,0xffb0009f,0x9ff30003,0xf3007ff2,
    0x6ff8007f,0x4ff893fe,0xffbfff70,0x003fff03,0x5fb17fe0,0x4003fec0,
    0x07fa01b8,0xff900062,0x01ffd803,0x2a00ffb8,0x0ff901ff,0x3feabfd0,
    0xf07fe401,0x3ff9809f,0x03ffa800,0xf74ff980,0x2ff9805f,0x6ff806a6,
    0x2ffb93fe,0x1bffff60,0x8001ffe4,0x007fc5ff,0xb8003ff9,0x87f904ff,
    0x26002ffb,0x37ec04ff,0x200ffb80,0xff701ffa,0xf15ff801,0x46fe809f,
    0x7fd405ff,0xb801ff72,0x03dd72ff,0xff52ffa8,0x20ffa807,0xbff104ff,
    0x7ff927fc,0x02fffe80,0x0003fff3,0x037d4bff,0xd001bfea,0x17ea03ff,
    0x4c009ff1,0x3fe203ff,0x01ff7003,0xf980ffd4,0x97fea03f,0x3fe607fd,
    0x3603ffc4,0x07ff50ff,0xff50ffd8,0x20ffd80b,0x3fec06fe,0x7fcc17fe,
    0xffa93fe4,0x27ffdc06,0x003fffb0,0x7f92ffcc,0x00bffd00,0xf8817ff2,
    0x007ff40f,0x2e01ffb8,0xff7000ff,0x00ffd403,0x3fa01ffd,0x40bfea5f,
    0x7ffc0ffd,0x449ff304,0xff500fff,0x80fffc4b,0x7fdc4ffa,0xd8bff304,
    0x2ffd81ff,0xfff893fe,0xfffff701,0x3fffa209,0x7ffe4401,0x2a007fa5,
    0x7dc03fff,0x17f401ff,0x700bfff2,0xb9988dff,0x3ea004ff,0xffa82adf,
    0x87bfe601,0x745fffd8,0xffb10bff,0x19ffff05,0x2e07ffdc,0xf710beff,
    0xeffb81ff,0x1fff710b,0x5419ffd0,0x7fd40eff,0xeffda9df,0xff713fe0,
    0xffb5117f,0x20bfff9f,0xbdffffe9,0xffffeca9,0x400ff10d,0x9acffffc,
    0x02fffeb9,0xffd84fb8,0xdca9acef,0x7fcc1fff,0x7c4006ff,0xffa87fff,
    0x7fffd401,0x45fddfff,0xffefffe9,0xfd9ff05f,0x03ffffdf,0x3fbffff2,
    0xffb02fff,0x1dfffdff,0x3bfffa20,0xfb00efff,0x1fffffff,0xffb84ff8,
    0x1effffff,0x2205fff5,0xfffffffd,0x5c1effff,0x7fdc005f,0xffffffff,
    0x0df3003f,0x3fffffee,0x881effff,0x8000efff,0x540fffe9,0xfd9801ff,
    0x0bfb4fff,0x7fffffb1,0x7ec5ffc0,0x5400dfff,0x0cfffffe,0x7ffff540,
    0xfff9004f,0xfb8019df,0xf81dffff,0xfffd304f,0x09f509df,0xfffff930,
    0x3f607bdf,0xffc88002,0x00cfffff,0xca807fc0,0xcefffffe,0x0002a600,
    0x7fd40620,0x000cc001,0x20001a98,0xa9880019,0x0a988000,0x00151000,
    0x00001530,0x0060054c,0x4006a620,0x440000aa,0x200009a9,0x351000aa,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x005eee54,0x17bdb930,0x8007bae0,0x00802ee9,0xdddddd10,
    0xdddddddd,0x013bae5d,0xd713bae0,0xeed8009d,0x200bbaa0,0xb801eeea,
    0x05dd91ee,0xe997b600,0xeeeeeeee,0x5eeeeeee,0xeb8007db,0xeeeeeeee,
    0x3600bcde,0x4ed8004e,0x3fffff62,0x3f2201ef,0x83ffffff,0x2a001ffc,
    0xfec883ff,0xf100ceff,0xffffffff,0x27ffffff,0x2002fff8,0x7441fff8,
    0xff9003ff,0x804ff987,0xe803fffc,0x017fea7f,0xf993fea0,0xffffffff,
    0x7fffffff,0xfc8009ff,0xffffffff,0xf02fffff,0xbff000bf,0x2afbffe2,
    0xfb00effc,0xfffb7bff,0x001ffc87,0xff50ffea,0x5fffffff,0xdddddd10,
    0xffdddddd,0x07ffd47f,0x303ffd80,0xfa801fff,0x00dff05f,0x880dffff,
    0x07ffc5ff,0x983ff600,0xfeeeeeee,0xeeeeeeff,0xc8009ff5,0xcccccdff,
    0x3ffffecc,0xf8005ff8,0x10bff95f,0xbff50bfd,0x20fff881,0x2a001ffc,
    0x3ffe63ff,0xfffeb8ad,0x7fe40001,0x805ffd86,0x7dc05ffb,0x3ffe206f,
    0x401ffb00,0x00ffcff9,0xff90ffea,0x2ffc4005,0x00bff100,0xfc8009ff,
    0xfff9001f,0x8005ff81,0x06ff9899,0xff913fe2,0xc8fff205,0x3ea001ff,
    0x40bffa3f,0x20006ffb,0xf880fffb,0x3fe202ff,0x4ffe800f,0x5c05ffd0,
    0x3fee01ff,0x3f202ff9,0x02ffcc1f,0x4005ff70,0xff805ff8,0x0ffe4004,
    0xf85ffd00,0x7d40005f,0x237e402f,0x3fe607fe,0x8007ff24,0xbff33ffa,
    0x000fff80,0x201fffa8,0xfb00fffa,0x3fe2005f,0x027fe41f,0xfd80ffe6,
    0x7f409ff5,0x001ffd07,0xf1001ffa,0x09ff00bf,0x00ffe401,0xff89ff70,
    0x7fe40005,0x907fdc00,0x3fea01ff,0x8007ff23,0x5ff73ffa,0x002ffc80,
    0x401fffc4,0xffa85ffd,0x77fd4005,0x200dff50,0x5ff105ff,0x4ff81bf2,
    0x3007ff70,0xf88009ff,0x54ff805f,0xc839dffb,0x3e6001ff,0x982ffc5f,
    0x33b60dee,0xffa807fd,0x6c13fea2,0x07ff20ff,0x313ffa80,0x03ff7005,
    0x027ff440,0x222fff88,0xd8000fff,0x0fff8cff,0x2a0ffb00,0x03ff50ff,
    0x3e205ff3,0x1ffc806f,0x02ffc400,0x7ffe6ffc,0x3f22ffff,0x3ff2001f,
    0x7cc2ffc4,0x66ffc1ff,0x7fdc00ff,0x473ffa23,0x7e45ffc9,0x3fea001f,
    0x07fe8003,0x0037fec0,0xffc9bfea,0xfff10002,0x5c005ffd,0x26fc81ff,
    0xffb83ff8,0x007ff200,0xf1000dff,0xffff00bf,0xfffb537d,0x4007ff23,
    0x7fc1fff9,0x40fffcc5,0x02ffadff,0x7e41ffec,0x83ffffff,0x2a001ffc,
    0x7e4003ff,0x3fee004f,0xffd8000f,0x0004ff9b,0x027fffcc,0x3a0ffe20,
    0x6c2ff44f,0x27fcc06f,0x0007ff50,0xff00bff1,0x7ff701df,0x2666bff2,
    0xffca9999,0x265ff84f,0xbff00fff,0x7d40dff1,0xffe984ff,0xfc80efff,
    0x3fea001f,0x17ff2003,0x01fffa80,0xfdfff100,0xf900001d,0xfd0001ff,
    0x641ff88b,0x804ff87f,0x3ff606fe,0x5ff88000,0x201fff80,0xffff94ff,
    0xffffffff,0x57fe09ff,0x3e00eff9,0x83dff95f,0x643ffffa,0xfecabdff,
    0x00ffe42f,0x2007ff50,0x22006ffc,0x40003fff,0x001ffffa,0x4ffff880,
    0x5c6fc800,0x22ff987f,0xfb801ff9,0x04ff881f,0x00bff100,0x5fe80fff,
    0xfffffff9,0x039dffff,0x77fceffc,0xfd2ffc00,0x3fffddff,0x1ffec7ff,
    0x3f23ffc8,0x3fea001f,0x0effb803,0x013ffa00,0x027fec00,0xffffd800,
    0x7fd4001f,0x7fc17f60,0x4401fee4,0x1ffb84ff,0x0bff1000,0xfe80dff0,
    0x5559ff96,0x005fff95,0x0bfffdff,0xffc8bff0,0xff98efff,0xe80dff12,
    0x007ff26f,0x4c03ffa8,0x36000eff,0x200006ff,0x80002ffb,0xfffacffb,
    0x8bfe2000,0x4bfb03ff,0x3f6005fd,0x0006fe87,0x3e017fe2,0xcb7f405f,
    0xffd101ff,0xfffff809,0x2ffc02ff,0xf5056544,0x00ffea5f,0x3fee3ff5,
    0x0bfee002,0x4003ff90,0x0000fffb,0x000bfee0,0x361dff30,0x7f4005ff,
    0x2e01ff34,0x800ffe7f,0x3fe22ffa,0x3fe20003,0x404ff805,0x03ff96fe,
    0xf01fff44,0x1fff3dff,0x2002ffc0,0x1ffb0ffb,0xf53ff980,0x7fe4007f,
    0x0037ec02,0x0003fff3,0x002ffb80,0x887ffe20,0x32002fff,0x4c0df96f,
    0x01ff99ff,0xff72ffc0,0x7fc40001,0x404ff805,0x03ff96fe,0xf02fff98,
    0x17fea1df,0x01315ff8,0x3ff26fe8,0x99ffcc00,0x3fa005ff,0x02ffc00f,
    0x002fff88,0x02ffb800,0x213ff600,0x5000fffa,0xf013faff,0x000ff75f,
    0x17fa1ff9,0x0bff1000,0xfe809ff0,0x9003ff96,0xbff01fff,0xff02ffd8,
    0x4c09ff1b,0x0bfea4ff,0x7fc3ff70,0x6ff9801f,0xd002cc80,0x000009ff,
    0x4000bfee,0x3f206ffb,0x5ff1006f,0xcfc805ff,0xf98004fc,0x001ff9af,
    0x402ffc40,0xb7f404ff,0xfd001ffc,0x88bff0bf,0x5ff80fff,0xfd101ffd,
    0x077fc41f,0x7e46ff88,0x3fa600ff,0x6400002f,0x000005ff,0x2000bfee,
    0x7400fff9,0xbfd004ff,0xefa801ff,0xfd0002fe,0x0000df9b,0xff00bff1,
    0xf96fe809,0x3fe6003f,0x5c2ffc2f,0x75ff85ff,0x7f4c3bff,0xaeffb83f,
    0x107ffea0,0x537bffff,0x007fff97,0xcfffa800,0xcccccccc,0x7003cccc,
    0xe88005ff,0xff9802ff,0xfffb801f,0xffff8805,0xdff50000,0xf100007f,
    0x09ff00bf,0x3ff96fe8,0x077fe400,0x3ffa0bff,0xffb2ffc2,0x07ffffff,
    0x7f7fffe4,0xfd103fff,0xffffffff,0x3fe2009f,0x7fffd406,0xffffffff,
    0x7006ffff,0xfd8005ff,0x3fee005f,0x7ffcc00e,0x0dffd003,0x7fffc400,
    0xff880000,0x404ff805,0x03ff96fe,0xf27ffc40,0x3ffe60bf,0xff717fe0,
    0x3005dfff,0x1bfffffd,0xffffd700,0x44005dff,0x7fd406ff,0xffffffff,
    0x06ffffff,0x4005ff70,0x4000effb,0xff805ffe,0x9ff9001f,0x5ffc8000,
    0xbff10000,0xe809ff00,0x003ff96f,0xff1fffa8,0xf2ffdc0b,0x026a60bf,
    0x000d4c00,0x009aa988,0x006ff880,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xeb800000,0xdeeeeeee,
    0x5dd702cc,0xc9774c00,0xd8004eee,0x03bb26ee,0x001dd900,0xe88bbbaa,
    0x003dd74e,0x2001774c,0xeeea82ed,0xeeeeeeee,0xddd70eee,0xdddddddd,
    0x3ae1dddd,0xcdeeeeee,0x774c00bc,0xdddddd95,0x201359bd,0xccccccca,
    0x02cccccc,0x000fbb20,0xfffffff9,0x87ffffff,0x3000fffc,0x3fff67ff,
    0x7ffcc007,0x0003ff67,0xf5001ffb,0x5ff887ff,0x54005ff9,0x3f2003ff,
    0xffffb83f,0xffffffff,0xffff90ff,0xffffffff,0x3ff21fff,0xffffffff,
    0xff500cff,0x3fffff6f,0x1effffff,0xffffffc8,0x3fffffff,0x0ffff100,
    0xeeeffc80,0xffffeeee,0x17fff23f,0xfd9ffcc0,0x32002fff,0x3ff67fff,
    0x07fec000,0x20fffea0,0x5ff95ff8,0x01ffd400,0xb83fff98,0xeeeeeeff,
    0x90eeeeee,0xddddddff,0x1ddddddd,0x3bbbbff2,0xfffffeee,0xfb7ffa81,
    0xdddddddf,0xfc83ffff,0xffffffff,0x7003ffff,0x4005ffff,0x6c401ffc,
    0xfff91fff,0x7ff3007f,0x017ffff6,0x367ffff8,0x7ec000ff,0x3ffea00f,
    0x32bff103,0x3ea002ff,0xffe8803f,0x02ffb83f,0x003ff900,0x200ffe40,
    0xfa86fffa,0x801ffb7f,0x30007ffc,0x7f400bff,0x32005feb,0xff9001ff,
    0x3fffff27,0xd9ffcc00,0x3007fcff,0x7ecffbff,0x7fec000f,0x05fff500,
    0xffcaffc4,0x0ffea002,0x0fffbf60,0x4000bfee,0x20001ffc,0xe8801ffc,
    0xbffd44ff,0xfd800ffd,0xefe8001f,0x73ff3000,0x3f2001ff,0xbff5001f,
    0x17ff3ff2,0x3f67ff30,0xc802ff9f,0x3f67fdcf,0x7fec000f,0x02fffa80,
    0xffcaffc4,0x0ffea002,0x7ff5ff50,0x0005ff70,0x80007ff2,0xd1001ffc,
    0xb7fd43ff,0xfa800ffd,0x7fdc003f,0x45ff6001,0xff9004ff,0xcbffc003,
    0x03ffe8ff,0xbfecffe6,0xaff805ff,0x03ff67fd,0xa81ffb00,0xf8802fff,
    0x005ff95f,0xf101ffd4,0x707ff17f,0x320005ff,0x320001ff,0x3ee001ff,
    0x6dbfe64f,0xffa800ff,0x13fe6002,0x3a5ff880,0x3ff9007f,0x65bfe200,
    0x0fff98ff,0x3f67ff30,0xfa80ff97,0x7fecffb7,0x07fec000,0x2005fff5,
    0x5ff95ff8,0x01ffd400,0x0ffe2bfb,0x4000bfee,0x20001ffc,0x22001ffc,
    0x57fe65ff,0xfc800ffd,0x3ffa000f,0x8bfee000,0xfc802ffb,0x9ff7001f,
    0x7fdc3ff2,0x367ff306,0x405ff37f,0x6cffb4fc,0x7ec000ff,0x03fff50f,
    0xfcaffc40,0x3fea002f,0x221ff703,0x2ffb83ff,0x03ff9000,0x00ffe400,
    0xff89ffa0,0xb801ffb5,0x3ee005ff,0x3ff4002f,0x32017fe2,0xffa801ff,
    0x741ff91f,0x3ff983ff,0x02ff4ffb,0xd9ff63ff,0x7ec000ff,0x0ffffa8f,
    0x657fe200,0xeeeeeeff,0xffeeeeee,0x222ff983,0xcffb83ff,0xaaaaaaaa,
    0x66ffe41a,0xcccccccc,0x07ff21cc,0x221ffb00,0x99ffb4ff,0xffddb999,
    0x07ff8009,0x6c27fcc0,0x7fe400ff,0xcbaaaaab,0x3f24fffe,0x03ffe60f,
    0x9ff67ff3,0x4ff507fc,0x03ff67fd,0xff7ffb00,0x4400bfff,0xffff95ff,
    0xffffffff,0xfd07ffff,0xb83ff88b,0xffffffff,0x7e44ffff,0xffffffff,
    0x322fffff,0x7e4001ff,0x7ed3fe1f,0xffffffff,0x2a000eff,0x7e4004ff,
    0x04ffa81f,0x7fffffe4,0xcfffffff,0xf703ff20,0xb3ff98df,0x417fccff,
    0xd9ff64fd,0x7ec000ff,0xffe9ffff,0x2bff1003,0xeeeeeffc,0xfeeeeeee,
    0x2077e43f,0xffb83ff8,0xffffffff,0x7ffe44ff,0xffffffff,0x3ff22fff,
    0x0ffec001,0x3fff67ff,0xffffffff,0xffd002ff,0x06ff8001,0xff901ffe,
    0xffffffff,0x1ff903bd,0x7cc7ffd0,0xfe8ffb3f,0x3f61ff84,0x0003ff67,
    0x263ffffb,0xf8801fff,0x005ff95f,0xff31ffd4,0x707ff103,0x333337ff,
    0xfc813333,0x3f20001f,0x7ff4001f,0x7fecffa0,0xfff73100,0x05ff8807,
    0x901ffd40,0x7fe405ff,0x0019999a,0xff301ff9,0x6cffe61f,0x2a3fe47f,
    0xfb3fec6f,0xffd8001f,0x077fdc0e,0x7e57fe20,0x3fea002f,0x2209ff13,
    0x2ffb83ff,0x03ff9000,0x00ffe400,0x5fd1ffe0,0x22003ff6,0x7fe407ff,
    0x7ffec002,0xffffffff,0x07ff206f,0x00ffc800,0x3fe6dff7,0xff98ffb3,
    0xffb0ff62,0x20007fec,0xffd01ffd,0x95ff880b,0x7d4005ff,0x999ff93f,
    0x9dff9999,0x00bfee39,0x000ffe40,0x4003ff90,0x97ec6ff8,0xf9000ffd,
    0x037fc03f,0x3ffffe20,0xffffffff,0x03ff901f,0x007fe400,0x7ff37ffd,
    0x57fa1ff6,0x3fec1ff8,0xd8001ffb,0xfff100ff,0xcaffc405,0x3ea002ff,
    0xfffff93f,0xffffffff,0x00bfee7f,0x000ffe40,0x4003ff90,0x8fe45ffa,
    0xf5000ffd,0x0ffea09f,0x559ff700,0xf9555555,0x07ff209f,0x00ffc800,
    0x3fefffe6,0xff90ffb3,0x9ff61bea,0x6c000ffd,0x3fee00ff,0x2bff100f,
    0x2a002ffc,0xdddd73ff,0xdffddddd,0x0bfee5dd,0x00ffe400,0x003ff900,
    0x32a0fff4,0x2001ffb0,0xff903ffb,0x07fe8001,0x320fff10,0x320001ff,
    0x7fdc00ff,0x0ffb3fff,0x07fb5ff3,0x07fecffb,0x003ff600,0x3e20dffb,
    0x005ff95f,0x1001ffd4,0x5ff707ff,0x07ff2000,0x01ffc800,0xb00bff70,
    0x3f6001ff,0x00ffd01f,0x2004ff98,0xffc82ffd,0x3ff20001,0xffffe800,
    0x3fa0ffb3,0x7fd80ffd,0xb0003ff6,0xff8801ff,0x95ff884f,0x7d4005ff,
    0x3fe2003f,0x002ffb83,0x0003ff90,0x2200ffe4,0xd801fffd,0xffc800ff,
    0x00dff107,0x2001ffc8,0xffc86ff9,0x3ff20001,0xffff9800,0x3ee0ffb3,
    0x4ffb06ff,0xcccccffd,0xfb3ccccc,0xfff5001f,0xf95ff885,0x7fd4005f,
    0x0ffe2003,0x4000bfee,0xccccdffc,0xcccccccc,0x999bff92,0xffffdd99,
    0x36dff305,0xccccccff,0x01ffffdc,0xf8009ff3,0xffe8006f,0x000ffe41,
    0x2001ff90,0xffb3fffb,0x40fffe60,0x3fff67fd,0xffffffff,0x001ffb6f,
    0xf883fff2,0x005ff95f,0x1001ffd4,0x5ff707ff,0x3fff2000,0xffffffff,
    0xff94ffff,0xffffffff,0x3e605dff,0xfffffb6f,0xffffffff,0x01ffd405,
    0x0009ff50,0xffc89ff7,0x3ff20001,0x4fffa000,0x3ffa07fd,0x7ecffb00,
    0xffffffff,0x1ffb6fff,0x137ff400,0x0bff2bff,0x003ffa80,0x3ee0ffe2,
    0xff90002f,0xffffffff,0x329fffff,0xffffffff,0x7cc01cee,0xfffffb6f,
    0x07bddfff,0x4005ff70,0x88001ffd,0x00000fff,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x3b200000,
    0x37b72a01,0x09dd301c,0x00800010,0x20000400,0x40040000,0x276c03ee,
    0x04000000,0x3a600800,0x2a00004e,0x4ed801ee,0x77540bd9,0x6c4fb602,
    0x3bb601ee,0x05ff7001,0xffffffb1,0x5ff981bf,0xefffec88,0xffdb802d,
    0xec8803df,0x8803dfff,0x03dfffec,0xeffeca88,0xf809ff02,0x3627ba5f,
    0x25db1cef,0x20beffda,0x41dffec8,0xfffb52ed,0x55ff983b,0x7c40005b,
    0x97fd404f,0xffb01ffb,0xb8bfe60b,0x9ff706ff,0x0bffea00,0xb5bfffd1,
    0xff98dfff,0x7ffffdc5,0xd304ffff,0xbfffffff,0x3fffe601,0x500effff,
    0xffffffff,0x3ffa201d,0xf86fffff,0xf2ffc04f,0x3ffffb5f,0x3fff2bfe,
    0xfff35fff,0x7fc3ffff,0xffffffba,0x557fe63f,0x8000beff,0x3fec07fd,
    0x3fe07ff3,0xb0ff707f,0x6ff987ff,0x5ffff700,0x440bffd8,0x04cc4ffd,
    0x7137dff7,0xf883fffb,0xfc98beff,0xbeff886f,0x85ffda89,0x989cfff8,
    0xfe80fffd,0xffda89cf,0x3e027fc5,0x3ffbfe5f,0x3fbfe6ed,0xcfffc9be,
    0xffdaadff,0x37ffbfe6,0x20fffcaa,0xfffd3099,0x7d40039f,0x89ff102f,
    0xfff985fe,0x885fe81f,0xffd10fff,0xfffe8803,0x17fe22ff,0xe807ff88,
    0x9ff700ff,0xf502ffc8,0x01ffa87f,0xffe81ffb,0xd89ff701,0x3ffd02ff,
    0x3fe027fc,0x411bffe5,0xff886fff,0x0ffd80ff,0xf901bfff,0xffb3009f,
    0x3e005dff,0x83ff505f,0xfdfb87fc,0x817fc43f,0x7ff95ffa,0xbdfffa80,
    0x0bfea2ff,0x4c01ffb0,0x3fe203fe,0xd01bfe65,0x07fdc1ff,0x3ea0ac98,
    0x8ffec04f,0x3ea05ff8,0xf013fe3f,0x00fffcbf,0x3fe03fff,0x23ff703f,
    0xff101fff,0x7fdc400b,0x3200bfff,0x86fe80ff,0x5fec1ff9,0x07fd45fd,
    0xbffbff90,0x2a7ffb00,0x033262ff,0x0003ff90,0xffb97fe0,0x50ffdc03,
    0x64003dff,0x7fd400ff,0x1803ff32,0x7fc04ff8,0xff01ffe5,0x80ffec0f,
    0x0dff2ffa,0x50005ff8,0x03bffffb,0xff887ff3,0xff89ff03,0x2fec7fb9,
    0x077fff40,0xff506640,0x1ffe0005,0x7654c400,0x2fff25ff,0xcaaaaaaa,
    0x7fff42ff,0x3f600ace,0x74ff8807,0xff0001ff,0x3e5ff809,0x037fc06f,
    0x3e601ff9,0xe80bff2f,0x6440006f,0xfe80ffff,0xd807fdc6,0x7cdfea6f,
    0x200ffe1f,0x0002fff9,0x2000bfea,0x71005ffa,0xfffffffd,0x7fffecbf,
    0xffffffff,0x7fff444f,0xfe82dfff,0x32bff006,0x9ff0007f,0x3fe5ff80,
    0x902ffc05,0x97fcc0ff,0x37f405ff,0x7fe44000,0x20ffb80f,0x3fea05fe,
    0x9ffcbf90,0xfb800ff9,0x2a0005ff,0xfe8002ff,0xfff9801f,0xfe9bdfff,
    0x3bbbffa5,0xeeeeeeee,0xffffb503,0x06ff89ff,0x1ff6bff0,0x2027fc00,
    0x013fe5ff,0x3fe409ff,0x3fe5ff30,0x0037f404,0xbffffb30,0x7ccffe20,
    0x4bfe202f,0x657f63fe,0xfff9806f,0xf50002ff,0xffd8005f,0xcfff9804,
    0x365ff80a,0x9800007f,0x363fffeb,0x4ff8807f,0xf0001ff9,0x2ffc40bf,
    0x4ff809ff,0xf981ff20,0xe809ff2f,0xfeb8006f,0x6c00cfff,0xb00ff96f,
    0x5c1ff1bf,0xd007fd7f,0x01ffd3ff,0x005ff500,0xc8037fec,0x3fe202ff,
    0x0007fee5,0x25ffa800,0xff9807fc,0xd803ff74,0xa817fe3c,0x013fe5ff,
    0x3fe409ff,0x3fe5ff30,0x8037f404,0x3effffc9,0x3e3fea00,0xaffb804f,
    0x7dffc47f,0x9ffe401f,0xa8005ff9,0xfd8802ff,0xffd000ef,0x2a6ffa80,
    0x77e404ff,0xfd01bf62,0x201ffdcf,0x9ff51ffd,0xfd27fcc0,0xbffd103f,
    0x3fe027fc,0x981ff204,0x809ff2ff,0x7ed406fe,0x0001dfff,0x003ffbff,
    0xd09fdff1,0xf980dfff,0x01ffe45f,0x100bfea0,0x2601bffd,0x03ffb5ff,
    0xfd1bffe2,0x3ffe603f,0x440bff20,0x07ff45ff,0x7f46ff98,0x45ffb00f,
    0xa88aeffb,0x3fe5fffe,0x9027fc04,0x97fcc0ff,0xb7f404ff,0xfff55ff9,
    0xc800019f,0x3a006fff,0xffc82fff,0x3ffa204f,0x001ffe80,0xe880bfea,
    0x7fcc04ff,0x443bff75,0x4c6fffea,0x3aa23fff,0x77fcc3ff,0x5ffb510b,
    0x222fffa8,0x7cc0effb,0x3ff262ef,0x7ffff445,0x25fcbfff,0x27fc04ff,
    0x7cc0ff90,0xe809ff2f,0x2abff36f,0x200003ef,0x2003fff9,0xfa80fffc,
    0x3ff601ff,0x00dff303,0xf9817fd4,0xff9803ff,0x3bffffa5,0x0ffcbfff,
    0x7f7fffdc,0xff704fff,0x7fffffff,0x3bfffee0,0xf700ffff,0xdfffdfff,
    0x3ffff201,0x7fcbf92e,0x9027fc04,0x97fcc0ff,0xb7f404ff,0x00335ff9,
    0x03ffa000,0x106ff980,0x7fd40fff,0x027fe405,0xf982ffa8,0x274002ff,
    0xbfffff91,0x220ffe61,0x2efffffd,0x7ffff540,0x7ecc02ef,0x400cefff,
    0x3fffffd9,0xf0013100,0x04ff809f,0xff981ff2,0xfe809ff2,0x00000006,
    0x00000000,0x2a000000,0x7ffc42ff,0x417c4002,0x40001a98,0x440009a8,
    0x530001a9,0x06a60001,0x00000000,0x00000000,0x00000000,0x00000000,
    0xfa800000,0x017fec2f,0x00007e40,0x00000000,0x00000000,0xeeeeeec8,
    0x00eeeeee,0xffa80000,0x00330000,0x2aa20130,0xaaaaaaaa,0x75c02aaa,
    0x2e3dd72e,0x000101ee,0x0001dff3,0x7fd45ff5,0xcccccccf,0x03f31ccc,
    0x00000000,0x00000000,0x7fff4000,0xffffffff,0x3ae0000f,0x007fd400,
    0x001ffcc0,0x3fe60df3,0xffffffff,0x3fe67fff,0x3f27ff95,0x4c5ff92f,
    0x202dfffd,0x00ffee3a,0xfe8bfea0,0xffffffff,0x0022ffff,0x00000000,
    0x00000000,0x55555000,0x9ffd5555,0xfff91000,0x00ffa801,0x006ffd80,
    0x7fcc17e2,0xffffffff,0x3fe67fff,0x3f27ff95,0x2a5ff92f,0xffffffff,
    0x43fca8ac,0x54000ffd,0x3fffe2ff,0xffffffff,0x000002ff,0x00000000,
    0x00000000,0x017fea00,0xbffffb50,0x001ff500,0x02ffff88,0xc9afc2ea,
    0x26666661,0x19999999,0x7fe57fe6,0x3f25ff93,0xfddffb2f,0xffffffff,
    0x007fd07f,0x00000000,0x00000000,0x00000000,0x3e600000,0xeb8800ef,
    0x001cffff,0xc8001ff5,0x3a06fcef,0xffeefdff,0x4e800003,0x3fee5ff7,
    0x3763ff71,0x3fff2a20,0x9880cfff,0x00000001,0x00000000,0x00000000,
    0x80000000,0x4c00fff9,0x02effffc,0x000ffa80,0x0ffcdffc,0xffffdca8,
    0x400001bd,0x21ff32f8,0x1ff50ffa,0x2f32a00a,0x00000001,0x00000000,
    0x00000000,0x00000000,0x01ffe880,0x33ffffaa,0xffff9801,0xffffffff,
    0x21ff707f,0xffd805fe,0x32000003,0x7ccff10f,0x0001fe66,0x00000000,
    0x00000000,0x00000000,0x00000000,0xa80bffa0,0x000befff,0x3fffffe6,
    0x7fffffff,0x7fd49fd0,0x3faff600,0x66666443,0xcccccccc,0x8df07e64,
    0x0002fc5f,0x00000000,0x00000000,0x00000000,0x00000000,0x500fff60,
    0x10005fff,0xffb99999,0x50999999,0x04ff83ff,0x87fe6df7,0xfffffff9,
    0x47ffffff,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2017ff20,0x0cffffe9,0x07fd4000,0xfc86fd80,0x25c3d107,0x3bbbbba6,
    0x6eeeeeee,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x800dff70,0x2dffffd9,0x01ff5000,0xf107ff30,0x0000007f,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x03bfea00,0x7ffdc400,
    0x2a000bef,0xffc800ff,0x000dfb00,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xff300000,0x2a00001f,0x01dffffe,0xd800ffa8,
    0x07ba604e,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x88000000,0xaa99afff,0x001aaaaa,0x03ffff66,0x0001ff50,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xfffffa80,
    0xffffffff,0xffb88004,0x00154400,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x7fffd400,0xffffffff,0x0140004f,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_34_usascii_x[95]={ 0,2,1,0,1,1,1,1,1,1,0,1,2,0,
2,0,1,3,0,1,0,1,1,1,1,1,2,2,1,1,1,1,1,-1,2,1,2,2,2,1,2,2,0,2,
2,2,2,1,2,1,2,1,0,2,0,0,0,0,0,2,0,0,0,-1,1,1,1,1,1,1,0,0,2,2,
-2,2,1,2,2,1,2,1,1,0,0,1,0,0,0,0,0,0,2,0,1, };
static signed short stb__arial_34_usascii_y[95]={ 27,5,5,4,3,4,4,5,4,4,4,9,23,17,
23,4,5,5,5,5,5,5,5,5,5,5,11,11,8,11,8,4,4,5,5,4,5,5,5,4,5,5,5,5,
5,5,5,4,5,4,5,4,5,5,5,5,5,5,5,5,4,5,4,31,5,10,5,10,5,10,4,10,5,5,
5,5,5,10,10,10,10,10,10,10,5,11,11,11,11,11,11,4,4,4,13, };
static unsigned short stb__arial_34_usascii_w[95]={ 0,4,9,17,15,25,19,4,9,9,11,16,4,10,
4,9,15,9,16,15,16,15,15,15,15,15,4,4,16,16,16,15,29,22,17,20,19,17,16,21,18,4,13,19,
14,22,18,22,17,22,20,18,18,18,21,29,21,21,18,6,9,7,14,19,6,15,15,14,14,15,10,15,13,3,
7,14,4,22,13,15,14,14,10,15,9,14,15,22,15,15,15,10,4,10,16, };
static unsigned short stb__arial_34_usascii_h[95]={ 0,22,8,24,28,24,24,8,30,30,11,15,9,4,
4,24,23,22,22,23,22,23,23,22,23,23,16,21,16,10,16,23,30,22,22,24,22,22,22,24,22,22,23,22,
22,22,22,24,22,25,22,24,22,23,22,22,22,22,22,29,24,29,13,3,5,18,23,18,23,18,23,24,22,22,
29,22,22,17,17,18,24,24,17,18,23,17,16,16,16,23,16,30,30,30,6, };
static unsigned short stb__arial_34_usascii_s[95]={ 253,192,211,163,101,211,1,221,68,1,177,
145,206,117,128,43,155,1,11,187,120,203,219,215,17,1,175,28,128,189,180,
52,11,231,197,53,172,154,137,21,101,96,235,76,61,38,19,140,1,117,216,
84,183,33,161,131,109,87,68,94,74,86,162,133,243,33,171,97,140,49,129,
237,202,252,78,237,249,138,161,81,196,181,127,65,119,112,197,213,236,103,112,
57,52,41,226, };
static unsigned short stb__arial_34_usascii_t[95]={ 1,81,122,1,1,1,32,122,1,1,122,
122,122,27,27,32,32,104,104,32,81,32,32,81,57,57,104,104,122,122,104,
57,1,81,81,32,81,81,81,32,81,81,32,81,81,81,81,1,81,1,57,
32,57,57,57,57,57,57,57,1,32,1,122,27,122,104,32,104,32,104,32,
1,57,57,1,57,32,104,104,104,1,1,104,104,32,104,104,104,104,32,122,
1,1,1,122, };
static unsigned short stb__arial_34_usascii_a[95]={ 135,135,173,271,271,433,325,93,
162,162,189,284,135,162,135,135,271,271,271,271,271,271,271,271,
271,271,135,135,284,284,284,271,494,325,325,352,352,325,297,379,
352,135,243,325,271,406,352,379,325,379,352,325,297,352,325,460,
325,325,297,135,135,135,228,271,162,271,271,243,271,271,135,271,
271,108,108,243,108,406,271,271,271,271,162,243,135,271,243,352,
243,243,243,163,126,163,284, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_34_usascii_BITMAP_HEIGHT or STB_FONT_arial_34_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_34_usascii(stb_fontchar font[STB_FONT_arial_34_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_arial_34_usascii_BITMAP_HEIGHT][STB_FONT_arial_34_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_34_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_34_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_34_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_34_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_34_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_34_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_34_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__arial_34_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__arial_34_usascii_s[i] + stb__arial_34_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__arial_34_usascii_t[i] + stb__arial_34_usascii_h[i]) * recip_height;
            font[i].x0 = stb__arial_34_usascii_x[i];
            font[i].y0 = stb__arial_34_usascii_y[i];
            font[i].x1 = stb__arial_34_usascii_x[i] + stb__arial_34_usascii_w[i];
            font[i].y1 = stb__arial_34_usascii_y[i] + stb__arial_34_usascii_h[i];
            font[i].advance_int = (stb__arial_34_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__arial_34_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_34_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_34_usascii_s[i] + stb__arial_34_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_34_usascii_t[i] + stb__arial_34_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_34_usascii_x[i] - 0.5f;
            font[i].y0f = stb__arial_34_usascii_y[i] - 0.5f;
            font[i].x1f = stb__arial_34_usascii_x[i] + stb__arial_34_usascii_w[i] + 0.5f;
            font[i].y1f = stb__arial_34_usascii_y[i] + stb__arial_34_usascii_h[i] + 0.5f;
            font[i].advance = stb__arial_34_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_34_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_34_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_34_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_34_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_34_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_34_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_34_usascii_LINE_SPACING
#endif

