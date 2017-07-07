// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_bold_6_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_bold_6_latin_ext'.
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

#define STB_FONT_arial_bold_6_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT         40
#define STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT_POW2    64

#define STB_FONT_arial_bold_6_latin_ext_FIRST_CHAR            32
#define STB_FONT_arial_bold_6_latin_ext_NUM_CHARS            560

#define STB_FONT_arial_bold_6_latin_ext_LINE_SPACING           4

static unsigned int stb__arial_bold_6_latin_ext_pixels[]={
    0x17505102,0x8310e14c,0xa8720543,0x44310541,0x05706a1b,0x1d42a857,
    0x42a8330e,0x66dcb219,0x54154570,0x87588ea4,0x0666190c,0x442a20e3,
    0x1c38a20c,0x15453170,0x983300ee,0x50ae0d41,0x405505c5,0x545171ca,
    0x64470263,0x4473624c,0x4350e1cd,0x25317298,0x25317298,0x25317298,
    0x45317298,0x894c5c5d,0x439b11cd,0x64433223,0x2619910c,0x91245592,
    0xd8974419,0xb98e531c,0xd99d2534,0xa5cc7992,0x1c736274,0x263238e9,
    0x22e53172,0x298b8e29,0x262e5317,0x22e53172,0x262e1729,0x432e3b52,
    0x3d8e229b,0x2dcdd2e6,0x558e5639,0x52716459,0x6527298c,0x46527298,
    0x4c652729,0x4643db52,0x8e563929,0x7088b925,0x4222e111,0x72455929,
    0x27258111,0xb48e1b18,0xac95dd62,0x75a4b190,0x04627257,0x64b2a577,
    0x25319298,0x6527298c,0x25319298,0x5319298c,0xc864a632,0x56c97298,
    0x71c47394,0xb1795ac1,0x56195864,0x8c9764b9,0x23253195,0x23253195,
    0x23253195,0x23653195,0x64a63249,0x492c32b0,0x1119088c,0xc94c2232,
    0x446491cd,0x2d719240,0x9b654729,0x4f6a1f12,0x45b2a4cc,0x8ed7190f,
    0x269730f8,0x253190dd,0x2b19298c,0x5319298c,0x4c64a632,0x43253192,
    0x2991298c,0x227393d8,0x6ca8ee39,0x66cc59b7,0x2f259b32,0x32e3db54,
    0x32e1bb35,0x32e1bb35,0x32e1bb35,0x4701bb35,0x59b30dd9,0x3344b366,
    0x437261b9,0xb8590dc9,0x83726590,0x4533623c,0x1cadd475,0x81904495,
    0x6c4955ba,0x7925474c,0x1bb30d49,0xae5c3766,0x1bb30dd9,0x6ecc3766,
    0x42e1bb30,0x25b70dd9,0x6e4ee3ca,0x04ca8661,0x931b0000,0x00000000,
    0x08000000,0x00000000,0x04084002,0x20800041,0x00020800,0x00000000,
    0x10060000,0x00040880,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x19d90000,
    0x41b87762,0x80b93263,0x83305c1b,0x70541bbb,0x3b21ddb8,0x57171c05,
    0x82e298a2,0x4750aa1b,0x106629ab,0x55066445,0xa92ee2b8,0x98ae0cc0,
    0x8970cdcd,0x0c88541c,0x15289832,0x0c8a5c1c,0x098dc375,0x8a42e351,
    0x7054151b,0x1a833627,0x44e45927,0xa5cc9931,0x930322cb,0x49930c89,
    0x22e3cb9a,0x27255929,0x64533a2b,0x26646a4c,0x64736217,0x11cd88e0,
    0x4a7b239b,0x39b11cd8,0x66c4222e,0x23253571,0x2ae3bb75,0x46459329,
    0xdb8322ca,0x2ea3751d,0x2f619d91,0xb902e170,0x0ed46eab,0x949cf617,
    0x21749d61,0xbaaa4e93,0xb2c642e3,0x5976b8c8,0x21b335a4,0x32165c0c,
    0xca5c5970,0x764a6322,0x4c88d790,0xc9ccb737,0x189c925b,0x56392419,
    0x4b6b2b1c,0xcac72b1c,0x65639088,0x4e56929e,0x5653d92b,0x48b2a325,
    0x1da95ce4,0x82e2c3b5,0x4dd8190c,0xc8eee3b5,0x656325b0,0x865632b1,
    0x32b1958c,0x65c323bb,0x29bb1165,0x2d950d99,0x49b90dca,0x4c320d99,
    0x5b7770d9,0x49c94c64,0x94c87519,0x8c94cb17,0xb5c6473a,0x2b0c920c,
    0x4b232b0c,0x9ac32b0c,0x656190dc,0x5e4322da,0x654b6b26,0x43377664,
    0xbb9af21a,0x2e2c7773,0x32064323,0x0647770b,0xae5cee19,0x2b973dbc,
    0x32eb970c,0x40c8bb15,0x5473070b,0x54b750dc,0x1b950642,0x10dca85c,
    0x6ecc7557,0x99035120,0x5438b36e,0xa66c4a21,0x66ccd10b,0x0d459b32,
    0x336659b3,0x2cd98aa2,0x23205919,0x0059193a,0x00ea3200,0xdc864058,
    0x00640004,0x0000c800,0x00030064,0x00000004,0x00000000,0x00001001,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x37000000,0x90dc0644,0x915cc5c1,0x202a1541,0x41c1b82a,0xcc886443,
    0x0c88ae3a,0xa81c986e,0x51054380,0x41710d41,0x2072481b,0x4190323c,
    0x13bb8e1c,0x3876ee19,0x70595054,0x886a0a88,0x1b88aa0b,0x445706d4,
    0x20a83229,0x510e0cc3,0x47521705,0x26cb85c4,0x4170c98c,0x8993298b,
    0x2e321b8c,0x365cd971,0x0f46e595,0xdb8e4c57,0xdb875b0c,0x6dc7264d,
    0x36e3930c,0x36e3930c,0x326d930c,0x6dc7b262,0xa4e5930c,0x26b192c9,
    0x2673392c,0x5cc5932c,0x543372a4,0x2ca8ae2c,0x262c98ae,0x52715c6c,
    0x493a4e93,0x0b26242b,0x2d6ce432,0x2323b832,0x564ef229,0xd88b592b,
    0x0ee2ec45,0x0ca5cc77,0x4eb65d8b,0x88b2a2ac,0x4eb61acc,0x64eb62ac,
    0x564eb62a,0xacb5ad22,0x0a4e6325,0xb4852b19,0x9498c852,0x92f25ac2,
    0x9732beb9,0x6c9732ec,0xb1692d65,0x58cac64b,0xd9632b19,0x216b0ae5,
    0x87b3b50c,0xdd98930c,0x5d656320,0x01907b72,0x12624c19,0x8b366979,
    0x25951eda,0xb705c2ac,0xc965435d,0x564b2a2a,0x1564b2a2,0xa932ad95,
    0x54e6326c,0x32ab973c,0xc9e55663,0x2a7952d9,0x36f2384c,0x36a9790c,
    0x36a9791e,0x6549951e,0x65c7b6a6,0x572eb975,0x23db55cb,0x2132a4ba,
    0x907ad10c,0x900337a1,0x00a632b1,0xde832032,0x0019bd0c,0xb90498d8,
    0x6e46c039,0x40737204,0x9b901cdc,0xddc80003,0x00000000,0x23600000,
    0x0931b049,0x00498d80,0x00931b00,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x50320dc4,
    0x41954381,0x88a2ea1c,0x7770543c,0x20c88ccc,0x26593143,0x4c31354c,
    0x3221511a,0x165470e0,0x41503135,0x22e134b9,0x41c99329,0x21c132ca,
    0x446aa638,0xc88aa1cd,0x8dc5310c,0xb8550e0a,0x260e0541,0x098e91aa,
    0xd88ae154,0x4c39911c,0x4593171c,0x98b262c9,0x930aea2c,0x3a21e5cb,
    0x4b1915c3,0x263931c9,0x8523931c,0x950a62b4,0x9654b2a5,0x325952ca,
    0x320a622a,0x9ed691b8,0x4597298c,0x4c2723bc,0x5d4710e0,0x2e31392a,
    0x4111729a,0x705c2e0b,0x6dc336e1,0x2e19b70c,0x4af2a0cd,0x570b22bb,
    0xbac722b8,0x9c95dcb1,0x2d65acb5,0x2173116b,0x71ba88b4,0x992ec3b7,
    0x3ad9d6c9,0x54eb675b,0x4c4d953c,0x2e69730b,0x52e69734,0x88b394b9,
    0xa97620b9,0x2632176c,0x2321b332,0x2a1a8f25,0x4dd47310,0x3b2d7192,
    0x64111929,0x19064320,0x22ac8ab2,0x50ab22ac,0xd83e2579,0xc9762ec5,
    0xc96232b0,0x49951b4a,0xa932a4ca,0xa8ec544c,0xa9645c3c,0x23db53dc,
    0xca96540c,0x8b2a5952,0x43652c0c,0x329794bc,0x2f29794b,0xd8a8b594,
    0x2b750641,0x2a1bb33b,0x6c9990dc,0xc944373c,0x446ee61d,0x25b594cd,
    0xc8320dc9,0xac864190,0x2ac8ab22,0x37730ab2,0x51eda92a,0x47b6a3db,
    0xbd932cd9,0x000c965c,0x00800000,0x000931b0,0x00200000,0x90000000,
    0x00000081,0x32000000,0x906402c8,0xb90c8321,0x64737239,0x039b91cd,
    0xda4c6c08,0x0931b498,0x00000060,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x30ca8000,0x2887267b,
    0xcaa52593,0x376e0171,0x324b8e24,0x4336e3ba,0x70e4281b,0x3a85419b,
    0x2381702e,0x90ea0cec,0x47004291,0x8220cdca,0x54931c3c,0x21a87173,
    0x564c6e1b,0x751b9273,0x54b33263,0x164c9930,0x42e18f27,0x2e171b83,
    0x99d46e20,0x4b260e1c,0x3219748c,0x8d642a38,0x4646e2b5,0x70d66441,
    0x79790e49,0xdcc9cce4,0x92ee7d70,0x2977399c,0x83912e4b,0x7537160b,
    0x54dc96dc,0x5ccb6e79,0x4ef202be,0x925b72db,0x1705c18c,0x325b585c,
    0x8ed42e58,0x642e97b4,0xb192d65a,0xc8647265,0xc85c2e2a,0x4f69773b,
    0x4332a3ad,0x4452e614,0x27239294,0xca4cb9b4,0x0d76dc28,0x75906419,
    0xbc9cd6c5,0x258c960d,0x2b1939ad,0x1590360c,0x2e2e9864,0x653b24cc,
    0x9625d34b,0x3200cdbc,0x92c4b158,0x19064064,0x2e4ca864,0x9ddc325c,
    0x2192cdca,0xa932a3db,0x864b2a5b,0x864320ec,0x2eb1958c,0x56445950,
    0x472e7952,0x1c3952cb,0x59716795,0xb91b1372,0x8c832249,0x64377229,
    0x5a4f720a,0x95a43772,0x8190cdb8,0x77b3160c,0x11998ecc,0x22016f42,
    0x3ab19088,0xc925bd2d,0x4190644d,0x0064000c,0x40000320,0x924e4322,
    0x4ac64321,0x9c8802eb,0x00000002,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x8b2a5510,0x205c6a2b,0xdb922b8b,0xb8c8d973,0x75219371,0x1529ac48,
    0x4c5c33b2,0x42e3bb72,0xab820cdb,0x10d17729,0x1e4cae02,0x472a19b7,
    0x49b70ddb,0x27570cdb,0x5dce92db,0x2e3510cc,0x5532e3a9,0x4b8543a3,
    0xaae5d2ee,0x5caae552,0x154ee350,0x70989541,0xa892a954,0x0b86f22a,
    0x372ec973,0x54999032,0x88770d45,0x9c93625d,0x064dc5ad,0xc95d6458,
    0x272192b9,0x3b23b31c,0x4cd5b929,0x3625953c,0x22ac9632,0x23959489,
    0x4e6321ac,0x5dcb10f8,0x2e53b192,0x5c99970c,0x0eea994c,0xa458c832,
    0x43b2752b,0x44ee310c,0x4eea033c,0x42954aa1,0xc826a088,0x3b6a9790,
    0x79032151,0x0932448b,0x2a4e8832,0x2e443d9d,0x2eb22c15,0xc864d792,
    0x564baa3c,0x549b792d,0x3367932c,0x42ac8323,0x3257590d,0x64e6321a,
    0x9a25bd3b,0x4ae253b4,0x21003bd9,0x16912150,0x03293900,0x00001750,
    0x80640000,0x3215498d,0x48ea324d,0x40cde8e2,0x4472720c,0x4c5d03d6,
    0x25319160,0x32193a8c,0x4b232180,0x83284d9c,0x9b90e3b8,0x6ee4f723,
    0x0ddc8192,0x00000000,0x00000000,0x9e42e000,0x1ddc332a,0x00000015,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__arial_bold_6_latin_ext_x[560]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,-1,0,0,0,0,-1,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,-1,0,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__arial_bold_6_latin_ext_y[560]={ 4,0,0,0,-1,0,0,0,0,0,0,0,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,
0,0,0,0,0,1,1,2,0,-1,0,0,0,0,0,1,0,1,4,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,-1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
-1,0,-1,0,0,1,-1,0,-1,0,-1,0,-1,0,-1,0,0,0,-1,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,0,-1,0,0,-1,-1,-1,0,0,-1,0,-1,0,-1,0,0,0,-1,1,0,0,-1,0,0,0,1,-1,-1,0,
0,0,0,0,0,0,0,-1,0,0,1,-1,0,0,0,1,-1,0,-1,0,-1,0,0,1,-1,0,0,1,-1,0,
-1,0,-1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,-1,0,-1,0,-1,-1,-1,0,0,1,-1,0,-1,0,
-1,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,0,-1,
0,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-2,-1,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static unsigned short stb__arial_bold_6_latin_ext_w[560]={ 0,2,3,3,3,5,4,2,2,2,2,3,2,2,
2,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,4,6,4,4,4,4,4,4,4,4,2,3,4,
4,5,4,4,4,5,4,4,4,4,5,6,4,5,4,2,3,2,3,5,2,3,4,3,3,3,2,3,3,2,
3,3,2,5,3,4,4,3,3,3,2,3,3,5,3,3,3,2,2,2,3,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,3,3,3,3,
2,3,2,5,2,3,3,2,5,5,2,3,2,2,2,3,4,2,2,2,2,3,5,5,5,4,4,4,4,4,
4,4,7,4,4,4,4,4,3,2,3,3,5,4,4,4,4,4,4,3,5,4,4,4,4,5,4,4,3,3,
3,3,3,3,5,3,3,3,3,3,3,2,3,3,4,3,4,4,4,4,4,3,4,3,3,3,3,3,4,3,
4,3,4,3,5,4,4,3,4,3,4,3,4,3,4,4,5,4,4,3,4,3,4,3,4,3,4,3,4,3,
4,3,4,3,4,3,4,3,4,3,3,3,3,3,3,3,2,2,2,2,4,3,4,3,4,3,3,4,2,4,
3,4,3,4,3,4,2,4,3,4,3,4,3,5,4,3,4,4,4,4,4,4,6,5,4,3,4,3,4,3,
4,3,4,3,4,3,4,3,4,2,4,3,4,2,4,3,4,3,4,3,4,3,4,3,4,4,6,5,5,3,
5,4,3,4,3,4,3,2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,4,
4,4,3,4,3,4,3,4,3,4,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,3,7,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__arial_bold_6_latin_ext_h[560]={ 0,4,2,5,6,5,5,2,6,6,2,4,2,1,
1,5,5,4,4,5,4,5,5,4,5,5,3,4,4,3,4,4,6,4,4,5,4,4,4,5,4,4,5,4,
4,4,4,5,4,5,4,5,4,5,4,4,4,4,4,6,5,6,3,2,1,4,5,4,5,4,4,5,4,4,
6,4,4,3,3,4,5,5,3,4,5,4,3,3,3,5,3,6,6,6,2,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,5,6,5,4,4,
6,6,1,5,3,3,3,1,5,1,2,4,3,3,1,5,6,2,2,3,3,3,5,5,5,5,5,5,5,5,
5,5,4,6,5,5,5,5,5,5,5,5,4,5,6,6,6,6,6,4,6,6,6,6,6,5,4,5,5,5,
5,5,5,6,4,5,5,5,5,5,4,4,4,4,5,4,5,5,5,5,5,4,4,5,5,5,5,6,6,6,
5,5,5,5,6,5,6,5,6,5,6,5,6,5,5,5,4,5,5,5,5,5,5,5,6,5,5,5,6,6,
6,6,6,6,6,7,5,5,4,4,5,4,5,4,5,4,6,6,5,3,5,6,6,6,6,6,3,5,5,6,
6,4,4,4,4,4,4,5,4,6,5,5,4,4,5,5,6,5,6,5,6,5,5,4,5,4,6,5,5,4,
6,5,6,5,6,5,6,5,6,6,5,5,4,5,6,5,6,5,6,5,6,6,6,5,6,5,5,4,5,6,
5,5,4,5,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,4,6,4,4,4,
4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,4,6,
5,6,5,6,6,6,6,6,6,6,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,6,6,5,5,6,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__arial_bold_6_latin_ext_s[560]={ 254,14,251,199,234,32,38,242,84,76,239,
90,233,226,223,13,9,27,127,25,113,5,17,31,249,1,185,64,105,174,109,
117,44,9,131,173,141,122,136,163,72,82,153,22,17,99,94,238,85,243,77,
132,67,127,58,51,46,40,35,114,149,106,181,245,241,5,137,251,126,241,238,
120,230,227,87,219,216,158,192,202,48,73,188,184,124,176,154,168,146,219,150,
132,135,142,229,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,254,146,149,
142,116,112,171,238,229,157,178,164,196,226,213,235,236,66,200,203,232,21,65,
223,226,213,216,219,108,77,21,244,43,239,218,233,228,223,34,124,208,203,198,
193,189,186,182,178,74,168,114,119,104,129,99,120,70,51,206,216,187,114,61,
103,99,95,91,87,83,178,128,69,65,61,57,53,97,194,180,1,27,234,16,
11,6,1,249,212,197,235,231,227,223,174,153,145,203,199,194,190,66,179,101,
170,117,161,91,153,96,145,140,135,55,213,121,117,112,108,103,99,109,87,82,
78,127,138,87,158,166,16,6,1,31,27,50,139,12,167,1,163,247,159,92,
226,231,210,222,242,246,95,79,56,206,194,191,25,35,154,46,29,93,88,253,
148,80,109,139,134,70,245,165,157,77,208,16,174,11,153,158,188,143,42,60,
165,169,84,39,174,30,178,20,207,11,203,1,251,182,187,101,215,229,218,221,
227,211,234,201,197,192,238,182,251,5,106,47,162,41,53,124,58,143,16,147,
151,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,242,134,134,122,
134,134,134,134,134,134,134,134,134,134,134,134,134,67,171,134,134,134,134,134,
134,134,134,134,134,134,134,134,21,207,134,134,134,134,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,73,63,
211,223,82,130,72,149,61,57,52,48,43,39,34,30,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,
134,134,134,25,21,91,184,5,36,134,134,134,134,134,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,134,
134,134,134,134,134,134,134,134,134, };
static unsigned short stb__arial_bold_6_latin_ext_t[560]={ 1,34,34,9,1,22,22,34,9,9,34,
34,34,37,37,28,28,34,34,28,34,28,28,34,22,28,34,34,34,34,34,
34,9,34,34,22,34,34,34,22,34,34,22,34,34,34,34,22,34,22,34,
22,34,22,34,34,34,34,34,1,22,1,34,34,37,34,22,28,16,28,28,
22,28,28,1,28,28,34,34,28,22,22,34,28,22,28,34,34,34,22,34,
1,1,1,34,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,1,22,1,
22,28,28,1,1,37,22,34,34,34,37,22,37,34,28,34,34,37,28,9,
34,34,34,34,34,22,22,22,16,22,16,16,22,22,22,28,9,22,22,22,
22,22,22,22,22,28,22,9,9,9,9,9,28,9,9,1,1,1,22,28,
22,22,22,22,22,22,1,28,22,22,22,22,22,28,28,28,34,22,28,22,
22,22,22,16,28,28,16,16,16,16,1,1,1,16,16,16,16,1,16,1,
16,1,16,1,16,1,16,16,16,28,16,16,16,16,16,16,16,1,16,16,
16,1,1,9,1,1,9,9,1,16,16,28,28,16,28,16,28,9,28,9,
1,9,34,9,1,1,9,9,9,34,9,9,9,9,28,28,28,28,28,22,
9,28,9,9,9,28,28,16,16,1,16,1,16,1,9,9,28,9,28,9,
9,9,28,9,9,9,9,9,9,9,9,9,1,9,9,28,9,1,9,1,
9,1,9,1,1,1,9,1,9,16,28,16,1,16,16,28,16,28,16,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,9,28,28,1,
28,28,28,28,28,28,28,28,28,28,28,28,28,16,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,16,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,16,16,
9,28,1,16,1,16,1,1,1,1,1,1,1,1,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,1,1,16,16,1,16,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
28,28,28,28,28,28,28,28,28, };
static unsigned short stb__arial_bold_6_latin_ext_a[560]={ 24,29,41,48,48,76,62,20,
29,29,33,50,24,29,24,24,48,48,48,48,48,48,48,48,
48,48,29,29,50,50,50,52,84,62,62,62,62,57,52,67,
62,24,48,62,52,72,62,67,57,67,62,57,52,62,57,81,
57,57,52,29,24,29,50,48,29,48,52,48,52,48,29,52,
52,24,24,48,24,76,52,52,52,52,33,48,29,52,48,67,
48,48,43,33,24,33,50,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,24,29,48,48,48,48,24,48,
29,63,32,48,50,29,63,47,34,47,29,29,29,50,48,24,
29,29,31,48,72,72,72,52,62,62,62,62,62,62,86,62,
57,57,57,57,24,24,24,24,62,62,67,67,67,67,67,50,
67,62,62,62,62,57,57,52,48,48,48,48,48,48,76,48,
48,48,48,48,24,24,24,24,52,52,52,52,52,52,52,47,
52,52,52,52,52,48,52,48,62,48,62,48,62,48,62,48,
62,48,62,48,62,48,62,62,62,52,57,48,57,48,57,48,
57,48,57,48,67,52,67,52,67,52,67,52,62,52,62,52,
24,24,24,24,24,24,24,24,24,24,67,48,48,24,62,48,
48,52,24,52,24,52,33,52,41,52,24,62,52,62,52,62,
52,61,62,52,67,52,67,52,67,52,86,81,62,33,62,33,
62,33,57,48,57,48,57,48,57,48,52,29,52,41,52,29,
62,52,62,52,62,52,62,52,62,52,62,52,81,67,57,48,
57,52,43,52,43,52,43,24,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,62,64,64,48,64,64,64,64,64,
64,64,64,64,64,64,64,64,73,61,64,64,64,64,64,64,
64,64,64,64,64,64,64,71,62,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,62,48,24,24,67,52,62,52,62,52,62,
52,62,52,62,52,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,62,48,86,76,67,52,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT or STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_bold_6_latin_ext(stb_fontchar font[STB_FONT_arial_bold_6_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT][STB_FONT_arial_bold_6_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_bold_6_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_bold_6_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_bold_6_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_bold_6_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_bold_6_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_bold_6_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__arial_bold_6_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__arial_bold_6_latin_ext_s[i] + stb__arial_bold_6_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__arial_bold_6_latin_ext_t[i] + stb__arial_bold_6_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__arial_bold_6_latin_ext_x[i];
            font[i].y0 = stb__arial_bold_6_latin_ext_y[i];
            font[i].x1 = stb__arial_bold_6_latin_ext_x[i] + stb__arial_bold_6_latin_ext_w[i];
            font[i].y1 = stb__arial_bold_6_latin_ext_y[i] + stb__arial_bold_6_latin_ext_h[i];
            font[i].advance_int = (stb__arial_bold_6_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__arial_bold_6_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_bold_6_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_bold_6_latin_ext_s[i] + stb__arial_bold_6_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_bold_6_latin_ext_t[i] + stb__arial_bold_6_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_bold_6_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__arial_bold_6_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__arial_bold_6_latin_ext_x[i] + stb__arial_bold_6_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__arial_bold_6_latin_ext_y[i] + stb__arial_bold_6_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__arial_bold_6_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_bold_6_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_bold_6_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_bold_6_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_bold_6_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_bold_6_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_bold_6_latin_ext_LINE_SPACING
#endif
