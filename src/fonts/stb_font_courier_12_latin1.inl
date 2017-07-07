// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_12_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_12_latin1'.
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

#define STB_FONT_courier_12_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_12_latin1_BITMAP_HEIGHT         46
#define STB_FONT_courier_12_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_12_latin1_FIRST_CHAR            32
#define STB_FONT_courier_12_latin1_NUM_CHARS            224

#define STB_FONT_courier_12_latin1_LINE_SPACING           6

static unsigned int stb__courier_12_latin1_pixels[]={
    0x00080008,0x0c600010,0x40198510,0x04000200,0x10aa38c4,0x4186a001,
    0x08000800,0x40000014,0x55010000,0x10040811,0x53870040,0x21cc0e01,
    0x101a8518,0x2e20aa07,0x2ee03703,0x81403180,0x1b814c03,0x00e20e20,
    0x41c15438,0x45050a23,0x980ee238,0x40e20cc3,0x9817702a,0x5540bb82,
    0x20a223aa,0x2aea0e62,0x20603883,0x26202a00,0x04030028,0x40422020,
    0xa8820808,0x98d44531,0x080dd5c2,0x92008020,0x0e3b89c9,0x23815013,
    0x171c1418,0x22020104,0x26166e61,0x10202082,0x71285104,0x40228395,
    0x2a030622,0x395710aa,0x5cc0ab98,0x44b2aa0a,0x27261cab,0x713933b8,
    0x8872ae27,0x27261cab,0x4288e3b8,0x261b0a23,0x43755932,0x079503ca,
    0x3862382e,0x8e1c0f2a,0x482a1418,0x564c1e54,0x014511ba,0x564c1573,
    0x459551ba,0x40262caa,0x655461c2,0x36250262,0x0a310590,0x1c10e087,
    0x11c38514,0x70a311c3,0x0c470e14,0x1ca20e51,0x06238e1c,0x02ae0157,
    0x3862386a,0x7054055c,0x4870a064,0x22380ab8,0x08375121,0x0a0c470e,
    0x21402a14,0x8130a009,0x1881c662,0x2ee60985,0x1425dcc4,0x188e0985,
    0x0985188e,0x188e0985,0x28a81454,0x4ab8a258,0x23105188,0x188e0b82,
    0x8e05188e,0x05450623,0x2e0a3112,0x0a81444a,0x95712ee6,0x0e2140a0,
    0x20c130a1,0x77062382,0x84c28c40,0x0e288e28,0x4704c28a,0x85188e18,
    0x8e098509,0xb102c418,0x270aaae0,0xb84aab82,0x31c484aa,0x095571c1,
    0x4506238a,0x2aae1a83,0x21885384,0x38a2388c,0x0a05029c,0x2146eb26,
    0x2e60a143,0x8c40503a,0x366ae1c2,0x50766ae1,0x04c70e14,0x51c284c7,
    0x88131c38,0x01c0a202,0x4198e287,0x4c288663,0x4c71c2ab,0x43872881,
    0x238e0332,0x04ca1c19,0xb3570931,0x2050a1c3,0x95710e02,0x6c414283,
    0x2602829b,0x10395711,0x96554040,0x5cc1cab8,0x1155cc2a,0x55c43957,
    0x1155cc1c,0x59510595,0x59305930,0x5432e755,0x32a1970c,0x4aa04010,
    0x501950cb,0x0284086a,0x0ca865c2,0x06755593,0xac980814,0x459553aa,
    0x02982caa,0x16554201,0x32a20422,0x0041dd42,0x40080000,0x10040200,
    0x00000080,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x062e2000,0x1080a802,0x2310c201,0x40e60703,
    0x50315010,0x0a9c0201,0x40e01088,0xa8315039,0x50150a22,0x06660115,
    0xa80660a8,0x202aa20b,0x4408099a,0x50ba82aa,0x51144555,0x05406a01,
    0x820e6070,0x54c09840,0x1130502b,0x02baba81,0x226202a0,0x54418442,
    0x7530502b,0x03088005,0x05131015,0x26198317,0x02888284,0x0c402211,
    0x8638cc0e,0x2a1546c3,0x5c073a9b,0x314450c1,0x402a2a06,0x13101502,
    0x26188985,0x2e63b88e,0x4c0aa80a,0x2b8940ab,0xa8375593,0xa80aa80a,
    0x40aa980a,0x40aa80aa,0x02aa03ca,0x02aa02aa,0x44015571,0x950a2533,
    0x5c40ea07,0x0545c189,0x711c0545,0xb8c288aa,0x0e014c08,0x99c0d4c1,
    0x53055cc1,0x451298a2,0x13b85129,0x0e387043,0x14e131c1,0x21c70c47,
    0x2e1c70e3,0x5c2e2c88,0x2e05c2e0,0x4170b80a,0xb85c170b,0xb826ee20,
    0x02a38e20,0x35188157,0x1d837138,0x22098e35,0x31555c2c,0xb8e6a601,
    0x142882ba,0xb8b82aa6,0x2a387042,0xa8e0a8e0,0x986226e0,0x2aae64bb,
    0x992ee61a,0x255c50a8,0x4c6aaae6,0x5731aaab,0x38866355,0x28512851,
    0x50a21462,0x50a250a2,0x0171e654,0x8c4151c3,0x26312882,0x73890661,
    0x54054054,0x41d4c262,0x50663509,0x06a2a388,0x97730547,0x2a382a38,
    0x5ce0a8e0,0x0a1c5118,0x11c87144,0x202829c3,0x10c40a02,0x11431141,
    0x142555c3,0x14311431,0x11c3b831,0x2ae0a8e0,0x446aa04a,0x728b06a2,
    0x2a809814,0x215070e2,0x44383119,0x311c18c3,0x151c38a2,0x151c151c,
    0x2ae1b89c,0x2eaaa1d9,0x44766ae1,0x8a1c3abc,0x2aa1baaa,0x2eaaa1ba,
    0x530a6aa1,0x43aa9875,0x75530663,0x54c3aa98,0x5cc3b83a,0x5d4c932a,
    0x04198e2c,0x24aaba85,0x710baac9,0x8155dc57,0x9556542a,0x1d5c2abb,
    0x5310e614,0x2e1dc64c,0x2ea61d9a,0x8b2ea62c,0x3932cba9,0x0080106e,
    0x32604301,0x20083aaa,0x04000200,0x950cb810,0x10040101,0x20400660,
    0x1950cb80,0x000054cc,0x2a660000,0x00000080,0x20080000,0x00080200,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x2aa00000,0x00805cc0,0x02017303,0x01002008,
    0x28944000,0x80406010,0x5026a600,0x80660c40,0x110730b8,0x21037011,
    0x01330100,0x40220066,0x26628aa8,0x888041ba,0x40820888,0x408880a9,
    0x4c70a818,0x0a9aa871,0x384c6e72,0x551d5554,0x655c4153,0x98655541,
    0x54c3b89c,0x5703142c,0x70503883,0x0a615057,0x0140a031,0x664c288a,
    0x204c544a,0x2aa88131,0x880500cc,0x391c2aac,0x362530d8,0xc8202590,
    0xab850391,0x8ab2e25a,0x4c2638e3,0x382289b8,0x94289225,0x21453331,
    0x11c13143,0x418a0e03,0x848a9809,0x20abc882,0x2606a602,0x82e2281a,
    0x25510728,0x54c0d4c1,0x20dcd441,0x22287128,0x0cc66283,0x331c3833,
    0x18a0808a,0x88512850,0x262cd881,0x4ccca572,0xa8b8d409,0x20d40263,
    0x26098509,0x4062381a,0xcb88a283,0x65dc4141,0x0a28221b,0x5cc280a0,
    0x28a81aa8,0x0a03c8a8,0x4c71c828,0x2e61aa99,0x56541ba8,0x58371450,
    0x808750a2,0x140eaae0,0x0b818838,0x2519a987,0x82a0989a,0x402a399b,
    0x2142609a,0x8e0b8809,0xac838218,0x2a0e22cb,0x41105010,0x206aaa63,
    0x22e20a02,0x57048839,0x05014037,0x262e20c5,0x0c445cc3,0x2aa6282e,
    0x21555c19,0x82021b98,0x5050288b,0x14703101,0x263130c8,0x22299c02,
    0x51331843,0x0c450e14,0x0a2884c7,0xa822802a,0xbc88281b,0x50140703,
    0x1441dc30,0x0a022528,0x43062828,0x8a0a0c3b,0x02831019,0x08086e62,
    0x1985018a,0x31bab831,0x0e54c555,0x5d02a6aa,0x564c085c,0x82a6aa1b,
    0x5641cab8,0x2155cc3a,0x20281aab,0x1141bbbd,0x65c37777,0xb7505302,
    0x05edd417,0x0b2e0c88,0x86ef66ea,0x2ea0bdba,0x323b10bd,0x91019102,
    0x0ddecc33,0x0b664b88,0x1130e5c4,0x64762111,0x642f2ea2,0x00081bbb,
    0x5c040002,0x2000101b,0x20100400,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00a80000,0x880a60c4,
    0x0dcc289a,0x02054c01,0x22222881,0x400404c0,0x404440ab,0x20444419,
    0x20080888,0x01100200,0x04010008,0x88044022,0x50512880,0x05314c15,
    0x55cc5355,0x2a20aa80,0x809a982a,0x80311441,0x44e02808,0x43620545,
    0x432a0e2c,0x6456a0ca,0x85131baa,0x238592c8,0x510b2a63,0x1d655cc5,
    0x65495579,0x2590d883,0x644950bb,0xaabb82aa,0xb3254950,0x175591dc,
    0x591072a2,0x17062875,0x8509442e,0x2820c88b,0xa851c71c,0x5a810530,
    0x5306e262,0x4c375501,0x42ac98e0,0x45038519,0x83114019,0x28035282,
    0x84c53828,0xa8304c52,0x2289980a,0x22852889,0x22504409,0x13b8551a,
    0x2050e143,0x88628262,0x31755141,0x54c538c4,0x2eef264a,0x02837711,
    0x44026666,0x320a01a9,0x05162870,0x2a6e61d4,0x21a828a0,0x750503ab,
    0x42828805,0x260a0518,0x028c40ba,0x52a98875,0x088398b8,0x226a2253,
    0x50c44d42,0xaab81428,0x22285143,0x2a0aaaa1,0x438a2513,0x05054102,
    0x4104cccc,0x141402d8,0x142aa985,0x10aa50a0,0x8b83a0a5,0x35170502,
    0x32140a60,0x13050499,0x04bbb813,0x51355077,0xc881b9b8,0x14e6221b,
    0x2850c5ca,0x4c45c114,0x98b2ea61,0x859542aa,0x4d5c2abc,0x46eaa61c,
    0x554c3aac,0x135c081a,0x14140353,0x500a1405,0x540cba98,0x50a14c0a,
    0x260e2828,0x73310a02,0x140260a0,0xb8719811,0x20e28372,0x0a108808,
    0x14286a25,0x0850a28a,0x40040000,0x20080400,0x23700600,0x85e5d43c,
    0xbb8591d8,0x710ef6a2,0x01cc0059,0xa9dddecc,0x4cb663cb,0x7525dec3,
    0xb8897079,0x2e15e42c,0x3661950c,0x0c86c790,0x2e0c8b66,0xda865c2c,
    0xd86e3b30,0x2f6e23bb,0x3777b34b,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x1800a8a0,0x2a0a8aa8,0x2a60b8b9,0x8041183a,0x0441b9a8,
    0x21710611,0x0aa1731a,0x26635135,0x8a130999,0x7506a61a,0x26198181,
    0x0cc51332,0x220aa86a,0xaa804088,0x2dc150aa,0x41555555,0x111c10ba,
    0x5ddddcc2,0x00000001,0x2a82a800,0x45588140,0x5128a929,0x2ee398b8,
    0x2238e44b,0x0e632088,0x2a287133,0x26212c80,0x02ee3999,0xa892a613,
    0x1102ae38,0x34e5d6a3,0x942a1f0a,0xd71aaaa8,0x41555514,0x88888622,
    0x2a3a8408,0x0000c220,0x00000000,0x15c40173,0x5cc26e66,0x94263ada,
    0x24ce4382,0x5431438a,0x1dc6c2cc,0x81c2612a,0x05dc5003,0x9064dc66,
    0x221c2a37,0x2c5d5261,0x26a2498a,0x03555512,0x00000053,0x00000000,
    0x20000000,0x06e200b9,0x48e13733,0x070a5098,0x70a83293,0x98770628,
    0x14dc4194,0x00280cd4,0x13514263,0xb8800044,0x21844609,0x010130b9,
    0x00000000,0x00000000,0x00000000,0x805502ea,0x1d65d542,0xbc865277,
    0x71ca20cb,0x47621755,0x7388412c,0x42d8ec41,0x057b504a,0x00000000,
    0x00000000,0x00000000,0x00000000,0x80000000,0x206002a2,0x00000020,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_12_latin1_x[224]={ 0,2,1,0,1,0,1,2,3,1,0,0,1,0,
2,1,1,1,0,1,1,1,1,1,1,1,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,2,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,1,0,1,0,
2,0,1,0,0,0,0,0,0,-1,1,0,1,1,2,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__courier_12_latin1_y[224]={ 8,1,1,1,0,1,2,1,1,1,1,2,6,4,
6,0,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,10,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,1,1,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,3,1,1,2,1,
1,1,1,1,1,3,4,4,1,0,0,1,1,1,1,3,1,4,7,1,1,3,1,1,1,3,-1,-1,-1,0,
0,-1,1,1,-1,-1,-1,0,-1,-1,-1,0,1,0,-1,-1,-1,0,0,3,1,-1,-1,-1,0,-1,1,1,1,1,
1,1,1,0,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,
 };
static unsigned short stb__courier_12_latin1_w[224]={ 0,2,4,6,5,6,5,2,2,3,4,6,3,6,
2,5,5,5,6,5,5,5,5,5,5,5,2,3,6,6,6,4,5,7,6,6,6,6,6,6,6,5,7,7,
6,7,6,6,6,6,7,6,6,6,7,7,6,6,5,2,4,2,5,7,3,6,6,6,7,6,5,6,6,6,
5,7,6,7,6,6,6,7,6,5,6,6,7,7,6,7,5,3,2,3,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,2,4,6,5,6,
2,6,4,7,4,6,6,6,7,8,4,6,4,4,3,6,6,2,2,4,4,6,7,7,7,4,7,7,7,7,
7,7,7,6,6,6,6,6,5,5,5,5,7,6,6,6,6,6,6,4,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,7,
 };
static unsigned short stb__courier_12_latin1_h[224]={ 0,8,4,8,9,8,7,4,9,9,5,6,4,2,
3,9,8,7,7,8,7,8,8,8,8,8,6,7,6,3,6,8,8,7,7,8,7,7,7,8,7,7,8,7,
7,7,7,8,7,9,7,8,7,8,7,7,7,7,7,9,9,9,4,1,2,6,8,6,8,6,7,7,7,7,
9,7,7,5,5,6,7,7,5,6,8,6,5,6,5,7,5,9,9,9,2,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,8,7,7,5,7,
9,8,2,8,4,5,4,2,8,2,4,7,4,4,2,7,8,2,3,4,4,5,7,7,7,8,9,9,9,8,
8,9,7,9,9,9,9,8,9,9,9,8,7,8,10,10,10,9,9,4,8,10,10,10,9,9,7,8,8,8,
8,8,8,9,6,7,8,8,8,8,7,7,7,7,8,7,8,8,8,8,8,6,6,8,8,8,8,9,9,9,
 };
static unsigned short stb__courier_12_latin1_s[224]={ 236,168,139,156,154,1,43,136,132,89,64,
15,149,171,165,126,208,68,82,214,95,234,240,246,8,14,252,57,1,158,8,
28,33,115,182,39,168,61,108,227,235,89,75,74,175,153,161,54,146,209,138,
61,101,68,49,130,123,36,249,116,111,100,125,210,178,218,201,238,193,225,30,
23,16,9,223,1,242,30,57,196,214,206,91,232,1,189,83,203,76,145,38,
119,123,150,194,228,228,228,228,228,228,228,228,228,228,228,228,228,228,228,228,
228,228,228,228,228,228,228,228,228,228,228,228,228,228,228,228,228,236,252,97,
90,51,221,200,186,205,46,115,44,98,171,20,185,120,102,131,110,201,83,220,
182,168,144,153,69,137,190,182,163,73,81,135,178,127,103,153,186,66,143,167,
78,174,203,180,250,198,43,29,1,22,193,229,105,71,15,8,36,93,216,109,
8,15,236,243,50,64,160,22,116,57,85,92,99,123,130,161,168,106,175,113,
142,149,120,135,245,211,171,22,29,36,51,59,43, };
static unsigned short stb__courier_12_latin1_t[224]={ 10,11,38,11,1,12,30,38,1,1,38,
38,38,38,38,1,11,30,30,11,30,11,11,11,21,21,30,30,38,38,38,
21,21,30,30,21,30,30,30,11,21,30,21,30,30,30,30,21,30,1,30,
21,30,21,30,30,30,30,21,1,1,1,38,38,38,30,11,30,11,30,30,
30,30,30,1,30,21,38,38,30,21,21,38,30,21,30,38,30,38,21,38,
1,1,1,38,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,
21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,10,11,21,
21,38,21,1,11,38,21,38,38,38,38,21,38,38,21,38,38,38,21,11,
38,38,38,38,38,21,21,21,11,1,1,1,11,11,1,21,1,1,1,1,
11,1,1,1,1,21,11,1,1,1,1,1,38,11,1,1,1,1,1,21,
12,12,1,1,11,11,1,38,21,11,11,11,11,21,21,21,21,11,21,11,
11,11,11,11,30,30,11,12,12,12,1,1,1, };
static unsigned short stb__courier_12_latin1_a[224]={ 102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_12_latin1_BITMAP_HEIGHT or STB_FONT_courier_12_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_12_latin1(stb_fontchar font[STB_FONT_courier_12_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_12_latin1_BITMAP_HEIGHT][STB_FONT_courier_12_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_12_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_12_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_12_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_12_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_12_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_12_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_12_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_12_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_12_latin1_s[i] + stb__courier_12_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_12_latin1_t[i] + stb__courier_12_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_12_latin1_x[i];
            font[i].y0 = stb__courier_12_latin1_y[i];
            font[i].x1 = stb__courier_12_latin1_x[i] + stb__courier_12_latin1_w[i];
            font[i].y1 = stb__courier_12_latin1_y[i] + stb__courier_12_latin1_h[i];
            font[i].advance_int = (stb__courier_12_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_12_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_12_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_12_latin1_s[i] + stb__courier_12_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_12_latin1_t[i] + stb__courier_12_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_12_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_12_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_12_latin1_x[i] + stb__courier_12_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_12_latin1_y[i] + stb__courier_12_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_12_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_12_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_12_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_12_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_12_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_12_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_12_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_12_latin1_LINE_SPACING
#endif

