// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_18_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_18_latin1'.
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

#define STB_FONT_courier_18_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_18_latin1_BITMAP_HEIGHT         84
#define STB_FONT_courier_18_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_18_latin1_FIRST_CHAR            32
#define STB_FONT_courier_18_latin1_NUM_CHARS            224

#define STB_FONT_courier_18_latin1_LINE_SPACING           8

static unsigned int stb__courier_18_latin1_pixels[]={
    0x40010060,0x40060000,0x0c011000,0x22013140,0x001ea810,0x40008002,
    0x053ec808,0x21911774,0x81450722,0x40000809,0x800a8e01,0x00c00cc3,
    0x10004060,0x026cc03b,0x416602cc,0x00ee402c,0x80950166,0x2a60350c,
    0x2001a838,0x16e400d8,0x5200d880,0x4170900c,0x2619120c,0x04d98584,
    0x07203b95,0x2a80171c,0x40772ae6,0x2095002c,0x00d800d8,0x9302c4ea,
    0x15c05100,0x260570d8,0x00093004,0x35053350,0x32058800,0x04880570,
    0x21209148,0x0c890644,0x9d43a83a,0x98b0dc58,0x0882ebbc,0x00220b00,
    0x807500ae,0x00088058,0x22000000,0x00004400,0xd31f5c00,0x5055370b,
    0x0019bb73,0x90000000,0x22424064,0x5c19120c,0x85000363,0x4433121a,
    0x2600eccc,0x07666443,0x40000000,0x220eccc8,0x27d913dd,0x997a63eb,
    0x3222eeee,0x66440ecc,0x4f7620ec,0x7bb13ec8,0xb858fb22,0x332f6a21,
    0x4b317542,0x6ccccec8,0x301f664c,0x24807d99,0x64484839,0x15987120,
    0xccecc88d,0x916d4512,0xc8836201,0x20d88b00,0x3b3260c8,0x99d99103,
    0x333b3225,0x19106c42,0x216240d4,0x6c4a601b,0x06c43220,0x240d4191,
    0x8371206a,0x1ac9c984,0x1215c2d4,0x402cd412,0x1224059a,0x20c8b312,
    0x2cda203b,0x592a8190,0x05664455,0x73075039,0xa83a81c8,0x200c8059,
    0x7503900c,0x06e240d4,0x03929809,0x8ea07275,0x40d4481a,0xa406e484,
    0x3882a80b,0xaa40a124,0x201aa401,0x971214c4,0x403660c8,0x0640b368,
    0x302aa4aa,0xc8581639,0x290b02c0,0x9006401a,0x2a581601,0x06e48481,
    0xb5816530,0x890352c0,0x91b8481a,0x59d9d930,0x240b85a8,0x4091c409,
    0x58481238,0x48322424,0x03456614,0x5392a819,0x205a4045,0xb02c2445,
    0x19012388,0x20580640,0x2e1206a5,0x16530091,0x352c0b58,0x0481a890,
    0x04a40379,0x212a17b5,0x82e04cce,0x20482e04,0x12122a84,0xa8322419,
    0x4c0c81a3,0x12659713,0x64581673,0x17160580,0xc8032024,0x352c0b00,
    0x006f2090,0x16b02ca6,0x51206a58,0x016e0903,0x6d4d4129,0xd01c901c,
    0x3a05b999,0x0902dccc,0x06448496,0xb8360c89,0x05881902,0xc8f33322,
    0x41223a82,0x6743a82c,0x03202dcc,0x505900c8,0xb8241cc7,0x0b253005,
    0x1d4164ea,0x83989073,0x94803704,0x424006a0,0x2120a61a,0x20904829,
    0x0c89091a,0x11621912,0x8b20320b,0x0d881900,0x101b8326,0x53064c1b,
    0x90064090,0xc9836201,0x5c0a62c0,0x36255001,0x06c43260,0x14c58193,
    0x02c0a62c,0x003504a4,0x80c86a12,0x05c0640b,0xcea40999,0x591c3622,
    0x06e02e38,0x26ee4032,0xccb880c8,0x2e20240d,0x40640dcc,0x6401900b,
    0x3732e200,0x03bbe980,0x220d8016,0x5c40dccb,0xbe980dcc,0x777d303b,
    0x003ddcb8,0x403376a0,0xdccccec8,0x6dc39d71,0x5c39d71d,0x002001dd,
    0xc8800000,0x8002ccec,0x00804401,0x39d70110,0xcc88eedc,0xd9912cce,
    0x00440599,0x3ddcb804,0x205b9950,0x40044008,0x00001000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x4038a600,0x04006000,0x0a200440,0x70000040,0x00002003,0x00020004,
    0x00800540,0x00041c53,0x29801001,0x1e66540e,0x033732e2,0x00100547,
    0x714c3b00,0x54026cc0,0x2a04a804,0xb81bbbbc,0x00d98038,0x05281366,
    0x4d980950,0x54006cc0,0x5026cc04,0x2a01b995,0x4c1c5304,0x3025400d,
    0x8a607979,0xd31c2983,0xb8e07151,0x98036600,0x0005d04d,0x3a816275,
    0x0e603a80,0x00e6e076,0xb34982c4,0x7500ea60,0x80b34980,0x201d4058,
    0x0100b349,0x440001d4,0xc980ea05,0x4c001660,0x22a59041,0x0b100003,
    0x4ec2cd26,0x7d913dd8,0x00000000,0x00c02609,0x00400000,0x00000000,
    0x9b6a0000,0x22003ec8,0x002ccecc,0x2b80e800,0xd9999d91,0x2c8165d4,
    0xd9930715,0xb0000007,0xc89206a3,0x226cccce,0x26ccccec,0x8bae1ed8,
    0x7d993004,0x81ccb880,0xdb81cddb,0x997101cd,0x0732e203,0x11f547b1,
    0xb11f547b,0x32a1f547,0x3376e242,0x36e03201,0x39b501cd,0x091260b0,
    0x881751c9,0x2a038a9e,0x0e6d4059,0x1c81cda8,0x90909035,0xa8b09090,
    0x26a00242,0x2b832205,0xc8103204,0x85706440,0x120ae0c8,0x12121212,
    0x24195512,0x03201902,0x21d81902,0x4480e23b,0xb8711424,0x01c6d442,
    0x70ec06a9,0x90ee1d87,0x921206a1,0x82849050,0x00b09148,0x02e03548,
    0x80d4440e,0x405c1a88,0x241c05c3,0x24242424,0x4922aa24,0x32035110,
    0xa86a2200,0x2982c481,0x515c0924,0x22071503,0x9206a123,0x3514481a,
    0x90249090,0x0326e024,0x91c40076,0x33333360,0x3b33720d,0x0f666e41,
    0x37333336,0x33333360,0x2424240d,0x2a242424,0x9b912372,0x203203d9,
    0x121eccdc,0x170190d4,0x4c04cce8,0x38a80b9c,0x82424170,0x406a091a,
    0xcce8481a,0x01333a04,0x206c40b6,0x20905c2b,0x2a05c00b,0xb83502e1,
    0x9000b800,0x90909090,0x2562a890,0x1901a817,0x170d40b8,0x3064c190,
    0xc801c909,0x3a071500,0x05c2dccc,0x0c80b864,0x4241cc2a,0x00e480e4,
    0xbce9802e,0xdccce82d,0x90884882,0xb1121d88,0x20884883,0x22408848,
    0x425c484b,0xa8aa25c4,0x03b1124a,0x1d889032,0xb1091122,0x2a1205b7,
    0x2a038331,0x44829838,0x89124448,0x4593e248,0x41a84829,0x01701a84,
    0x20a60370,0x99779304,0x6dd5de4c,0xb7577932,0x4cbbc985,0x84cbbc98,
    0x42e9bbca,0x42e9bbca,0x22e9bbca,0x7932ec2a,0x1905b757,0xdbabbc98,
    0x02f2f262,0x848106dc,0x3955931a,0x15939510,0x2605c064,0x64c0bcbc,
    0x26040bcb,0x50903bbe,0x701a8483,0x90488801,0x04401701,0x40010010,
    0x40088008,0x80088008,0x47bb1008,0x32200879,0x0042ccec,0x5de5c008,
    0x99d911cc,0x00003b99,0x36e1ceb8,0x0080081d,0x9d910080,0x3223b999,
    0x41dcccce,0x100cceca,0x439d7057,0x00001ddb,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00660000,
    0x0401884c,0x100bb98e,0x305d8143,0x10026001,0x1cb88143,0x88540130,
    0x883bb501,0x5c801ccb,0x3bbae000,0x326ecc0d,0x007ddddd,0xc9839b70,
    0x1310001c,0x00880040,0x01100098,0x403b9573,0x3260731b,0x28a1cccb,
    0x64122530,0x0dccbb84,0x01ecadc8,0x91c82473,0x0dccba81,0x3a82985c,
    0x00643836,0xddcc8824,0x3b50120c,0xe8388330,0x98643700,0x40530323,
    0x6544cacc,0xbca84ccb,0x56e41bbb,0x77b301ec,0x000003b7,0x44d5064c,
    0x000000e2,0x70cce402,0x71240005,0x89000040,0x200e2039,0x0482a804,
    0x03700162,0x24e62407,0x24053122,0x22cc486a,0x4321d839,0x85985710,
    0x07d9931c,0x43ea8f62,0xa82f220e,0x336a00bb,0x36a01101,0x4dc55c1c,
    0xcb881b0a,0x02e2901c,0xb7039bb7,0x0909039b,0x377660e4,0xc82a8048,
    0x0015c198,0x57160012,0xeeeb9216,0x44e200ee,0x09824183,0x6ce62a57,
    0x59a80120,0xb1624240,0x0eea0531,0x1541dc3b,0x52c770ec,0x83221b94,
    0x85d9482b,0x19020640,0x764241cc,0x6c8864c3,0xadc82a80,0x5991b0cb,
    0x0eec8900,0x5c997b30,0x00531aa1,0x00ab8722,0x104d6012,0x5200486e,
    0x8921201a,0x75148723,0x49035017,0x40d40cc8,0x224bb924,0x120e02e2,
    0x03511057,0x82986a22,0x06c19304,0x00aa01e2,0x398ee4e2,0x805c06a0,
    0x5ec4bad9,0x00a60cbc,0x32e2032a,0x05480484,0x710048a2,0x48909024,
    0x309a4c57,0x23504877,0x46a0900c,0x21b854a5,0x0dcccccd,0x99b92424,
    0xeccdc83d,0x90120e21,0x5424582c,0x90729002,0x20170240,0x34221cc5,
    0x401200a6,0x9ac02c48,0xc8b0dc21,0x0482e4dc,0x89371212,0x0b8a382c,
    0x05c090c8,0x0c9ab864,0x000b8b17,0x3502e909,0x8906a05c,0x20b24019,
    0x800d4246,0x12048374,0x484880b8,0x00298950,0x03b12050,0x237552b8,
    0xd0d406c5,0x1205b999,0x2cc69897,0x22447144,0x22906e48,0x10722444,
    0x08848857,0x222524a4,0x83b1121d,0x4c08920c,0xc8d70ae2,0x2a14c240,
    0x53048911,0x544805c0,0x1c40d981,0x10f20540,0x15c0d889,0x4c2b8839,
    0x8298d40c,0xd3779504,0x165e56c5,0xc9817550,0x32e20bcb,0x32f261cc,
    0xecbec80b,0x99779301,0x6e547644,0xb7577931,0x2eaef265,0x8b6f622d,
    0xb83cbec8,0x20cdaebd,0xd701bbcc,0xcbda8797,0x05c01700,0x2e3cbc88,
    0x59700deb,0x227d41b9,0x80ccbbab,0xc82dbce9,0xd301ecbe,0x0321975b,
    0x8804402e,0x20040021,0x80040000,0x00110008,0x00400402,0x0c00c008,
    0x00800440,0x664c0004,0x20104cce,0x01806001,0x80088004,0x41310008,
    0x376e1ceb,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x3aa00000,0x5d400001,
    0x000201a9,0x6c020010,0x32a00882,0x00000aac,0x1f5c0600,0x80440bd3,
    0x019502a2,0x7b100980,0x37751f54,0x6e440000,0x3d50dc9d,0x65419bb7,
    0x55c00000,0x223aaaaa,0xb1006a2c,0x88fb227b,0x1b103dda,0x3b006e40,
    0x45b01900,0x640eccc8,0xbd903e21,0xdd88d99b,0x03203ccc,0xbc80dc2c,
    0x206e482d,0x32ea000a,0x048480dc,0x4cdda809,0x1b221930,0x54598baa,
    0x21ed8800,0x218062eb,0x2006a6f9,0x90c4481a,0xb100d881,0x01c80721,
    0x83620064,0x030510c8,0x1a848a72,0x700c8154,0x04550483,0x3300a800,
    0x89090040,0x260a81d9,0x8819009b,0x22b85a87,0x4581500a,0xa8300c2a,
    0x0b76a6a0,0x36a1206a,0x0000049c,0x2f36e200,0x3a81c821,0x26e60017,
    0x1206a0e2,0x0dc90064,0x775c01a8,0x87901500,0x903ddabc,0x3c892090,
    0x21e5d64c,0x10550b04,0x0b620547,0x00c24522,0x263ea803,0xb1240d45,
    0xdd71b265,0x403bae01,0x41900eeb,0xb02c322a,0x4c5c006a,0x5035019a,
    0x333b32e3,0x2048dc1c,0x30170039,0x4036a157,0x2120aa3f,0x6d4e66a4,
    0x70dc2980,0x85a87881,0x2e15730b,0x0326e00c,0x82a61806,0x06a0b85a,
    0x80e80b92,0x2005c00b,0x0c80900b,0x33092c0b,0x905bb348,0x40d499bb,
    0x80de400c,0x5c02cecc,0x3c999980,0xb090b0b7,0x6c44c4b8,0x44298b72,
    0x36cc7624,0x24a85ed4,0xab9da999,0x56fd541b,0x7ec300c1,0xa8e20ea0,
    0x05c12481,0x002e005c,0x3b012017,0x33265816,0xadce83bb,0x17035008,
    0x05b80190,0x40170048,0x909710da,0x3779f090,0x730cb85d,0x215c2989,
    0xa848cdb8,0x9701cda9,0x01903884,0x85f11806,0x0e61a84a,0x2e070392,
    0x2e005c00,0xb0443900,0x20ea0b23,0x8a65300b,0x82c0d418,0x400dc00c,
    0x26017004,0x48484a42,0x0aa008c8,0xb99b3129,0x06a12007,0x20e206a0,
    0x0c1ccecb,0x3ea1aa30,0x8a62c240,0x0b81c429,0x02e005c0,0x360bcdb8,
    0x064c1b12,0x98641222,0xb8350a62,0x00b00301,0x0b809855,0x81b57100,
    0x80048484,0x2e60dab8,0x54240009,0x80730001,0xa8c0300c,0x5e6d6d40,
    0x3bbe981c,0x00bbbba8,0x400b8017,0x6c06400b,0x03732e21,0x2bae06e2,
    0x22dccdd9,0x42cccdd8,0x1ccccccb,0x5407bb97,0x264ccccf,0x004ccecc,
    0x91f641b3,0x2000485d,0x99bb50d9,0x433b2a00,0x2000cdda,0x64c3aad8,
    0x999a83ce,0x22002999,0x00800800,0x4999d993,0x24ccecc9,0x04ccecc9,
    0x00088007,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x80eeb800,0x000002e9,0x4c00fa20,0x884e8cdc,
    0x00001cdb,0x0001b510,0x00000000,0x00001310,0x00000000,0x00000000,
    0x000003d8,0x80640b22,0x66ed4039,0x9d915ccc,0x0090d999,0x41366193,
    0xcccea80c,0x333b220c,0x32b220cc,0x667666c0,0x0fb3262d,0xd990e754,
    0xdb873ae1,0x115ddc1d,0x2a599d99,0x910de84e,0xd0bf219d,0x36299999,
    0x6c4bae1e,0x6d4bee1d,0x36a2cccd,0x2a0fb226,0xc89f5c49,0x0b3b321e,
    0x80641be6,0x481b8039,0x40242424,0x02984a84,0x91121612,0x86490320,
    0x2059a829,0x80c87304,0x0c80480b,0x0eea0cc8,0x4480d892,0x20aa2c0c,
    0x8530ae0d,0x090b2a0b,0x12121291,0x6402a024,0x3ba67300,0x90a08dc0,
    0xddac8284,0x6c488483,0x4243eeee,0xc8242438,0x0a619240,0x3a480d52,
    0x48388532,0x901900b0,0xa41ce473,0x154700d8,0x91048a44,0x710a6126,
    0x90906554,0x41212121,0x40320004,0x46e07739,0xf024900b,0x703215c5,
    0x82405509,0x20171244,0x0419040c,0x269048e2,0xa890354b,0x0c807902,
    0x0e6a6948,0x24401672,0x4c019370,0x2a85305c,0x444922aa,0x41212124,
    0x40320004,0x36e02cb9,0x999d00dc,0x32624240,0x05509b50,0x66744824,
    0x401901dd,0x0482e00c,0x405d26e9,0x64e4121a,0x480c84a8,0x3a0e6955,
    0x00d804cc,0x8174016c,0x544caac9,0x41912372,0x4cccce84,0x81ec4090,
    0x01bd300c,0x4900a8dc,0x22121203,0x2a848bdb,0x21224120,0x3200c81b,
    0x37333a00,0x93548b82,0x29048a40,0x901904c8,0x258399ec,0x0086e039,
    0x0d9b8017,0xa8099b98,0x55b32562,0x048483b5,0x41be6509,0x0367300c,
    0x542400dc,0x44024241,0x21202a84,0x42442439,0x4c03200c,0x149a8482,
    0x01ba4097,0x80c825c9,0x44839824,0x8243980c,0x2c4e600b,0xa8aa014c,
    0x2666624a,0x4824240d,0x00c80248,0x0dc06c73,0x120d4240,0x2a0ae012,
    0x90911202,0x40190570,0x1701900c,0x81322c98,0x332604a9,0x480c83cc,
    0x38890730,0x01704858,0x29893122,0x01761540,0x12090909,0xcecc9812,
    0xec8f664c,0x20f376a4,0xdccccec8,0x3227d911,0x1ee6443e,0x8b337722,
    0x20ccccea,0x3ccccec8,0x8b33b322,0x2e0cceca,0x8776e1ce,0xb012e0f8,
    0x99101007,0x33ae599d,0x644776e1,0xda9360ce,0x6546cccc,0x37a60cce,
    0x6ed53b21,0x23dd884c,0x45d95079,0x47d913ec,0x4ccccecc,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x0039bb10,0x00100300,0x10001420,0x20e6edc3,0x12f545e9,
    0x221f547b,0x6542bcdc,0x65c40aac,0x039b501c,0x87b33b95,0x219935c8,
    0x4daacacb,0x336288e0,0x2af22dcc,0x530043dc,0x2238e226,0x912dd982,
    0x913db89b,0x2e1d543b,0x6c12a0bb,0x67644320,0x006403cc,0xcdb88076,
    0x005b32ca,0xc8106644,0x481a8240,0xc92a2448,0x0c883e21,0x1dc3b0ae,
    0x90915d82,0x323d0c77,0x22590354,0xe819120d,0x321c8aa3,0x83b2b6e0,
    0x0e20b25a,0x8370e412,0x38510511,0x121cc188,0x00064073,0x42ec3b10,
    0x065c01da,0x0b835110,0x2424125b,0x20a21076,0x351c05c1,0x38ae2090,
    0x0b9202c8,0x3d13d851,0x21607208,0x320e4e44,0x21b502e0,0x00d4483d,
    0x05c03939,0x2007036a,0x90242439,0x70dc0001,0x032e0175,0x66e403b5,
    0x6454c1ec,0x21212094,0x002e4dca,0x37333336,0x6cc6a090,0x0dcccecd,
    0x10b92024,0x02f8ae45,0x424240ae,0x40d4483e,0x2987f15c,0x440fa016,
    0x0070e00b,0x43a890b1,0x1ccceccb,0x39999997,0x80a65724,0xb80b91e9,
    0x4de40d40,0x0909048c,0x70035498,0x0c80b801,0x02402b8b,0x44510b92,
    0x5501d52e,0x27224240,0x30b15c1c,0x9a416e3d,0x20e4e403,0x22a199c8,
    0x4027262a,0xeeef80d8,0x00006401,0x700b8ae9,0x902da819,0x34c81d88,
    0x49712059,0x2612482a,0x44221221,0x5d892444,0x24809026,0x1e88510b,
    0x2243a8b5,0x1c872484,0x459997b1,0x540b50e8,0xb87200c9,0x88266622,
    0x404ccc09,0x1dc900d8,0x98000320,0x36a1223d,0x260ed401,0x42dbabbc,
    0x65403e3c,0x7952e9bb,0x664c1995,0xbbc983bb,0x5e5e4c4c,0x2f76f620,
    0x33b2a4dc,0x5cfae0cc,0x25883d14,0x999bf139,0x5d91f64b,0x64301100,
    0x09b00910,0x7e44bb62,0xb1000003,0x80ae2401,0xb80ec00c,0x260ccbcc,
    0x065c002d,0x22000002,0x22008800,0x04008800,0x00011060,0x00000000,
    0x00000000,0x00000000,0x24084880,0x8000302c,0x00014022,0x00000031,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x66666640,
    0x4c19d914,0x0000001d,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x40201300,0xa5c040a9,0xb86e21ca,
    0x2dcccccc,0x101707b1,0x11111010,0x8a744041,0x44032a3d,0x999988a1,
    0x88819999,0x2e088888,0x007fffff,0x00000000,0x00000000,0x00000000,
    0xbc819800,0xc987ec2c,0x1fbbec4b,0x2600f2ba,0x4ba89f12,0x99124c28,
    0x26599999,0x5f9afcc4,0x9926b273,0xaaaa8922,0x3222aaaa,0xcccccccc,
    0x00000002,0x00000000,0x00000000,0x20000000,0x154baabc,0x97313e24,
    0x30f9b641,0xf14c02c7,0x2248a447,0x40007538,0x75004058,0x00000000,
    0x00000000,0x00000000,0x00000000,0x30000000,0x4705c3dd,0x2e2b20f9,
    0x363c56e0,0x229803b9,0x2275162e,0x3332201b,0x0002cccc,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x3221cb98,0x590f23ba,
    0x8714c7d7,0x411002c9,0x0002020c,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x49000000,0x98040984,0x00000088,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__courier_18_latin1_x[224]={ 0,3,2,1,1,1,1,3,4,2,0,1,2,1,
3,1,1,1,1,1,1,1,2,1,1,2,3,2,0,0,0,0,1,0,0,0,1,0,1,0,0,1,1,0,
0,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,1,0,3,1,0,1,0,0,1,0,0,1,
1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,1,1,0,4,0,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,1,0,1,0,
4,1,2,0,0,0,0,1,0,-1,2,1,2,2,3,0,1,3,3,2,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,2,0,0,0,0,0,0,1,0,1,1,
1,1,1,1,0,1,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,1,0,1,
 };
static signed short stb__courier_18_latin1_y[224]={ 13,3,3,2,2,3,4,3,3,3,3,4,10,8,
11,2,3,3,3,3,3,3,3,3,3,3,6,6,4,6,4,3,2,3,3,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,16,2,6,3,6,3,6,3,6,3,2,
2,3,3,6,6,6,6,6,6,6,3,6,6,6,6,6,6,3,3,3,7,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,13,6,2,3,5,3,
3,3,3,3,2,6,8,8,3,1,1,3,3,3,2,6,3,7,12,3,2,6,3,3,3,6,0,0,0,1,
1,0,3,3,0,0,0,1,0,0,0,1,3,1,0,0,0,1,1,5,3,0,0,0,1,0,3,3,2,2,
2,3,3,2,6,6,2,2,2,3,2,2,2,3,3,3,2,2,2,3,3,4,5,2,2,2,3,2,3,3,
 };
static unsigned short stb__courier_18_latin1_w[224]={ 0,3,6,8,7,8,7,3,4,3,6,8,4,8,
3,7,7,7,7,7,7,7,7,7,7,7,3,4,8,9,8,6,7,10,9,9,8,9,8,9,9,7,9,10,
9,10,9,8,8,9,10,8,8,9,10,10,9,9,7,3,6,3,7,11,4,8,9,8,10,9,8,9,9,8,
6,9,8,10,9,8,9,10,8,7,8,9,10,10,9,9,7,4,2,4,8,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,3,7,9,7,9,
2,8,6,10,6,8,9,8,10,11,5,8,5,5,4,9,8,3,3,5,6,9,10,10,10,6,10,10,10,10,
10,10,10,9,9,9,9,9,7,7,7,7,10,9,8,8,8,8,8,6,9,9,9,9,9,9,8,8,8,8,
8,8,8,8,10,8,9,9,9,9,8,8,8,8,8,9,8,8,8,8,8,8,9,9,9,9,9,9,9,9,
 };
static unsigned short stb__courier_18_latin1_h[224]={ 0,11,5,13,13,11,10,5,13,13,6,9,6,1,
3,13,11,10,10,11,10,11,11,11,11,11,8,9,9,4,9,11,13,10,10,11,10,10,10,11,10,10,11,10,
10,10,10,11,10,12,10,11,10,11,10,10,10,10,10,13,13,13,5,2,4,8,11,8,11,8,10,10,10,11,
14,10,10,7,7,8,10,10,7,8,11,8,7,8,7,10,7,13,13,13,3,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,11,11,10,7,10,
13,12,2,11,6,7,5,1,11,2,5,10,6,6,4,10,12,3,4,6,6,7,10,10,10,11,13,13,13,12,
12,13,10,13,13,13,13,12,13,13,13,12,10,12,14,14,14,13,13,7,11,14,14,14,13,13,10,11,12,12,
12,11,11,12,8,10,12,12,12,11,11,11,11,10,11,10,12,12,12,11,11,9,9,12,12,12,11,14,13,13,
 };
static unsigned short stb__courier_18_latin1_s[224]={ 253,252,46,85,192,32,137,69,171,167,20,
20,34,153,109,209,114,87,1,122,222,151,159,167,184,192,250,250,57,90,48,
209,184,104,77,225,68,29,20,246,230,145,141,164,240,153,212,69,203,185,9,
216,95,11,126,115,193,183,175,147,140,136,73,129,100,66,1,104,130,113,59,
49,39,175,30,10,1,152,180,123,209,198,143,96,200,86,215,75,226,118,172,
151,156,159,113,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,
240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,253,65,57,
128,197,230,164,205,122,235,39,163,59,153,66,141,53,109,236,242,85,168,214,
105,81,248,27,205,147,219,178,50,226,125,114,1,223,51,87,41,104,21,11,
195,245,237,176,159,98,140,37,1,46,217,200,190,22,65,55,10,1,31,189,
87,167,150,72,96,105,81,132,78,62,90,100,77,48,30,39,138,21,158,234,
176,243,57,41,29,38,110,120,130,12,20,94,75, };
static unsigned short stb__courier_18_latin1_t[224]={ 1,16,76,1,1,30,55,76,1,1,76,
66,76,76,76,1,30,55,66,30,55,30,30,30,30,30,55,43,66,76,66,
30,1,55,55,30,55,55,55,30,55,55,30,55,55,55,55,43,55,16,66,
30,55,43,55,55,55,55,55,1,1,1,76,76,76,66,43,66,30,66,55,
55,55,30,1,55,55,66,66,66,43,43,66,66,30,66,66,66,66,43,66,
1,1,1,76,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,1,43,43,
43,66,43,1,16,76,30,76,66,76,76,30,76,76,43,66,66,76,43,16,
76,76,66,76,66,43,43,43,30,1,1,1,30,16,16,43,16,1,16,16,
16,1,1,1,16,43,16,1,1,1,1,1,66,30,1,1,1,16,16,43,
30,16,16,16,30,30,16,66,43,16,16,16,30,43,43,43,43,43,43,16,
16,16,30,30,66,66,16,16,16,30,1,1,1, };
static unsigned short stb__courier_18_latin1_a[224]={ 153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_18_latin1_BITMAP_HEIGHT or STB_FONT_courier_18_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_18_latin1(stb_fontchar font[STB_FONT_courier_18_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_18_latin1_BITMAP_HEIGHT][STB_FONT_courier_18_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_18_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_18_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_18_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_18_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_18_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_18_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_18_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_18_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_18_latin1_s[i] + stb__courier_18_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_18_latin1_t[i] + stb__courier_18_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_18_latin1_x[i];
            font[i].y0 = stb__courier_18_latin1_y[i];
            font[i].x1 = stb__courier_18_latin1_x[i] + stb__courier_18_latin1_w[i];
            font[i].y1 = stb__courier_18_latin1_y[i] + stb__courier_18_latin1_h[i];
            font[i].advance_int = (stb__courier_18_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_18_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_18_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_18_latin1_s[i] + stb__courier_18_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_18_latin1_t[i] + stb__courier_18_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_18_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_18_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_18_latin1_x[i] + stb__courier_18_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_18_latin1_y[i] + stb__courier_18_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_18_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_18_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_18_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_18_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_18_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_18_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_18_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_18_latin1_LINE_SPACING
#endif

