// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_bold_26_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_bold_26_usascii'.
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

#define STB_FONT_times_bold_26_usascii_BITMAP_WIDTH         256
#define STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT         92
#define STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_bold_26_usascii_FIRST_CHAR            32
#define STB_FONT_times_bold_26_usascii_NUM_CHARS             95

#define STB_FONT_times_bold_26_usascii_LINE_SPACING          17

static unsigned int stb__times_bold_26_usascii_pixels[]={
    0xccddc980,0x3722000a,0x32203f10,0xc895400d,0x059b1ccc,0xccca806e,
    0x76e54404,0x362001bc,0x0000000c,0xdd900000,0x1776c9dd,0x59b97510,
    0xdb750003,0x306e17bd,0x3332e19b,0x664c1ccc,0x999932cc,0x665c3999,
    0xd70001cc,0x01b73039,0x3e2bff70,0x4404fa81,0x22ffa83d,0x209b04fa,
    0x7d401ffb,0xcfea88bf,0x3777a600,0xeda80bee,0xd50cccce,0x7dd91bdd,
    0x9deeb980,0x3ffec1e8,0x7ff501f4,0x009fd511,0x226fbfa6,0x6c1fefeb,
    0x3fff24ff,0x2067e406,0xf104fffd,0x00de981d,0x91001bb1,0x14ffa801,
    0x00ff883f,0x7fcc13a2,0x5e817f42,0x7ec07fb8,0x0eff883f,0x2e775f88,
    0xf9a7fc2f,0x3fee0cdf,0x04ffdbdf,0x3fee3ff1,0x0fffcc1f,0x83ffd81a,
    0x2e00eff8,0x3fea06ff,0x3e2fff41,0x82d407ff,0x3602fffb,0x884ffe83,
    0x00d8003f,0xa83f11d4,0x03f600ff,0x3fa17fc4,0xfb89f505,0x81bfee07,
    0x3fc86ffb,0xff716c77,0x7cc37f43,0x0bffa1ff,0x7fc49fd1,0x24ffd81f,
    0x0dff7039,0xf9837fdc,0x0fe401ff,0xff713ff6,0xb80ec05f,0x0b201fff,
    0x1760fff6,0x20024c00,0x0ffd41f8,0x3e205fb8,0xf027fc2f,0x883fdc3f,
    0x3e203fff,0x477fc3ff,0xffe8a63b,0xf303ffa0,0x44ffb8ff,0x3fe22ffb,
    0x0fffa81f,0x7fff1019,0x41fffc40,0x3d005ffe,0x7c42ffc8,0x40b106ff,
    0x3201fffb,0xeb83c882,0xcabed880,0x775c0e0c,0xf883f13e,0x407fd02f,
    0x3fe22ff8,0xfb97f203,0x03fff907,0x7ec7ffe8,0x3fa03def,0x303ffa0f,
    0x6ffa8fff,0x3fe17fec,0x27ffd01f,0x03fff905,0x7dc7ffe8,0x813003ff,
    0xffc81ffa,0x2e01c81f,0x0b201fff,0xbf505f00,0x4071ffb2,0x03f14ffc,
    0x3ff507ff,0xf317fc40,0x87fdc05f,0xfffb07fb,0x0fffe803,0x817fffea,
    0x1bfe2ffc,0xff51ffe6,0x7c1fff8f,0xdff701ff,0x3fff6055,0x07fff401,
    0x0005fff9,0xff983fc4,0x2e03444f,0x0b201fff,0xff987a80,0x1a89ff71,
    0x3e29ff70,0xfc82fe81,0x8bfe200f,0x3ea01ff8,0x3e0ff73f,0x7ec00fff,
    0x7ffe41ff,0x2bf901ef,0xff980efb,0x3e37fd47,0x0fffc1ff,0x7c0dfff0,
    0x7ec00fff,0x3fffa1ff,0x02fc0001,0x15c1fffb,0x807ffee0,0x2132002c,
    0x0bff25fe,0x53fee035,0x837c41f8,0x3e200ffe,0x301fe42f,0x41fee9ff,
    0x6c00ffff,0xffb82fff,0xdd902fff,0x3ffcc059,0xffb17fee,0x201fff85,
    0x3fe04ffc,0x7fec00ff,0x03fffe2f,0x5407b000,0x201a3fff,0x3201fffb,
    0x43d81502,0x3ffa2ffa,0x9ff70240,0x0de987e2,0x4401fff0,0x02eb82ff,
    0x1feebff3,0x2007fff4,0xd101fffd,0x3d81ffff,0x91ffe600,0x4ffb87ff,
    0xf100fffc,0x7fff403f,0x0ffff400,0x9503fffd,0xc8999999,0xab7ff402,
    0x1fffb803,0x3ffa0b20,0x4ffd0ba2,0x20486ff9,0x23f14ffb,0x3ffc03f8,
    0x4c0bfe20,0x76ff982e,0x3fff60ff,0x07fff401,0x47fffd70,0x09999dfb,
    0x229fff30,0xfff885ff,0x01fffd89,0x3ff6036c,0x7fffc01f,0x80bfff20,
    0x1a84fffe,0x757ffdc0,0x1fffb800,0xfff10b20,0xbff10f4d,0x0e21ffe4,
    0x3f14ffb8,0xfe807644,0x417fc407,0xbff301ed,0x7fd41fee,0x2fffc02f,
    0xdff77702,0x7fffffe4,0x7ffcc1ef,0x300dfffa,0xfff3ffff,0x5403a803,
    0x3e202fff,0x7ffd45ff,0x07fff203,0x7fffc400,0x5fff3004,0x7fec0ec0,
    0x4ff98f67,0x0c83ffd3,0x7c53fee0,0x6c077c41,0x3fe200ff,0xf3017e42,
    0xe81fee9f,0x3fea05ff,0x74ee2c0f,0x3fffe65f,0x7cc7ffff,0x4c00267f,
    0x1107ffe1,0x7ff4006c,0x03ffe605,0xfb817ffa,0x800981ff,0x1000fffc,
    0x07405fff,0xa92e5a88,0x7fdc9dff,0x3fee00dc,0x5fd03f14,0x4401ff90,
    0x07fe22ff,0xff73ffa8,0x807ffcc0,0x21e83ffd,0x6c45fb3b,0xffecccce,
    0x001ffe61,0xf10fffc0,0x2600911f,0xffd00fff,0x0fffe207,0x2e0fffdc,
    0x7fcc02ff,0x27ff4005,0x516c05a8,0x477ffc4b,0x1c5917fc,0x3f14ffb8,
    0xff307ff0,0x317fc405,0x7fdc05ff,0xe980ff70,0x1ffdc0df,0xf1770fe8,
    0xfb00fe8d,0x0007ff98,0x7cc3fff0,0x22000dbf,0x7fe40dfe,0x0fff4402,
    0x3a0fffdc,0x1fd805ff,0x1fffcc00,0x84a80d51,0x4437ee1e,0x0e20bcfd,
    0x1f8a7fdc,0xfe817fcc,0x88bfe203,0x93f203ff,0xeb8807fb,0x01cfecce,
    0x37bb7fae,0xf982fe82,0x003ffd43,0x20fffc40,0x90001dfc,0x3bdd99dd,
    0x6fff5400,0xb81cefdc,0x06a802ff,0xdfffd100,0x80dc01bf,0x02400069,
    0x07e29ff7,0x3ea03ff5,0xf0bfe206,0x707fc09f,0xffb800ff,0x3262003f,
    0x3bfae203,0x7f4c1cdd,0x30001cff,0x003dfffb,0x004cc000,0x04cd4400,
    0x03000440,0x01353000,0x00079000,0x4ffb8072,0x0ffa83f1,0x7c40bf20,
    0xa827f42f,0x003fdc3f,0x000fffec,0x00000066,0x00000000,0x00000000,
    0x00000000,0x40000000,0x0722004c,0x4ffeabea,0x01ff81f8,0x2ff982ec,
    0x84e80ff4,0xfd0007fb,0x000015df,0x00000000,0x00000000,0x00000000,
    0x00000000,0x0b660000,0xf700cc88,0x0fc4df57,0x32006fcc,0x717fe4c5,
    0x207b107f,0x4001affb,0x2efffda8,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x7b999995,0x3bdd9001,0xcb880fc4,0x3330c400,
    0x54033213,0x06666200,0x00013000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xb1320000,
    0x666665c7,0x99999953,0x40cccb87,0x201cedb8,0x201cddc9,0x4c01cda8,
    0x2a002cdb,0x3260cccc,0x980004cc,0xbcb883cc,0x8005d800,0x4002ceda,
    0x3cccccc9,0x00274fe0,0x995039b5,0x332a0999,0x654401cc,0x44121bde,
    0x8fe03dcb,0x7ffec2f8,0x1ffff445,0x8ae41fb8,0xdfb82ffe,0xf983fd88,
    0xf505ffff,0x98017f69,0x7fd41fff,0x3faa0007,0xfd5f980b,0x0007dc03,
    0x13feabf2,0xfffffd80,0x2e1f303f,0xf31dd006,0x9ffff30b,0x8803be60,
    0xfc9adffe,0x9cfc84ef,0x22f882ff,0x7ffc41f9,0x04fffb86,0x2a6f88b3,
    0x0ffc46ff,0x67441ff5,0x541ffffc,0x09ff11ff,0x260fffc0,0xf50007ff,
    0xca7ec01d,0x007f105f,0x3ff26fa8,0xffff8800,0x4d900fff,0x1fe401f9,
    0xfff505ff,0x880f207f,0x9f900ffe,0xee8bff88,0x1ee0fa81,0x7c07ffec,
    0xb83906ff,0x3fff10ff,0xff117fe4,0x3ffe0647,0xff07fec4,0x3ffe003f,
    0x003ffcc1,0xf10077d4,0x203ff27f,0x6fd8005d,0x6dc01be6,0x202aaaaa,
    0xf301f43e,0x207fec5f,0x81ffffea,0x5fff102b,0x7fdc4e80,0x2ec7c803,
    0xc83fffa8,0x98681fff,0x83ffe26f,0x3fe25ffe,0x217fe402,0x1fff47ff,
    0x4c1fff80,0x7cc007ff,0x9ffcc03f,0x07dc1ffb,0xa87ff400,0x001d003f,
    0x03641f98,0x7fe45ff7,0x7ffe5d41,0xfe815c0f,0x6c4a805f,0xfff703ff,
    0x3fffffff,0xf70fffd0,0x003a89ff,0xffc8dff3,0x801ff55f,0x7ffc45fd,
    0x2e13ff60,0x1fff8dfd,0x7ec7ffcc,0x03ffe03e,0x37e53fe0,0x6c000fe2,
    0x002eacff,0x0059dff3,0x201f30d7,0x3ff22ffd,0xfffe9d42,0x7fcc15c6,
    0x3a63003f,0xca86efff,0xdfcccdfc,0x2fffb80c,0xb07fff74,0x03bf6001,
    0xdddffff1,0x886f9801,0x3ff21fff,0x74cffdc6,0x7fcc1fff,0x85ffcbef,
    0x3deceff9,0x0ff69f90,0x7dc000bb,0x4ccc44ff,0x7ffffdc1,0x7c13a02e,
    0x645ffd03,0xf89d44ff,0x20ae4fff,0x4002fffb,0x02dffea8,0x00f98be2,
    0xc997ffe2,0x0b12fffb,0x4c037e20,0x202fffff,0x40dfffc8,0x3ff23fff,
    0xf993fe64,0x7ffcc1ff,0xf70fff60,0x0dffd5bf,0x419d3d91,0xb10000fa,
    0xfd88bfff,0x7ffff42e,0x1f883fff,0x3ffe0b90,0x7517ff22,0xb97fffcc,
    0x00fffd82,0x807ff900,0x201ee0fa,0x13b0fffd,0x00aedfff,0x7fd402dc,
    0xfb102fff,0xffb8bfff,0x645ffb1e,0x0fffc3ff,0xff71ffe6,0x3a2ffd8b,
    0x105103ff,0x00bb887f,0x3ffee7aa,0x54c0fd44,0x1fffffcb,0x81f503dc,
    0x3f22fff8,0x3ea1d46f,0xf82b9fff,0x90000fff,0x47c807ff,0xfffa805d,
    0x3fff258b,0x00b000e8,0xffff97f7,0x7fff5403,0x7f7ffdc0,0x0bffa0ff,
    0xff983fff,0x3e37fd47,0x17ff22ff,0xafc8bb00,0x23fd84fa,0x0f22fffe,
    0x44fffa80,0x7c17c04d,0x17ff22ff,0xdfff9075,0x3fffd059,0x0fff2000,
    0x7fffffdc,0x3a01ffff,0x3e62cfff,0x0e004dff,0x7fe4ff70,0x7ffc403f,
    0xff9aa882,0x3e0fffc6,0x3ffcc1ff,0xfff1ffea,0x003ffd45,0x47fc41f5,
    0x3fe60ff8,0x23fffe22,0xff980069,0xbb00be25,0x7e45ffd0,0xfd81d43f,
    0xffc82fff,0xff90002f,0x2b7ea607,0x00aacfba,0x3a1fffee,0x00001fff,
    0xdffb1bfa,0x801ffb00,0x7ff43ffb,0x260fffc2,0x2ffd47ff,0xffa8fffa,
    0xb87f1006,0x23ff88ff,0x7fd44ffd,0x70000eef,0x5403d49f,0x322ffd87,
    0x881d42ff,0xf982fffe,0xf90003ff,0x517c407f,0x3fe2001f,0x06ffb83f,
    0xbff100c0,0xa805ffb8,0x86fe807f,0x7ffc3ffc,0x2a3ffcc1,0x27fe43ff,
    0x36009ff3,0x3fe7fd85,0x903bffe5,0x0001dfff,0x805d87e6,0x17fdc2f8,
    0x03a83ff9,0x740bffe6,0x40800fff,0x3ea03ffc,0xfb001ee0,0x07ff101f,
    0xfb037fc0,0xb13ff98d,0xd805f507,0x5ffa80ef,0xf307ffe2,0x41ffc8ff,
    0x3fee6ff9,0xb80fa802,0x23ff88ff,0x220efffb,0xd8afffff,0x1ae076e1,
    0x1136005f,0x42fec7ff,0x17fd403b,0x204ffe88,0x1ffec2d8,0x005d8d90,
    0x1fb02fd4,0x03ffe600,0xdf90ffcc,0xe88effdc,0x813f6204,0xfd9afff8,
    0x7ffcc3ff,0x7d40bfa1,0x1009f91f,0x23fe207f,0x3fe20ff8,0xeeebcfff,
    0x7c3fffff,0x41b30dff,0x0f7000fa,0x07fe2bf5,0x0bee01b6,0x41bffe88,
    0x4ffd82e9,0x009f1760,0x02d403d0,0xf501bfa0,0x4419fb7f,0x02eefffd,
    0x10019fb5,0xdff1dffd,0x75dfcc39,0x75c03edc,0xbb004ece,0x3fbbfb80,
    0xeffffea8,0x213fff22,0x84dfffea,0x07e2005c,0x507b73ea,0xd805bffb,
    0x7fedc402,0x6440dfee,0x3504ffff,0x018000a8,0x00180018,0x26600666,
    0x80006200,0x20880618,0x0c400098,0x20019100,0x01a9802b,0x13100262,
    0x2a000d40,0x00002601,0x54400088,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xcc880000,
    0x04cccccc,0x99999993,0x2deec883,0xcccccb87,0x2cccc81c,0x00199991,
    0x20a016dc,0xccccccc9,0x3b8800aa,0x99999990,0x4c199999,0x804ccccc,
    0x32ccccca,0x39999999,0xccccc980,0x333220cc,0x333263cc,0x9930bccc,
    0x33261999,0x931ccccc,0x13999999,0x59999997,0x0059b710,0xffffffa8,
    0x7fe406ff,0x89cfa85f,0xffb87feb,0x0fee01ff,0x2001fff3,0x1e207ff9,
    0xfccfffc8,0xfc880cff,0x57bff04f,0x0bfffd55,0x007ffff2,0x360dffff,
    0x64005fff,0x3f605fff,0xffff981e,0x3207fd05,0xff905fff,0xdfff50bf,
    0xfffff501,0x5c0de989,0xffffffff,0x1fffd403,0x07ec1be6,0x901fffec,
    0x01fff109,0xe81bfe20,0x8bffea07,0x3b226ffe,0x2f884fff,0x00ffff98,
    0x40bfffb5,0x504fffda,0xa8005fff,0x9f303fff,0x0ffffb80,0x3fea04e8,
    0x7fff503f,0x10bfff10,0x5fffffff,0x3f627ff4,0x0feaaace,0x217ffd40,
    0x01f306fc,0x220ffff1,0x01fff00e,0x6c405cc0,0x3ffe607f,0x20bffee2,
    0x04984ffe,0x5407fffd,0xd00fffeb,0x2a07fff3,0x4c002fff,0x2e883fff,
    0x89fffb00,0x7ffd405b,0x05fff502,0x5909fff1,0xd97ffee2,0xdf0344ff,
    0x85fff500,0x01b03ffd,0x320fffee,0x003ffe02,0x3fffa200,0x7ffcc3ee,
    0x213ffe62,0x81a84ffd,0x5406fffb,0x983fffab,0x503fff8d,0x98005fff,
    0x0f543fff,0x3ffff100,0x3fea01a6,0x5fff502f,0x309fff10,0x644bffd0,
    0x3f98040b,0x42fffa80,0x040dfffb,0x41ffff10,0x47ffc059,0x7540cfea,
    0x7fdcc5ee,0x7fcc1aaf,0x0bffea2f,0x44013ff6,0x5401ffff,0x390fffd3,
    0x2a07fff1,0x4c002fff,0x03ae3fff,0x3bffee00,0xffa800e8,0x5fff502f,
    0x009fff10,0x0000ffee,0xff5003f9,0xffff985f,0xff7000cf,0x3e00f49f,
    0x5ffdddff,0xf887ffa8,0x3ffe607f,0x6c1fff62,0xffb004ff,0x2e75009f,
    0x45a22fff,0xff503fff,0xff98005f,0x0001fb3f,0x00ffffec,0x502fffa8,
    0xff105fff,0x3ff2009f,0x03740000,0xb82fffa8,0x03ffffff,0x971fffd0,
    0x227fff00,0x7ff987ff,0x2607ff88,0xffb8afff,0x09ffb01e,0x00dfff50,
    0x37ffc4ea,0x0fffe257,0x0017ffd4,0x3fb3ffe6,0x3e20004f,0xf5002fff,
    0x3fea05ff,0xfbaaaacf,0xbfd004ff,0x03f98000,0x205fff50,0x5ffffffa,
    0xedfffa80,0x20fff800,0x7fcc0fff,0x207ff887,0xeefffff9,0x027fec03,
    0x8017fff4,0x47fff23a,0x40fffe26,0x4002fffa,0xfffffff9,0x3ea0003f,
    0xfa800fff,0xfff502ff,0xff99999b,0x1df1009f,0x3f200350,0x5fff5001,
    0xfffffc80,0x3fffe802,0x7c1fff00,0x3ffcc1ff,0xf303ffc4,0xfd8005ff,
    0x7ffe404f,0xf98ea005,0x3e249cff,0xfff503ff,0xfff98005,0x01ffff9b,
    0x9ffff500,0x05fff500,0x220bffea,0xfc804fff,0x803ffc81,0x3fea006e,
    0x7ec40c2f,0xffa805ff,0x1fff002f,0x3e60fffc,0x07ff887f,0x000bffe6,
    0x7cc09ffb,0x81300fff,0x6fffec3a,0x40fffe20,0x0c02fffa,0x7dcfffe6,
    0x4c000fff,0x02ffff8e,0xa817ffd4,0xff882fff,0x817d404f,0x7cc05ffe,
    0x2a179104,0x502c1fff,0xff500fff,0x3ffe005f,0xf307ffe0,0x0fff10ff,
    0x0017ffcc,0xfd813ff6,0x503603ff,0x45fffa87,0xf503fff8,0x22c405ff,
    0x3f63fff9,0x3a2006ff,0x01ffff50,0xa817ffd4,0xff882fff,0x20be204f,
    0xc805ff71,0x27ff701f,0x16c0fffa,0xf500ffb0,0x3fe005ff,0x307ffe0f,
    0xfff10fff,0x5fff3021,0x04ffd800,0x440dfff5,0xffe83a87,0x81fffc42,
    0x2e02fffa,0x21fffcc4,0xb004fffe,0x05fffc83,0x540bffea,0xff882fff,
    0x2e0f604f,0x1ba00222,0xff52ffb8,0x3201db0f,0xfffa804f,0x41fff002,
    0x7fcc1fff,0x3b5ffd07,0x002fff98,0x7c42ffec,0xdb101fff,0x0df70750,
    0x2a09fff3,0x7d102fff,0x443fff98,0x6c03ffff,0x2ffff884,0x205fff50,
    0xf883fffa,0xfff904ff,0x8003ffff,0x73fc04f9,0x5dfb07ff,0xb800ef88,
    0xf8802fff,0x5fff11ff,0x980fffa8,0xffa82efe,0x7ff4003f,0x04fffc85,
    0x0b70dff5,0xfff307f1,0x13ffee09,0xff50bfa6,0xffff909f,0x5c03f607,
    0xfb81ffff,0xfff703ff,0x0bfff307,0xfffffff5,0x03f7000f,0x3efcdd98,
    0xb7df97b0,0xfca8019f,0x102bffff,0xfb1dfffb,0x3fa61dff,0x22000dff,
    0x1cffffec,0x3fff6e20,0xffff32df,0xffffdddd,0x6ffe4cbf,0xfd710642,
    0x2e639fff,0xeeffffff,0xd731ffff,0x2619ffff,0x1dfffffe,0xa85dffd7,
    0x33fffffe,0x37fffff7,0x3ffffee6,0xfffeb89b,0xffff32cf,0x000dffff,
    0x00980053,0x0026a60c,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xcc980000,0xcccccccc,
    0x999932cc,0x99999999,0x666664c3,0x64400abc,0xcccccccc,0x9933cccc,
    0x55999999,0x20070001,0x000cccc8,0x40099993,0x333261e9,0x0aaccccc,
    0x00000000,0x00000000,0x00000000,0x7ffe4000,0x4ffcaaad,0x5567ffe4,
    0xfd83ffdb,0xdffcbbff,0xabdff880,0xfdaaefff,0x5e7ffec6,0x2003fffc,
    0xff5001f8,0x7fdc001f,0x05ff1007,0xf935fffb,0xf8001bff,0xdfedb803,
    0x5f76d402,0x07ddb500,0x412f7b6a,0x441ceeda,0xfea9eeed,0x87dfb11d,
    0xf91eeed8,0x07fff509,0xfffa89b1,0xfb83f982,0x3ffe61ff,0x3fe17c41,
    0x3ea3644f,0x3ffea1ff,0x00bf9003,0x8003ffe2,0xfb007ff9,0x3fff705f,
    0x4006ffd8,0xc9ba203f,0x29f502ff,0x54fb86fd,0xf33fa89f,0x3e2df909,
    0x6fffc41f,0xceafffcd,0x7fc42fff,0x987ffd9f,0x89503fff,0x7902fffa,
    0x983fff70,0x21a22fff,0x22c44fff,0x7fc1fffa,0xfff8806f,0x01fff000,
    0x403ffcc0,0xfa82fffb,0x7ffd41ff,0xb80fe002,0x0bff50ff,0x3fea5ff1,
    0x7c4bfe62,0x4a93f61f,0xdf91ffcc,0x3a4fff81,0x9ff70eff,0xf75bfff0,
    0x87fff309,0x5fff5121,0xfb83885c,0x7ffe81ff,0x13ffe062,0x83fff50a,
    0xfb807ffd,0xfff004ff,0x3ffcc001,0x0bffba60,0xf107ffea,0x1fc009ff,
    0x3e65ff70,0x20ffa86f,0x83ff61fe,0x37ffe4ff,0x22ffd850,0x7ffc3ffc,
    0xfb8fff61,0x05fff85f,0x243fff98,0x6c5fff50,0x0fffdc00,0x200fffdc,
    0xfa804fff,0x27ffc1ff,0x07fff740,0xd987ffc0,0x7fcc1dee,0x3f63a207,
    0x1fffa82f,0x0017ffcc,0xb12a807f,0x0ffb0dff,0xf999ffd0,0x77ffe4bf,
    0x2e1fff80,0x0fffc4ff,0x7fd47ffb,0x803fff85,0x12e3fff9,0xf12fffa8,
    0x1fffb801,0x403fffa8,0xfa804fff,0x37ff21ff,0x7fde5400,0x0fff803f,
    0x7fcc0fea,0x7fecb607,0x41fffa82,0x99507ffb,0x999bf999,0xfbec8899,
    0x01fff86f,0x4cccfffc,0x3fffa209,0x87ffe21f,0x7ffc6ffb,0xfa8fff61,
    0x02fff85f,0xcacfff98,0x3ffea04f,0x5c00ffcc,0xff981fff,0x27ffc05f,
    0x6efffd40,0x1d001efe,0xf00dfff1,0x301ec1ff,0xd92e0fff,0xfffa82ff,
    0x05fff511,0x3fffffee,0x2a7fffff,0x86ff98ef,0x7f402fff,0xffd8802f,
    0x70fffc6f,0x1fff89ff,0xffa8fff6,0x801fff85,0xffddfff9,0x37ffea04,
    0x7dc00ffd,0xfff981ff,0x027ffc06,0x65e7ffd4,0x24c02eff,0xf805fff9,
    0x980590ff,0x6c6987ff,0xfffa82ff,0x00dffffe,0x3e603f80,0xd0dff32f,
    0xffc80dff,0xfff91405,0xf70fff43,0x21fff85f,0x3fea3ffd,0x801fff85,
    0x9b13fff9,0xa97ffd40,0x7ffdc00f,0x05fff981,0x54027ffc,0x3fe61fff,
    0x443b00ef,0x7fc05fff,0x4c02fc8f,0x6c1e87ff,0xfffa82ff,0x006fffa9,
    0x7fec07f0,0xf70dff72,0x3ea287ff,0x0e8e21ff,0xffb83fee,0x3fe1ff22,
    0xa8fff61f,0x1fff86ff,0x23fff980,0x3ffea048,0xff700362,0x9fff503f,
    0x804fff80,0x7dc1fffa,0x99e884ff,0x01fffe99,0x3fff7ffe,0x51ffe600,
    0xfffddddf,0x1fffa89d,0x0009fff9,0x7ffec07f,0x40bfffce,0x0dcdfffe,
    0x337fffa2,0x5f986f45,0x13fa4fe8,0x7ec5fff1,0x11bfee4f,0xf3003fff,
    0x2a0487ff,0x882e2fff,0x40fffdc3,0x7c01fffb,0xffa804ff,0x2fffcc1f,
    0x66666664,0x3fe04fff,0x205ffebf,0x7fd47ff9,0x5fffffff,0xfd0fffd4,
    0x3f8003ff,0x647bfa60,0xffd882ff,0xffe880df,0x67f6c0df,0xb9fb00ee,
    0xdfffb07f,0x55ffff73,0x7ec9ffff,0x7cc01eff,0xf50043ff,0x0b6045ff,
    0xfd03fff7,0x9fff00bf,0x83fff500,0x3444fffa,0x201fffd0,0xfff98fff,
    0x98fff302,0xfffccccc,0x0fffd43d,0x001ffff3,0x040401fc,0x44004c40,
    0x00098201,0x00000033,0xfff98000,0x3ffea003,0xfb83f502,0x77fd41ff,
    0x05fff800,0x641fffa8,0x01e41fff,0xf109fff5,0x3ffee1ff,0x007ff980,
    0xff705ffb,0x5fffb83f,0x00006a00,0x00000000,0x00000000,0x3fea0000,
    0x3fee004f,0x3ff2a24f,0x517ffe40,0xf1001bff,0xff700bff,0x3fff227f,
    0xf101fcc3,0xff883fff,0x217ffa1f,0xd800fffa,0xfffb82ff,0x03fffd82,
    0x00000000,0x00000000,0x00000000,0xffffd730,0x7fdcc039,0xfffeffff,
    0x3fff267f,0x01befeff,0xffffeb88,0xfffc982c,0x0bdeffff,0x20677fdc,
    0x2effffda,0x11bfffb1,0x261bfffd,0x400dfffe,0x3f262ffd,0x220cefff,
    0x320cffff,0x5555511d,0x85555555,0x0200441a,0x5dddc420,0x3bbbbbbb,
    0x19999993,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x4c000000,0xffff76ff,0xffffffff,0xfe89ffe4,0x67fecc0f,0x3ffe2901,
    0xffffffff,0xffffff57,0x00000003,0xec800040,0xeed9adee,0x007db34e,
    0xb1080000,0xddb11ddd,0x77775c1d,0xed8bbb24,0x25eeeeee,0xc9deeee9,
    0x400a84ee,0x40f6003d,0x98ee44d9,0x111116ff,0x11111111,0xfd12fff4,
    0xffecde85,0x222c88be,0x88888888,0xdddd5088,0x000003dd,0x05f5c000,
    0xa97ffa00,0x896e0fff,0xfea8eeed,0xfb30000c,0xf987ffcc,0x3ffec0ff,
    0x4c2fe1f4,0x7fcc3fff,0xfd05f14f,0x01fe605f,0x7f407fd4,0x22dff51f,
    0xb80005ff,0x12fc42ff,0xffffc989,0x00000006,0x20000000,0x001dffd9,
    0x7fc1fff5,0xff30723f,0x0bffbbbf,0x1f7f5c40,0x3e21fff1,0x7ffcc0ff,
    0xfb161a21,0x3fff20df,0xfff883b8,0x00cbf0c6,0xffd09fdd,0xfe97fea3,
    0x99999952,0x88999999,0x004cd300,0x00000375,0x00000000,0x3bfee200,
    0x97ff400b,0x4166ffe9,0xfff13fff,0x3bff9300,0x7c1fff10,0x4ffd80ff,
    0xffa860ea,0x37ffa01f,0xc9fff205,0xfe9ac8ef,0x1fc9fb81,0xff887fec,
    0x775c3f24,0xeeeeeeee,0x0000006e,0x00000000,0x00000000,0x2039ffb5,
    0xff395ffb,0x3fe0751f,0x403ffe0f,0x200bffea,0x3fe0fff8,0x0fffa80f,
    0x7ff4401b,0x0fffd405,0xfe996a20,0x40effcdf,0xb8bf14f8,0xd317f46f,
    0x00000000,0x00000000,0x00000000,0x77fe4400,0xacfffc42,0xf00dbffd,
    0x0fffc1ff,0x005dff91,0xff83ffe2,0x17ffd00f,0x0fffc809,0x805ffe80,
    0x8099102d,0x88bee0fc,0x0e07e44f,0x00000000,0x00000000,0x00000000,
    0x0dff7100,0x3ea5dffb,0x3ffe05ef,0xfb87ffe0,0x3e2001df,0x03ffe0ff,
    0x00e77fdc,0x2007fff3,0x2a01fffa,0x3d95f704,0x8dd07f30,0x0003542e,
    0x00000000,0x00000000,0x00000000,0x205bff93,0x7ffc7ffa,0xf83ffe02,
    0x7fe4c1ff,0x1fff002e,0xf8807ffc,0x7fec05ff,0xffdb0146,0x7cc06e0b,
    0x0dd0ff37,0x440b8fea,0x00000003,0x00000000,0x00000000,0xffea8000,
    0x44ff800c,0x3fe00ffc,0x807ffe0f,0x200cffea,0xfff30fff,0x017fe401,
    0x2c43fff5,0x1fff99c8,0xbb1f4400,0x0aa01a88,0x00000000,0x00000000,
    0x00000000,0xffc88000,0x0fe4002e,0xfff017e6,0x400fffc1,0xd82dffc9,
    0xfffeacff,0x881be601,0x17a65fff,0x06ffd96a,0x00000000,0x00000000,
    0x00000000,0x00000000,0x39ff7000,0x741e6000,0x47ffe202,0x2002fff8,
    0x7446feb8,0xdfff8dff,0xfc80f600,0x4fffeeff,0x3a67bf66,0x0000dfff,
    0x00000000,0x00000000,0x00000000,0x00000000,0x400005d4,0x7ec40301,
    0xfffd8eff,0x0498000e,0x02200013,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__times_bold_26_usascii_x[95]={ 0,2,2,0,0,1,0,1,0,0,1,0,0,0,
1,0,0,1,0,0,0,0,0,0,0,0,2,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,1,-1,0,1,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0, };
static signed short stb__times_bold_26_usascii_y[95]={ 20,4,4,4,4,4,4,4,4,4,4,5,16,13,
16,4,4,4,4,4,4,4,4,4,4,4,8,8,6,9,6,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,23,3,8,4,8,4,8,4,8,4,4,
4,4,4,8,8,8,8,8,8,8,5,9,9,9,9,9,9,4,4,4,11, };
static unsigned short stb__times_bold_26_usascii_w[95]={ 0,4,9,12,11,21,19,4,8,7,10,13,6,8,
4,7,11,9,11,11,11,11,12,12,11,11,4,6,13,14,13,10,21,17,15,16,16,15,14,19,18,9,12,19,
15,22,17,18,14,18,18,12,15,17,17,24,17,17,16,6,7,6,11,13,6,11,13,10,13,10,10,12,13,7,
7,14,7,19,13,11,13,13,11,9,8,13,12,17,12,12,11,8,3,7,13, };
static unsigned short stb__times_bold_26_usascii_h[95]={ 0,17,8,17,18,17,17,8,21,21,9,14,9,3,
5,17,17,16,16,17,16,17,17,17,17,17,13,17,12,6,12,17,22,16,16,17,16,16,16,17,16,16,17,16,
16,16,17,17,16,21,16,17,16,17,17,17,16,16,16,21,17,21,9,3,5,13,17,13,17,13,16,18,16,16,
22,16,16,12,12,13,18,18,12,13,16,12,12,12,11,17,11,21,22,21,5, };
static unsigned short stb__times_bold_26_usascii_s[95]={ 255,207,143,1,102,127,149,153,44,68,120,
153,113,213,173,181,197,104,237,62,122,169,114,1,50,74,249,248,47,158,1,
39,1,81,65,227,32,16,1,187,218,208,14,170,154,131,209,168,89,83,134,
27,49,230,212,14,190,40,114,76,189,53,131,199,178,167,100,179,86,190,244,
114,58,72,23,99,114,223,33,211,127,141,243,201,80,61,75,15,100,155,88,
35,31,60,185, };
static unsigned short stb__times_bold_26_usascii_t[95]={ 1,1,77,24,1,24,24,75,1,1,77,
60,77,75,75,24,24,42,42,24,60,24,24,42,24,24,42,1,77,75,77,
24,1,60,60,24,60,60,60,1,42,42,42,42,42,42,24,1,42,1,60,
42,60,1,1,24,42,42,42,1,24,1,77,75,75,60,24,60,24,60,24,
1,42,42,1,60,60,60,77,60,1,1,60,60,42,77,77,77,77,1,77,
1,1,1,75, };
static unsigned short stb__times_bold_26_usascii_a[95]={ 94,125,209,188,188,376,313,104,
125,125,188,214,94,125,94,104,188,188,188,188,188,188,188,188,
188,188,125,125,214,214,214,188,349,271,251,271,271,251,229,292,
292,146,188,292,251,355,271,292,229,292,271,209,251,271,271,376,
271,271,251,125,104,125,218,188,125,188,209,167,209,167,125,188,
209,104,125,209,104,313,209,188,209,209,167,146,125,209,188,271,
188,188,167,148,83,148,195, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT or STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_bold_26_usascii(stb_fontchar font[STB_FONT_times_bold_26_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT][STB_FONT_times_bold_26_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_bold_26_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_bold_26_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_bold_26_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_bold_26_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_bold_26_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_bold_26_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__times_bold_26_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__times_bold_26_usascii_s[i] + stb__times_bold_26_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__times_bold_26_usascii_t[i] + stb__times_bold_26_usascii_h[i]) * recip_height;
            font[i].x0 = stb__times_bold_26_usascii_x[i];
            font[i].y0 = stb__times_bold_26_usascii_y[i];
            font[i].x1 = stb__times_bold_26_usascii_x[i] + stb__times_bold_26_usascii_w[i];
            font[i].y1 = stb__times_bold_26_usascii_y[i] + stb__times_bold_26_usascii_h[i];
            font[i].advance_int = (stb__times_bold_26_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__times_bold_26_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_bold_26_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_bold_26_usascii_s[i] + stb__times_bold_26_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_bold_26_usascii_t[i] + stb__times_bold_26_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_bold_26_usascii_x[i] - 0.5f;
            font[i].y0f = stb__times_bold_26_usascii_y[i] - 0.5f;
            font[i].x1f = stb__times_bold_26_usascii_x[i] + stb__times_bold_26_usascii_w[i] + 0.5f;
            font[i].y1f = stb__times_bold_26_usascii_y[i] + stb__times_bold_26_usascii_h[i] + 0.5f;
            font[i].advance = stb__times_bold_26_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_bold_26_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_bold_26_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_bold_26_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_bold_26_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_bold_26_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_bold_26_usascii_LINE_SPACING
#endif

