// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_14_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_14_latin1'.
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

#define STB_FONT_times_14_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_14_latin1_BITMAP_HEIGHT         68
#define STB_FONT_times_14_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_14_latin1_FIRST_CHAR            32
#define STB_FONT_times_14_latin1_NUM_CHARS            224

#define STB_FONT_times_14_latin1_LINE_SPACING           9

static unsigned int stb__times_14_latin1_pixels[]={
    0x00000000,0x40000000,0x4c064010,0x05280804,0x2a2012b8,0xb88031aa,
    0x4f320000,0x80dc0cca,0x00019aa9,0x4c140988,0x001818ab,0x26000000,
    0x64008000,0x4402c802,0x402ea806,0x05e8805a,0x1220f1d3,0x220603c4,
    0x326601b5,0x3affb80d,0xc996441c,0x41e0b501,0x2e204c0d,0x0b201440,
    0xb11c5944,0x20913223,0x02cc00e8,0x90760bd1,0x00e01db0,0x4c00e007,
    0x400b9401,0x00332803,0x5c0f0060,0x88017102,0x75fff00b,0x261e4488,
    0xd83c0e05,0x31024400,0x067501c0,0x1a2416c7,0x201c0288,0x4388198a,
    0x40a2262c,0x2602e203,0x4caa61aa,0x20aa61aa,0x05c400b8,0x5530d54c,
    0x951c472a,0x367e0e23,0xa96442c3,0xca96441c,0x41d7ffc1,0x1f03f10d,
    0x0d83c060,0x55448722,0x200c053b,0x01f1383e,0xaaaa98f0,0x2aaaa61a,
    0x2aaaa61a,0xd86aa21a,0x9506aa21,0x32a59109,0x3a2c2741,0xa9644584,
    0xca96441c,0x3a2c2741,0x510e8510,0x225d35f0,0x22d43e86,0x3ea2d43e,
    0xf52c83af,0x03e20fa0,0x8b606c1e,0x028ec324,0x366a01f1,0xb007a943,
    0x3224c990,0x4c991264,0x906e3644,0x41eb8b8d,0x0f62d43e,0xe8907b12,
    0x50fa2d43,0x5c483d8b,0x40e97074,0x2a2d56e7,0xfa87c41f,0x54c07c41,
    0x20f54c83,0x783eb82e,0x532c81b0,0x5c0a692a,0x40ec903e,0xb80a807a,
    0x8112e044,0x216e044b,0x0ab16e0a,0x41f107ea,0x41ec483d,0x1f107ea4,
    0x41f107ea,0x38e8483d,0x99e071d0,0xd07b8b55,0x41f41ee7,0xf33b83a8,
    0xac80f885,0xc81b0786,0xad476352,0x20d59028,0x1f10351e,0x24b81a80,
    0x2e064b81,0x5116e064,0x15d12dc1,0xd8fa0f70,0x241ec483,0x3dcfa0f7,
    0x120f63e8,0x075c03ae,0x2344ae78,0xf32e80f9,0x75105d01,0x2e264390,
    0x785d1984,0x712c81b0,0x81cf263a,0x5d305d19,0x0a176287,0x0d75b70b,
    0xb70d75b7,0xc8b70d75,0x453e2dc1,0x8ba03e60,0x41ec483d,0x4ba03e64,
    0x362e80f9,0x20588483,0x0e6fe058,0x47885d0d,0xa883c42e,0xcadc8583,
    0x8b933903,0x22c81b07,0x25933b53,0x05c99c82,0x6e4383f3,0x4b8782ab,
    0xb8292e0a,0x3b16e0a4,0x1f7d45b8,0x791e2174,0x4483c890,0x0ba3c42e,
    0x8483c8f1,0x780a6029,0x44c83501,0x12e2644b,0x41221d44,0x9b880ee8,
    0x6c1e0f99,0x40330640,0x4ccdc419,0x2244440f,0x21a05883,0x2025c04b,
    0x322dc04b,0x804a2dc2,0x16a25c4c,0x1c45a871,0x4c897132,0x7116a25c,
    0x3b981dcc,0x81701e20,0x7502baba,0x1d440575,0x9036e006,0x0d83c9b0,
    0x310a6125,0xa89b0905,0x40d03852,0x70cc4b84,0x312e1989,0x2e122dc3,
    0x55d401c5,0x7759902b,0x40eeb320,0x7502baba,0x2b320575,0x98064c3b,
    0x0072600c,0x00400203,0x800114c4,0x6c43d509,0x32a7992f,0x2201770c,
    0x3d501aaa,0x06617ec4,0x4300260a,0x26caaee8,0x26caaee8,0x26caaee8,
    0x88131ed8,0x080021ed,0x00200100,0x10008004,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x1404ae00,0x03315000,0x26600000,0x00cc5428,0x025700a5,0x06e00a88,
    0x20210244,0x440ea048,0x882b8289,0x41ba8811,0x140ae010,0x12201905,
    0x75048831,0x54402110,0x00037031,0x20372660,0x9c809503,0x40baa02b,
    0x50e540e8,0x2a9c8735,0x4c032b10,0x1ca00dc9,0x40aa0730,0x03706acb,
    0x42e40af2,0x6edc0dba,0x3a0e8e42,0x81c4c3c9,0x20750513,0x06e2e42a,
    0x579072e2,0x7b50b88b,0x216c0930,0x5302aa4a,0x530381c3,0x94154c35,
    0x4ec0a80b,0x235511c9,0x01aaaaa9,0x4c00c006,0x0180c01b,0x02081800,
    0x04107226,0x03b0e808,0x35380d40,0x2dc0c060,0x40010406,0x0c07642c,
    0x5d811030,0x1aa99c58,0x584e8aaa,0x8d544060,0x321898d9,0x20932646,
    0x07c400f8,0x54403e20,0x0e45261b,0x55072293,0x1c8a4c19,0x5507e544,
    0x40caa819,0x0caa8b37,0xb9706554,0x1c9889b9,0x4950e4c4,0x64c40caa,
    0xf10e4c41,0x2932e8b8,0x810181c8,0xd8e1c4eb,0x20f62cc6,0x3201f104,
    0x2dc0e7c6,0x3ae0112e,0x201f5c03,0x3a5883eb,0xb3c2d9e2,0x3c4bacc5,
    0x4cfa585b,0x4bacc975,0x2b31ebbc,0x225d664b,0x1a27070a,0xb3399a27,
    0x71a2712e,0x42a6b9a2,0x282d9e4e,0x17c5c288,0xb87e2387,0xb8241ec0,
    0xe88b703e,0x92e2dc0d,0x901ab201,0x86ac80d5,0x32796e4a,0x988593c2,
    0x4c593c4c,0x4c9896e4,0xb9e264c4,0x31132624,0x64ce4499,0x98a66e61,
    0x88a2299b,0x266e64c9,0xa8a66e62,0x4f1f4537,0x1cc1542c,0x1c38fcce,
    0x1ec14daa,0x706ac824,0x5c1dd10b,0x835d6dc5,0x46605d19,0x0ba3302e,
    0x64f2d4b7,0x644593c2,0x4593c4a8,0x46456a4b,0x12a3224a,0xa8c8b4cf,
    0xa92a3224,0x12a2cbad,0x32230254,0x5412a4a8,0xf875f304,0x1a22c9e1,
    0x8fb8e254,0x8266c1c3,0xd198483d,0x9310b705,0x292e2dc7,0x20b93390,
    0x3905c99c,0x2e788b93,0x3e16c3e3,0x4ba5c5b0,0x9a22d87c,0xb92e973b,
    0x998f8974,0x4b92e974,0x88153897,0x28fc451f,0x44974b84,0x28fc451f,
    0x1f12a2e4,0xb9a5a8b6,0x713b21c4,0x0f201f10,0x17267212,0xa988a96e,
    0x809716e3,0x40f999b8,0x40f999b8,0x40f999b8,0x5eec3ada,0x36f760cd,
    0x1b79d30c,0x7066deec,0x5e74c759,0x1b79d30d,0x4c2b27e6,0x9d30dbce,
    0x81ca21b7,0x77dc2efb,0x5e74d6e2,0x70bbee0d,0xabcb85df,0xcdbdd82a,
    0x8b724d10,0xf81c5d83,0x4388b500,0x40f999b8,0x0eef665b,0x0cc4b8b7,
    0xd8489b09,0x0826c244,0x00840210,0x00401080,0x00000000,0x00000008,
    0x01040000,0x13730108,0x887d314c,0x007c41c4,0x09077599,0x1985b89b,
    0xee88f6c4,0x87aa6caa,0x43d52fd8,0x43d52fd8,0x00002fd8,0x00000000,
    0x00000000,0x00000000,0x00000000,0x41400000,0x500803fb,0x897ec43d,
    0x000001ed,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x37000000,0x05013050,0x05305013,0x00dc4031,
    0x8824c064,0x20530142,0x54053010,0x88337302,0x3055541a,0x01553055,
    0x5440554c,0x206aaaa1,0x2a600aa9,0x83377300,0x0d54c1a8,0x15730553,
    0x554caa63,0x17103530,0x58981260,0x2a0dc0d4,0x20cc1b80,0x201c49c9,
    0x81cc0195,0x2a0a82bc,0x4595c4ec,0x44646acb,0x1d855585,0x44ead8b5,
    0x05c0d85d,0x03336053,0xdcce8895,0x905305c3,0x225b0361,0x22d4e26b,
    0x8ec4584e,0x4e8fa4c8,0x654b222c,0x92a03cc1,0x1c437038,0x9dc1c1b8,
    0x94a806a6,0x02080c01,0x4d10440e,0x3258801c,0x1a209621,0x6a893047,
    0x64ecdc38,0x9805c288,0x270dc185,0x3428da89,0x51c1ec37,0x907b1e29,
    0x96e482d8,0x50fa1c5b,0x0c80788b,0x4070dc07,0x2ea02e1b,0xf9807158,
    0x5442a9ab,0x20dd441b,0x30dd4428,0x37511dcb,0x2cc952d4,0x54021bf0,
    0x982a2e80,0x3a14eed0,0x4009e83e,0x5186e265,0x3e248cd8,0xd8b30800,
    0x003e2483,0x543ea1f1,0x1f107ea0,0x5542c8f8,0x53604332,0x269b011a,
    0x8e357022,0x1a27f300,0x258974b1,0x25882a2e,0x8ad4b72e,0xb87c4ba5,
    0x3039fb34,0x0bee07fd,0x5d14496e,0xbb302619,0x4075d7cc,0x09834a38,
    0x711ee374,0x3d819059,0x6c01ea48,0xf70e7b73,0xd33f0fa0,0x20971c05,
    0x1c097738,0xad854097,0x5c7d55c3,0x2ab72541,0x254396e4,0x55b96ab7,
    0xd5b52dc9,0x7dc03445,0x3f10f505,0x927a2853,0x92d43a02,0x1d943709,
    0x876d5428,0x2887987a,0x1ea483d8,0x755c7540,0x7407cc38,0x2e0b53c2,
    0x20e09530,0x12a61704,0x4cf4a944,0x96e0f766,0x8ad4b75a,0x22b52dc2,
    0xb52dd2e6,0x82c41f10,0x6c07e208,0x1884cc80,0x37014b2d,0x4585a962,
    0x0a514998,0x883f16cd,0x90790187,0x7c4007c4,0x5d019f0c,0x12678788,
    0x06de44a6,0x51015066,0x8e036f22,0xf33d4d4a,0x4ee78849,0x2054ee78,
    0x3668ee78,0x641dcf11,0x11436e21,0x20900e87,0x153503f8,0x6c4802aa,
    0xa8388570,0x20a8aa88,0x46c8aa68,0x8b500878,0x4142ec38,0x2641725d,
    0x81b9e12e,0x21c2ccc3,0x4cc383bc,0x27620a85,0x74de76c4,0x21d6d45f,
    0x540e3ada,0x1d6cc3ad,0x3730eb6a,0x22ffaba8,0x2a3babe8,0x036009ae,
    0x40aa9aa8,0x64c0bcf9,0x5501b829,0x35501553,0x9935b707,0x2b3203d0,
    0x557b903b,0x203a8aa0,0x7b02baba,0x02011075,0x08813301,0x03103010,
    0x20080202,0x00020040,0x00800204,0x00100006,0x08000002,0x10000080,
    0x00400401,0x10000008,0x00000100,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x15c40000,0x235302aa,
    0x20355302,0xaaa98e43,0x0a98d541,0x55555530,0x4c510550,0x261aaaaa,
    0x2e0aaaaa,0xd9d98530,0x026aaa63,0x554c6aa6,0x2e235511,0x87301261,
    0x5101261b,0x19510577,0x54406aa6,0x4c6aa61b,0x2a62442a,0x2035302a,
    0x223952a9,0x203915c3,0x2585d82d,0x2e417203,0xdc9dd82a,0x00e61f10,
    0xd82e25db,0x917225eb,0x453624c9,0x225c763a,0x362e9af8,0x640eda8d,
    0xb1b22e45,0x07203c45,0x9a03c413,0x21ba441f,0x2345605d,0x06412a5d,
    0x20fb0172,0x2288746d,0x6402a5ba,0x31c4eb82,0x2ea12e03,0x45f26405,
    0xea88073c,0x83e21842,0x90225c5a,0x25c76089,0x2264b73c,0x12e2646c,
    0x03c2d8b7,0xf103c006,0x6412a074,0x901d42ad,0xb8301229,0x261f5c04,
    0x043a5c5d,0x416d5401,0x070e2f8b,0x0b37112e,0xe98be4c8,0x22e9c038,
    0x45983a01,0x1932064b,0x2784b8ec,0x3f313259,0xb712e264,0x1c8bc2c8,
    0x41c88722,0x9bc84d8f,0x6416e4c4,0x812e1d74,0x322049cc,0x2ae025c1,
    0x4742d646,0x4d00e443,0x23f3382d,0x9c4b81c3,0x27720459,0x277a665c,
    0x59d28809,0xb3126079,0xc86badb8,0xc8ec3dad,0x6d4ae784,0xdc8fa2ad,
    0x2dc4daaa,0x206af0b2,0x47e16c2d,0x95005c1e,0xf13f9320,0x01db90a3,
    0x2025c2d8,0x16ae25d3,0x08b603ae,0x2382c926,0x40cc38fb,0x22cc2a4b,
    0x3027323f,0x90133b73,0x38145d55,0x0525c598,0x33b61499,0x1cdfc2ea,
    0x4c8be132,0x5916e25c,0x85b02cf8,0xe8593c2d,0x82542dee,0x7dc5f14c,
    0x076e641e,0x404b85b0,0x42d4ed53,0x96c5b058,0x90e0b25b,0x4970709d,
    0x225feeec,0x65541323,0xd14c0aae,0x5980a805,0x8132025c,0x405e020c,
    0x1323d44c,0x1645b897,0x21641afe,0x44593c2c,0x04a89312,0x3709d5b9,
    0x403b6990,0x70425c2c,0x985a9d7c,0x9e605902,0x85d8382c,0x4c0ee263,
    0x80990545,0x85d1205a,0x166186a3,0x13219897,0x81e20344,0x9913624c,
    0x362dc5b8,0x6c2647c2,0x2c9e16c2,0x2a14c72e,0x4c01b904,0x03b64c84,
    0x198990b6,0x4d50fb92,0x80b603b9,0x260cdcec,0x8c42443e,0x816604dc,
    0xd9101ee9,0x3ea1b903,0xff52dbad,0x47b225ff,0x26caaee8,0x80701ee9,
    0xbee982eb,0x8f74c2ec,0x3db11ed9,0x8af993a2,0x449d10cf,0x3a2be64e,
    0x2205e544,0x0f74c1ed,0x23dd3030,0x93a23ffa,0x26cccee9,0x362912e9,
    0x2201931f,0x0008404e,0x00004100,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03000000,
    0x102aaaa6,0x55555502,0x5550d54c,0x1aa8aaa6,0x20135553,0x50577500,
    0x2aaaaa60,0x1355530a,0x99818000,0x03019999,0x02ee72ae,0xba881955,
    0x950dcc41,0x01265931,0xaa817510,0x50e452a4,0x28a12239,0x00000a13,
    0x404191b3,0x31bb00f8,0x916cf49b,0x6d89d333,0xa8bea2cc,0x76d4eec3,
    0x85b2c2c0,0x4cdc4eca,0x3762b9cd,0xbb881eb9,0x2030703a,0x32930700,
    0x3ba44b35,0x689c68ac,0xa82a3b34,0x9623bbcb,0x4f0a731e,0x4188f41c,
    0x38a43739,0x0dd4ae60,0x0fcc33f0,0x12640fae,0x3aa0803f,0x0170fc40,
    0x1320e2d7,0x9857dcd9,0x20440b24,0x93208f60,0x05d2c44d,0x3804060e,
    0x0eab7660,0x81cc9931,0x9643aac9,0x2238854c,0xf14b92a2,0x70727817,
    0x16ad10a9,0x5750b295,0x41e0aea0,0xc8356428,0x0e443e24,0x2d501f88,
    0x41336029,0x8f17cc4c,0x8d98b24b,0x640f604b,0x2a950fa4,0x2b6aaa5b,
    0xaa82032a,0x3912aada,0x2a322097,0x025412a4,0x851d33b3,0x54b71c0a,
    0x64f17625,0x26147442,0x97698975,0x64c0072a,0x330a21e2,0x333b20ba,
    0x4e816c2e,0x220266c0,0x7d09902f,0x16c3a63c,0x6c07a2be,0x07b7b903,
    0x20d335b7,0x0e010183,0x2287552a,0x8fc4954b,0x74147e21,0x38130b93,
    0x2133b9e2,0x416c3e1c,0x1b1b80dc,0x2ee2586c,0xf05dc400,0x17267200,
    0x361fb932,0xf8806b82,0xc836d400,0x321e2f84,0x593c2dcf,0x4e640f60,
    0x771f980f,0x804060e0,0xfdabe983,0x36f3a61d,0xf7077ee0,0x1265705d,
    0x50ae2762,0x24ed4759,0x30336f72,0x46671c09,0x9837500a,0x402f982b,
    0x40f999b8,0x85926c4c,0x01f001f9,0x4c84e9c4,0xc841e3d4,0x360593c2,
    0x216e9903,0x5544adc9,0x2032aada,0x00200700,0x01000000,0x20515515,
    0x00420100,0x98000001,0x90000353,0x7c4c89b0,0x987d0b63,0x9100f881,
    0x89320fc4,0xc8066c4d,0x360593c2,0x226c9903,0x26662020,0x33333099,
    0x00002033,0x00000000,0x00000000,0x00000000,0x221ea800,0x97dd32fd,
    0xf927447b,0x701d9999,0x447d507f,0x97dd32fe,0xcd98005b,0x09d15f50,
    0xee981bf3,0x00019f11,0x0c800000,0x21aa8802,0x2eeeee0d,0x2eeeee1b,
    0x0000001b,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x95ddddd4,0x22aaaaaa,0xa821020c,0x51399732,0x0028b326,0x00000000,
    0x00000000,0x4c000000,0x43b74c8d,0x0a209759,0x2a197773,0x0700c8ac,
    0x88088285,0x220a9419,0x3706e20b,0x098330c4,0x08888891,0x89c44444,
    0x5abb87c3,0x005d4084,0x00000000,0x00000000,0x00000000,0x98cd8fc0,
    0x20f457c5,0x5c31bb9c,0x3014e645,0x2e06a710,0xebc4d283,0xd8985ce1,
    0xba549130,0x2686e3a8,0x02bbbbba,0x0000809c,0x00000000,0x00000000,
    0x00000000,0x3b9e0000,0x50b278d1,0x01d307b9,0x7777509d,0x540ec457,
    0x234d4199,0x0cc661b5,0xd9cc9512,0x04c6a489,0x00022222,0x00000000,
    0x00000000,0x00000000,0x00000000,0x3c68ee78,0x0dcbd859,0x075c07a2,
    0x2a044444,0x5d0e383a,0x56439c1d,0x88640544,0x0d435732,0x00000000,
    0x00000000,0x00000000,0x00000000,0x27800000,0x164f1a3b,0x47b03262,
    0x4816e2a0,0x054711a8,0x04001051,0x1554736e,0x0000f200,0x00000000,
    0x00000000,0x00000000,0x00000000,0x362be600,0x5f31fa8d,0xd70209b1,
    0x456a3955,0x0810103f,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_14_latin1_x[224]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,1,0,-1,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_14_latin1_y[224]={ 11,2,2,2,1,2,2,2,2,2,2,3,9,7,
9,2,2,2,2,2,2,2,2,2,2,2,5,5,3,5,3,2,2,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,13,2,5,2,5,2,5,2,5,2,2,
2,2,2,5,5,5,5,5,5,5,3,5,5,5,5,5,5,2,2,2,6,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,11,4,2,2,3,2,
2,2,2,2,2,5,5,7,2,1,2,3,2,2,2,5,2,6,10,2,2,5,2,2,2,4,-1,-1,-1,0,
0,0,2,2,-1,-1,-1,0,-1,-1,-1,0,2,0,-1,-1,-1,0,0,4,2,-1,-1,-1,0,-1,2,2,2,2,
2,2,2,2,5,5,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,
 };
static unsigned short stb__times_14_latin1_w[224]={ 0,2,5,7,6,11,10,2,4,4,6,7,3,4,
3,4,6,4,6,6,6,6,6,6,6,6,2,3,7,7,7,6,12,9,8,8,9,8,7,9,9,4,5,10,
8,11,10,9,7,9,9,7,8,9,9,12,9,9,8,3,4,4,6,8,3,6,7,6,7,6,6,7,7,4,
4,7,4,10,7,6,7,7,5,5,4,7,7,10,7,7,6,5,2,4,7,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,2,6,7,7,7,
2,6,4,10,5,6,7,4,10,8,5,7,4,4,3,7,7,3,3,3,4,6,10,10,10,6,9,9,9,9,
9,9,12,8,8,8,8,8,4,4,4,4,9,10,9,9,9,9,9,6,9,9,9,9,9,9,7,6,6,6,
6,6,6,6,9,6,6,6,6,6,4,4,4,4,6,7,6,6,6,6,6,7,7,7,7,7,7,7,7,7,
 };
static unsigned short stb__times_14_latin1_h[224]={ 0,10,5,10,11,10,10,5,12,12,6,8,5,2,
3,10,10,9,9,10,9,10,10,10,10,10,7,9,7,4,7,10,12,9,9,10,9,9,9,10,9,9,10,9,
9,9,10,10,9,12,9,10,9,10,10,10,9,9,9,12,10,12,5,1,3,7,10,7,10,7,9,9,9,9,
12,9,9,6,6,7,9,9,6,7,9,7,7,7,6,9,6,12,12,12,3,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,10,12,10,7,9,
12,12,3,10,5,7,4,2,10,1,5,8,5,5,3,9,12,2,4,5,5,7,10,10,10,10,12,12,12,11,
11,11,9,12,12,12,12,11,12,12,12,11,9,12,13,13,13,12,12,6,10,13,13,13,12,12,9,10,10,10,
10,10,10,10,7,9,10,10,10,10,9,9,9,9,10,9,10,10,10,10,10,6,8,10,10,10,10,12,12,12,
 };
static unsigned short stb__times_14_latin1_s[224]={ 254,203,70,181,50,34,46,92,85,118,20,
129,252,149,128,71,83,78,71,120,31,148,155,162,180,97,252,38,230,108,238,
197,157,1,11,214,54,83,92,187,126,136,25,202,218,227,9,236,42,123,94,
112,85,204,127,223,44,34,25,143,20,147,57,158,137,147,246,154,1,161,180,
172,164,159,152,146,141,1,12,187,108,69,246,194,64,200,208,168,34,239,27,
199,12,237,141,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,
120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,254,252,247,
104,179,50,187,180,132,169,64,216,116,149,137,167,76,112,82,87,124,100,110,
154,104,100,95,223,23,12,1,245,133,170,35,81,71,91,58,190,205,214,223,
62,232,45,242,57,116,1,41,1,31,100,90,50,227,21,11,51,25,15,187,
160,124,206,146,153,167,174,137,195,189,196,213,220,213,154,247,20,139,77,101,
57,64,76,90,42,104,237,108,131,116,69,77,61, };
static unsigned short stb__times_14_latin1_t[224]={ 1,15,60,15,15,28,28,60,1,1,60,
50,50,58,59,28,28,39,39,28,39,28,28,28,28,28,39,39,50,59,50,
28,1,50,50,28,50,39,39,28,39,39,39,39,39,39,39,28,39,1,50,
28,50,28,28,28,50,50,50,1,39,1,60,58,58,50,28,50,39,50,39,
39,39,39,1,39,39,60,60,50,39,50,50,50,50,50,50,50,60,39,60,
1,15,1,58,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,1,15,1,
28,50,39,1,1,59,28,60,50,59,58,28,58,60,50,60,60,59,39,1,
58,59,60,60,50,28,28,28,15,1,1,15,15,15,15,39,1,1,1,1,
15,1,15,1,15,39,15,1,1,1,1,1,60,15,1,1,1,15,15,39,
15,15,15,15,15,15,15,50,39,15,15,15,15,39,39,39,50,15,50,15,
28,28,28,28,60,50,15,15,15,15,1,1,1, };
static unsigned short stb__times_14_latin1_a[224]={ 51,67,83,101,101,168,157,36,
67,67,101,114,51,67,51,56,101,101,101,101,101,101,101,101,
101,101,56,56,114,114,114,90,186,146,135,135,146,124,112,146,
146,67,79,146,124,180,146,146,112,146,135,112,124,146,146,191,
146,146,124,67,56,67,95,101,67,90,101,90,101,90,67,101,
101,56,56,101,56,157,101,101,101,101,67,79,56,101,101,146,
101,101,90,97,40,97,109,157,157,157,157,157,157,157,157,157,
157,157,157,157,157,157,157,157,157,157,157,157,157,157,157,157,
157,157,157,157,157,157,157,157,51,67,101,101,101,101,40,101,
67,154,56,101,114,67,154,101,81,111,61,61,67,117,92,51,
67,61,63,101,152,152,152,90,146,146,146,146,146,146,180,135,
124,124,124,124,67,67,67,67,146,146,146,146,146,146,146,114,
146,146,146,146,146,146,112,101,90,90,90,90,90,90,135,90,
90,90,90,90,56,56,56,56,101,101,101,101,101,101,101,111,
101,101,101,101,101,101,101,101, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_14_latin1_BITMAP_HEIGHT or STB_FONT_times_14_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_14_latin1(stb_fontchar font[STB_FONT_times_14_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_14_latin1_BITMAP_HEIGHT][STB_FONT_times_14_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_14_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_14_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_14_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_14_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_14_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_14_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_14_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_14_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_14_latin1_s[i] + stb__times_14_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_14_latin1_t[i] + stb__times_14_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_14_latin1_x[i];
            font[i].y0 = stb__times_14_latin1_y[i];
            font[i].x1 = stb__times_14_latin1_x[i] + stb__times_14_latin1_w[i];
            font[i].y1 = stb__times_14_latin1_y[i] + stb__times_14_latin1_h[i];
            font[i].advance_int = (stb__times_14_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_14_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_14_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_14_latin1_s[i] + stb__times_14_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_14_latin1_t[i] + stb__times_14_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_14_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_14_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_14_latin1_x[i] + stb__times_14_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_14_latin1_y[i] + stb__times_14_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_14_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_14_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_14_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_14_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_14_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_14_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_14_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_14_latin1_LINE_SPACING
#endif

