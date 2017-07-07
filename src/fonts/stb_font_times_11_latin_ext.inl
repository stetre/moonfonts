// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_11_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_11_latin_ext'.
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

#define STB_FONT_times_11_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_times_11_latin_ext_BITMAP_HEIGHT         88
#define STB_FONT_times_11_latin_ext_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_11_latin_ext_FIRST_CHAR            32
#define STB_FONT_times_11_latin_ext_NUM_CHARS            560

#define STB_FONT_times_11_latin_ext_LINE_SPACING           7

static unsigned int stb__times_11_latin_ext_pixels[]={
    0x06e00800,0x02b80350,0x0a00881b,0x1005c400,0x25100a01,0x44079500,
    0x42018c04,0x22406300,0x2a022031,0x6443bbbb,0x10098440,0x70042980,
    0x08031803,0x88630620,0x40370140,0x28051302,0x10310180,0x540e2a09,
    0x2038a829,0x2038a80c,0x0e2a04a8,0x0f440130,0x3a209170,0x205d1002,
    0x53a943c9,0x704c2898,0x20b88120,0x74401402,0x83805c01,0x070261d9,
    0x3930e014,0x5c39315c,0x218a9882,0x1c981029,0x4c1510ae,0x3020ae1c,
    0x39315c39,0x5c39315c,0x22b87262,0x260ae1c9,0x1055302a,0x983aaa85,
    0x2607502a,0x85304c2a,0x1e443aaa,0x8570ea12,0x5d415c3a,0x260640bb,
    0x4cc13099,0x9814cc09,0x8151e099,0x44360547,0x2320a60e,0x1902a3c4,
    0x32054789,0xf02a3c48,0x02a3c0a8,0x2a3c0a8f,0x6c5886c0,0x32688b10,
    0x1621b121,0x2c4360ea,0x4392c411,0x40e60c84,0x8fa02a3e,0x8351640a,
    0x130ea443,0x32207522,0x3c1d4880,0x20a8f02a,0xa992ee48,0x8f054660,
    0xf054660a,0x054660a8,0x2a3c0a8f,0x8f02a3c0,0x882a3c0a,0x64589645,
    0x1045aac2,0x21d42c8b,0x2d016458,0x2e2c045a,0x02a5d702,0xb3054bae,
    0x56604c10,0x85acc265,0x8b5980f8,0x151e0547,0x55a8a9dc,0x1ca4c935,
    0xca4c151e,0xa4c151e1,0x78151e1c,0x8151e054,0x151e0547,0x1dd2a1dc,
    0x80eeb12a,0x0ea2543b,0x4114a877,0x58807748,0x8e8a8154,0xa8e8a80a,
    0x42b88f20,0x82609b83,0x04ba809b,0x05468137,0x4e54151a,0x3254c551,
    0x05468729,0x54687293,0x8d0e5260,0xd02a340a,0x02a340a8,0x716a0a8d,
    0x587716a7,0x2e2d4095,0x5a837223,0x4a6099dc,0x2614c04a,0x02ba6503,
    0x950574ca,0xd10642c8,0x74426199,0x8869c0cc,0x383a0cce,0x8b60e0e8,
    0x499226e4,0x98707439,0x87074394,0x70743949,0x0741c1d0,0x741c1d07,
    0x41b1a0e0,0x345206c6,0x4c0d8d02,0x0986c681,0x7023442e,0x1f5140e0,
    0xd107d450,0x13120e41,0x30984ca6,0x216d5cc5,0x564c5309,0x2aac982a,
    0x2a299bc8,0xb7d10dbd,0x215564c7,0x3263dbe8,0x6df442aa,0x20aab263,
    0xc982aac9,0xaac982aa,0x82aac982,0x54c1aaa9,0xa86ae1aa,0x554c1aad,
    0xa982881a,0x044261aa,0x2b86ab6a,0x20d98310,0x1906cc0c,0x40d9ac98,
    0x42af2e19,0x41579709,0x57971a23,0x00100101,0x00800001,0x08000200,
    0x80080080,0x00000800,0x20000800,0x02000000,0x00000000,0x00000010,
    0x001fc495,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x440c6000,0x80bb880d,
    0x1807601b,0x01540d88,0x51301771,0x037006a0,0x40aa00c6,0x03620088,
    0x87148366,0x64166020,0x2a004402,0x818c2c82,0xb8819998,0x881cc0ab,
    0x5c031819,0x70e4c1cc,0xb9835305,0x22607662,0x05028982,0x30e2028c,
    0x26039851,0x20715028,0xb301402b,0x26a02803,0x4606300c,0x4c132001,
    0x4c028c18,0x0c60a03c,0x060a216c,0x40a059fd,0x303d1073,0x51e15c39,
    0x98b10d81,0x2530aa63,0x26154c18,0x26326312,0x4498711c,0x2ae60999,
    0x22b87262,0x87263129,0x4c2a982b,0x2aa0ae1c,0x2b87263a,0x6543aaa8,
    0x750a6511,0xa8288177,0x21d40bbb,0x31554c2b,0x1554c555,0x3e194cc7,
    0x82a982cf,0x4780a03b,0x882a3c0a,0x36731645,0x19ac4b10,0x2b12c436,
    0x511d9a19,0x07522388,0x23c3b3b3,0xf0cd620a,0x5886c0a8,0x43902a3c,
    0x3902a3c4,0x5689a224,0x88351649,0xd0351646,0x22710547,0x9c4e2713,
    0x2a2e3138,0x2167dc33,0x4ba8b10d,0x98f00f88,0x3b82a3c0,0x8b1732d4,
    0x588e322c,0xc8719164,0x2202a792,0x27316b31,0xc8151e3a,0x882a3c38,
    0x098f1645,0x5478116a,0x8d0116a0,0x02166916,0xb8085996,0x874c152e,
    0x74c21d30,0x1c9cca10,0x22c45503,0x502e512c,0x8131e097,0xb8b70546,
    0x950eee63,0xa87716c4,0x2b30b624,0x370e056b,0x3c553981,0x785b102a,
    0x4a877054,0x01dc131e,0x01dc151e,0x3ca45a34,0x3c960ae2,0x3a2a0ae2,
    0x21fdc0a8,0x51fdc3fb,0xa815a26e,0x6c950ee2,0x1a0d3829,0x10e0e815,
    0x2ae61d8f,0xb5161dc5,0x9e82c3b8,0x24982ad9,0x3660cce8,0x202a3439,
    0xb5054685,0x4151a3b8,0x82a3404a,0x3e26804a,0x2c895488,0x05912a58,
    0x2202ba65,0x222ec45d,0x9193315d,0x54550315,0x30b61dc5,0x41d05b57,
    0x82aac983,0x9cc1b9ca,0x1a0a06c6,0x2b70281b,0x84c9106a,0x0740e629,
    0x383a0a07,0x41d06c68,0x1d023443,0xb011a21c,0x90744e60,0x90744903,
    0x307d4503,0x4da09b41,0x0180a9a0,0x506c6855,0x4c34470e,0x00e02aac,
    0x54ce6176,0x2032e1aa,0x32e1aaa9,0x98247100,0xa82af2e0,0x85559304,
    0xaac980cb,0x41aaa982,0xda82aac9,0x5564c1aa,0x21aada82,0x20ac82bd,
    0x2e0d9ac9,0x6cd64c1a,0x41906cc0,0x3932a9c9,0x0aa72655,0x20133353,
    0x0d554c2a,0x224a862a,0x7300103f,0x730a9801,0x00000007,0x19800000,
    0x01000040,0x01001000,0x00008008,0x00800040,0x20100800,0x00880000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x81702c98,0xa81c802a,0x2ea39303,0x32602220,
    0x4c0200ba,0x01d88003,0x4c120042,0x990b2208,0x200e0019,0x1a803981,
    0x20191050,0x0c415c3a,0x04202260,0x75550020,0xa8240190,0x0742aa83,
    0x03002828,0x40e68126,0x03e2d03d,0x730140a6,0x8b80a307,0x25c02604,
    0x30aa60e2,0x44155c39,0x00503aba,0x13036a05,0x0151f405,0x82640993,
    0x0a66048b,0x051090e4,0x02662026,0x93068333,0x2e20164c,0x55223aac,
    0xac983b40,0x883e680b,0x5932baab,0x099a9817,0x9515c395,0x557115c3,
    0x2eaae257,0xb10d8712,0x1d405478,0x0a00a039,0x5c02824c,0x40a0152e,
    0x283bbbba,0x2d406440,0x0baac982,0x26175593,0x2320baac,0x0e8d0344,
    0xc8867b80,0xd01de819,0x5b7d03e2,0xb41d1098,0x20b660f8,0x38b60e2d,
    0x130e884c,0xb11c43a2,0x0151e2c8,0x7c424c1d,0x2603e200,0x2a00f884,
    0xf880a8e8,0x10a75280,0x407c401f,0x6863403b,0x23318d0c,0x34681a0a,
    0x4413c4c0,0x03d3d04d,0x3a3a07cd,0x7cd07a01,0x3a207540,0xa8e880a8,
    0x0f407a00,0x92a1dc71,0x21a60547,0x2a04ba87,0xba84984b,0x0574ca04,
    0x075025d4,0x4ba812ea,0x813404a8,0x9304d026,0x6860e872,0xbaf9c034,
    0x5a0b3223,0x16df41e9,0x097068b4,0x3ae05b7d,0x970165c0,0x4b825c05,
    0x3b8b51c4,0x88f0151e,0x69c0d386,0x069c1e88,0xd380fa8a,0x0d381d40,
    0x0468869c,0x57d12afa,0x264abe89,0x2afe6394,0x980d1a2c,0x8da867aa,
    0x7dc7e62f,0xf307a3a3,0x069876a5,0x53183d1d,0x40f00f05,0x710d3069,
    0x41d06c68,0x21d43903,0xb982dab9,0x5cc282da,0x20d982da,0x16d5cc0c,
    0xdab983a8,0x82dab982,0x3341aada,0x30cd0668,0xd0530729,0x3c7060e8,
    0x80b80702,0xe81c0d16,0xa8d16860,0xd00d03bb,0x07430740,0x55530e23,
    0x02aad983,0x47055551,0x21a23868,0xb80d11c2,0xa8344700,0x8e1a2383,
    0x23412068,0x423411a0,0x1443dbe8,0x55fcc3e2,0x57ccf22c,0x2a01c1ca,
    0x1da97cc0,0x556e41c4,0x36a5f33b,0x02f980c1,0x2b720be6,0x755b93ba,
    0x2000b627,0x12540000,0x7f12547f,0x3f892a08,0x892a02a0,0x506e443f,
    0x4951fc49,0x883883f8,0x7f12babf,0x2afe2575,0x0000002b,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x23000000,0x041554c1,0x40888893,0x41644480,0x12218c08,
    0x4c550084,0x20421c82,0x41d880d8,0x540baac9,0x07300bbb,0x02222028,
    0x18088046,0x75795103,0x04998318,0x20ba8c88,0x06a229a9,0x80035305,
    0x0d882cc9,0x10ccb8ee,0x8389c45d,0x5c264342,0x5c40e800,0x050b621a,
    0x26140b66,0x8b8a264b,0x051818c4,0x1a8b218d,0x00f88050,0x806d412e,
    0x640da829,0x1b306590,0x44cc8528,0x46d4d12e,0x814b370d,0x47993075,
    0x540baac9,0x6445312e,0x0e98b222,0x99a1d441,0x5910baac,0x93074144,
    0x8b221755,0x220502c8,0xc88b222c,0x83a8b222,0x343931c9,0x95042cc1,
    0x25d415c3,0x985d564c,0x564c2abc,0x982a60ba,0x2a204b24,0x2a6054c0,
    0x263b0740,0x4d232394,0x83355d01,0x886340a8,0xe82a60da,0x0fee0740,
    0x1a341937,0xd0d10743,0x81d0c681,0xd00f880e,0x20740e81,0x2341260e,
    0x79255f47,0x38b615c4,0x86341a70,0x8c683aa6,0xc8ee3b29,0x334662bc,
    0x1d94c765,0x6522791a,0x20ca5511,0x8cc394d8,0xe94c1346,0x07411150,
    0x4d76203a,0x8134682b,0x2074340e,0x0e81d026,0x81d04ba8,0x83a0740e,
    0x1a342ac8,0x2c8950cd,0x4c054744,0x02682dab,0x209a3d8d,0xc92e771c,
    0x90cd5c32,0x3b8e4ee3,0x236a571a,0x2937281c,0x5c39f8c8,0x255f419a,
    0x17443619,0x04c1d03a,0x8d04766d,0x20744abe,0x55f40e86,0x203a0744,
    0x1d03a0d3,0xb10740e8,0x555741b1,0x07442347,0x20597039,0x2afa1a23,
    0xbe96a344,0x8954ee4a,0x27518b26,0x3b954ee0,0x0190b455,0x56b19819,
    0x3a81f53b,0xb2c86681,0x81d0e421,0x8aa7260e,0x683e23dd,0x07c41d06,
    0xd06685f3,0x55cc0e81,0x0740e82d,0xa441d03a,0x7c4d1a1c,0x2b262bab,
    0x2a0f00d9,0x0cd0fe24,0x4334791a,0x55cc3ac8,0xbb10cace,0x911d6445,
    0x5e57cc75,0x71415cc2,0x2eefa693,0x85bb10ce,0x2ebd9846,0x20741557,
    0x8140c80e,0x40e82343,0xd0468383,0xd11c0e81,0x740e81d0,0x32910740,
    0x02a0d1a1,0x801a00dc,0xe8d04683,0x000011a0,0x00000000,0x00040404,
    0x015d5fc4,0x5f317cc0,0x44044150,0x4aeafe23,0x2e15c2f9,0x4aeafe23,
    0xa8be62f9,0x2f98fe24,0x22f98be6,0x3636a2f9,0x07e63f33,0x802a0722,
    0x457002f9,0xf32babf8,0x5fc43b75,0x000002ba,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x440aa800,
    0x1cc0b80d,0x4303330e,0x31831811,0x82c418a8,0x1901cc0c,0x205c1330,
    0x10c60d9c,0x980c4111,0x05542545,0x83180046,0x40842a99,0x13320048,
    0x126a054c,0x8832806c,0x1c40c80d,0x2205d5d4,0x5c419431,0x814144c3,
    0x81950742,0x36612a18,0x22e06cc0,0x0620c4c2,0x48828814,0x054e40c9,
    0x443c81b3,0x19987282,0x032a1dc4,0x41d98999,0x32a1d9da,0x799304c0,
    0x40a980a0,0x0289808a,0x42898515,0x4c905028,0xa826260d,0x26054c28,
    0x26054c0a,0x8d51160a,0x2a6054c2,0x51054660,0x5440a881,0x2aa05440,
    0x8dcaa1a9,0x10676621,0x220a9815,0x10636a0a,0x20a8cc15,0x854660a8,
    0xa9cc1519,0x15302a63,0x07c4054c,0x2330a8cc,0x1151330a,0x330a8cc5,
    0x30a8cc2a,0x9e4082a3,0x2a62caca,0x298eca60,0x98eca63b,0xb38923b2,
    0x49355143,0x65263b29,0xd199a331,0x346668cc,0x6436b535,0xd9c4e752,
    0x22a494c1,0x49925308,0xca4c9298,0x9499a331,0x730e5263,0x524d54aa,
    0x126aa111,0x652612ea,0xa4c72931,0x1ca4c51c,0xca4c7293,0x5dc72931,
    0x14a5caaa,0xb8e47653,0x8e4ee393,0x14ee393b,0x20c4ee37,0x9dc724a9,
    0x26ae3949,0xab866ae1,0x3066ae19,0xb95c3397,0x20e46e93,0x2e2e881b,
    0x81b84981,0x26ae3949,0x498e5261,0x21cecc39,0x30ba24a9,0x261a7095,
    0x0e526394,0x2930b32b,0x4c72931c,0x8e526394,0xaca9dc3b,0x5cee392c,
    0x954ee553,0x54ee553b,0x0a552a82,0xa9dc9137,0x9d472932,0x27504ea0,
    0x15704ea0,0x2373984b,0xa8393b8d,0x751c8413,0x13a84982,0x2751ca4c,
    0x498e5260,0x4dc1cc39,0x9b8e4248,0x16d5cc48,0x9498e526,0x216c65c3,
    0x65263949,0xa4c72931,0x10d8d11c,0x2553b8a3,0x2b223ac8,0xc88eb223,
    0x5644363a,0x1b7b50a3,0xbe88eb22,0x445bb13d,0x8b7622dd,0x2b2a2dd8,
    0xd1d543dd,0x887b7b11,0x42aae2dd,0x07a22dd8,0x5f445bb1,0x445bb13d,
    0xb7d13dbe,0x5ed42547,0x2a15570d,0x688e0dbd,0xe89edf44,0x0dd223db,
    0x744f6fa2,0x7b7d13db,0xc98f6fa2,0x826261ca,0x00003ac8,0x00040000,
    0x00000000,0x00000010,0x00000000,0x03300000,0x892a0000,0x0000003f,
    0x40000000,0x00000010,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xa8298000,0x2a04dc18,0x82a81904,0x221b82aa,0x1905932c,0x41988188,
    0x54c40aa8,0x33032a18,0x90088c13,0xccc815c3,0x23931931,0x440ccc38,
    0x4c33220a,0x8aa0ae1c,0x2a604c38,0x98154c2a,0x5c3a8199,0x2ea0e542,
    0x40d4c0bb,0x53063aaa,0x05324c62,0x0dc44315,0x20310666,0x82819482,
    0x20a03a0e,0x2249cc28,0xe886c393,0xa44b3310,0xc815560e,0x266a0e61,
    0x511d9a1b,0x0ea0b9c4,0x0a8f066a,0x28904cd4,0x436389c4,0x444d5458,
    0x102a3e81,0xa86a2c8d,0x2921c8d1,0x99619ac4,0x26054c0a,0x26054c0a,
    0x91054c0a,0x219a98b1,0x02a21a0e,0x2a95c151,0x72447237,0x56618897,
    0x4c42aac5,0x4066e61d,0x153c9643,0x0b124744,0x0a8f05d1,0x30524064,
    0x322c421d,0x40c6d632,0x4d0152eb,0x2c220859,0x906208b5,0x9aa9d871,
    0xaa926aa4,0xa926aa49,0x926aa49a,0x2730d9c8,0x4c683a1d,0x2668cc92,
    0x8e4ae574,0x44b5153b,0x5604dc3d,0x30ece22a,0x98703b39,0x3ea0ad75,
    0x8836b2a1,0x982a3c5b,0x319a41bd,0x50ee3fb8,0x089d6469,0x40547454,
    0x82b88f26,0x8500ee1a,0x953342d8,0x254c4a98,0x895312a6,0x9d5224a9,
    0x83a3aa9b,0x4d5c0dc6,0xe8875541,0x233951dc,0x33a2682a,0x432f3e0c,
    0xa9cc391b,0x4cf40d43,0x74dc42ad,0x320ee570,0x1b8151a0,0x6c424ca0,
    0x233b8b55,0x2650348c,0x12a680ae,0x04a83059,0x5d662c14,0x9226e489,
    0x226e489b,0x9b9226e4,0xb9cd2248,0x683a3a8c,0x04ea09d4,0x361c824c,
    0x2131c122,0x4ee05129,0x20d4e61c,0x21aab703,0x54e23529,0x87074382,
    0x312810c8,0x234d04c9,0x3519310d,0x407d4505,0x81c83a25,0x31023440,
    0xb7b55828,0x5436f6a1,0xb7b50dbd,0x5436f6a1,0x59950dbd,0xf98e7661,
    0x6ec43bba,0x730b7622,0x33791640,0x970cdd45,0x440e6157,0x27623dbd,
    0x24710383,0x14dc29b8,0xac983795,0x0eedd42a,0x4c36a633,0x2aa62a9c,
    0x14cd441a,0x6c1906cc,0x6cd64c2b,0x56d41cc0,0x8197281a,0x000000e8,
    0x04200000,0x00400000,0x000040cc,0x01000000,0x80000000,0x80808000,
    0x00020000,0x40002000,0x00000200,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x32a00000,0x4c510ea1,
    0x2871060b,0x23033330,0x5e4c0321,0x214d4c2a,0x4c1700a9,0x8059309a,
    0x223aacb8,0x644164c4,0x4325934a,0x4609a831,0x21530220,0x752bbbba,
    0x64c1d4a6,0x93143931,0x88888557,0x13505440,0x20a09015,0x2aa14c31,
    0x8b1254c0,0x10150742,0x490510b8,0x35312828,0x80a60d98,0x46cc36a6,
    0x2073350d,0x0d04ecc2,0x43419ae0,0x0e8ad00e,0x2e216c35,0x664432a2,
    0x54611153,0xb8556253,0x5557d42d,0x5343b92f,0x4c42021b,0x2064e658,
    0x09505018,0x09c3b885,0x50ed4626,0x954181c9,0x38c1c902,0x229a986a,
    0x23428a99,0x986e913d,0x114d4c4a,0x89803d09,0x40d0b026,0x2619a08d,
    0x510a209a,0x20ba2288,0x2228c83a,0x89a342ac,0x404f6343,0x9cc33570,
    0x42eaa60c,0x5530baa9,0x9a98a217,0x911442c2,0x30a062d0,0x29061313,
    0x0aa6088a,0x83636611,0x5f50d8d9,0x1ba456a5,0x8d989137,0x03d0910d,
    0xd8575d28,0x16155a1a,0x104ecc1a,0x1344688d,0x0adca872,0x36237b73,
    0x2667a0d8,0x57d476e7,0x54202b52,0x20ca4c13,0x2498c931,0xb3344931,
    0x3442c1b1,0x30759091,0x88499409,0x9226498a,0x10dd2218,0x9e4686e9,
    0x5b52d8da,0x51ba441b,0x2603d41b,0xd0b026ab,0x488342c0,0x5cb0b0b0,
    0x221d40aa,0x2e9108e8,0x21c4d1a1,0x10809e46,0x2dae85bb,0x442c42c4,
    0x0dd22585,0x8848960b,0x28b2b82e,0x22850931,0x2289aa98,0xba443748,
    0x0381d1a1,0x43748851,0x68a0c683,0x218d0b04,0x0488c685,0x1a8b0b0b,
    0x4f4cc3a8,0x4686e911,0x0e8d0f46,0x0e038101,0x36076076,0x0dd22581,
    0x81e8960b,0x229c880d,0x4c1b5319,0x54415710,0x6c6d4299,0x4cf236a2,
    0x0381dbaf,0x2d8da872,0x5957f30e,0xcaaf995c,0x5fcc1d10,0x4c1d12ba,
    0x1b52babf,0x83a20e88,0x910660e8,0x2a0f981b,0x23f33d8d,0x75f301f9,
    0x4444443b,0x5d405cc0,0x2e175b70,0x75b70bad,0x46d43a21,0xe881d52d,
    0x80800000,0x20331040,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x4630b815,
    0x945301c9,0x21ca8711,0x0e00ea48,0x564c1d49,0x10ca881b,0x32a37557,
    0x13c98ae1,0xba8e4c37,0x502ef260,0x2064c0a0,0x305930c9,0xac985579,
    0x955930ba,0x77751644,0x64c72677,0x30175931,0x26e2aa15,0x55054c28,
    0x44c210a2,0x102a218a,0x8928a815,0x00e83662,0x4d128a85,0x91346999,
    0x12205b80,0x41487734,0x22d8d109,0xd0516a83,0x28d3681c,0x87d00f88,
    0x2680745c,0x3431a0da,0x9d460e83,0xf168d1a1,0x49844541,0x399a8a19,
    0x2e704d62,0x4c46a530,0x2a24a258,0x0a22880b,0x4d4c795d,0x8b058510,
    0x260d5225,0xac88a259,0x74c95342,0x6883b00a,0x40ef2013,0x00f34076,
    0x89ae0755,0xd8d0344b,0x813409a3,0x4683a80d,0x7441d346,0x981bbac2,
    0x5514644a,0x55ca1493,0x3a802e19,0x68d13441,0xd109d99e,0x12c38858,
    0x4b188339,0x83636268,0x02c0ebae,0x00b2e097,0x8077a03d,0xd2803b9e,
    0x24dcaea0,0xd2d4681a,0x1cae8955,0x741d406c,0x65747aaa,0x2ea1c842,
    0x244dc2d8,0x4b488726,0x04ea310a,0x37620275,0x26d162c2,0x0b161226,
    0x426c4b05,0x8961ebab,0x8b534374,0x0780d305,0xe9e82dcc,0x31a20d00,
    0xd1505b57,0x20689351,0x204d1dc6,0x7501b026,0x1db468d0,0x5d20555c,
    0x206d6d41,0x75188985,0x8b762555,0x092c2dd8,0x05d7458b,0x5458b091,
    0x0b322580,0x12c1b533,0x1e2686e9,0x68187a0b,0xb41e4a20,0x0a0680e9,
    0x5c942c47,0x8d0c6893,0x03411a0e,0x8d07501b,0x00068b46,0x00000000,
    0x74438800,0x0be61d10,0x10e8836a,0x4777ae1d,0x5d1b50e8,0xb50e8960,
    0x2abe65b1,0xb70ba22c,0x1f987755,0x45f30d98,0x4c7f71f9,0x1254102f,
    0x9c46cc7f,0x757f30eb,0x876ebe65,0xf32baaf8,0xc885d103,0x7cc7e60d,
    0x076a5f31,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x51350000,0xa89a8281,
    0x54c0150a,0x82a2a619,0x4c5440a9,0x06a6aa0a,0x2600420a,0x26151730,
    0x40510baa,0x06e75530,0x06e2e602,0x4c53530e,0x2817309a,0xa98705cc,
    0x51988aa0,0x4cc6aa21,0x20b30999,0x06099999,0x522389c4,0x266663ca,
    0x21a8a261,0x2602aaaa,0x39828193,0x4c1aa859,0x1ece63b3,0xe94c3653,
    0x1b33549a,0x7288281b,0x29d81550,0x38d124c6,0x2b236633,0x9c982868,
    0x9865e441,0x13b30d8d,0x44155054,0x23731228,0x1bad2312,0x22223773,
    0x22171408,0x73328888,0x20504157,0x22222088,0x0028a260,0xaa864e60,
    0x32730aac,0x26e19300,0x8ea373a9,0x646e751b,0x276e609a,0x15595509,
    0x03a95ce4,0x161621a2,0x23748872,0x42aaaaa5,0xbcb884d8,0x2446e910,
    0x2852894c,0x54caf624,0x42a5370a,0x555509a8,0x00a82215,0x00000006,
    0x49800000,0x94982819,0x65c35301,0x8aa752a8,0x64ee553a,0x09626a13,
    0x54195814,0x6c3ba80a,0x11ccc581,0x4042c6e9,0x0c882cc8,0x4488dd22,
    0xb8445099,0x1101122b,0x00000008,0x00000000,0x5d000000,0x2045445b,
    0x02aa2dbd,0xac88e766,0x911d6443,0x32a3bd75,0x98283dda,0x21530188,
    0x2b6e3d2a,0x30c1d10b,0x3a2f236a,0x7c6d4140,0x2d8da802,0x000001b5,
    0x00000000,0x00000000,0x00000000,0x0055554c,0x00004200,0x00800800,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_11_latin_ext_x[560]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,
0,0,0,0,0,0,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,-1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static signed short stb__times_11_latin_ext_y[560]={ 8,1,1,1,0,1,1,1,1,1,1,2,7,5,
7,1,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,2,3,3,3,3,3,3,1,1,1,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,3,1,1,2,1,
1,1,1,1,1,3,3,5,1,0,1,2,1,1,1,3,1,4,7,1,1,3,1,1,1,3,-1,-1,-1,-1,
-1,-1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,2,1,-1,-1,-1,-1,-1,1,1,1,1,
1,1,1,1,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,
0,1,-1,1,1,3,-1,1,-1,1,-1,1,-1,1,-1,1,1,1,0,1,-1,1,-1,1,1,3,-1,1,-1,1,
-1,1,-1,1,1,0,-1,-1,1,1,-1,1,0,1,-1,1,1,1,-1,3,1,1,-1,1,1,1,3,-1,-1,1,
1,1,1,1,1,1,1,-1,1,1,3,-1,1,1,1,3,0,1,-1,1,-1,1,1,3,-1,1,1,3,-1,1,
-1,1,-1,1,1,3,-1,1,1,2,-1,1,1,2,-1,1,0,1,-1,1,-1,1,-1,1,1,3,-1,1,-1,1,
-1,-1,1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,3,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,-1,1,-1,
1,-1,1,-1,0,-1,-1,-1,-1,-1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-3,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static unsigned short stb__times_11_latin_ext_w[560]={ 0,2,4,5,5,8,8,2,4,3,5,6,2,3,
2,3,5,3,5,5,5,5,5,5,5,5,2,3,6,6,6,5,9,8,7,7,7,6,6,8,7,4,4,8,
6,9,9,7,6,7,7,5,6,8,8,10,8,8,6,3,3,3,5,7,3,5,6,5,5,5,5,5,5,3,
3,6,3,8,5,5,6,5,4,4,3,5,5,8,5,5,5,4,2,4,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,2,5,5,5,5,
2,5,4,8,4,5,6,3,8,7,4,6,3,3,2,6,6,2,3,3,3,5,8,8,8,4,8,8,8,8,
8,8,10,7,6,6,6,6,4,4,4,4,7,9,7,7,7,7,7,5,7,8,8,8,8,8,6,5,5,5,
5,5,5,5,7,5,5,5,5,5,3,3,3,3,5,5,5,5,5,5,5,6,5,5,5,5,5,5,6,5,
8,5,8,5,8,6,7,5,7,5,7,5,7,5,7,7,7,5,6,5,6,5,6,5,6,5,6,5,8,5,
8,5,8,5,8,5,7,5,7,5,4,4,4,4,4,4,4,4,4,3,8,5,4,4,8,6,6,6,3,6,
3,6,4,6,4,6,3,9,5,9,5,9,5,6,7,5,7,5,7,5,7,5,9,7,7,4,7,4,7,4,
5,4,5,4,5,4,5,4,6,3,6,5,6,3,8,5,8,5,8,5,8,5,8,5,8,6,10,8,8,5,
8,6,5,6,5,6,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,6,5,6,6,6,
6,6,6,6,6,6,6,6,6,6,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,9,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,5,4,3,7,
5,8,5,8,5,8,5,8,5,8,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,8,5,10,7,7,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6, };
static unsigned short stb__times_11_latin_ext_h[560]={ 0,8,4,8,9,8,8,4,10,10,5,6,3,2,
2,8,8,7,7,8,7,8,8,8,8,8,6,7,6,3,6,8,10,7,7,8,7,7,7,8,7,7,8,7,
7,7,8,8,7,9,7,8,7,8,8,8,7,7,7,9,8,9,4,2,2,6,8,6,8,6,7,8,7,7,
10,7,7,5,5,6,8,8,5,6,7,6,6,6,5,8,5,10,10,10,3,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,8,9,8,6,7,
10,9,2,8,4,6,3,2,8,1,4,6,4,4,2,8,10,2,3,4,4,6,8,8,8,8,9,9,9,9,
9,9,7,9,9,9,9,9,9,9,9,9,7,10,10,10,10,10,10,5,8,10,10,10,10,9,7,8,8,8,
8,8,8,8,6,7,8,8,8,8,7,7,7,7,8,7,8,8,8,8,8,5,6,8,8,8,8,10,10,10,
8,8,9,8,9,7,10,8,10,8,10,8,10,8,9,8,7,8,8,8,9,8,9,8,9,7,9,8,10,10,
10,10,10,10,9,11,9,9,7,7,9,7,8,7,9,7,9,9,9,5,8,10,10,10,9,9,5,9,9,9,
9,7,7,7,7,7,7,10,7,9,7,10,7,7,8,8,9,8,10,8,10,8,8,6,9,7,9,7,9,7,
10,8,10,8,9,7,10,8,10,9,9,8,7,7,10,8,9,8,10,8,10,8,10,8,9,7,10,8,9,10,
9,9,7,9,7,9,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,7,7,10,7,7,7,
7,7,7,7,7,7,7,7,7,7,9,6,7,7,7,7,7,7,7,7,7,7,7,7,7,9,6,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,9,8,9,7,10,
8,10,8,10,9,10,10,10,10,10,10,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,11,10,9,8,10,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7, };
static unsigned short stb__times_11_latin_ext_s[560]={ 255,184,180,148,32,208,217,177,201,183,128,
63,192,223,220,193,247,31,35,90,52,151,145,122,139,70,253,123,76,185,21,
228,186,127,68,234,153,161,168,219,187,175,214,107,146,136,204,187,116,244,195,
181,180,157,1,128,98,89,82,70,242,252,149,227,216,217,115,247,109,241,76,
96,62,58,145,45,41,105,134,41,62,76,140,203,251,1,223,208,83,246,89,
235,246,40,206,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,255,253,12,
166,235,161,180,211,235,33,163,229,199,223,195,243,168,7,155,145,240,102,196,
213,195,159,173,70,172,24,15,10,101,110,123,142,158,167,94,176,184,191,198,
44,56,70,80,85,55,158,203,82,172,157,129,99,82,111,25,16,107,120,15,
37,31,25,19,13,7,1,55,1,233,227,221,215,231,7,247,27,187,235,178,
172,166,160,154,114,28,134,128,122,116,23,51,67,86,80,61,69,129,69,99,
58,116,32,187,20,149,9,145,1,185,239,232,226,138,44,153,64,104,200,22,
176,149,45,135,240,226,249,111,10,96,90,173,167,75,134,250,144,51,139,39,
34,29,95,49,129,124,144,247,240,121,222,218,211,18,122,117,110,105,87,252,
206,76,132,63,216,42,48,194,202,74,188,1,160,15,182,166,47,24,22,9,
82,1,129,168,75,174,245,6,149,180,15,165,119,151,26,154,181,93,38,226,
50,90,56,73,95,58,101,235,206,29,107,38,9,47,56,213,17,219,63,225,
241,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,140,193,193,195,
193,193,193,193,193,193,193,193,193,193,193,193,193,92,34,193,193,193,193,193,
193,193,193,193,193,193,193,193,82,14,193,193,193,193,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,217,197,
1,11,137,203,120,209,102,205,84,78,69,63,54,48,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,
193,193,193,1,42,229,239,34,43,193,193,193,193,193,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,193,
193,193,193,193,193,193,193,193,193, };
static unsigned short stb__times_11_latin_ext_t[560]={ 1,43,79,44,24,34,34,79,1,1,79,
79,79,79,79,43,43,71,71,53,71,53,53,53,53,53,71,71,79,79,79,
53,13,71,71,53,71,71,71,53,71,71,53,71,71,71,53,53,71,13,71,
53,71,53,62,53,71,71,71,24,53,13,79,79,79,71,53,71,53,71,71,
53,71,71,1,71,71,79,79,79,44,53,79,71,62,79,71,71,79,53,79,
1,1,13,79,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,1,43,34,
53,71,62,1,13,79,62,79,71,79,79,53,79,79,79,79,79,79,53,13,
79,79,79,79,79,53,62,62,62,24,24,24,24,24,24,62,24,24,24,24,
34,34,34,34,34,62,13,13,13,1,1,1,79,53,1,1,1,13,34,71,
53,53,53,53,53,53,53,79,71,43,43,43,43,62,71,62,71,43,62,43,
43,43,43,44,79,79,44,44,44,44,13,13,13,44,44,34,44,34,62,13,
53,13,44,1,44,1,44,34,44,62,34,34,34,34,44,34,53,34,62,34,
34,13,13,13,1,1,1,34,1,34,34,62,62,34,62,34,62,34,62,34,
34,34,79,53,13,13,13,23,23,79,23,23,23,34,62,62,62,62,62,53,
1,62,24,62,1,62,62,34,34,24,34,13,34,13,34,34,79,24,71,24,
62,24,62,13,44,13,34,34,62,13,44,1,24,24,44,62,62,1,44,13,
44,13,44,13,44,13,44,13,62,13,44,24,13,24,24,62,24,62,24,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,44,62,62,1,
62,62,62,62,62,62,62,62,62,62,62,62,62,24,79,62,62,62,62,62,
62,62,62,62,62,62,62,62,24,79,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,13,43,
34,71,1,43,1,43,1,24,1,1,1,1,1,1,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,1,1,23,43,1,53,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62, };
static unsigned short stb__times_11_latin_ext_a[560]={ 40,53,65,79,79,132,124,29,
53,53,79,90,40,53,40,44,79,79,79,79,79,79,79,79,
79,79,44,44,90,90,90,71,146,115,106,106,115,97,88,115,
115,53,62,115,97,141,115,115,88,115,106,88,97,115,115,150,
115,115,97,53,44,53,75,79,53,71,79,71,79,71,53,79,
79,44,44,79,44,124,79,79,79,79,53,62,44,79,79,115,
79,79,71,76,32,76,86,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,40,53,79,79,79,79,32,79,
53,121,44,79,90,53,121,79,64,87,48,48,53,92,72,40,
53,48,49,79,119,119,119,71,115,115,115,115,115,115,141,106,
97,97,97,97,53,53,53,53,115,115,115,115,115,115,115,90,
115,115,115,115,115,115,88,79,71,71,71,71,71,71,106,71,
71,71,71,71,44,44,44,44,79,79,79,79,79,79,79,87,
79,79,79,79,79,79,79,79,115,71,115,71,115,71,106,71,
106,71,106,71,106,71,115,103,115,79,97,71,97,71,97,71,
97,71,97,71,115,79,115,79,115,79,115,79,115,79,115,79,
53,44,53,44,53,44,53,44,53,44,113,88,62,44,115,79,
79,97,44,97,44,97,65,97,55,97,44,115,79,115,79,115,
79,96,112,79,115,79,115,79,115,79,141,115,106,53,106,53,
106,53,88,62,88,62,88,62,88,62,97,44,97,68,97,44,
115,79,115,79,115,79,115,79,115,79,115,79,150,115,115,79,
115,97,71,97,71,97,71,44,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,115,124,124,79,124,124,124,124,124,
124,124,124,124,124,124,124,124,115,84,124,124,124,124,124,124,
124,124,124,124,124,124,124,123,86,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,115,71,53,44,115,79,115,79,115,79,115,
79,115,79,115,79,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,115,71,141,106,115,79,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,
124,124,124,124,124,124,124,124, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_11_latin_ext_BITMAP_HEIGHT or STB_FONT_times_11_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_11_latin_ext(stb_fontchar font[STB_FONT_times_11_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_times_11_latin_ext_BITMAP_HEIGHT][STB_FONT_times_11_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_11_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_11_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_11_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_11_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_11_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_11_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_11_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__times_11_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__times_11_latin_ext_s[i] + stb__times_11_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__times_11_latin_ext_t[i] + stb__times_11_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__times_11_latin_ext_x[i];
            font[i].y0 = stb__times_11_latin_ext_y[i];
            font[i].x1 = stb__times_11_latin_ext_x[i] + stb__times_11_latin_ext_w[i];
            font[i].y1 = stb__times_11_latin_ext_y[i] + stb__times_11_latin_ext_h[i];
            font[i].advance_int = (stb__times_11_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__times_11_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_11_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_11_latin_ext_s[i] + stb__times_11_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_11_latin_ext_t[i] + stb__times_11_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_11_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__times_11_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__times_11_latin_ext_x[i] + stb__times_11_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__times_11_latin_ext_y[i] + stb__times_11_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__times_11_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_11_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_11_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_11_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_11_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_11_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_11_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_11_latin_ext_LINE_SPACING
#endif
