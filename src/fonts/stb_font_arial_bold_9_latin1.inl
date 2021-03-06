// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_bold_9_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_bold_9_latin1'.
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

#define STB_FONT_arial_bold_9_latin1_BITMAP_WIDTH         256
#define STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT         40
#define STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_arial_bold_9_latin1_FIRST_CHAR            32
#define STB_FONT_arial_bold_9_latin1_NUM_CHARS            224

#define STB_FONT_arial_bold_9_latin1_LINE_SPACING           6

static unsigned int stb__arial_bold_9_latin1_pixels[]={
    0x04400044,0x03002018,0xb0001100,0x56c41d41,0x9d473002,0x7543b61b,
    0xb31cd6e2,0x060dc5dd,0x0f200088,0xbb700880,0x82dc9819,0x40301101,
    0x04001102,0x10001106,0xbb077600,0xc81cd981,0x0ea03901,0x0edd41d4,
    0x9b303762,0xb8444445,0x5c11040c,0x23124c4c,0x0da87c59,0x9ff24c7a,
    0x0b21a21f,0x06ddc0e4,0xd983a8f1,0x1b70ac85,0x903eabe2,0x5ca83b03,
    0x901b02a8,0x8753a8d5,0x2f7261dd,0xd887b225,0x5453d53b,0x16ed42dd,
    0x24a86c95,0x50b76a0d,0x1b2545bb,0x36a0d92a,0xb87cf62d,0x3e7b0edf,
    0xb9261ec0,0x12a1f1e4,0xbfd9261f,0x40f612a7,0x8f07b03d,0xaa87b039,
    0xb53aedcb,0x557bbaa0,0xddd55eee,0x7917ba2b,0x777543a2,0x2a2552a5,
    0x93eabe24,0x32543ccb,0x26be61df,0x5d35f32e,0x4b50f96a,0x5d35f30f,
    0x54ba6be6,0x1f2d43e5,0x54ba6be6,0x9e56e5ad,0x3fcc5ada,0xf0f49704,
    0x265b92a1,0x3b9ef224,0x3fcc3fcc,0xaa643fcc,0x23fcc5de,0x2719568c,
    0x133d505b,0x754267aa,0x83797099,0x3aa4d8f9,0x2dd6e099,0xd9b5b96e,
    0xb2dc274c,0x5b96ef75,0x25aadcb7,0xb87cb50f,0xb72dd6e5,0x4b50f96a,
    0xd2dcb70f,0x22cb5c5b,0x175e42de,0x41d25c31,0x3354950f,0x0ee7bb89,
    0xebc85d79,0x36175e42,0xd791f6a3,0xcbcb4e45,0x21f11f10,0x9d52ccea,
    0x4b33aa59,0x6ec83adb,0xb7166754,0x65cb716e,0x374c6aac,0x8eafa96e,
    0x525daa4b,0xb50f96ad,0x5aa4b87c,0xf2d5aa4b,0x970f96a1,0xeb8f9354,
    0x3e1f20ee,0x4b9265ca,0xf12a1f1e,0x4f771261,0x22e57c4a,0x657c5caf,
    0x8f3993c5,0x32aa5caf,0x7f5c1ded,0x546abaa3,0x55d51aae,0x7c13ba23,
    0x70d57542,0x4cb716eb,0x5d547b3f,0x57a62dc6,0xf13d88f8,0x45aa7b11,
    0x43e2d50f,0xf13d88f8,0x45aa7b11,0x43e2d50f,0xb13d88f8,0x4d884b89,
    0x987e6754,0x89269b14,0x9741b50f,0x9a3ddc49,0xd50fccea,0x33aa1f99,
    0x754f30fc,0x3f33aa7d,0x0ecc2f20,0xb50b5126,0xd00e0b50,0x2b705a83,
    0xdb52dc5b,0x1ff4419d,0x26ac996e,0x3ae0cfeb,0x13ff60cf,0xfeb89ffb,
    0x833fae0c,0x7fec4ffd,0xa867f5c4,0x65414c0c,0x229916c0,0xb82a3912,
    0x14a8b264,0x85449985,0x916d322d,0x574c8b69,0x22645b00,0x5c40bcba,
    0xabfffd42,0xfff57fff,0x507a00cf,0xbadcffff,0x20012dc5,0x0e5c5b82,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x449d82b8,0x22cdc2ad,
    0x21ddc2dc,0x4c15c1d9,0x6dc0d81d,0x2b615e40,0x10570183,0x1b06e059,
    0x824c0db8,0x21986541,0x87202a58,0xda8352c9,0x25448d84,0x110e40c8,
    0x64419702,0xb126640c,0x9076a054,0x4599503b,0xca840cb8,0x0c41440c,
    0x3aba6044,0x988b5b50,0x0e204cc0,0x14415151,0x02a60554,0x36f44131,
    0x4264c26c,0x260622c8,0xb0f02809,0x81cb3123,0xe85acdc2,0x84c620e9,
    0x13408988,0x74ee1131,0x65495b31,0x98aba25b,0x493d30e5,0x5dd459ca,
    0x497972aa,0x4c365ad9,0x3b7a23de,0x7dc7bd30,0x479951ec,0xbd10ede8,
    0xa977a61d,0x977a65b4,0x37a65de9,0x3b977a65,0x7447f981,0x5d9d31fd,
    0xde98f7a6,0x903b7a23,0x580aacb8,0x0ede8817,0xf70379b5,0x2a5b4a89,
    0x952445b4,0x71e9dcb6,0x22d88d17,0x0bac2df9,0xbd10e6dc,0x38caac87,
    0x7f50f359,0x935ee43a,0x35ee4f29,0x32a199d5,0x4f2990ea,0x3e54794c,
    0x7ca8b695,0x1f2a3e54,0x43a5cf95,0x652e2dbc,0x6e4b6773,0xc9af726b,
    0x84264794,0x55c44193,0x08f2991c,0x37a6393b,0x4b6950cd,0x51d45b4a,
    0x1fa5cb69,0x5b88f177,0x7111e2a2,0x534edc32,0x4cac8b7b,0x511f7a67,
    0x3321d1fd,0xc9652e39,0x33b7239c,0xa5cf2951,0x64b2972c,0x9752a79c,
    0x273279cc,0xcc9e7327,0xf13b6279,0x2da54b95,0x4e64ba97,0x4b8e7323,
    0x5c056a59,0xb89c0da8,0x370b2971,0x3f52e939,0xea54ba95,0x5d4a8722,
    0x6547bbae,0x99e2aa58,0x1b5381f2,0x1e773d66,0x26735157,0x32ba6599,
    0x9db10edb,0xdb12f744,0x32a2cdc9,0x4bdd11ec,0x37aa5ee8,0x54bb7e27,
    0x9f7aa7de,0x37aa7dea,0x9d50e447,0x97b621f9,0xdb12eee8,0xd1276c49,
    0x174ed4bd,0x298b6e71,0x17ba23b7,0xed89e5d6,0x5dbf12de,0x458bb7e2,
    0x0772edf8,0x77445db1,0x530fba23,0x23ed8b6e,0xbbc83ee8,0xc887ba63,
    0x0001fd4a,0x00000000,0x00000000,0x322d8750,0x00000003,0x02042ca8,
    0x08004441,0x00000002,0x00000aa0,0x00000810,0x7d52a000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x82000000,0x4c2cca80,0x867642dc,0x41110088,
    0x16e43dd9,0x3020b726,0x7316ed49,0x8506c730,0x11811104,0x0d8e40e6,
    0x20884472,0x81318808,0x1621ddd9,0x44559106,0x70399cc1,0x0399cc77,
    0xb16eeee4,0x185c8089,0x06204444,0x5cd221e4,0x54d41f2c,0x3e6be2aa,
    0x2a791b50,0xdbd10ede,0x4ba6be25,0x2be258da,0xd31a22e9,0x54ba6be6,
    0x21f2d40c,0xe88320db,0x3f9d12ec,0xda8333aa,0xb4a9445a,0xe99376a5,
    0x36a1edfd,0x44330fb9,0x30220ede,0x86954a8b,0x54661898,0xdbe9808c,
    0x261d5099,0x884cc3de,0x822226de,0x3fcc5de9,0x56ced5a6,0xa44d4e45,
    0x45bf105a,0x6d2e795a,0x5b904b72,0x8716a5a8,0xaad4b769,0x7cb50ece,
    0x715c5fb0,0x6dddcb67,0x4cb95b53,0x552a0bef,0x073ea5b4,0x64997f95,
    0xc92a3d1d,0xfb254794,0x6552a1ff,0x43f3aa4c,0x81f9d54a,0x90bbeabc,
    0x51af725f,0x80209dc9,0x16de47ca,0x16f56ad1,0x5d2226b2,0x557ae204,
    0x9752a596,0x3f2bf95b,0x58d325c3,0x56a4bb4c,0xf96a795a,0x2e498b50,
    0x32bae5d4,0x5cd51b52,0x552a0ced,0x9ee625d4,0x22aaf9cb,0x92a5d3ed,
    0x1254594b,0xfaa541b5,0x952dad47,0x5f116d6a,0x966177d9,0x725439cc,
    0x399008e9,0x225caf8f,0x2e1f2b55,0x1d138cb8,0xb552e1f1,0xdd10deea,
    0xadc7e65d,0xdd8e885a,0xad4e5a24,0xb53d88f8,0x0f8b4cb2,0x6ec4b0b5,
    0x54bdd52d,0x3fb22eff,0x6fc52a1e,0x549bd32e,0x2a1eedde,0x892a1f15,
    0x262545ee,0x66d52a0b,0x4a96d2a3,0xcec8b695,0x3625984e,0xdb12544e,
    0x7dea8049,0x383f33aa,0x320991b5,0x1f75c3bb,0x12a5ffb1,0x77f5c590,
    0x5c1ffdb2,0x55e24ffe,0x33bae1fe,0x6c1bdb50,0xb0fe63ff,0x008f4dcc,
    0x542cc0b5,0x2a000004,0x012a2eff,0x1fffb254,0x87c6552a,0x552a5b4a,
    0x543e25b4,0x00b34fff,0x2226012a,0x4f22d801,0x0195b568,0x05300000,
    0x400001a8,0x00001222,0x0f2e0000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x29300000,0x2e3b31d8,0x5400930d,
    0x44ae3ddd,0xc926950d,0x1c8ae7b1,0x321dc836,0xbbb33ddd,0x261b1cc7,
    0x1edc1ddd,0xd80064b3,0x703bbb30,0x986665c5,0xbbb34ddd,0x196eecc5,
    0x82208211,0x44449858,0x26621888,0xcbb86110,0x4443110c,0x821ca208,
    0x266624ac,0x4c133310,0xa8fa36a6,0x16a1fd4f,0xf5311c98,0x12647cc5,
    0x45e45d5d,0x9a5c3d6f,0x989a72a6,0xf33b509f,0xb50f96a1,0x6c6d4d73,
    0x5c3a7f52,0xa87f440b,0x3e60fb9d,0xda9aea63,0xf33b5099,0x9d84ced4,
    0x0f964f6b,0x2a615d53,0x37f3ae2b,0x2a9fb72e,0x9af6a5be,0x3f3aa5ea,
    0xb44bdd10,0x3bae1dd9,0x43ddd72f,0x8bdd52ed,0x50fd8eda,0xd05bd30b,
    0xf50dd907,0x8fcaca8b,0x983cbc47,0x55754786,0x1f77d50f,0x221ae36a,
    0x1d1fd51e,0x44c33ae2,0xb0f4b50e,0x7541b079,0xb97d52bb,0xb9515754,
    0x2d6ccb5d,0x32e39fb7,0x23e970cc,0xfd83aa4b,0x5a9a72a0,0x3f62dad4,
    0x2059b302,0x2177732c,0xf9f568e8,0x7ddf6541,0x17d70b50,0x20be05d8,
    0x4ef445fa,0x1eae86cd,0x2a3c0fc4,0x2faa1fde,0x3bdf50fb,0x65e545b0,
    0xd07f260e,0x772e96a1,0x75459897,0xd97d51bb,0x442efaa1,0x7742ebee,
    0x224c3441,0x2a951f4b,0xb717f40e,0x52a254dd,0x08d1932d,0xa8d4126e,
    0x46111bbb,0x6654b95a,0x20b50f9f,0x80d71fb8,0x17d7441e,0x5c27d5fe,
    0x780f446e,0x96a5cad4,0x4480b50f,0x3ae1fd4a,0x456a1d02,0x43ffdb0f,
    0x2d42d42b,0x67416a5d,0x0835c0f9,0x8fa5c188,0x32dffd4a,0x25400e9c,
    0x22016d2a,0xa8000006,0x2b2a7f15,0x3ffea1f7,0x3fffa104,0xaae41e85,
    0x17c5760f,0x3ff21fc4,0x5d2d4787,0x0b50f96a,0x0f9a5478,0xff50e801,
    0x1d87705d,0xfabfffd4,0x0016a5ff,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xca800000,0xca845951,
    0x6d419730,0x5c2e2b11,0x32639752,0x4527a312,0x9708360c,0x88888ea3,
    0x64315710,0x00002ccc,0x00000000,0x00000000,0x00000000,0x00000000,
    0x32200000,0xd92a9951,0x2b596f61,0x4ee7f759,0x29172dcb,0x043a8139,
    0x2186ea95,0xb771cccc,0x0000003d,0x00000000,0x00000000,0x00000000,
    0x00000000,0x36e00000,0x5ce29991,0xdb92fa2c,0x08955562,0x02e21111,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x01110000,0x0654c102,0x00000020,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__arial_bold_9_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
0,0,0,-1,0,0,0,0,-1,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,-1,0,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__arial_bold_9_latin1_y[224]={ 7,1,1,1,0,1,1,1,1,1,1,2,5,4,
5,1,1,1,1,1,1,1,1,1,1,1,2,2,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,1,2,1,2,1,2,1,2,1,1,
1,1,1,2,2,2,2,2,2,2,1,2,2,2,2,2,2,1,1,1,3,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,2,1,1,2,1,
1,1,1,1,1,3,2,4,1,0,1,1,1,1,1,2,1,3,7,1,1,3,1,1,1,2,-1,-1,-1,-1,
-1,0,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,2,0,-1,-1,-1,-1,-1,1,1,1,1,
1,1,1,0,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,
 };
static unsigned short stb__arial_bold_9_latin1_w[224]={ 0,2,4,5,5,7,6,2,3,3,3,5,2,3,
2,4,5,4,5,5,5,5,5,5,5,5,2,2,5,5,5,5,8,6,6,6,6,5,5,6,6,2,4,6,
5,7,6,6,6,7,6,5,5,6,7,8,6,7,5,3,4,3,5,6,2,5,5,5,5,5,3,5,5,2,
3,5,2,7,5,5,5,5,4,5,3,5,5,7,5,5,4,3,2,3,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,5,5,5,5,
2,5,3,7,3,5,5,3,7,6,3,5,3,3,3,5,6,2,3,2,3,5,7,7,7,5,6,6,6,6,
6,6,9,6,5,5,5,5,3,3,4,4,7,6,6,6,6,6,6,5,7,6,6,6,6,7,6,5,5,5,
5,5,5,5,7,5,5,5,5,5,3,3,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
 };
static unsigned short stb__arial_bold_9_latin1_h[224]={ 0,6,3,7,8,7,7,3,8,8,3,5,4,2,
2,7,7,6,6,7,6,7,7,6,7,7,5,7,6,4,6,6,8,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,7,6,7,6,7,6,6,6,6,6,8,7,8,4,2,2,6,7,6,7,6,6,7,6,6,
8,6,6,5,5,6,7,7,5,6,7,6,5,5,5,7,5,8,8,8,2,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,7,8,7,5,6,
8,8,2,7,4,4,4,2,7,1,3,6,4,4,2,7,8,2,2,4,4,4,7,7,7,7,8,8,8,8,
8,7,6,8,8,8,8,8,8,8,8,8,6,8,9,9,9,9,9,5,8,9,9,9,9,8,6,7,7,7,
7,7,7,8,6,7,7,7,7,7,6,6,6,6,7,6,7,7,7,7,7,5,6,7,7,7,7,8,8,8,
 };
static unsigned short stb__arial_bold_9_latin1_s[224]={ 64,250,196,26,239,157,165,193,122,96,189,
175,169,223,220,184,201,118,66,207,130,213,227,136,233,247,229,253,22,244,112,
99,164,243,148,15,123,142,155,40,85,253,64,1,16,8,105,69,92,53,78,
22,72,82,58,49,42,34,28,104,93,100,250,230,227,237,76,225,105,214,210,
98,194,191,92,179,176,187,217,159,28,34,212,133,89,127,169,161,200,1,195,
108,112,147,237,231,231,231,231,231,231,231,231,231,231,231,231,231,231,231,231,
231,231,231,231,231,231,231,231,231,231,231,231,231,231,231,231,231,64,61,198,
47,206,117,89,250,208,7,165,232,238,223,239,243,201,170,161,172,216,195,115,
205,212,186,182,176,219,143,135,129,126,133,157,82,140,92,200,173,180,186,192,
212,218,222,226,245,147,1,29,36,1,8,57,223,231,22,15,50,43,204,110,
32,50,62,68,74,80,151,139,86,8,111,117,20,123,155,220,165,99,185,123,
151,44,38,14,181,104,178,189,56,172,64,70,76, };
static unsigned short stb__arial_bold_9_latin1_t[224]={ 10,20,34,11,1,11,11,34,1,1,34,
28,34,34,34,11,11,28,28,11,28,11,11,28,11,11,28,11,28,28,28,
28,1,20,28,20,28,28,28,20,28,20,20,28,28,28,28,20,28,20,28,
20,28,20,28,28,28,28,28,1,20,1,28,34,34,20,20,20,11,20,20,
20,20,20,1,20,20,28,28,20,20,20,28,20,20,20,28,28,28,20,28,
1,1,1,34,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,
20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,10,20,1,
20,28,20,1,1,34,20,34,28,28,34,11,34,34,20,34,34,34,11,1,
34,34,34,34,34,11,11,11,11,1,1,1,1,1,11,20,1,1,1,1,
1,1,1,1,1,20,11,1,1,1,1,1,28,1,1,1,1,1,1,20,
11,11,11,11,11,11,1,20,11,11,11,11,11,20,20,20,20,11,20,11,
11,11,11,11,28,20,11,11,11,11,1,1,1, };
static unsigned short stb__arial_bold_9_latin1_a[224]={ 36,43,61,72,72,115,93,31,
43,43,50,75,36,43,36,36,72,72,72,72,72,72,72,72,
72,72,43,43,75,75,75,79,126,93,93,93,93,86,79,100,
93,36,72,93,79,107,93,100,86,100,93,86,79,93,86,122,
86,86,79,43,36,43,75,72,43,72,79,72,79,72,43,79,
79,36,36,72,36,115,79,79,79,79,50,72,43,79,72,100,
72,72,64,50,36,50,75,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,36,43,72,72,72,72,36,72,
43,95,48,72,75,43,95,71,52,71,43,43,43,74,72,36,
43,43,47,72,107,107,107,79,93,93,93,93,93,93,129,93,
86,86,86,86,36,36,36,36,93,93,100,100,100,100,100,75,
100,93,93,93,93,86,86,79,72,72,72,72,72,72,115,72,
72,72,72,72,36,36,36,36,79,79,79,79,79,79,79,71,
79,79,79,79,79,72,79,72, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT or STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_bold_9_latin1(stb_fontchar font[STB_FONT_arial_bold_9_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT][STB_FONT_arial_bold_9_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_bold_9_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_bold_9_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_bold_9_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_bold_9_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_bold_9_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_bold_9_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__arial_bold_9_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__arial_bold_9_latin1_s[i] + stb__arial_bold_9_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__arial_bold_9_latin1_t[i] + stb__arial_bold_9_latin1_h[i]) * recip_height;
            font[i].x0 = stb__arial_bold_9_latin1_x[i];
            font[i].y0 = stb__arial_bold_9_latin1_y[i];
            font[i].x1 = stb__arial_bold_9_latin1_x[i] + stb__arial_bold_9_latin1_w[i];
            font[i].y1 = stb__arial_bold_9_latin1_y[i] + stb__arial_bold_9_latin1_h[i];
            font[i].advance_int = (stb__arial_bold_9_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__arial_bold_9_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_bold_9_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_bold_9_latin1_s[i] + stb__arial_bold_9_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_bold_9_latin1_t[i] + stb__arial_bold_9_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_bold_9_latin1_x[i] - 0.5f;
            font[i].y0f = stb__arial_bold_9_latin1_y[i] - 0.5f;
            font[i].x1f = stb__arial_bold_9_latin1_x[i] + stb__arial_bold_9_latin1_w[i] + 0.5f;
            font[i].y1f = stb__arial_bold_9_latin1_y[i] + stb__arial_bold_9_latin1_h[i] + 0.5f;
            font[i].advance = stb__arial_bold_9_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_bold_9_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_bold_9_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_bold_9_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_bold_9_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_bold_9_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_bold_9_latin1_LINE_SPACING
#endif

