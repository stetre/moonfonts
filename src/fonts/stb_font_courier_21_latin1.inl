// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_21_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_21_latin1'.
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

#define STB_FONT_courier_21_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_21_latin1_BITMAP_HEIGHT        106
#define STB_FONT_courier_21_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_21_latin1_FIRST_CHAR            32
#define STB_FONT_courier_21_latin1_NUM_CHARS            224

#define STB_FONT_courier_21_latin1_LINE_SPACING          10

static unsigned int stb__courier_21_latin1_pixels[]={
    0x54400000,0x00098001,0x44000004,0x201d4001,0x20260018,0x000c5551,
    0x04100103,0x04400030,0x014c0000,0x0285edcc,0x40155403,0x0c020081,
    0x2dc07600,0x005b98b9,0xd7000d88,0x01bb3009,0x25c005b0,0x2a003b10,
    0x1b55580d,0x05b10036,0x0911900b,0x260006cc,0x0eec400d,0x301cd4c0,
    0x4136e63b,0x8055d04b,0x9d70584b,0x3b100b70,0x20110c40,0x03b10005,
    0x201b53d8,0x801d88da,0x2011003c,0x095000d9,0x024c322c,0x5bf710aa,
    0x201cd605,0x1b3000d8,0x2d88da80,0xb1038540,0x85a812e0,0x0b03c805,
    0x37036a7b,0x00001b80,0x80100016,0x01030040,0x02000060,0x64580100,
    0x41b80360,0x5609911e,0x0008803a,0x00202001,0x00dc02ee,0x80580803,
    0x01021600,0x75400037,0xb0fba61e,0x203bddb1,0xc881cec8,0x199931cc,
    0x881cec88,0x99931ccc,0x3bbbb621,0x40e76442,0x9931ccc8,0x54191619,
    0x82a86e03,0x640aab01,0x66400ccc,0x666400cc,0x6666400c,0x32200b00,
    0x0ccccccc,0x9999910b,0x64561999,0x0ccccccc,0x43dd506e,0x20723ee9,
    0x261de849,0xc88ed41d,0x2609d983,0xc88ed42c,0x2609d983,0xb51cc02c,
    0x3660f223,0x458b2609,0x43702c0c,0xaeaa8049,0x64c40acc,0x5e4c404b,
    0x25e4c404,0x412f2620,0x26766005,0x20b1c999,0xc99999d9,0x4cceccb1,
    0x206e1c99,0x2c44981c,0x4c0fc06c,0x20e41a25,0x34437048,0xb82441c8,
    0x0689cc01,0x37048839,0x40aa0640,0x80dedc0d,0x0abdaea9,0x5ac016b0,
    0xac016b00,0x0c800b05,0x0640b1b8,0x406458dc,0x16212a1b,0x48832036,
    0x079340d0,0x2e091166,0x22cc0f21,0x98037048,0x11660793,0x0c806e09,
    0x2605d858,0x195881db,0x402b9cc0,0x39805739,0x57398057,0x064005b0,
    0x1902c261,0x0c8b0984,0x213a04c2,0x2441220c,0x2581e019,0x0911a00e,
    0x1a00e86e,0x3006e091,0x446803a7,0x32043704,0x00d82b80,0x6d6dd458,
    0x1621901b,0x90162190,0x21901621,0x06069858,0x81612219,0xc8b0910c,
    0x412a0910,0x8c803248,0x2a0be048,0x443901a2,0x20343704,0x0dc1221c,
    0x32034e60,0xb0dc1221,0xb85880c8,0x7512c0e1,0x16055d5b,0x0362c01b,
    0x8b006c58,0x5c0cc80d,0x426e6644,0x13733205,0x09b99916,0x488c806e,
    0xb0066440,0x58b9119b,0x209106c0,0x41b0161b,0x98037048,0x220d80b3,
    0x322c3704,0x21b83900,0x260ee23f,0x4ce540b3,0x339503b9,0x272a0773,
    0x39503b99,0x3ee07733,0x10c82ecc,0x88640b09,0x48864584,0x66440370,
    0xac05c800,0x20581cdb,0x1b82c468,0x2c468816,0x59cc01b8,0x20b11a20,
    0x2019161b,0xb570dc58,0x2caa05bd,0xb55555b0,0x2aaaab60,0x55555b05,
    0x2aaab60b,0x9006405a,0xc8163041,0x0c8b1820,0x9006e182,0xb007200b,
    0x2540ea00,0x0ea24074,0x24074254,0x503a9540,0x58901d09,0x54390064,
    0xb2a80b02,0x20dc1220,0x48837048,0x70488370,0x1901cc03,0x01902d60,
    0x2c0322d6,0x801c8037,0x20058058,0x5c1620bd,0x05ec1d43,0x750ee0b1,
    0x05ec3900,0x750ee0b1,0x401b5558,0x02c17448,0x02b82c6e,0x9102b891,
    0xb89102b8,0x32e09102,0xeac03203,0x2b00c82a,0xb7580645,0x26205880,
    0xb3100ac9,0x33f20033,0x2fae00cc,0x333f203c,0x32fae00c,0x09933303,
    0x401999f9,0x5083cbeb,0x03050055,0x32020807,0xaff645ef,0x7f645efc,
    0xec8bdf95,0xc8bdf95f,0x6c4005fe,0x5eeeeeef,0x77ec4555,0x215eeeee,
    0xeeeeefd8,0x2662035e,0x555300ac,0x2aaa6035,0x2000c002,0x30006001,
    0x00d55440,0x00030006,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2aaaa600,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x80000000,0x03000c01,
    0x0e0a8008,0x50200130,0x80040541,0x00000002,0x00600000,0x00000000,
    0x2a006000,0xaaa980e0,0x00bc981a,0x15055551,0x500b8054,0xb804b80b,
    0xd00fae04,0x5ec03a23,0x85703cbd,0x0b10762d,0x00760b10,0x01d802c4,
    0x272003b0,0x2001d804,0x00b10058,0x6dec40b1,0xd11e81da,0xc9cbea81,
    0x2d456409,0x424ccdd4,0x3e20762d,0xb5004c81,0x27b01e40,0x400000da,
    0x000d102a,0x40ae0164,0x06cc02d8,0x8802d880,0x0173802d,0xd9802d88,
    0x400d9800,0x06a000d9,0x7487c400,0x20dc3a81,0x22000384,0x0400181f,
    0x20408010,0x9931ccc8,0x1cec8819,0x9d910790,0x0b01a603,0x000c8090,
    0x20120048,0x012002ba,0x00640032,0x44c98064,0x9971ccc8,0x92dc9999,
    0x8730b02e,0x19999005,0x43cc87c0,0x99970ccb,0x6665c999,0x3332e4cc,
    0x04ecc4cc,0x11da8593,0xda81f079,0x07a07911,0x0000015c,0x00000000,
    0x00000000,0x27cc4000,0xe9988b26,0x7496a099,0x4f6a2581,0x4400cab9,
    0x43e04bc9,0x10f441e8,0x44133d33,0x22099e99,0x44099e99,0x83443704,
    0x0d11a61c,0x2c0f2072,0x5039bb50,0xb105bbdb,0x542f5c1d,0xb502dded,
    0x64c05bbd,0x076c42dd,0x37260bd7,0x39bb502d,0x03703760,0x2e93e816,
    0x2735b2c0,0x5ac01dc3,0x5c4983e0,0x01601602,0x37048816,0x2a5981e4,
    0x85981e45,0x5b03a84b,0x064045a8,0x808580c8,0x80c8080c,0x90b710bc,
    0x21790b01,0x2a16c5b8,0x0dc58d85,0xbae5c058,0x2732aac0,0x407220c8,
    0x21a05739,0x0580b11c,0x22058058,0x00743704,0x803a25cd,0x30585a86,
    0x7300b207,0x40160320,0xb0730039,0xb0190320,0x1cc320b0,0x22bac2c8,
    0x5200b01b,0x7339ac0b,0x6415c2c8,0xac160b10,0x2c02c00d,0x209102c0,
    0x23901a1b,0x0720345a,0x99039897,0x47b99999,0x03ddeca8,0x9510b019,
    0x95107bbd,0x02a87bbd,0x4580c873,0x3327302a,0x43dccccc,0x0b01b965,
    0xc9605d20,0x20c984dd,0x0006c583,0x00b007d3,0x2440b00b,0x1b0161b8,
    0x0d80b1a6,0x6c0361e4,0x09999999,0x903a82f6,0x417b0b01,0x2a0bd83a,
    0x44880dc3,0x80dc580c,0x33333b48,0x4ea58133,0x5200b01b,0x0262340b,
    0x6541bcc8,0x4003b999,0x0b00b005,0xb82c40b0,0x7c688161,0xe8688160,
    0x04b81261,0x903981b8,0x981b8b01,0x21cc0dc3,0x0c837048,0x1b824458,
    0x362c0097,0x200b01b8,0x001c8174,0x5555b048,0xb00c88b5,0x01601600,
    0x8901d016,0x3c89503a,0x262540ea,0x07a006c6,0x3a6154a6,0x47c85503,
    0x2a1f4c2a,0x1641f4c2,0xf90aa166,0x74598590,0x222c2981,0x200b01bd,
    0x21e88174,0x22120e08,0x27dc3704,0xb00b0058,0x43b80b00,0x220bd83a,
    0x05ec6885,0x2c4590b1,0x6e5f6c40,0x336f720c,0xb99b05ea,0xdbdc8bd5,
    0x5ee45eac,0x5c45eacd,0x9b00bdcd,0xb88bd5b9,0x6c40bdcd,0x2c0cdcbe,
    0x40580ee4,0x41bc8daa,0x360dddfa,0x2b82caaa,0x16018910,0x402c02c0,
    0x3cbeb805,0x03333f20,0x333f215c,0x0722c40c,0x22009880,0x40044001,
    0x00310018,0x00110018,0x404c400c,0x3e22efd8,0x3bbfbb21,0x13119885,
    0x0ccc4020,0x7645efc8,0x3fba205f,0x7f7641ee,0x3fbb25ee,0x3fbb25ee,
    0x000c05ee,0x00c02003,0x00000302,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x09800000,0x20382a00,0x0001cec9,
    0x91001710,0x002b8801,0x00002200,0x00322000,0x4401b980,0x4c00000c,
    0x5555101c,0x05dcc015,0x05555555,0x0c880440,0x88003510,0xd82f982b,
    0x7403cbdb,0x1b501d11,0xb9aa0f22,0x01715505,0xc816cecc,0xb9305a9b,
    0x99b0557b,0x7c03b00b,0x3b301f11,0x213f205b,0xb305b9cd,0xb9ea05b3,
    0xb735b306,0xaaaad981,0x099bd980,0xd55555d1,0x3617b930,0x82d9d980,
    0x32e005b9,0x0174c5b9,0x440000aa,0x21883905,0x20387008,0x712605c4,
    0x3a20ca87,0x20551543,0x060c01d8,0x3ae02e24,0x20aa1cc3,0x221805c4,
    0x98730301,0x200d8803,0x86d45882,0xb8902eda,0x22c00b00,0x9999004a,
    0x33332201,0x0f20cccc,0x4700034c,0x0e400028,0x214c162c,0x05c1220c,
    0x00000000,0x0000b019,0x1cc58000,0x540006c0,0x03aa1622,0x54016000,
    0x93100683,0x4cecc097,0x03a1c999,0x6ef6d478,0x40777102,0xe82ddeda,
    0x800e2680,0x0001910c,0x501cdda8,0xa80039bb,0x6e4c1d43,0x7076c42d,
    0x30ee00bd,0x09103537,0x43c83600,0x3b6239d9,0x46c17ae0,0x1540bded,
    0xb5809064,0x21b80c80,0x90106405,0x41973001,0x582c0c80,0x88c800e6,
    0x5ee981ed,0xd8b50b60,0x90482d42,0xbc81b959,0x0190b710,0x41f6440b,
    0x20dcbde9,0x002dc8aa,0x43620e8b,0xd0580c85,0x1623545b,0x730343d3,
    0x420c80ae,0x01d01209,0x39930398,0x4161cc00,0x419002c5,0x4c1602c8,
    0x40e65903,0xeb83542c,0x190584ec,0x440580c8,0x248800db,0x80972dab,
    0xc8762c3a,0xf82c0640,0x4e5c2a82,0xc81e2ada,0x88640b10,0x23c40704,
    0x43ddeca8,0x2202a1c8,0x2c3ddeca,0x25415c58,0x05816032,0xb9999999,
    0x33333327,0x019d13dc,0x0aa3a895,0x160321cc,0x25802c40,0x900640fa,
    0x1d0ee581,0x0f0580c8,0x5456542c,0x362c03e1,0x09b99900,0x361dc0e6,
    0x3900ea0b,0x2a0bd855,0xdb8682c3,0x80c83ccc,0x2760b01b,0xb0999999,
    0x13333333,0x580d8036,0x3224406e,0x03200580,0x54244320,0x266e1602,
    0x40643c44,0x402c0d05,0x32a03e0c,0x1903b999,0x4c3c8122,0x01cc0dc5,
    0x30371c15,0x02cc1c87,0x20864019,0x12e0b00c,0x016012e0,0x8244b019,
    0x02c0641b,0x0d1600b0,0x220e6037,0x0c83b85c,0x7303f058,0x07e25980,
    0x16aaaab6,0x540c1064,0x1540ddce,0x21a80fa6,0x87d30aa4,0x7500ec58,
    0x81658640,0x8a607a05,0x8372981e,0x42b89338,0x1542cc2c,0xa81711f2,
    0x8770b623,0x0c81622a,0x505987f0,0x1bd07c85,0x1b3006c4,0x41220fc4,
    0x0b00c81b,0x320417b1,0x05eacdbd,0x7b906eee,0xda8bd59b,0x0f2e02cc,
    0x6e5d3f62,0xed881602,0x3620cdcb,0xb10cdcbe,0x6dc7b539,0xcdb883dc,
    0xb99b00bd,0xceea8bd5,0xdced983d,0x0399b903,0xcdaac82c,0x333600dd,
    0x37aa5ead,0x4c1ccce9,0x70504dcc,0x03212205,0x377ba22c,0x00c40ddd,
    0x00310040,0x0800000c,0xeefeee88,0x4009881e,0x2ae60098,0x00600100,
    0x00880044,0x00020010,0x400221c4,0x00440008,0xefc80011,0xd8aff645,
    0x5eeeeeef,0x00000100,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20c02aa0,
    0x00000000,0x01a88040,0x05999500,0x20333db8,0x8059002b,0x6c4333db,
    0x0017ae0e,0x2e000d44,0x6654001b,0x5555502c,0x28835555,0x2a0e5440,
    0x4fba61ee,0xb19d52da,0x36a03bdd,0x403eaaed,0xbbd701da,0x11f81605,
    0xdedb881f,0x20b01ed8,0x644003aa,0x94406cc1,0x0f200cda,0x104cad88,
    0x320336a5,0x3a3d8580,0x3001d542,0x322006e1,0x00606cc1,0x3036ed46,
    0x1c8b937b,0xd1bf6498,0x360ecc3b,0x4007b622,0x5abdc81b,0x40c18160,
    0xb01b661d,0x92001c40,0x000908a8,0x20b80dc0,0x0640002a,0x20304c2c,
    0x0c880038,0x41998c80,0x098c00c4,0x8aa06c0b,0x3220d858,0x32cc0fc1,
    0x2003f107,0x81d4081b,0x0750000e,0x220580d5,0x51b92603,0x2a1c5263,
    0x0002dded,0x37726000,0x00b01902,0x87501c40,0x74980db8,0x446a6aa3,
    0x16060063,0x20c8b018,0x340d0048,0x91072019,0x10373bdd,0x5c1b3bb9,
    0x64c4dcbd,0x6806c2dd,0x207102c0,0x043920db,0x980c8089,0x3ba605ee,
    0x5c42f205,0x98580c85,0x20e205ee,0x88e203d8,0x704c90cc,0xb0300324,
    0x24458800,0x581e0019,0x360ec072,0x99077662,0x1cc77663,0x710bc926,
    0x2344064b,0xccceccca,0x05b30e23,0x30090149,0x0b005807,0x0640c82c,
    0x3881602c,0xb85406dc,0x26483b51,0x01920bbb,0x6c005818,0x10488c80,
    0x445505f0,0x0ee1f984,0xd04887e2,0x20b00327,0x0d70930c,0x15555058,
    0x245d1199,0x32a22407,0x02c03dde,0x26055058,0x01b21643,0x26aaaa0b,
    0x222bbabd,0xd14d88ba,0x43889923,0x16060064,0x99101d80,0xdd8bf901,
    0xcc85c88c,0x361ddb89,0x80e43b00,0x02a80b4b,0x64466473,0x5402c05c,
    0x248ab21d,0x3624510a,0x0b00ea0b,0x880dc160,0x56e67644,0x2e01605e,
    0x5405c50d,0x3246b21d,0x00648e21,0x36201606,0xfc82e401,0x01cdbac5,
    0x86e2f6e2,0x0243900d,0x1b80aa73,0x2dc88910,0x26c0580b,0x2388aaaa,
    0x5c370bba,0x02c03981,0x2e091058,0x00044641,0x8816c40b,0x26a1ec44,
    0x4332711a,0x20061baa,0x0ec40581,0xb0300e40,0x5c370000,0x80cc3f03,
    0x9339b12b,0x00dc1227,0x8301602c,0x1d42b9d8,0x261543b8,0x5802c03e,
    0x90b30b20,0x440b0001,0x81109100,0x0ea2b9d8,0x060061dc,0x801d8816,
    0x00580058,0x07621b80,0x4c0d83d9,0x640be985,0x24c02cc2,0x55100020,
    0x95993099,0x36f72039,0x01605eac,0xb9b7102c,0x00019017,0x0093000b,
    0x261e5544,0x181ccacc,0xb1058180,0x32662501,0x3b31000a,0x59310003,
    0x5766f441,0x2f2e23eb,0x220b00dd,0x880bdcdb,0x75c0db99,0x04eeeeee,
    0x01809b10,0xee880310,0xd11eeefe,0x03dddfdd,0x22003006,0x1eeefeee,
    0x06e674c0,0x0604d980,0x33333350,0x3fbb2533,0x3bbae5ee,0x55536eee,
    0x2aa60035,0xaaa8002a,0x2001881a,0x0c024009,0x000aaaa0,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x10d40000,0x2e605bd7,0xdb8850bd,0x4005051c,0x83ccccca,0x67644058,
    0x44005501,0x32228bdb,0x199931cc,0x2a04d440,0x0aaa2002,0x3202f6e0,
    0x98665c3c,0x8e66444c,0x81bcccc9,0x02ccccc8,0x0b333322,0x9970f32e,
    0x33333267,0x332a1ccc,0x54c79912,0x0f4b9501,0x731d98b5,0xa88ecc9b,
    0x2200585e,0x8809ca99,0x64476a07,0x98035443,0xd98f931d,0xd80b2609,
    0x03544cac,0xc80d5510,0x83d30b52,0x13e621e8,0x4ddc4593,0x9d984c99,
    0xb302da99,0x441b7333,0x86cc40ad,0x99999d98,0x9827622c,0x6c13ee0e,
    0x446e0e58,0x03a29705,0x40016126,0x6880c039,0x200b0390,0x8244680c,
    0xb003701b,0x0b016000,0x20571260,0x2a0dc0dd,0x80c83a82,0x31621605,
    0x4160aa07,0x22c0642b,0x0b2b83fa,0x8c037398,0xdfd5002b,0x73005ddd,
    0x4c0f2000,0x20900585,0x01b82440,0x4001600b,0x39002c05,0x458d8162,
    0x8581541b,0x0b00c80c,0x4160b0ae,0x06409825,0xb10be62c,0x161b102c,
    0x02c002c0,0xee983980,0x43401d05,0x930fbaa5,0x37048801,0x5eeefec8,
    0x09dbb1b0,0x200580b0,0xbac01b58,0x205506e2,0x1660641b,0x1b891058,
    0x06e58244,0x7c4580c8,0x320b0e41,0x02c0161e,0x398002c0,0x640682c0,
    0x440b52c1,0x04882cdb,0x6c016037,0x0b012a0e,0x80737b2e,0x009ceb98,
    0x2a8372cb,0xcabc8550,0x99d9904d,0x2e2c4587,0x03d99d01,0x36666664,
    0x85893074,0x8b005849,0x2c1cccc8,0x00e60260,0x81b0160b,0x54400795,
    0x01b82445,0x1603600b,0x802a80b0,0x01aaeaa9,0x541b9d4b,0x99c83702,
    0x882c01ea,0x58160d84,0x580c806e,0x442c0d80,0x2c802d81,0x57016160,
    0xb0580730,0x2eec3440,0x1621b800,0xb00580dc,0xa80b0160,0x9e998802,
    0xb8d8b009,0xc8581541,0x05803620,0x0ea75055,0x01900258,0xddddd00b,
    0x81a6009f,0x2c2c0b51,0x006a0ae0,0x2540ea0b,0x3981dcec,0x480e8370,
    0x582c0160,0x003202c0,0x06abaaa6,0x506f622c,0x8190b305,0x06c16058,
    0x02c01b58,0xfa8b0190,0x05dc2c03,0xd92e0664,0x81b85882,0x80488950,
    0x5882f605,0x7d41dcb0,0x21dc2c40,0x2c01603a,0xb102c058,0x402c0910,
    0x1541dc85,0x20320366,0x1c88b03a,0x0b016ae0,0x322c0640,0x3e22c06f,
    0xd99f701f,0xb979b905,0xb979b105,0x0e6674c5,0x33f202c0,0x3c8b00cc,
    0x6ee6edcc,0x0797d701,0x160b0058,0x3bbe60b0,0xec80deee,0xefd885ef,
    0xeea87e22,0x6c40cdee,0x225d85ef,0x01ddeefe,0xfea817c4,0x3bf604ee,
    0x221dfd32,0x89fd900a,0x80098008,0x09880099,0xee880220,0x301eeefe,
    0x3f23f440,0x2001882e,0x777f6c01,0x11efd84e,0x3ba21dfb,0x001eeefe,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x2666665c,
    0x40066664,0x990333db,0x20665c99,0x66442cc9,0x999504cc,0x65c79999,
    0x6643cccc,0x990665c3,0x32a4cb87,0x8966644c,0x80bccccc,0x81ccccc8,
    0x079503ca,0x99999997,0x33333225,0x99970ccc,0x00000039,0x8240b6a0,
    0x0800002d,0x0267a662,0x1012f262,0x260336a5,0x107a609d,0x3d30331b,
    0x26676013,0x2765999e,0x7445a999,0x3a60f441,0x3d10f441,0x260d9883,
    0x83da999d,0x0db999e9,0x3b607762,0x9bbca880,0x267664a9,0x9311c999,
    0x6ed40135,0xa81dea8e,0xdfb01cdd,0x01db8160,0x816ef6d4,0x2d600b03,
    0x98320000,0xd802b80d,0x2c580aaa,0x980d8596,0x449815c4,0x160c582c,
    0x88582c12,0x2aa24e44,0x88ae6e05,0x20dc0644,0x3a20801b,0x5a85b165,
    0x80b01c88,0x90100dc8,0x00b07501,0x75c0ae73,0x3205edd8,0x12601b30,
    0x376aab60,0x1258b160,0x588e4057,0x904a95c0,0x4858ba61,0x160b0190,
    0x05ac1b19,0xc85115d6,0x06e04c20,0x31a8ba00,0xb000b207,0x00336200,
    0xb07970e6,0x81621900,0x6412a1ec,0x00e804a8,0x5811cc2c,0x58059804,
    0x0b5b001b,0x914ab8dc,0x160b5090,0x27319162,0xabac0b39,0x12219038,
    0xec9801b8,0x94baabfd,0x7b999999,0xceccca80,0x174c03cc,0x07bbd951,
    0x362c02c0,0x20b03900,0xb102edcc,0x0b0322b7,0x1b005816,0x2007d300,
    0xacaa01f8,0x99990735,0x267601ff,0x58641ea9,0xb9d4161b,0xb99904dd,
    0x2e00dc09,0x26667a1c,0x333333b0,0xb01ed813,0x361ecc00,0x5800ea0b,
    0x5ccce540,0x20b01903,0x5503b13c,0x4160aaae,0x07201606,0x2f200580,
    0x6562e605,0xc88482a8,0x0bccce82,0x2c9750c8,0x28ab9ac8,0xb8122190,
    0x0ba16081,0x5f98025c,0x33620160,0x01cc0dc0,0xaaad80b0,0xb01905aa,
    0x190b0320,0x6cc582ec,0x89501602,0x5401600a,0x2b220773,0x09037732,
    0x0c802c2c,0x55b05876,0x820c8059,0x372c0dc1,0x74532fd4,0x03f22981,
    0x03722058,0x20fa6154,0x12205858,0x2c0640dc,0x261d40c8,0x77741723,
    0x102c01ce,0x02c0370b,0x640722c4,0x1203360c,0x19005858,0x572442c0,
    0x45806458,0x666c581b,0x20dddbdc,0x0cdcbed8,0x2a0b00fa,0xdbdc801d,
    0x03665eac,0x9102b816,0x320b0190,0xbdcc8580,0x4002c0dc,0x06e03605,
    0xd80d8058,0x82ec5d80,0x00b09504,0x2a858032,0x00c8b0ae,0x88581b8b,
    0x13100440,0x20300b10,0x200c4002,0x3bfbb20c,0x917bf25e,0x0f7ecbfd,
    0x77ec4bfb,0x022175c5,0x02f77f4c,0x83ddfdd1,0x1eeeeeef,0x0f77f744,
    0xddb17ba2,0x23dc4e83,0xdeeeefd8,0x2f77f4c3,0x75c5efb8,0x765bf25f,
    0xfb17eeee,0x2bdddddd,0xeeeeeeec,0x00000007,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x40000000,0xa5c00002,0x17ae0ed8,0x01000000,0x3ba60700,
    0x001774c2,0x4c911cc0,0xddb11eee,0x3bbbbae5,0x54190105,0x447bae02,
    0x860224ed,0x20dcc2ba,0x9884c429,0x8839b910,0x40300bdb,0x25eeee40,
    0x155eee4c,0x12ef7726,0x200b7726,0x580c82da,0x7bb53ed8,0x5cf6575c,
    0x5cc6c1dd,0x01b00d89,0x2e24406e,0x205edd8e,0xb05d10e9,0x640c8360,
    0x43d10b02,0x9712e02e,0x44760d98,0x9546a531,0xcafdc5a9,0x8ec5824f,
    0xb82e9858,0x46a8554f,0xc8fa20ca,0x2f21f20b,0x3660b710,0x41603203,
    0xb90a3cc8,0x7c448a7c,0x0001fb9c,0x82a86c73,0x2612a1ec,0x2e07d11f,
    0x59062442,0x11f982c0,0x3ba5407d,0x105b1b30,0x44873055,0x227f74fa,
    0x70e26ddc,0x641dac43,0x5830595f,0x95122530,0x41905857,0x06400cc8,
    0x402f882c,0x498b160c,0x2b00015c,0x390193da,0xd32fa8b0,0x0722c409,
    0xebdd83b8,0x897d44db,0x00faa04f,0x036e05f3,0x3f989073,0x458325f5,
    0x221b0644,0x9b910c0d,0xb8038837,0x552c56a1,0x00f5ce60,0x910580c8,
    0x162c1900,0x32a48857,0x43cccccc,0x6416b195,0xa8fdc580,0x588e402f,
    0xfb8812a0,0x3a27f303,0xb0133205,0x752401b7,0x263f1120,0x5db7591f,
    0x391e565c,0x95100598,0x86401cc9,0x20372c5a,0x003b9148,0x1220b019,
    0x22c58320,0x00015c49,0x41632b19,0x0fb8580c,0xba4405f3,0xd808b302,
    0x3a2f8859,0x82d4b204,0x46a1b32d,0x4311573a,0x8b06c0d8,0x81503319,
    0xd8140100,0x2ae60160,0x20911545,0x0066c41b,0x9107c855,0x162c1900,
    0x03f939f1,0xd996d400,0x20b01903,0x403d30ea,0x90b1058d,0x223a9641,
    0x2c81362e,0x730aa2cc,0x55550dd4,0x006aaa63,0x20000000,0x15c580e8,
    0x598bb254,0x302cc2c8,0x6e66c07b,0x804885ea,0x8d8b160c,0x500d89b9,
    0x0be0f880,0x9302c064,0x07d302c4,0x3fbbbbba,0x70e41020,0x88f7f407,
    0x00000efd,0x00000000,0x33362000,0xcdb81ddb,0x373663cc,0xdb880bdc,
    0xda800bdc,0x74c01102,0x5c2eeefe,0x2f4bb0ef,0x00e88001,0x43dfb000,
    0x000005fd,0x00000000,0x00000000,0x00000000,0x44006000,0x3000c480,
    0x00006000,0x00000000,0x00000000,0x1dd80544,0x99999997,0x88888879,
    0x00077008,0xccccc880,0xd33ccccc,0x25dddddd,0xddddddd8,0x0000dddd,
    0x00000000,0x00000000,0x00000000,0x00000000,0x674c0000,0x2237cc2e,
    0x58888888,0x37777776,0x36a760dd,0x3e076390,0x44441f11,0x20888888,
    0xaaaaaaa8,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x223b0000,0x20017dc6,0x44110005,0x30b622dd,0x00000018,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x1a23b000,0x4cb000bd,
    0x2aaaaaaa,0x00012000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x40000000,0x3e22ece9,0x2ea58001,0x03bbbbbb,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x51000000,
    0x30003881,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__courier_21_latin1_x[224]={ 0,4,2,1,2,1,2,4,5,2,0,1,2,1,
4,2,2,2,1,1,1,1,2,1,2,2,4,2,0,0,0,0,1,0,0,1,1,0,1,1,0,2,1,0,
1,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,2,0,4,1,0,1,1,1,1,1,0,1,
1,1,1,0,0,1,0,1,1,1,1,0,0,0,0,1,2,0,5,0,1,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,4,2,1,1,0,
5,1,2,0,0,0,0,1,0,-1,3,1,3,3,4,0,1,4,4,3,2,1,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,2,2,2,2,-1,0,0,0,0,0,0,2,0,0,0,0,0,0,1,0,1,1,
1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,0,1,
 };
static signed short stb__courier_21_latin1_y[224]={ 15,3,3,2,2,3,5,3,3,3,3,5,12,9,
12,2,3,3,3,3,3,3,3,3,3,3,7,7,5,7,5,4,3,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,2,3,3,19,2,6,3,6,3,6,3,6,3,3,
3,3,3,6,6,6,6,6,6,6,4,7,7,7,7,7,7,3,3,3,8,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,15,7,2,4,5,4,
3,3,3,4,3,7,9,9,4,2,1,3,3,3,2,7,3,8,14,3,3,7,3,3,3,6,0,0,0,1,
1,0,4,4,0,0,0,1,0,0,0,1,4,1,0,0,0,1,1,6,3,0,0,0,1,0,4,3,2,2,
3,4,3,2,6,6,2,2,3,3,3,2,3,3,3,4,2,2,3,4,3,5,6,2,2,3,3,2,3,3,
 };
static unsigned short stb__courier_21_latin1_w[224]={ 0,3,7,9,8,9,8,3,4,4,7,9,5,9,
3,8,8,8,8,9,8,9,8,8,8,8,3,5,9,11,9,7,8,11,11,9,10,10,10,10,11,8,10,11,
10,12,11,10,10,11,11,9,9,11,11,11,11,11,9,4,7,4,8,12,4,10,11,9,10,9,10,10,11,9,
7,10,9,11,11,9,11,10,10,9,9,11,11,11,11,10,8,4,1,4,9,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,3,7,9,9,11,
1,9,7,12,6,10,10,9,12,13,6,9,5,5,4,11,9,3,3,5,7,10,12,12,11,7,11,11,11,11,
11,11,11,9,10,10,10,10,8,8,8,8,11,11,10,10,10,10,10,7,11,11,11,11,11,11,10,10,10,10,
10,10,10,10,11,9,9,9,9,9,9,9,9,9,9,11,9,9,9,9,9,9,10,11,11,11,11,10,11,10,
 };
static unsigned short stb__courier_21_latin1_h[224]={ 0,13,6,15,15,13,11,7,15,15,8,10,6,2,
4,15,13,12,12,13,12,13,13,13,13,13,9,10,10,5,10,12,14,11,11,12,11,11,11,12,11,11,12,11,
11,11,11,12,11,14,11,12,11,12,11,11,11,11,11,15,15,15,6,2,4,10,13,10,13,10,12,13,12,12,
16,12,12,9,9,10,13,13,9,10,12,9,8,9,8,12,8,15,15,15,4,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,12,13,11,9,11,
15,14,3,12,6,8,6,2,12,1,6,12,7,7,4,12,14,3,5,7,6,8,12,12,12,13,15,15,15,14,
14,15,11,15,15,15,15,14,15,15,15,14,11,14,16,16,16,15,15,7,13,16,16,16,15,15,11,13,14,14,
13,12,13,14,10,13,14,14,13,13,12,13,12,12,13,11,14,14,13,12,13,9,10,14,14,13,13,17,16,16,
 };
static unsigned short stb__courier_21_latin1_s[224]={ 254,252,220,141,132,47,46,251,63,79,163,
220,138,203,252,84,68,222,231,167,1,177,187,196,136,241,251,214,42,155,230,
10,221,10,122,18,181,170,228,28,239,1,49,34,181,145,169,70,134,24,192,
92,66,102,216,110,98,86,76,220,119,114,243,190,177,240,229,11,24,204,114,
63,125,60,81,81,137,75,119,32,1,13,64,1,39,52,142,107,182,240,154,
127,236,249,167,211,211,211,211,211,211,211,211,211,211,211,211,211,211,211,211,
211,211,211,211,211,211,211,211,211,211,211,211,211,211,211,211,211,254,250,45,
147,87,157,112,230,182,97,228,131,144,203,198,213,131,74,208,202,251,151,211,
251,251,214,235,171,84,173,186,128,151,163,175,1,240,187,158,199,209,225,238,
13,13,22,31,202,204,190,35,89,58,52,68,194,205,69,100,46,40,1,55,
87,126,103,57,110,36,137,192,77,93,180,118,108,121,98,131,163,35,22,148,
170,145,141,53,97,21,114,158,217,155,1,23,12, };
static unsigned short stb__courier_21_latin1_t[224]={ 1,19,89,1,1,35,77,64,19,19,89,
77,98,98,89,19,35,50,50,35,64,35,35,35,35,35,50,77,89,98,77,
64,19,77,77,64,64,77,64,64,64,77,64,77,77,77,64,64,77,35,64,
64,77,64,64,77,77,77,77,1,1,1,89,98,98,77,35,89,50,77,64,
50,64,64,1,64,64,89,89,89,50,50,89,89,64,89,89,89,89,50,89,
1,1,1,98,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,
50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,1,35,50,
64,89,64,1,19,98,50,89,89,98,98,50,98,98,50,89,89,83,50,19,
72,77,89,89,89,50,50,50,35,1,1,1,35,19,1,77,1,1,1,1,
35,19,19,19,19,64,19,1,1,1,19,19,89,35,1,1,1,19,19,77,
35,19,19,35,50,35,19,77,35,19,19,35,35,50,35,50,50,50,77,19,
19,35,50,50,89,89,19,19,35,35,1,1,1, };
static unsigned short stb__courier_21_latin1_a[224]={ 178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,
178,178,178,178,178,178,178,178, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_21_latin1_BITMAP_HEIGHT or STB_FONT_courier_21_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_21_latin1(stb_fontchar font[STB_FONT_courier_21_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_21_latin1_BITMAP_HEIGHT][STB_FONT_courier_21_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_21_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_21_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_21_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_21_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_21_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_21_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_21_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_21_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_21_latin1_s[i] + stb__courier_21_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_21_latin1_t[i] + stb__courier_21_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_21_latin1_x[i];
            font[i].y0 = stb__courier_21_latin1_y[i];
            font[i].x1 = stb__courier_21_latin1_x[i] + stb__courier_21_latin1_w[i];
            font[i].y1 = stb__courier_21_latin1_y[i] + stb__courier_21_latin1_h[i];
            font[i].advance_int = (stb__courier_21_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_21_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_21_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_21_latin1_s[i] + stb__courier_21_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_21_latin1_t[i] + stb__courier_21_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_21_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_21_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_21_latin1_x[i] + stb__courier_21_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_21_latin1_y[i] + stb__courier_21_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_21_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_21_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_21_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_21_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_21_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_21_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_21_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_21_latin1_LINE_SPACING
#endif

