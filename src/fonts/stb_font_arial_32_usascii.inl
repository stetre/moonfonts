// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_32_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_32_usascii'.
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

#define STB_FONT_arial_32_usascii_BITMAP_WIDTH         256
#define STB_FONT_arial_32_usascii_BITMAP_HEIGHT        126
#define STB_FONT_arial_32_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_arial_32_usascii_FIRST_CHAR            32
#define STB_FONT_arial_32_usascii_NUM_CHARS             95

#define STB_FONT_arial_32_usascii_LINE_SPACING          21

static unsigned int stb__arial_32_usascii_pixels[]={
    0x3b2ea200,0x0001ccee,0x37a63991,0x9813a603,0x87ae05ed,0x6666404d,
    0x9999931c,0x20003500,0x1cdeecb9,0x00004000,0x5c01ee98,0x0000805e,
    0x65440002,0x0001cded,0x2af7b72a,0x02744000,0xfffffc88,0x03efffff,
    0xfa97fc40,0x0df506ff,0x441bffea,0xf00fdc5f,0x3ee7ffff,0x7400ffff,
    0x7fecc004,0x1dffffff,0x3fff6a00,0x9306e98d,0xff013fe0,0x3bff6a09,
    0xdd15ea8c,0x39dffb31,0x3ffff200,0x002effff,0x3ffffff2,0x2a004fff,
    0xfffc804f,0xedb99abe,0x1000efff,0x3f2e25ff,0xd06fa82f,0x3f2059df,
    0x3fe06e80,0xb9931ccd,0xffd701ff,0xfa8017df,0xfeccdfff,0xfc803fff,
    0xfbffffff,0xf906fb87,0x40ffcc0f,0xeffefffc,0xf5ff16fb,0x05fffdff,
    0x677fff4c,0x03ffffeb,0x6f7fff44,0x1efffecb,0x6c01fd80,0xa8801cff,
    0x55001fff,0xf50bfb01,0x405ff10d,0x05f704f8,0xff500ffe,0xfffffe81,
    0xff502fff,0x3fee207f,0x33fee03f,0x0ffff710,0x3fe60df9,0xf70df902,
    0x6fffb89f,0x445ffff1,0xff881ffd,0xffa880cf,0xbfff104f,0x037fe401,
    0x3ff603fc,0xffd88002,0x2fdc0000,0x7fcc37d4,0xf807f601,0xa807ff06,
    0x37ff20ff,0x1ffface9,0x400fffc4,0xf980fffa,0x0fff704f,0x2ff40df9,
    0x3e61ffc4,0x2dff704f,0xfd02fff8,0x005ffb0d,0xfb03fff3,0x3fee007f,
    0xb817e602,0x200200ef,0x5c0005fe,0x986fa86f,0x01be607f,0x07ff07f9,
    0xff10ffa8,0x4ff9a749,0x9001ffe4,0x1ff709ff,0x7e43ff40,0x503fee06,
    0x0ffa81ff,0x3e2dff10,0x87fea05f,0x2a004ffa,0x2ffcc6ff,0xb81bfa00,
    0x03ff103f,0x265bff93,0x03ff11ee,0x7dc0f744,0xf986fa86,0x300ff607,
    0x03ff81ff,0xffa87fd4,0x46fe93a1,0xfe8006fe,0x6405fc86,0x3fffaa7f,
    0x1ffc41ee,0x1bf217f6,0x3fe2df90,0xfd17fc03,0x7fd8001f,0x20007fdc,
    0x03fa02da,0x7fe41fec,0xffabffff,0xf8817f20,0xa86fb82f,0x307fa86f,
    0x7ff003ff,0x7d403ff8,0x741ff70f,0x0ffe0224,0xd03ff200,0x27fb809f,
    0x2ffffffb,0x3fe25fd8,0x5c05fe82,0x805ff16f,0x09ff14fe,0x6c3ff700,
    0x8800007f,0x70ff306f,0x3fae19ff,0x03fd46fe,0xdf505ff1,0xff50df50,
    0x6c01bea0,0x201ffc4f,0x5ff50ffa,0x3fe60274,0x2ffa8002,0x3ea01ffc,
    0x27bf6627,0x70ffa809,0x013fe0ff,0x07fe2df5,0x3fe6bfd0,0x3ff98003,
    0x000017fe,0x27e413ea,0x3e60ffe6,0x07fc44ff,0xfa82ff88,0xfb86fa87,
    0x200bf907,0x01ffc6fc,0x7fc43fea,0xfb809d0d,0xff98001f,0x2e027fc4,
    0x806fc87f,0x209fd3ff,0xb7dc05fe,0x7f401ff8,0x0005ff54,0x27fc57fe,
    0x17e40000,0x2ffc1fe8,0xfd07ffd0,0x20bfe203,0x37d41ff8,0x4fd827e4,
    0xff8ff700,0x907fd403,0x809d7fff,0xf0000ffd,0x405fd8bf,0x06fc87fc,
    0x1ff8efc8,0xfc80dfb0,0xf805ff16,0x003ff72f,0x7fd5bfa0,0x2aaaa202,
    0xff81aaaa,0x7cc7f880,0x07ff201f,0x7fc407fa,0xfa8bfb02,0xe80ffcc6,
    0x1ff5004f,0x3ea01ffc,0x7fffe40f,0x1ff901bf,0x8bff1000,0x3fa00ffc,
    0x9806fc87,0x2e06fcff,0x5bfa00ff,0x3ea04ff8,0x003ff70f,0x7fd5bfa0,
    0x3fffe603,0x7cc3ffff,0xfb8df305,0x443fdc06,0x5ff100ff,0xfa9ffec0,
    0x407ffb16,0xff3003ff,0x2a01ffc3,0xffd980ff,0x7d40efff,0xff98001f,
    0xb82ffc43,0x06fc87ff,0x407fffd0,0xff504ff8,0x403ffe2d,0x0bfe66fe,
    0xf8b7fc00,0x3ffe605f,0x5c3fffff,0xd8bf503f,0x437ec05f,0x3fe206fa,
    0xfaaff402,0x4c07ff36,0xff1002ff,0x2a01ffc7,0x3ba200ff,0x3e21ffff,
    0xffa8002f,0x8adffb82,0xc87fffc9,0xfff7006f,0x44ffb801,0xff16fffa,
    0x7fec43df,0x4001ffc1,0x1bfa5ff8,0xb0ffe200,0xf13ea03f,0x84fe807f,
    0x3fe205fc,0x553ff602,0x03fff16f,0x4c00ffe2,0x00ffe2ff,0xce801ff5,
    0x7fc6ffd8,0x1ffc8004,0xffffff70,0xdf90ff9b,0x017fe200,0x7ff7ffec,
    0xdff16fef,0x5fffddff,0x7000bfd0,0x07fe45ff,0xf0ffe200,0x3e2fcc0f,
    0x0bfea04f,0x7c403ff3,0x41df902f,0x0ffd46fa,0xa8027fc4,0x00ffe2ff,
    0x4e801ff5,0xffd87ff2,0xff883301,0x6ff64c06,0xdf90ff93,0x00bfe200,
    0x8efffea8,0x55ff16fc,0x205bfffd,0x22002ffc,0x3fea0fff,0x1ffc4003,
    0x46f80bf5,0x3ffa07fd,0x1013fa20,0x07fe05ff,0x09fb0df5,0x7dc017fe,
    0x500ffe1f,0x274081ff,0x7fd47ff3,0x3a3bf905,0x320001ff,0x006fc86f,
    0x22000df7,0x7c5bf209,0x2600622f,0x3f2006ff,0x1fffc44f,0x647ff300,
    0x2e3f402f,0x7ffc81ff,0x220077f4,0x87fa82ff,0x06fb86fa,0x3f200dfd,
    0x500ffe0f,0xd17f61ff,0x321ffc49,0x7f540dff,0x9504ffef,0xc85fe807,
    0x3fe8806f,0x5bf20000,0x70002ff8,0xfc801dff,0x7fff506f,0x47fff700,
    0x1fe400fe,0xb517ffd1,0xff97ffff,0x5ff1003d,0xdf50df70,0x3ee0ff50,
    0xf8bfd007,0x87fd403f,0xa93a0ffc,0x7ff442ff,0xffb309bf,0x17fd40ff,
    0xfc82ffb8,0x2ee609af,0x00000ffe,0x17fc5bf2,0x7fffb000,0x3ffaa613,
    0x3fff201f,0xeca99ace,0xdf10dfff,0xf98df500,0xfcafffff,0x000dffff,
    0xdf705ff1,0xff50df50,0x2007fe60,0x01ffc3ff,0x7fd43fea,0x0ffd93a3,
    0xffffff90,0x3bffffff,0x137dff10,0x2a0bff95,0x3ea3ffff,0x00001fff,
    0x2ff8b7e4,0x7ffdc000,0xefffffff,0xffffa800,0xefffffff,0x44027dc1,
    0x7764c2fe,0x5bffb10c,0xff100988,0xf50df705,0x7c0ff30d,0x07fcc03f,
    0xff500ffe,0x7467ffc1,0x404ffd8c,0xdfffffc9,0x0dffea9b,0x7fffffcc,
    0x7fdc05ff,0x0b7fa64f,0x5bf20000,0x80002ff8,0xdfffffc8,0x5cc4001b,
    0x3deffffd,0x26003fb0,0x700001ff,0x3fe205ff,0xfa86fb82,0x2e07f986,
    0x42fec06f,0x7fd403ff,0x3ffffa20,0x4006ffff,0x1bee0199,0x5efff644,
    0x00022002,0x8f2a0000,0x400001cc,0x80000198,0x02a80099,0x0017fdc0,
    0x8813ff20,0x86fc82ff,0x0ff986fa,0x7c40bfa0,0x403ff80f,0x7ec40ffa,
    0x003fffff,0x00062000,0x00000000,0x00000000,0x00000000,0x3f600000,
    0x744001df,0x7fcc05ff,0xfa85fe81,0x201ff886,0x09f906fa,0xff500ffe,
    0x00efcc01,0x00000000,0x00000000,0x00000000,0x00000000,0x3aa00000,
    0x89bcefff,0xeffeb998,0x3ff66602,0x07ff7310,0x3bfa0df5,0x883fb00a,
    0x5bff00ff,0x3f2aa235,0x0027400f,0x00000000,0x00000000,0x00000000,
    0x00000000,0xff700000,0xffffffff,0xff007fff,0x7ffd49ff,0x706fa80e,
    0x3e60dfff,0xff017dc5,0x3fee7fff,0x27400fff,0x00000000,0x00000000,
    0x00000000,0x00000000,0x40000000,0xdefedcaa,0xe88009bc,0x6ffd44ef,
    0x540df500,0x87f206fe,0x6666406f,0x9999931c,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x800d654c,0x000abba8,0x07b213a6,0x20099500,0x00bcedb9,
    0x003ddb88,0x2a2001bb,0x009bcedb,0x0337b260,0x27950000,0x40001cc8,
    0x2001bba8,0x31002ca8,0x33333333,0x300265c1,0x32a60399,0x20e6400a,
    0xdfffffe9,0xffff9100,0x3ee007ff,0x4000ff84,0xfb100ffc,0x9fffffff,
    0x3fffa201,0x13ea00ef,0x7ffffd40,0xc800efff,0x02ffffff,0x45bf2000,
    0x320002ff,0x01ffffff,0x3fffff62,0x3ffee01d,0x26ffffff,0x3ea007fd,
    0x7ffec42f,0xff881eff,0x337ffea2,0xfd80efff,0x4fffdcff,0x7cc2fd80,
    0x0ffc8006,0xceffffa8,0x80efffec,0x5fd88dfb,0x2e003fa0,0xecccdfff,
    0x3ee02fff,0x0fffbadf,0x2df90000,0x50002ff8,0xfffb9dff,0x9dfff105,
    0x3601fffb,0xffffffff,0x801ff66f,0x3fa22ffa,0x1fffdcff,0xff897fc4,
    0x227fdc0e,0x7ec44ffb,0x207fc01f,0xfc8005fa,0x5fffcc0f,0x86ffc981,
    0x03fe60fd,0x3e6013ee,0xfff300ef,0xf51bfe01,0x3200007f,0x005ff16f,
    0xe889ff10,0x1ffec0ff,0x3a03bf66,0x999999cf,0x801ff609,0x3ff62ffa,
    0x543ff442,0x203ff70a,0x07fec7fd,0xf1027fcc,0x0007f90f,0x7f441ff9,
    0x3ffe803f,0x40ffc3fc,0xffb800ff,0x41ffe401,0x4ff83ff8,0x2df90000,
    0xd8002ff8,0x47ff106f,0x3fa04ff9,0x0017fc45,0x7d400ffb,0x20bff12f,
    0x7fc01ffb,0xf8332603,0x817fa04f,0x01fe85fa,0x2e0ffc80,0xff3005ff,
    0x7ec37ccd,0xe8027dc2,0x5ff8806f,0xff88bff0,0xfc810002,0x0085ff16,
    0xfb01ffc4,0x5007fdcd,0x00ff98ff,0xa801ff60,0x03ff52ff,0xfa80ffe2,
    0x6fd8000f,0x7649ff10,0xeeeffeee,0x003eeffe,0xffe83ff2,0x986ee000,
    0x221fe87f,0xffb000ff,0x20553001,0x1ff62ffd,0x9dffb500,0x57fc5bf2,
    0x81dfffd8,0x3ea00ffa,0x980df90f,0x01fee2ff,0x5400ffb0,0xf10042ff,
    0x5d77445f,0x5c00986f,0x1ffb81ff,0x3ffffff6,0xffffffff,0x43ff2004,
    0x80005ff9,0x07fc1ff8,0x7dc007f7,0x440000cf,0x2ffeafff,0x3ffff200,
    0xf16fdeff,0xffffff9f,0x407fc87f,0x0dfb1ff9,0x3f23ff88,0x6c06b265,
    0x3fea007f,0x83ff2002,0x55fcaff8,0x205dfffd,0xd99cffd8,0x4ccc45ff,
    0xfc9999ff,0x3200099d,0x09ff50ff,0x437f6000,0x03fe25fc,0xdfffe880,
    0xff50000a,0x54003dff,0xff910cff,0x3fffe2df,0xc8bffa62,0x97fcc07f,
    0x3e600ffc,0x3f37fa3f,0x6c0dffff,0x3fea007f,0x7fed4402,0x7ed7fc43,
    0xffffffac,0x3ffee04f,0x7c402fff,0x0003fc87,0x3fee1ff9,0xff100002,
    0x7e41ffff,0xffe88003,0x002cefff,0x003fffea,0xf904ff88,0x0bffe2df,
    0x0dfb37f4,0xff72ff88,0xf27fe407,0xffbbffff,0x03fec1ff,0x6405ff50,
    0xf882ffff,0xcffefeaf,0x82fffc88,0xffffffd8,0x742fd404,0xff90001f,
    0x0007fee1,0x0ceec880,0x70001fe2,0xfffffffd,0xffffc807,0x3fee004f,
    0x22dff100,0x3fea05ff,0xff00dfb1,0x203bfe27,0xff14fffa,0x4bff903f,
    0x3ea007fd,0x3fff602f,0x57fc40cf,0xfd00effe,0x5f7fdc1f,0x01effc98,
    0x00ff09f7,0xfa87fe40,0x0000002f,0xffd88ff2,0xfb71002e,0xd10bffff,
    0x5fff19ff,0x2fe40dd4,0x7fc5bf60,0xfd9ffc02,0x2e3ff806,0xfebadfff,
    0x39514fee,0xfd8ffec0,0x0bfea007,0xfffc9888,0x3fabfe22,0x47fea02f,
    0xff105ff8,0xf30bf60d,0x7fe4000d,0x0007ff30,0xd1fe2000,0x007ffdff,
    0x8bfff730,0x3fe63ffd,0xfd0dff0f,0xf16fc80b,0x94ff803f,0x3ff880df,
    0x7fffffe4,0x4003fe8e,0x0ffb3ff9,0x0017fd40,0x7fc4dff1,0x2200ffda,
    0x05ff53ff,0xcca87fe4,0xfdcccdff,0x2002ccce,0x17fe0ffc,0x7e400000,
    0x7cc37e63,0xfd10000f,0x20ffe21f,0x2ffaeffb,0x7dc04ff8,0xe803ff16,
    0x980ff95f,0xfed982ff,0x007ff0bd,0x1ff2bff0,0x001ffb80,0xff887fe4,
    0xff807fca,0xf880ff93,0xfffffb3f,0xffffffff,0x7fe4009f,0x5001bfa0,
    0x3e2003bf,0x3fa17e46,0x5400bb53,0x01ff72ff,0x41fffff2,0xb7dc04fe,
    0x7fc01ff8,0xf980ff74,0x7fc4001f,0x95ff8001,0x3ee001ff,0x7fcc001f,
    0xff75ff13,0xd97fc403,0x34ff806f,0x5555df95,0x235557ff,0xffb02ff8,
    0x2001ffc8,0xf9000ffd,0x7e41fe87,0x2003ff54,0x1ffb3ff8,0x827fff40,
    0xb7e405fc,0x7fc02ff8,0x5c03ff53,0x7d4000ff,0x8809730f,0x03ff73ff,
    0x6543ff20,0x89ffcc04,0x03ff8aff,0x7fe43fe6,0x90bfea00,0x407f887f,
    0x8bfd03ff,0xa800fff9,0xdf3005ff,0x4fb81ff0,0x2a009ff1,0x07ff91ff,
    0xb81fffcc,0x5bfa00ff,0x3ea04ff8,0xe80ffe1f,0x807fa66f,0x0bff26fe,
    0xff32ffa8,0x4dff100b,0x3f201ffb,0x365ff12f,0x4dfd00ff,0x3fa04ffa,
    0x2617ec0f,0x437f406f,0xffc84ff8,0x0fffcc06,0xfe82fd80,0xffb1fe42,
    0x26fe8809,0xfd106ff9,0xff305fff,0x45bfea09,0xdfd00fff,0xff306fc8,
    0xa82ffc45,0x1bfe61ff,0x7ff46fe8,0x31ffe403,0x3fe20bff,0x265ff10f,
    0x3faa1eff,0x067fec1f,0xff09ffb5,0x5c04fb81,0xfea8aeff,0xeffe882f,
    0xffc988ac,0x0df3003f,0x45fd13f6,0x8abeffe9,0x42fffca9,0xd510dffd,
    0x07fffbff,0xffa87ff7,0x3dfff16f,0x220ffec4,0x3fe60eff,0x542ffd84,
    0xcffd83ff,0x10bffa21,0x3337bffd,0xfb09ffd7,0x3fae219f,0xa8bfe22f,
    0xfffeefff,0xefffe882,0xf885ffff,0xe803fc87,0x3fffffff,0x3ffffa20,
    0x03ffffff,0x7cc0bf60,0x886fc8af,0xfffffffe,0xfd881fff,0x3fffffff,
    0xf903fff5,0xf9fffdff,0x3ff3fe2d,0x703fffee,0xfffddfff,0xdfffd101,
    0x3a20bfff,0xfffeefff,0xfffff302,0x20bfffff,0xffefffe8,0x17fc44ff,
    0x37ffff62,0x7fffdc02,0x0bf502ff,0xf91003fd,0x2007dfff,0xffffffda,
    0x1be6000c,0x3fffff90,0x7fff6dc0,0x7dc00cef,0x541dffff,0x3ff6e04f,
    0xf16fb8ef,0xdfffd53f,0xfffe9803,0x3f2201df,0xb802dfff,0x01dfffff,
    0x7ffffe4c,0xffb803ef,0xf881efff,0x0006602f,0x53002662,0x30005503,
    0x4cc00013,0x5d900009,0x017b9300,0x8000cc40,0x800c0098,0x98800098,
    0x04cc4000,0x00033100,0x4c0006a2,0x880009a9,0x0000001a,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x01db0000,0x11f76540,0x99999999,0x23999999,0x4c001ccb,0x0732e3cc,
    0x950ccb80,0x19990019,0x32e59900,0x3cc8000c,0xc9800732,0xcccccccc,
    0x74cccccc,0x99999999,0x99001557,0xcccb8003,0x0aaacccc,0x32e39910,
    0x3991000c,0x0003332e,0x17e45999,0x5ffffc80,0x3fffffe6,0xffffffff,
    0x001fff33,0xff30fff4,0x9ff5001d,0x2a017fd4,0x7cc03fff,0x005ff73f,
    0xff13ff98,0x7ffd4005,0xffffffff,0xffb7ffff,0xffffffff,0x3e201dff,
    0x7fec002f,0xffffffff,0x97fc42df,0xf3004ffe,0x0ffffa5f,0x25fff980,
    0xff9805fa,0x3fe62bcf,0xffffffff,0x3f23ffff,0x7ff9005f,0x880bff70,
    0x27fc46ff,0x017fff20,0x3fe21ff7,0x87fe4005,0x2a002ff8,0xffffffff,
    0x7fffffff,0xdddddffb,0x3ffffddd,0x8005ff10,0xfffffffd,0x21ffffff,
    0xfffd2ff8,0x25ff3003,0x2006fffe,0x3e25fffc,0x02ffa807,0x0effa800,
    0x26017ff4,0x3ff605ff,0x203ffa02,0x6ff406fe,0x237ec07f,0x3e000ffd,
    0x00bfe25f,0x007fe400,0x32201ff6,0x2ff887ff,0x403fec00,0xff10fffd,
    0x03bfffa5,0x3fa5ff30,0xff001fff,0x01fd8bff,0x00007fdc,0x2607ffe6,
    0x3fa00eff,0x3ffe200f,0x902ffc80,0x4ffc40ff,0x13fe02ff,0x2a007ff5,
    0x0bfe22ff,0x07fe4000,0xe801ff60,0x17fc41ff,0x401ff600,0x5ff12ffc,
    0x013ffffa,0x37fa5ff3,0xefa803ff,0x01fdc5ff,0x10001fee,0x7e405ffd,
    0x07ff704f,0xfa8bff50,0x07fea04f,0x04feb7dc,0xdff05ff3,0xf11bf600,
    0x9000085f,0x7fd801ff,0x10ffea00,0xfd8005ff,0x29ff3007,0xbbfd2ff8,
    0x7fcc03ff,0x0df9bfd2,0x8bff7f90,0xfdd905f9,0xd000bddf,0xffd009ff,
    0x005ff983,0x7fc4fff6,0x81ffc406,0x20df74fd,0xffc80ffb,0x21ffc401,
    0xfec8aff8,0x3f2003ef,0x03fec00f,0xf889ff30,0x0ded882f,0xff801ff6,
    0x3fa5ff16,0x300eff8d,0x277fa5ff,0x47fc01ff,0x80ff85ff,0x6ffffffd,
    0x02ffe400,0x7f46ff98,0x3fa2000f,0x800ffd8f,0x25ff05fe,0x5fd80ff9,
    0xb809ff10,0x67fc40ff,0x5ffffffe,0x801ff900,0x3f2007fd,0x217fc42f,
    0x7ec1ffe8,0x29ff5007,0x2bfd2ff8,0xff304ffb,0x1ff57fa5,0x17fedf50,
    0x32620bf2,0x200099ff,0x2000effa,0x5ff73ffc,0xffff3000,0x1fee005f,
    0x07ff1fe6,0x37ec07ff,0x3e217fa0,0xea89bfff,0xffc803ff,0x803fec00,
    0x7c40fffb,0x07ffa22f,0x7ec01ff6,0x3a5ff13f,0x20bffa5f,0x2bfd2ff9,
    0x4ff606fc,0x04fa85ff,0x26001fee,0xe8000fff,0x004ff9ff,0x017fff20,
    0x7e41ff98,0x3e62fec5,0x07fea01f,0x7c417fcc,0x4ff882ff,0x400ffc80,
    0xaaaaaffd,0x2fffecca,0xfd12ff88,0x01ff603f,0x221fff71,0x44bfd2ff,
    0x7fcc0eff,0x3fe6bfd2,0x3fe1ff01,0x2e06f885,0x7f44007f,0xff30002f,
    0x40001dff,0x4002fff8,0x21ff42ff,0x03fdc7fb,0x7fc827fc,0x740bff10,
    0x0ffc806f,0x7ffffec0,0xefffffff,0xd15ff101,0x7fec03ff,0xfeeeeeee,
    0x3fe22fff,0xffb8bfd2,0xfe97fcc4,0x3ea0ffa5,0x7f417fe5,0x800ff700,
    0x40003ffd,0x0001fffc,0x007fffec,0x7fc49fb0,0xfb0ffc41,0x20ff900b,
    0x9ff104ff,0x6403fe40,0x7fec00ff,0xfffffeee,0x5ffc401b,0x7ec01ffe,
    0xffffffff,0x7fc41eff,0xffd0bfd2,0xfe97fcc5,0x3f61bf25,0x7e417fe2,
    0x400ff703,0x00005ffc,0xb8000bff,0x006ffdff,0x07fa9bee,0x017fc7fd,
    0x3ea17fcc,0x07ff100f,0x7e403fdc,0x83fec00f,0x4401effa,0x03ffffff,
    0x66667fec,0xf101abcc,0x2217fa5f,0x5ff30eff,0x1ff997fa,0x5ff83fe2,
    0x3ee0bf30,0x1dff5007,0x17fe0000,0xb5ff9800,0x3e6007ff,0x3209f90f,
    0x001ff15f,0x0bfb17fa,0xf7017fc4,0x01ff900f,0x3e607fd8,0x3fe201ff,
    0x201ffdef,0x220007fd,0x20bfd2ff,0x5ff34ffb,0x47fd17fa,0x02ffc5fa,
    0x01fee0ff,0x0003ffe6,0x0005ff80,0x3e21fff1,0x5ff001ff,0xbfd40bfe,
    0x3ee006fa,0x405ff10f,0x3ee02ff8,0x00ffc807,0x3ea03fec,0xdff100ef,
    0x6c0dff11,0x3e20007f,0x740bfd2f,0xd2ff9aff,0x366fc8bf,0xb02ffc2f,
    0x80ff703f,0x0001ffe8,0x8002ffc0,0x7fd42ffd,0x9cfd800e,0x1ff100ff,
    0x7c4009f9,0x880ff72f,0x1fee02ff,0xb003ff20,0xbff900ff,0xfb8bfe20,
    0x00ffb03f,0xfe97fc40,0x2bffe205,0x98bfd2ff,0xf87f89ff,0x213ee05f,
    0x7fec07fb,0xff800003,0x4ffb8005,0x500bff90,0xe80df7bf,0x4002feaf,
    0x809fb5fd,0x3ee02ff8,0x00ffc807,0x74403fec,0x2ff883ff,0x7ec0ffec,
    0x3fe20007,0xfb80bfd2,0xbfd2ffef,0x0bf57fd0,0x37c40bff,0xff903fdc,
    0x3e000009,0x7fcc005f,0x017ff406,0x00ff7fe2,0x001ff9f7,0x1ff8ffa8,
    0x7017fc40,0x1ff900ff,0x5007fd80,0xff881fff,0x6c37fc42,0x3e20007f,
    0xd00bfd2f,0x3fa5ffff,0x2fdefc85,0x7f405ff8,0xf983fdc0,0xaaaaaaff,
    0x02aaaaaa,0x4400bff0,0x7cc01ffe,0x7ff400ff,0x7ffcc01f,0xfbfd0005,
    0x05ff100d,0x7e403fdc,0x03fec00f,0xf88bffb0,0x43ffb82f,0x220007fd,
    0x00bfd2ff,0x3a5ffff3,0x7fff985f,0xfc80bff0,0xfa83fdc2,0xffffffff,
    0x05ffffff,0x6c00bff0,0xff7003ff,0x07ffc80d,0x0007fff0,0x200fffee,
    0x3ee02ff8,0x00ffc807,0xf1003fec,0x17fc45ff,0x3f61ffe8,0x3fe20007,
    0x2e00bfd2,0x0bfd2fff,0x7fc13ffa,0x2e2fd405,0xffff507f,0xffffffff,
    0x3e00bfff,0xbff7005f,0x03ffd800,0x6c017fea,0xf10001ff,0xff1001ff,
    0x403fdc05,0x7ec00ffc,0x77fd4007,0x2605ff10,0x01ff66ff,0xfd2ff880,
    0x97ff400b,0x3ff705fe,0x2a017fe0,0x00000002,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xcb800000,0x01e5c003,0x2a1ccc88,0xcccccccc,0x930ccccc,0x80132a39,
    0x32201cc9,0x2aeea202,0x99999700,0x99999999,0x4ccccc49,0x09999999,
    0x2e0f2600,0xaccccccc,0x66440001,0x0b32a003,0x0b37b2e2,0x6666665c,
    0xea801aab,0x0004402e,0x006fe808,0x744037f4,0x7ffe44ff,0xffffffff,
    0x25ff50ff,0x3ea007fd,0x213fa02f,0xffffffd8,0x7fffec0c,0xffffffff,
    0xffff90ff,0xffffffff,0x17fa2009,0x3ffffffa,0x000effff,0x000fffb8,
    0xffa89ff7,0x42efffff,0xfffffffd,0x2e03efff,0xffdb82ff,0xee884eff,
    0x3a3effa8,0x37f4006f,0x213ffa20,0xfffffffc,0x50ffffff,0x01ff65ff,
    0xf902ffa8,0xffff889f,0x20efffdd,0xfffffffd,0x0fffffff,0xfffffff9,
    0x009fffff,0x3fa17ff6,0xffffffff,0x74001fff,0xf7004fff,0x6fffcc9f,
    0x21fffeba,0xfffffffd,0x80efffff,0x3f622ffb,0xefffffff,0x3febfe20,
    0x01bfa4ff,0x7440dfd0,0x0ff904ff,0x6cbfea00,0x3fea007f,0x27ffe442,
    0xb882bff6,0x01ff65ff,0x99999880,0x0ffe9999,0x85fffa80,0x3f2606fe,
    0x3fe6006f,0xff7007fb,0x4c0fffc9,0x81ff66ff,0x005ffea9,0x5446fff6,
    0x3fe23ffd,0x3a1dbcff,0x37f4006f,0x203ffe88,0xf50007fc,0x801ff65f,
    0x3fea2ffa,0x3fe64fff,0x6c3ffa05,0x4000007f,0xf8802ffb,0x6fe85fff,
    0x001ffb80,0x05ff1bfb,0x3ea9ff70,0x47ff605f,0xfe8807fd,0x4ff8803f,
    0x7c4dff10,0x1bfa02ff,0xd10dfd00,0x7fc807ff,0x25ff5000,0x3ea007fd,
    0xd5fff92f,0x017fdc9f,0x1ff63ff5,0xff880000,0xfb9fb005,0x300dfd0b,
    0xff1007ff,0x2e017f67,0x03ff93ff,0x7fd97fcc,0x01ffd100,0x3600cb88,
    0x017fe26f,0xfe800dfd,0x01fff446,0xa8003fe4,0x00ffb2ff,0xefe97fd4,
    0x254c9fd0,0x7ec7fea0,0x3a000007,0x6fb800ef,0x0dfd0bfb,0x7005ff30,
    0x03fee1ff,0x2627ff70,0xd8ffcc02,0x3fea007f,0xfd980003,0xd013fe26,
    0x6fe800df,0x400bffa2,0xf50007fc,0x801ff65f,0xe85b2ffa,0xffd8004f,
    0x0000ffb0,0x2007fee0,0x0bfb1ff9,0xff700dfd,0x44bfd001,0x7fd404ff,
    0xb3fe4002,0x4ff800ff,0x3b2ea200,0x3e26ffff,0x037f403f,0x7f45bfa0,
    0x1ff2002f,0xd97fd400,0x3fea007f,0x0013fa02,0x3fecdff1,0x7fc40000,
    0x6c7fd004,0x206fe85f,0x9803ffc8,0x03fec2ff,0xb800bfe6,0x01ff64ff,
    0x9100dfd0,0xdbffffff,0x017fc4df,0xfd001bfa,0x09fffd1d,0x7777fe40,
    0x43eeeeee,0xfffb2ffa,0xffffffff,0x7405ffff,0x7fec004f,0x3bbbff61,
    0xeeeeeeee,0x01ffc801,0x2fec5fc8,0x77777ff4,0x002fffff,0x5ff50ff9,
    0x800ffcc0,0x3fec5ffb,0x101ff600,0x437bdffd,0x0bfe26fc,0xe800dfd0,
    0xffeffeef,0xffff9001,0x9fffffff,0xffb2ffa8,0xffffffff,0x405fffff,
    0x3f2004fe,0x7fffec4f,0xffffffff,0x06ff802f,0x7ec0ff98,0xfffffe85,
    0x02ffffff,0x3fe09ff0,0x007fe206,0x3f617fee,0x07fe4007,0x6c07ff90,
    0x00bfe27f,0xfe800dfd,0xfff99fff,0xccffc800,0x2ccccccc,0xffd97fd4,
    0xaaaaaaaa,0x202ffcaa,0xff9004fe,0x999ffb0b,0x99999999,0x02ffa803,
    0x7ec17fc4,0xcccffe85,0xdffeeccc,0x407fea00,0xff101ffc,0x0eff9801,
    0x6c007fd8,0x037f407f,0x2ff89ffe,0x20037f40,0x3ee1fffe,0x07fc805f,
    0x365ff500,0x3fea007f,0x1013fa02,0x3f60bffb,0x7ec00007,0xb05fd807,
    0x00dfd0bf,0x7ec0bff9,0xcaaaaaaf,0x03fe04ff,0x3601dfd0,0x3ff4007f,
    0x1bfa5dd5,0x3e27ffb8,0x037f402f,0x3607ffa0,0x3fe403ff,0xb2ffa800,
    0x7fd400ff,0x8813fa02,0x3f604ffe,0x3e200007,0x57fd404f,0xefd99999,
    0x00dfd099,0x3e203ff6,0xffffffff,0x1fe07fff,0x6c05ff10,0x2ffc007f,
    0x3ff65ff7,0x3fffdc43,0xfe805ff1,0x837f4006,0x3201fff8,0xff50007f,
    0xa801ff65,0x13fa02ff,0x201fff44,0x200007fd,0x7e400ffb,0xffffffff,
    0xdfd3ffff,0x20bfea00,0xeeeeeffb,0x02ffeeee,0x0ff980fd,0x9801ff60,
    0x4bfee4ff,0xfedffff8,0xf10ffbef,0x06fe805f,0xf5037f40,0x1ff201df,
    0xd97fd400,0x3fea007f,0x2213fa02,0xfd802ffe,0x3fa00007,0xffffc805,
    0xffffffff,0x200dfd3f,0x6fe83ffa,0xd06ff880,0x407fa80d,0x3f6007fd,
    0xb30fc41f,0x7c7fffff,0x805ff13f,0x7f4006fe,0x82ffec06,0xf50007fc,
    0x801ff65f,0x3fa02ffa,0x00fffc44,0x00007fd8,0x400013fe,0x06fe85fd,
    0xf983ff90,0x3ffb003f,0xfd800000,0x0dff3007,0x133101f5,0x6fe80000,
    0x2037f400,0xfc83ffe8,0x5ff50007,0xfa801ff6,0xb13fa02f,0x7ec003ff,
    0xff300007,0x3f600005,0x9806fe85,0x0ffc87ff,0x009ff300,0x07fd8000,
    0x442fffa8,0x0000005e,0xaaaaefe8,0xfd2aaaaa,0x3fff300d,0x50007fc8,
    0x01ff65ff,0x3a02ffa8,0x2b7fea4f,0xaaaaaaaa,0x5555ffb0,0x55555555,
    0x003ff503,0x3a17f600,0xaaaaaaef,0xf82fffdb,0x7ff4005f,0xb80bbaa0,
    0x3ff601ee,0xeccaaaaa,0x05983fff,0xfd000000,0xffffffff,0x01bfadff,
    0x3f237fe4,0x5ff50007,0xfa801ff6,0xe93fa02f,0xffffffff,0xffb2ffff,
    0xffffffff,0xf709ffff,0x7ec0000f,0xfffffe85,0x3fffffff,0x4002ffa8,
    0x3fea3ffb,0x80bff203,0xfffffffd,0x003fffff,0xe8000000,0xffffffff,
    0x0dfd6fff,0xf927ff40,0x3fea000f,0x5400ffb2,0x93fa02ff,0xffffffff,
    0xfb2fffff,0xffffffff,0xb09fffff,0x6c0000df,0xffffe85f,0x0bdeffff,
    0x1000ffb0,0x1ffd4dff,0x6c05ff90,0xefffffff,0x000002de,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x02200000,0x00004400,0x00200011,0xeb807ba2,0x80008805,
    0x00000800,0x3aa00000,0x7409d92e,0x23dd104e,0x76400eea,0x201bdb14,
    0x776c1eeb,0xeeeeeeee,0x01f6401e,0xd502f540,0x7fecc05d,0x64c00def,
    0x800cfffe,0x0defffd9,0x77fff540,0x02ff881d,0x47745bf2,0x44effec8,
    0xfec88ee8,0x3ff661df,0x00e540df,0x0da80000,0x1fee7ff5,0xfa83ffcc,
    0x880ffe27,0x13fea3ff,0x3fa17fe6,0xffffffff,0x27f401ff,0x817ff400,
    0xff702ffb,0x05ffffff,0x3fffffea,0x3ff201ff,0x03ffffff,0xfffffff9,
    0x02ff887f,0x4ffc5bf2,0x6ffffffe,0x3ffabfe2,0xff98ffff,0x2e0fffff,
    0x00002eff,0x50fffb88,0x0bfe67ff,0x3207fff2,0x7037ec5f,0x1ffd81ff,
    0x2203bfa2,0xb9999999,0x4fe804ff,0x2fffd400,0xfa82ffb8,0xffd30bef,
    0x11dff983,0xf701ffd5,0x7ff4c3bf,0x50e7fcc2,0x7fc41ffd,0x7c5bf202,
    0xfd31dfff,0x3fffe25f,0xfeffc88b,0x4ffc88bf,0x2fffffa6,0x7e4c0000,
    0xfe805fff,0x83fffe84,0x0ffd42ff,0xff885fe8,0x0007ff26,0x74017fe6,
    0x67ec004f,0x03f100ff,0x37f40dfd,0x3ea0bff1,0x02ffc43f,0x06fb8dfd,
    0x7fc47ff3,0x7c5bf202,0x5ff881ff,0xfb05fff1,0x0dfd01ff,0x3bffff93,
    0xfffea800,0xdf9000bf,0x45fcff88,0x4ff80ff9,0xf502ff88,0x007ff59f,
    0x001dff10,0xf98013fa,0xf504fd8f,0x203ffb81,0x3ff31ffb,0x3f21eec0,
    0x8bfea00f,0x81300ffc,0x3f202ff8,0x6c0bff16,0x20bff16f,0xff903ffb,
    0x7fff5c40,0x3ff2203e,0x98002dff,0x277ea0ff,0xc82fe47f,0x407fb86f,
    0x005ffffc,0x880ffe88,0xcfe99999,0xf9019999,0xd103fe6b,0x401ff90b,
    0x0ff73ff8,0x2017f600,0x3bfea4ff,0x2ff8801b,0x7fc5bf20,0x7c5ff204,
    0x05ff304f,0x6d401fee,0x3624ffff,0x000cffff,0x7f917fc0,0x03fe87fe,
    0x4fe83ff3,0x00fffe80,0x501ffd80,0xffffffff,0x881fffff,0x30ffa1ff,
    0x3bbff60b,0xffeeeeee,0x2000df94,0x5fe804fe,0x67ffffe4,0x405ff102,
    0x07ff16fc,0x3ff8bfe4,0x2e03ff30,0x7dc4007f,0x5dff70ff,0x2fec0000,
    0x44ff63fd,0x93fa00ff,0xfc801ff9,0xffc8006f,0x3fffea02,0xffffffff,
    0x2e37dc0f,0x3ffa007f,0xffffffff,0x00bfd5ff,0x36013fe0,0xfffeb86f,
    0x7fc42fff,0x7c5bf602,0x45ff202f,0x3ff302ff,0x5001fee0,0x3ee1fffb,
    0x00001cff,0xb9fe2ff5,0xb80df75f,0x201bf27f,0x003ffff9,0x40013fee,
    0x7ff004fe,0xd002ff88,0x333333bf,0x3f613333,0x09fd0006,0x5cc0bfd0,
    0x223ffffd,0x5bfa02ff,0x3f202ff8,0x2605ff17,0x0ff701ff,0xbffff710,
    0xefffeb85,0x7fc40002,0x3fe65fb9,0x7c403fd8,0xd007ff2f,0x003ff9df,
    0x4000bff5,0xffa804fe,0x3aa6fc80,0x0037ec2e,0x2a6037e4,0x7c02fec1,
    0x3fea005f,0xf80ffe26,0x405ff16f,0x05ff17fc,0x7dc07fe6,0x3fff6607,
    0x7ecc00cf,0x0000cfff,0xf87fb7fb,0xd801ffaf,0x400ffacf,0x0dfd1ffc,
    0x0006ff98,0x7f4027f4,0x2a3ff305,0x07fdc2ff,0x3ee39b10,0x91bfa00f,
    0x7fcc01ff,0xfc80f6e3,0x5c17fe0f,0x05ff16ff,0x2ff8bfe4,0x2e03ff30,
    0x7ff5c47f,0x44000bef,0x02dffffc,0x0fff7dc0,0x401bfbf6,0x405fcffa,
    0x3fe64ff9,0x01dff304,0x404fe800,0x2aa00aa8,0xf885ff51,0x47ff605f,
    0xff304ff8,0x204ff987,0x3ffa0ffd,0xfd8ff900,0xfff710bf,0xc80bfe2d,
    0x205ff17f,0xff701ff9,0x0effffd4,0xffea8000,0x05dd50ff,0xf70ffff1,
    0x7fc009ff,0x3fe202ff,0x442ffc86,0x99988ffe,0x74009999,0x0000004f,
    0x441bff70,0x7fdc5ffc,0x407ff544,0x7ec44ffc,0x0effdc2f,0xf989ff51,
    0xbeffefff,0x405ff16f,0x05ff17fc,0x7dc07fe6,0x0033fee7,0x7fecc000,
    0x3a07ff50,0xfff985ff,0x1fff2001,0xd103ffb0,0x7ffdc1ff,0xffffffff,
    0x0165c05f,0xfb000000,0xdfffddff,0xfdfffb01,0x36203fff,0xfffeefff,
    0xdffffb02,0xb101bfff,0x3eabffff,0x6405ff16,0x205ff17f,0xff701ff9,
    0x000001d4,0x3fea1910,0x207ff903,0x7cc007ff,0x13fea04f,0x3ee5ffa8,
    0xffffffff,0x00005fff,0xd5000000,0x017fffff,0x6fffff54,0xfffeb800,
    0x7fdc02df,0x3004efff,0x02ff8803,0x17fc5ff2,0xf701ff98,0x0000000f,
    0x00000000,0x00000000,0x00000000,0x4c000000,0x4cc40009,0x00988000,
    0x00099880,0x00000000,0x55510000,0x55555555,0x81754055,0x27990cca,
    0x09980ccb,0x07993080,0x59999999,0x44444444,0x88888888,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x3ffffea0,0xffffffff,
    0x3205f500,0x36dff0ff,0x3fff20ff,0x23b80bef,0x7ffc0ffd,0xff54ffff,
    0xffffffff,0x03ffffff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x20000000,0xfffffffa,0x20ffffff,0x8aa3f52a,0x2dff0ffc,0xfffb0ffd,
    0x97bfffff,0x27f447fd,0x3bbbbbba,0x99999933,0x99999999,0x00000199,
    0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0xfecfcefe,
    0x7fc3ff26,0x3f61ffb6,0xffffdbac,0x7cc2ffff,0x0000000f,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x65400000,0x22cefffe,
    0x2bff0ffc,0x540727fc,0x301efffd,0x00000015,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x22000000,0x6fa80fff,0x037dcff6,
    0x00000040,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x99880000,0x99999999,0x9fe88199,0x92fcc0ef,0x0017e65f,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xffffa800,
    0xffffffff,0xfb9fec0f,0x43aa3e85,0x000002e8,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x3fffffea,0x0fffffff,
    0x00032244,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x44000000,0x99999999,0x00019999,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_32_usascii_x[95]={ 0,2,1,0,1,1,1,1,1,1,0,1,2,0,
2,0,1,3,0,1,0,1,1,1,1,1,2,2,1,1,1,1,1,-1,2,1,2,2,2,1,2,2,0,2,
2,2,2,1,2,1,2,1,0,2,0,0,0,0,0,1,0,0,0,-1,1,1,1,1,0,1,0,0,1,1,
-2,1,1,1,1,0,1,1,1,0,0,1,0,0,0,0,0,0,2,0,1, };
static signed short stb__arial_32_usascii_y[95]={ 25,4,4,4,2,4,4,4,4,4,4,8,22,16,
22,4,4,4,4,4,4,4,4,4,4,4,10,10,7,10,7,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,28,4,9,4,9,4,9,4,9,4,4,
4,4,4,9,9,9,9,9,9,9,4,10,10,10,10,10,10,4,4,4,12, };
static unsigned short stb__arial_32_usascii_w[95]={ 0,4,8,16,14,23,18,4,8,8,11,15,4,9,
4,8,14,8,15,14,15,14,14,14,14,14,4,4,15,15,15,14,28,21,16,19,18,16,15,20,17,4,13,18,
13,20,17,20,16,21,19,17,17,17,19,27,19,19,17,7,8,7,13,18,6,14,14,14,14,14,9,15,13,4,
7,14,4,22,13,15,14,13,9,14,8,13,14,21,15,15,14,9,3,9,15, };
static unsigned short stb__arial_32_usascii_h[95]={ 0,21,8,22,26,22,22,8,28,28,9,14,8,3,
3,22,22,21,21,22,21,22,22,21,22,22,15,20,15,10,15,21,28,21,21,22,21,21,21,22,21,21,22,21,
21,21,21,22,21,23,21,22,21,22,21,21,21,21,21,27,22,27,12,3,5,17,22,17,22,17,21,23,21,21,
28,21,21,16,16,17,22,22,16,17,22,16,15,15,15,22,15,28,28,28,6, };
static unsigned short stb__arial_32_usascii_s[95]={ 254,185,141,31,96,82,124,150,62,71,129,
218,248,178,248,245,173,73,82,236,130,203,1,115,16,188,145,224,129,113,113,
190,1,163,146,62,205,98,34,224,55,50,48,15,1,233,215,203,193,111,158,
106,140,218,106,78,58,38,20,80,1,88,234,188,171,229,158,16,143,1,10,
133,126,251,30,178,210,90,76,31,188,174,244,47,149,62,172,150,187,158,203,
52,48,38,155, };
static unsigned short stb__arial_32_usascii_t[95]={ 1,76,114,30,1,30,30,114,1,1,114,
98,98,114,107,1,30,76,76,30,76,30,30,76,30,30,98,76,98,114,98,
76,1,76,76,30,76,76,76,1,76,76,30,76,76,53,53,1,53,1,53,
30,53,30,53,53,53,53,53,1,53,1,98,114,114,76,30,98,30,98,53,
1,53,30,1,53,53,98,98,98,1,1,76,98,1,98,98,98,98,1,98,
1,1,1,114, };
static unsigned short stb__arial_32_usascii_a[95]={ 127,127,163,255,255,407,306,87,
153,153,178,268,127,153,127,127,255,255,255,255,255,255,255,255,
255,255,127,127,268,268,268,255,465,306,306,331,331,306,280,356,
331,127,229,306,255,382,331,356,306,356,331,306,280,331,306,433,
306,306,280,127,127,127,215,255,153,255,255,229,255,255,127,255,
255,102,102,229,102,382,255,255,255,255,153,229,127,255,229,331,
229,229,229,153,119,153,268, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_32_usascii_BITMAP_HEIGHT or STB_FONT_arial_32_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_32_usascii(stb_fontchar font[STB_FONT_arial_32_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_arial_32_usascii_BITMAP_HEIGHT][STB_FONT_arial_32_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_32_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_32_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_32_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_32_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_32_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_32_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_32_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__arial_32_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__arial_32_usascii_s[i] + stb__arial_32_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__arial_32_usascii_t[i] + stb__arial_32_usascii_h[i]) * recip_height;
            font[i].x0 = stb__arial_32_usascii_x[i];
            font[i].y0 = stb__arial_32_usascii_y[i];
            font[i].x1 = stb__arial_32_usascii_x[i] + stb__arial_32_usascii_w[i];
            font[i].y1 = stb__arial_32_usascii_y[i] + stb__arial_32_usascii_h[i];
            font[i].advance_int = (stb__arial_32_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__arial_32_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_32_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_32_usascii_s[i] + stb__arial_32_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_32_usascii_t[i] + stb__arial_32_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_32_usascii_x[i] - 0.5f;
            font[i].y0f = stb__arial_32_usascii_y[i] - 0.5f;
            font[i].x1f = stb__arial_32_usascii_x[i] + stb__arial_32_usascii_w[i] + 0.5f;
            font[i].y1f = stb__arial_32_usascii_y[i] + stb__arial_32_usascii_h[i] + 0.5f;
            font[i].advance = stb__arial_32_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_32_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_32_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_32_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_32_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_32_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_32_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_32_usascii_LINE_SPACING
#endif

