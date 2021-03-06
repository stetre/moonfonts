// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_12_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_12_latin1'.
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

#define STB_FONT_consolas_bold_12_latin1_BITMAP_WIDTH         256
#define STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT         62
#define STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_consolas_bold_12_latin1_FIRST_CHAR            32
#define STB_FONT_consolas_bold_12_latin1_NUM_CHARS            224

#define STB_FONT_consolas_bold_12_latin1_LINE_SPACING           8

static unsigned int stb__consolas_bold_12_latin1_pixels[]={
    0x51892693,0x18700980,0x00d45100,0x8dcc0351,0x59933cc8,0x6c5dc0a2,
    0x40de75c1,0xd8bb81ec,0x411000c1,0x16c01dc8,0x00db82b8,0x05880ed4,
    0x2aa20001,0x5c199880,0x807b200d,0x441881da,0x0a8804c1,0x3b27abd4,
    0x01d901f9,0x007e21db,0x42f5c7ee,0xf984ede9,0x2679f31c,0x503f54ec,
    0x77130325,0xa8193730,0x002f8192,0x3f3be29d,0x207f6444,0x3a81deb8,
    0x59807220,0x5db03de8,0x643edfa8,0x1d40feff,0x880c9b98,0x24ee881c,
    0x207ee0fb,0x2f51efdc,0x3004227a,0x1f887ee0,0x40f88300,0x5b81f12e,
    0x926c07cc,0x89324c1d,0xdc881dc8,0xb81dc881,0xf70f9806,0xfbbf13dc,
    0x167efc49,0x32207722,0x1fec881d,0x4ae816ec,0xfffa83e4,0x24c930f9,
    0x49324c93,0x2e184449,0x82200887,0x99b6f57a,0x0fccdb1f,0xffcf887d,
    0x83fffe22,0x2e3aa0f8,0x262e42db,0x1f44d80f,0xf887d4f7,0x37e24fdd,
    0x377e24fd,0x200fc44f,0x1f99765c,0x543f76f7,0xddf8879f,0x3f77e24f,
    0x20eef744,0x817301db,0x7fdc2efd,0x54f70f9f,0x87d4f70f,0xfd83ea7b,
    0xfd8f51ef,0x3bff61ef,0x7cdeaf51,0xc8fccd91,0xdf107e66,0xfa998db3,
    0xbf7917c0,0x4c4d879f,0x2ec4d80f,0x7b87d4f7,0x9ee7b9ee,0x1761ee7b,
    0x89b61f88,0xf3f1bb2f,0x707ffe23,0x5cf73dcf,0x20b2be67,0xeffd84ff,
    0x47fb5f51,0x70f9fff9,0x27b87d4f,0x7d4f70fa,0x8f55e860,0x57a197a1,
    0xfa74f518,0x2a3fa743,0xfa8fc40f,0x7dc0f980,0x79d5f7d5,0x1f303be2,
    0x2e7b89b0,0x32ec3ea7,0x1f99763f,0x260fccbb,0x7b8d700f,0x6d6ec7e6,
    0x3ff622f8,0xb1f99764,0x9f98fccb,0x43e7d41d,0xc97d57a1,0x3e7faa0f,
    0xb87d4f70,0x53dc3ea7,0xaf65c41f,0x2f65c47a,0xf50bd971,0x2e07d7dc,
    0x03e60faf,0x203ea3f1,0xe85fc0f9,0x262ddbec,0x6c07cc3e,0x54f73dc4,
    0x97c4db0f,0x36cbe26d,0x207d05f1,0x6ce7cc3e,0x3e6f7b26,0xdb3eddc0,
    0x226d97c4,0x82bf7e2f,0x5c41f9dc,0x333f65ec,0x3dc3e607,0xfa9ee1f5,
    0x887d4f70,0x4935dacf,0xf15dacf8,0x5526bb59,0x2217be27,0x442f85ef,
    0xf306e89f,0xf7d07c41,0x45c81fdb,0x6c4d80f9,0x2e7a9ee5,0x33dc7e67,
    0x1f99ee3f,0x507a87a8,0x7fcc1dff,0x336a66da,0x1f99ee6e,0xd30fccf7,
    0x3f9fc5ff,0x7176b3e2,0x87cc05ff,0x27b9ea7b,0x27a9ee7a,0x935e99fa,
    0xaaf4cfd4,0x2f55e99f,0xd817ec7a,0x7c45d82f,0x1f300eff,0x595b07c4,
    0xf98b9057,0x8be24d80,0x226d8af9,0x3e26d9cf,0x33e26d9c,0xb0be06d9,
    0x2047d409,0x3aa0effc,0x33e20dff,0x273e26d9,0x7cc6886d,0x27ea6fcd,
    0x81fa85e9,0x457ccf70,0x362be66d,0x1b62be66,0x3eebbdfd,0xe977bfa0,
    0x2af55def,0x0db036c7,0x01f88fe6,0x707cc7b8,0xf98d500b,0x21b64d80,
    0x7541effc,0x77f540ef,0x0077f540,0x2007ccd9,0x02f22ffe,0xdfd500f8,
    0x80efea81,0x65575c59,0x577bfa0f,0x5c0eeeea,0x7fe43fef,0x0f7fe41e,
    0x0207bff2,0x50100404,0x07f5deaf,0xf5007f5c,0x74c07e21,0x117f24fd,
    0xd101d9bd,0x557be63d,0x403f54fe,0x00000000,0x40022188,0x0a004409,
    0x83100000,0x010be24e,0x54c05531,0x80100200,0x00000000,0x054deaf5,
    0x21800a98,0x06aa00a8,0x06aa2033,0x4aaa2130,0x00021aa8,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00512880,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00130000,0x88518813,0x002a6051,0x200a8813,
    0x80098109,0x01bceb80,0xd8bb83b5,0xda80f641,0x2ee036e1,0x80f641d8,
    0x4036e1da,0x01303eca,0x70a31031,0x3d90379d,0x36e0ed40,0x10188000,
    0x0a802603,0xf7011022,0x32076403,0x27b21f9e,0x17f7e41f,0x7ee40ec8,
    0x1fffd41e,0x0f8807ee,0xc881dc4c,0x4c192a81,0x0e440c9b,0x0c9541d4,
    0x910326e6,0x9f907503,0x881d90b9,0x7cf644ee,0x260ee261,0x1c880c9b,
    0x1fc40750,0xee889dd1,0xec81fb84,0x3f20e88e,0x0600884f,0x08440844,
    0x304e97c4,0xebb80880,0xff501105,0x488e4c1f,0x911c88ee,0x33225999,
    0x999912cc,0x8b333225,0x3322cccc,0x333322cc,0x4cb33322,0x0880c03f,
    0x97010883,0x5c072e03,0x4039701c,0x220c222d,0x36022030,0x3e22dada,
    0x647e67a9,0xb07bff65,0x7fd43dff,0x3ee7e21e,0x2077f4c1,0x7d41effa,
    0x77f4c2ff,0x4ddb5f30,0x2a1f36fb,0x6e44d91f,0x9fb912cf,0x4b3f7225,
    0x3e2cfdc8,0x33be2cce,0x8b33be2c,0x1f52ccef,0x31723f30,0x7f4c1dfd,
    0xf827fc0e,0x209ff04f,0x4c6e04ff,0x7fd4b91f,0x0f7fd41e,0xf88b7fd5,
    0x647e66ca,0xd0c5e865,0x9ba6fe6b,0x7c43f9f8,0x4dfccbb3,0x3a2fe26e,
    0xbaecfe25,0xf70faf8e,0x6f41f33f,0x707b82f8,0x3dc1ee0f,0xf03f81fc,
    0x3ee0fe07,0x4b91f980,0x3e2bb3f8,0x3e7d4bb3,0x7d43e7d4,0x07cfa87c,
    0x647e65f5,0x4dd37f35,0x446e9bf9,0x0dfc80e8,0x712e47e6,0xecb88bd9,
    0x887dcf75,0x3e61ed9f,0xb9ee7dcc,0x33dcf70f,0x3aefb99f,0xbd70f9db,
    0x67d41f3b,0x1ee0f706,0xf87b83dc,0x33be2cce,0x8b33be2c,0x3f52ccef,
    0x99723f30,0x9f37dccf,0x7cee4fb9,0x20fcee41,0x6e41f9dc,0x8e7e41f9,
    0x9eeb91f9,0x7dcf70fb,0xf50d5ec0,0x47e6f3dd,0xbb59f15c,0xbaed67c4,
    0x4fc43ea7,0x57f50fd8,0x1f53dc55,0x3ea7b9ee,0x7df32aab,0x57cf5cdb,
    0xb817f40f,0x1ee0f707,0x6677c3dc,0xf8b33be2,0x33be2cce,0x4a6bbe2c,
    0x7d4b91f9,0x57f52aab,0x43f9fc55,0xf3f87f3f,0xf87f3f87,0x75c8fcc4,
    0x27b87d4f,0x373aa0fa,0xddd19b0e,0x557eafe2,0x3ea5e99f,0x37f35e99,
    0xfa8fc4db,0xf3047f11,0x5fd4db37,0x08fe25e9,0x6b83bff2,0x07b81fdb,
    0xb83dc1ee,0x07f0f707,0xf81fc0fe,0x2bffd303,0x225fabf8,0x11fc423f,
    0x99bf37e6,0x3e66fcdf,0x37e66fcd,0x10f746fc,0x3e6bf57f,0x2fe66d9b,
    0x363a26d9,0xf51db2da,0xd2e77ec9,0xefe8bbdf,0x83bff25d,0x544ff9f8,
    0x7fe44fff,0x077fe40e,0xdb93ffea,0x1ff56b80,0x3f7307b8,0x304fdcc1,
    0x7dcc13f7,0x82673e09,0x33e099cf,0x2673e099,0x3f607c40,0x7ffd45ce,
    0x5d3ffea4,0xd70fcaae,0x3ae1f955,0x5d70fcaa,0x7f4c1f95,0xc973bf67,
    0x7fe40eff,0x7754f20e,0x5fbffd30,0x00801004,0x00200004,0x40400801,
    0x7f4d7008,0x7fc43dc0,0xffff15ff,0x57fffe2b,0x3e5ffff8,0x3ffe5fff,
    0x97fffe5f,0x24c5ffff,0x02008008,0x4e97c49d,0xf1274be2,0x82f893a5,
    0x00200429,0x00040001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x22000000,0x2e04c051,0x02621d8b,
    0x30000000,0x4c004400,0x6764c1cc,0x50733320,0x1ee447d9,0x5104ddb8,
    0x443dec85,0xd8fcc3dc,0x261104c5,0xdc88220a,0x20666641,0x8220982c,
    0xb0130001,0xd930fccd,0x0499263b,0xec82b866,0x40ec81f9,0x7fd4192a,
    0xffb83ee4,0x3ffaa1ff,0x45ff7f15,0x4b9001f8,0x337ee0fb,0x97ab3e21,
    0x3f21ccdf,0x935d15cc,0x85ccfe89,0x2b20eefa,0x3ef7a2fc,0x92ec7e64,
    0x64c3a25f,0x37e21d15,0x3f3324fd,0x4bf217c1,0x203f10e8,0x3ea3ffd8,
    0x26c8fcc2,0xf71cadf8,0x0f5c07d4,0x4021109d,0x22072e01,0x7c4933fb,
    0x2fe23e8a,0xb3df15d8,0xc800fc4d,0x1fc47f25,0x7cb91f88,0xbc83f982,
    0x3f50eaea,0x3f805d80,0xf987e4f7,0x5b2d8bb1,0x2e2daf4c,0x47e21ee7,
    0x365ffffc,0x80fc45b2,0x0c4199ed,0x3e63fa74,0x03ea7b82,0xf989d026,
    0x77fd4b91,0x3e04ff81,0xe97c4934,0xf15c9ee3,0x67c43ea3,0x7ff542ff,
    0x33b3ea05,0xf0f6fec0,0x407d47bd,0x92c8af9e,0x1360aa6d,0x6c86ee44,
    0x47e63ff9,0x22d56c5d,0x2ec5aecb,0x11f883f3,0x56c137f3,0x7fe7c45a,
    0x3fe05f11,0x07d7dc1f,0x3dc3bff1,0x0fffc1f5,0x323f313a,0x8dd37f35,
    0xfdb87cfa,0x5ffe8f51,0x3e2b93dc,0x3be21f51,0x22fe26d9,0x59f5045d,
    0x2fefb8dd,0x7dd3f2aa,0x770f9e80,0xf73f5db6,0xdc88ffff,0xf3bdd93f,
    0x37eafe63,0x22207440,0xf136c0e8,0x17c1f885,0x77c40e88,0x205f15fa,
    0x77c41fa9,0x73ffc885,0xf5307d4f,0x8fcc4e83,0x07dcf75c,0xde83f3b9,
    0x19f99ea1,0x15faafa8,0x7c4dd13f,0xc9ee1f51,0x87cc7f25,0x363f30fa,
    0x07eadb06,0x476bb676,0x1361ea7c,0xa9fddf20,0xf7bff30f,0xd81abd85,
    0xf99ee29b,0x0be0fc41,0x3f114dec,0x199ee972,0x17ec0fcc,0xf53ddba0,
    0x44e83f30,0x9eeb91f9,0x1fcfe0fa,0xff8f506e,0x6f7ec5ff,0x41dfff15,
    0x2e1f51f8,0x23fa9727,0x3ea7d8cf,0x7d44cd92,0x54a6bbe4,0x6fc4d536,
    0x304d87b9,0x2fe6bd31,0x087e65d8,0x507dc754,0x67c4dd3d,0x3ee2a6d9,
    0x3aa0a7c0,0x647e26e9,0x30fff625,0x530db03f,0x2be6bd33,0x41f986d8,
    0xbf8899de,0xb37f35fa,0x37e6fccd,0x3dcf70b2,0x2b9081f5,0x13f101f8,
    0x7d57d4dd,0xfda87e25,0x8f7fec1e,0x74c4fff8,0x3bbee5ff,0x437ffd40,
    0xdfff884d,0x983bfee0,0x2e1d101f,0x3b363a25,0xe83bfaa0,0x5ffb83ff,
    0x21d9b1d1,0x798b91f8,0xd70afa98,0xdfff501f,0x20f7fe41,0x3fa0afa9,
    0xb9dfb6ff,0xd7077fe4,0x2fc1f955,0x66fd43ee,0x7c57205e,0x1dfff101,
    0xd95cefd8,0x04020005,0x40100000,0x0100204d,0x54f20151,0x2ea791ef,
    0x0400000e,0x443aea79,0x43a8b91f,0x536ffff8,0x40400801,0x006ffff8,
    0x24e80801,0x0a6022f8,0x29803551,0x08000151,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,
    0x7100a881,0x85188030,0x0a144199,0x50620000,0x64c064c9,0x0eed40cc,
    0x40039993,0xca8000c8,0x8800cccc,0xb8002ccc,0x8354881c,0x43223dc9,
    0x3332204b,0x8e44774c,0x0dc32a4a,0x0721dc6e,0x9999950c,0x53333261,
    0x7ee44ee8,0xf10fdc1e,0x17c7dc03,0x57dc3fdb,0x3fea0fca,0x3f7fee1e,
    0x9fc47a86,0x19dfb05d,0xf525dfd4,0xffa87fb9,0x059bf31f,0x2ee1dfd3,
    0x3620d9bd,0xf97f33ff,0x41effd87,0x5b6984ff,0x99fde7cc,0x3ee2f99f,
    0x2df99910,0x7c4d91fa,0x3a1ec9f3,0x40fccf92,0x9fb950fc,0x3fbba619,
    0x04406116,0x200fc418,0xd83f3010,0x2fe62fef,0x47d426e9,0x33f7312e,
    0x4407d7dc,0x506c85cf,0x053e3e4f,0x449fbbf3,0x2aaebb3f,0x27b60dcd,
    0x1761f319,0xf9f52f43,0x1efefea8,0x9f9b64f7,0x5c0fe45e,0x0be37a1f,
    0x9ec1f7f9,0x5c7ea3d2,0x5c0f6c47,0xff9fc407,0x3fefe21f,0xf887ffe1,
    0x7ffc5e89,0x9741f981,0x0fb9ee4e,0x54fb3f6a,0x7f47ffff,0x19d9b704,
    0xfb0abb66,0x7f43f539,0x3e47e61d,0x2efb99f3,0xf10ddb89,0x5f97f305,
    0x325ecb88,0x37221f9d,0x15f70af9,0x03f7e6fb,0x3ea27c40,0x44ff886c,
    0x7c3f7acc,0x077449d3,0x87e407b8,0x3be21fa9,0x87ea65fa,0xa986daf8,
    0x7c1f981f,0xf53dc7b2,0x2abf3761,0x7ed43d40,0xcecae81b,0x41ddff70,
    0x41fa9cfd,0x23f33fda,0x2aafea7c,0x1b19b372,0x37e60be2,0x2b3e24fd,
    0x21fcfe5d,0xfffb0f4c,0x003bbe6d,0x02fe836c,0xfccc87ff,0x3e3760fa,
    0x7b817e42,0x3f30fe20,0x4c5c8fc4,0x03fbe21f,0x0fcc0fcc,0xf98bf3b6,
    0x2eba6d9b,0xc88f500f,0x67cc2cfd,0xf505c85e,0xa7c307e4,0x223fcdf9,
    0x854dc23f,0x4667ba0d,0x2a1f70f9,0xbf35e99f,0x7ffecdf9,0x7cd7607f,
    0x707dc4fa,0x5c1ee03f,0x3f6e0fdf,0x2fee0fcc,0xf709f507,0x3e607dc0,
    0x22e47e21,0x3f3e21f9,0xf303f302,0x37667cc3,0xfb83bff2,0x2661ffcd,
    0x9fb91099,0x9ddadc85,0x4333db10,0x224fc9fa,0xbf30efff,0x9fff5037,
    0x306c766e,0x2be67ffd,0x6f7f45d9,0x1f955d75,0x4cc34d6c,0xf53f31fc,
    0xef88fe45,0x443dc2aa,0x3ee4f8cf,0x3e20ff9d,0x703a605f,0x2a627c0f,
    0x323f10af,0x442bea65,0x54c1fc9f,0x2bea60af,0x40644930,0x7fcc0800,
    0x27ee66ff,0x2ffc8fc0,0x54fffff9,0x81103eff,0x5c0801f9,0x800feeee,
    0x081ceff9,0xe8be24e8,0x6ffc45a9,0x07ec7e62,0x3ffffd41,0x5c3f21ee,
    0x1fa5f51f,0x2e000bfa,0x7c41f707,0x23f16fff,0xdffff15c,0x887747e2,
    0xff16ffff,0x00000dff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x40000000,0x0442ccc8,0x26166644,
    0x8e4c971c,0x50199048,0x9666643b,0xc981ccc9,0x3333223d,0x9924c932,
    0x643e2599,0x6cc7b915,0x0000002d,0x4c010062,0x4ffff80a,0x5f32d85d,
    0x3e66c9b2,0x20408941,0x880a9828,0x22530b81,0x9851282a,0x3bbba60a,
    0x23fddf9c,0x66fcc1fc,0x3e33ea5f,0x07cdbee7,0xfe883fee,0x4b33be1f,
    0x223fdcfb,0xb913fccf,0x7a9ee59f,0x7c4b33be,0x3eb72b90,0x664f5111,
    0x2fe26ecf,0x7fd9d1ff,0x1ea01f70,0x2616e6e4,0x317b2fc9,0x1fafc8ba,
    0x2e35c7e6,0x43f23e8e,0x3baa0ffa,0x88474cc6,0xd953faee,0x70f9be8b,
    0x2aa21fbd,0xbd1f9dca,0x47e63fb8,0x36bfae7b,0x3e67fee7,0x703efe20,
    0x5c1fc3f3,0x44e81f27,0x4f53dc7b,0xb90f883f,0xcea974b6,0x3e7ebb27,
    0x2bf3df10,0x2887c9ff,0x36ea1ea0,0x23f885ac,0x41f8fbcc,0x7d4e84fe,
    0x2a2dcfc4,0x901f512f,0x23eede8d,0x1f5c3fe8,0x975723e2,0x5f3b502e,
    0x29f507f7,0x65cf91f9,0xbd70fbee,0x46ec1f3b,0x3e1f880f,0x54f72cce,
    0x5c3f881f,0x3ee67dc7,0x3e2155bf,0x3b7aeb90,0x5e4f9b90,0x47e23f69,
    0xa8a27f5c,0xd50eeeee,0x26e1ddfd,0x2f40c8dd,0x21f3b7ae,0xf9fb84fe,
    0x307d5f40,0x3207cc1f,0x06ff541e,0x6d41ddf3,0xc9f47546,0x7cc01fad,
    0x23fb04fe,0x323fddf9,0xd70f8fcc,0x3ea1f5f3,0x1f880f88,0x3dcb33be,
    0x70dd03f5,0x7dccfb8f,0x7c4bbbbe,0x02a65fab,0xb4de4515,0x5723f11f,
    0x5555303f,0x157e54c5,0xd8b75b75,0x5ff519af,0x2faec8ff,0x7cc2f7c4,
    0x545d93d8,0xddf70dfe,0x89ded6c1,0xb954e8bf,0x225b9e8d,0x9f9802cc,
    0x83ba20fb,0x6641bdf9,0x6dae3f49,0xfddfb0fe,0x3e1f883d,0x03f27b83,
    0xb8f701db,0x903f9ea7,0x3ff2b9df,0x23fff91f,0x223f69bc,0x00feb91f,
    0xc83d40b3,0x3fe22dac,0xf19f35ff,0x0fd8fd4b,0x000817ec,0x554c5551,
    0x22085982,0x00003530,0x27c4fcc0,0x01f981b7,0x2d71f879,0x75550ffa,
    0x5fd4c17f,0x2e1339f1,0x7ec4fc9f,0x27ee62ab,0x7f3d4f70,0x64000040,
    0x3e23f69b,0x500feb91,0x9812601d,0x0000000a,0x00000000,0x00000000,
    0x3f23f300,0xd80fcc00,0x3a6b8fc3,0x220f980f,0xfff7ffff,0x0fbfeebf,
    0x22fffff3,0x4f75ffff,0x0000fe7a,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x12600000,0x31146204,
    0x5ffff881,0x44110330,0xa8310989,0x9e628823,0xbbb0eeea,0x00007bbb,
    0x00000000,0x00000000,0x00000000,0x00000000,0xe8000000,0xb90fe43d,
    0x20fd43f1,0xec809999,0xdcb7fcc0,0x75cf71f9,0x5fb1f9ee,0x23bb98ea,
    0x01aaaaaa,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xc83e32e0,0x4404221f,0x0f333221,0x46dc0031,0xd95cf50f,0x00036a5f,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x21f10000,
    0x2000045c,0x002bbbb8,0x12649d40,0x00000008,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00002000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_bold_12_latin1_x[224]={ 0,2,1,0,0,0,0,2,1,1,0,0,1,1,
2,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,
2,0,0,0,1,0,0,1,0,0,1,0,1,1,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__consolas_bold_12_latin1_y[224]={ 8,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,1,5,4,
5,-1,0,0,0,0,0,0,0,0,0,0,1,1,1,3,1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,0,9,-1,1,-1,1,-1,1,-1,1,-1,-1,
-1,-1,-1,1,1,1,1,1,1,1,0,2,2,2,2,2,2,-1,-2,-1,3,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,-1,0,0,0,
-2,-1,-1,0,0,2,4,4,-1,-1,-1,0,-1,-1,-1,2,-1,3,8,-1,0,2,-1,-1,-1,1,-2,-2,-2,-2,
-2,-3,0,0,-2,-2,-2,-2,-2,-2,-2,-2,0,-2,-2,-2,-2,-2,-2,2,-1,-2,-2,-2,-2,-2,0,-1,-1,-1,
-1,-1,-1,-2,1,1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,-1,-1,
 };
static unsigned short stb__consolas_bold_12_latin1_w[224]={ 0,3,5,7,7,7,7,3,5,5,6,7,4,5,
3,6,7,6,6,6,7,6,7,6,6,6,3,4,6,6,5,5,7,7,7,6,7,5,5,7,7,6,5,7,
5,7,7,7,7,7,7,6,7,7,7,7,7,7,6,4,7,4,7,7,5,6,7,6,6,6,7,7,6,6,
6,7,6,7,6,7,7,6,6,6,6,6,7,7,7,7,6,6,2,5,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,3,6,7,7,7,
2,7,6,7,5,6,6,5,7,5,5,6,5,5,7,7,7,3,3,5,5,6,7,7,7,5,7,7,7,7,
7,7,8,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,6,7,7,7,7,7,7,7,7,6,7,
6,6,6,6,7,6,6,7,6,6,6,7,6,6,7,6,7,7,7,7,7,7,7,6,7,6,6,7,7,7,
 };
static unsigned short stb__consolas_bold_12_latin1_h[224]={ 0,10,4,8,11,10,10,4,12,12,6,7,6,2,
4,11,9,8,8,9,8,9,9,8,9,8,8,10,8,4,8,10,12,8,8,9,8,8,8,9,8,8,9,8,
8,8,8,9,8,11,8,9,8,9,8,8,8,8,8,12,11,12,5,2,4,8,10,8,10,8,9,10,9,9,
12,9,9,7,7,8,10,10,7,8,9,7,6,6,6,9,6,12,13,12,4,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,10,11,8,8,8,
13,11,4,9,7,6,4,2,7,4,5,8,6,6,4,9,11,3,2,6,7,6,9,9,9,10,10,10,10,10,
10,11,8,10,10,10,10,10,10,10,10,10,8,10,11,11,11,11,11,6,11,11,11,11,11,10,8,10,10,10,
10,10,10,11,8,9,10,10,10,10,9,9,9,9,10,9,10,10,10,10,10,7,10,10,10,10,10,12,12,12,
 };
static unsigned short stb__consolas_bold_12_latin1_s[224]={ 255,237,142,168,144,240,248,148,23,75,216,
145,199,168,104,121,137,47,68,130,39,92,77,249,85,176,191,72,234,121,9,
24,50,160,145,99,60,54,90,114,82,75,177,183,250,23,31,169,15,128,1,
227,241,234,226,218,210,202,195,65,113,70,96,174,115,153,57,138,65,123,122,
34,198,15,37,22,37,115,123,52,49,42,130,108,183,96,184,168,176,219,161,
58,4,44,152,130,130,130,130,130,130,130,130,130,130,130,130,130,130,130,130,
130,130,130,130,130,130,130,130,130,130,130,130,130,130,130,130,130,255,30,168,
92,44,75,1,190,108,106,109,192,249,168,153,136,243,68,210,230,128,145,198,
160,164,204,103,236,190,153,161,211,203,195,187,179,16,175,83,150,143,136,129,
122,115,108,101,94,100,78,152,160,97,89,105,223,136,206,222,214,81,86,115,
31,241,8,230,248,16,183,60,205,63,39,165,172,212,242,1,30,55,8,232,
8,224,47,23,137,70,1,157,217,1,15,29,7, };
static unsigned short stb__consolas_bold_12_latin1_t[224]={ 1,1,55,37,1,15,15,55,1,1,47,
47,47,55,55,1,26,47,47,26,47,26,26,37,26,37,37,26,37,55,47,
26,1,37,37,26,47,47,47,26,47,47,26,37,26,47,47,26,47,1,47,
26,37,26,37,37,37,37,37,1,1,1,55,55,55,37,26,37,26,37,26,
26,26,37,1,37,37,47,47,37,26,26,47,37,26,47,47,47,47,26,47,
1,1,1,55,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,
37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,1,26,1,
37,37,37,1,1,55,26,47,47,47,55,47,55,47,37,47,47,55,26,1,
55,55,47,47,47,26,26,26,15,15,15,15,15,26,1,37,15,15,15,15,
15,15,15,15,15,37,15,1,1,1,1,1,47,1,1,1,1,1,15,37,
15,1,15,1,1,15,1,37,26,15,15,15,15,26,26,37,37,15,37,15,
26,15,15,15,47,15,15,15,15,26,1,1,1, };
static unsigned short stb__consolas_bold_12_latin1_a[224]={ 106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT or STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_12_latin1(stb_fontchar font[STB_FONT_consolas_bold_12_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT][STB_FONT_consolas_bold_12_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_12_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_12_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_12_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_bold_12_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_12_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_12_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_12_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_12_latin1_s[i] + stb__consolas_bold_12_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_12_latin1_t[i] + stb__consolas_bold_12_latin1_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_12_latin1_x[i];
            font[i].y0 = stb__consolas_bold_12_latin1_y[i];
            font[i].x1 = stb__consolas_bold_12_latin1_x[i] + stb__consolas_bold_12_latin1_w[i];
            font[i].y1 = stb__consolas_bold_12_latin1_y[i] + stb__consolas_bold_12_latin1_h[i];
            font[i].advance_int = (stb__consolas_bold_12_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_12_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_12_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_12_latin1_s[i] + stb__consolas_bold_12_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_12_latin1_t[i] + stb__consolas_bold_12_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_12_latin1_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_12_latin1_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_12_latin1_x[i] + stb__consolas_bold_12_latin1_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_12_latin1_y[i] + stb__consolas_bold_12_latin1_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_12_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_12_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_12_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_12_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_12_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_12_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_12_latin1_LINE_SPACING
#endif

