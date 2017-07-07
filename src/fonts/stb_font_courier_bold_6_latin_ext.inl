// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_bold_6_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_bold_6_latin_ext'.
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

#define STB_FONT_courier_bold_6_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT         42
#define STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_bold_6_latin_ext_FIRST_CHAR            32
#define STB_FONT_courier_bold_6_latin_ext_NUM_CHARS            560

#define STB_FONT_courier_bold_6_latin_ext_LINE_SPACING           3

static unsigned int stb__courier_bold_6_latin_ext_pixels[]={
    0x06184080,0x04020406,0x04006042,0x40026042,0x08102220,0x11062044,
    0x08080808,0x0000c088,0x10210101,0x08182020,0x11001008,0x30404408,
    0x04441010,0x54c10102,0x4eaa0541,0x42814299,0x88626098,0xa886260b,
    0x4bc86260,0x21c98626,0x397720a8,0x52425428,0x15c42895,0x6441502a,
    0x0b88ae22,0x4437104c,0x312d6c09,0xa85c1a81,0x3510d439,0x506220a8,
    0x83310a81,0x5441510a,0x14543511,0x9154350a,0x2a35d4b3,0x6449174a,
    0x90c54280,0x390c54b3,0xb390c54b,0x4b3906dc,0x896720b8,0x5d47750b,
    0x5c702a23,0x9b8eea39,0x4aa8eea4,0x249b926e,0xb8eea3ba,0x77167249,
    0x9552ce49,0x248b9d54,0xa96724aa,0xba96723b,0x2ce52ae3,0xb9672957,
    0x45cb394a,0x1d54eaa4,0x971ce1b5,0x8363cc87,0x7074c3c9,0x249c7392,
    0x1ce49c73,0x6439c939,0x23b11ce3,0x36e39c73,0x25dcb665,0x4e4ba8e7,
    0x4ba8e6e3,0x9c7392ea,0x87392ea3,0x371ce59d,0x41b15c47,0x271ce39b,
    0x38e71ce3,0x8e70e39c,0x106c39c3,0x38cae257,0x83cc8aea,0x5bb8b549,
    0x4b751e54,0xa96ea2ba,0xba96ea2b,0x30aea1c2,0x750c2ba8,0x20e15d45,
    0x88aea1c3,0xbb8aea3b,0x3b88ee24,0x42ba8aea,0x0e0aea3b,0x725dc575,
    0x97716a77,0x457515d4,0xa8aea2ba,0x5d45753b,0x9dd45753,0x7716a2ba,
    0x15dceee7,0x02208020,0x0006cec0,0x00000000,0x00002001,0x00020000,
    0x20000808,0x80000000,0x00000008,0x40000000,0x00000008,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40600000,0x20304041,0x02080220,0x40418351,0x20660608,0x0888a620,
    0x20210204,0x11021980,0x41702081,0x200110a9,0x81530440,0x21040c40,
    0x09884218,0x42026208,0x102a2088,0x44130c08,0x80110100,0x730cd410,
    0x20b82e23,0x64eaa0ac,0x5427263a,0xb896722a,0x31b85351,0x710ccc33,
    0x86a61d88,0x8c8510a8,0x42e0cc45,0xb8864198,0x8eea1710,0x229794aa,
    0xa882a218,0x3ab8e6e1,0x32098872,0x419750d8,0x1910e20c,0x219985c4,
    0x288e218a,0x415c392c,0x930d4c19,0x036a5a43,0x55ca6253,0x2b892724,
    0x705c4797,0x96547392,0x93965493,0xa8eb249c,0x77724e1d,0xd8738eb2,
    0x55d26e5a,0x9ddd26e5,0x9b8e749b,0x72d5ce73,0x392d6c77,0x0d8ade4b,
    0x9c7396b6,0x0e9926e3,0x71d98f26,0x2a489392,0x972caa44,0x2e0ce98b,
    0x5c3d50de,0x0a12ee38,0xb8f320e5,0x6419393b,0x2ba96ea3,0x52dd4eea,
    0xba96ea77,0xa870f2e5,0x3cb8645b,0x49d70ae6,0xba8363ba,0xa9dd4323,
    0x48c9d42b,0x5dc19036,0x38eea1c4,0x457525dc,0xa8eea3ba,0x4716ee3c,
    0x716ea5ba,0x2ea30544,0x3da87b93,0x47906764,0x2e21c4cd,0x8eea3731,
    0x001c381d,0x80000000,0x5c000c9c,0x5419394c,0xb102cdc0,0x00265c03,
    0x65c3b100,0x50016764,0x00059d83,0x4c01b3b0,0x96cc002d,0xb00805db,
    0x0000039b,0x00200408,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x08302198,
    0x00820408,0x15501803,0x21a80808,0x82100518,0x08826289,0x44421026,
    0x08882040,0x41544102,0x04213021,0x88080813,0x811040c0,0x0880811a,
    0x04404084,0x44082822,0x0c0c0c08,0x510a8f66,0x10b88ec4,0x4c42e217,
    0x43712540,0x51ce40ac,0x370d4413,0x64c5148b,0x48b96721,0x885c3832,
    0x712f270b,0x50c82a21,0x4dc2e275,0x65432d44,0x2a1b8710,0xd750dc3b,
    0x1b8662b8,0x1d31c2aa,0x10e20644,0x570da819,0x2ca8a269,0x229a862a,
    0x98666199,0x2243b33d,0x8ecd7723,0x5cb574bc,0x9c876649,0x1571e644,
    0x8b752ce4,0x4e0b88e3,0x248706c3,0x4e9795cc,0xbcae645b,0x4ae2b994,
    0x5c9755cc,0x924dd249,0x738a6e75,0x479714dc,0x29b8e29b,0x7950caea,
    0x83a61e4c,0x871c63c9,0x4272a2ba,0x24e49c93,0x8e2d9927,0x223b32d9,
    0x6c5b8e0b,0x4383aea0,0x2e0ec3bd,0xb112ee39,0x1e4531c1,0x0e2d4575,
    0x25b9dd47,0x9dd4b793,0x5dceea5b,0x8ee27753,0x2eab0eba,0x1dd4e70e,
    0x91dd4795,0x171dd479,0x73988eea,0x5bb86cec,0x4b771e54,0x54eea2bb,
    0xba8eea18,0x5ba96ea5,0x309896ea,0xd88a145b,0x56f25b31,0x16cc01d8,
    0x92ce4040,0x224410b3,0x2e044001,0xade402a1,0x0b790142,0x20000400,
    0x0f2203bd,0x80a20010,0x013050a9,0x0000d9d8,0x000000a8,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x20885020,0xa83060c0,0x22608260,0x04400c41,0x1510c183,
    0x088182a2,0x0c0c0c04,0x4081140c,0x02204041,0x21a98202,0x02286609,
    0x02010100,0x00204002,0x40c02044,0x10222199,0x753aa8c1,0x8e442a25,
    0x0a82e1b8,0x299e4735,0x4c17124e,0x5c42a21a,0x310b82e1,0x06442ea7,
    0x10e4c151,0x7105c437,0x4330dd41,0x52c88e0a,0xaa8d4477,0x42a1dd44,
    0x2e935399,0x4e27352b,0x0c331198,0x05442814,0x88d44173,0x9570660a,
    0xeb82814c,0x74cbb90d,0xb88d430c,0x526e9372,0x2e93749b,0x2ae7b549,
    0x96ee5914,0xc96b63ca,0x332b995c,0x89d4b995,0x64c7933a,0x3c98f263,
    0x23c98f26,0x1d98e3ab,0x738c5c32,0x439b8ecc,0x43b3098b,0x2e6b9119,
    0x97948e72,0x261cc766,0x79074c0e,0x979074c9,0x20e992f2,0x74c0e983,
    0xd8867640,0x8628f6a1,0x2a7752ca,0x2ea7753b,0x4eea7753,0x41caa2ba,
    0xa92ee3c8,0x2ea7753b,0x4ee67753,0x5cb772b9,0xbb96ee5b,0x5bb96ee5,
    0x0e144ef2,0x85750d87,0x59512ee3,0x43711c38,0xb9c5932a,0x545751c5,
    0xb71e543c,0xb96e3ca8,0x7751e545,0x0f2a1e54,0xcdd87620,0x00001801,
    0xd8000000,0x00000059,0x00000000,0x0716cc18,0x8002d980,0x0aa002d9,
    0xb35bc8cc,0xb06cec05,0xd96f21b3,0x32b790d9,0x3836765b,0xb3b06cec,
    0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x04400000,0x81809822,0x41a80881,0x83060c08,
    0x8262042a,0x4c350a1a,0x71026098,0x0c419981,0x00808151,0x09810822,
    0x20a81302,0x44104408,0x10c43108,0x20440881,0x84313098,0x80410d40,
    0x31b88540,0x4030c431,0x99d64181,0x2506a20b,0x45d50ca1,0x99d6429b,
    0x2e288a22,0x38832a5c,0xb96d4b2a,0xa8864e59,0x36e074c2,0x64c3910d,
    0x3390aa23,0xb570cdc8,0x31b98dc4,0x102e6417,0x1c46e237,0x512a1912,
    0x32065459,0x26cc9270,0x321712ca,0x4dc2e60c,0x224e3b34,0x515066a4,
    0x5ceb6144,0x77132a39,0xa992ea17,0x75b0eea4,0x6e491224,0x5490e6e3,
    0x23ba923b,0x507625ba,0x20cdc879,0x3b12ddc3,0x1ddc4b98,0xb8e4c3d1,
    0x3ba8e6e4,0x0e4c7260,0x21b11b89,0x882a20cb,0x4b751c1a,0x48eea4bb,
    0x5d490e6e,0x1c5ca8e3,0x44cc81b5,0x59c9dec4,0x220c82c4,0xb0707aa5,
    0x6ccb6677,0x32025b32,0x238b6659,0x6d4003ca,0x2006cec1,0xb50980d9,
    0x6dc5b983,0x6d43d11c,0x16727b53,0xda844445,0x4b667b53,0x2e5b32d9,
    0xdb976e5d,0x8c80b665,0x464b6605,0x6cc0b665,0x2e5b3142,0xb326544b,
    0x00000005,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x221b8818,0x54088541,0x01510221,0x21c81081,
    0x84442a08,0x08408410,0x08882084,0x08808821,0x20420011,0x44004410,
    0x00443108,0x515d4111,0x0402898a,0x0c4c0153,0x30d44333,0x830614c4,
    0x35506661,0x98431088,0xc82ae318,0x6647b14b,0x914dc535,0x261e4c75,
    0xd892f20e,0xb9c54b22,0x55cb573b,0x2362d6c4,0xcaee410d,0xd98eb259,
    0x41d49751,0x874745ad,0x2f27504a,0x71d64934,0x473525dc,0xa926e4cc,
    0x26e7753c,0x16ccaaa3,0x88e4c775,0x64c3b11c,0xb71982a2,0x2a64cc83,
    0x23d13922,0x12dc7370,0x491dd419,0xb932e3ba,0xb71e545b,0x2baaecc1,
    0x0360c86e,0x4c4eb81d,0x70b88a3a,0x8e1e5c97,0x2e2cc3c9,0x512ee44b,
    0x716e3c81,0x267b539c,0xca8aa60d,0xc86006c4,0x5e4aa259,0x3da86665,
    0x20843b50,0x44bb8609,0x5b300ccd,0x2720c4c2,0x16cd6f25,0x5e405b30,
    0x90d9d804,0xc9e44093,0x3629972d,0xb3716721,0x3b1041d0,0x0c9c9672,
    0x7512a5b3,0xd9d8b3b0,0x2750bb70,0x365b35bc,0x004b8e3b,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x40800000,0x22011141,0x0c142e20,
    0x4bb85022,0x0dcc2eee,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x544516cc,0xbbb87731,0x404702e0,0x001c0a50,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x804c3910,0x000001a9,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_bold_6_latin_ext_x[560]={ 0,1,0,0,0,0,0,1,1,0,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,-1,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,-1,-1,0,0,0,0,0,0,0,-1,-1,0,0,0,1,0,0,0,-1,1,0,-1,0,0,0,0,0,0,0,
0,0,0,-1,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,0,-1,0,0,-1,0,-1,-1,0,0,0,0,1,0,0,1,1,0,0,0,0,-1,0,0,-1,-1,-1,-1,
-1,-1,-1,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,-1,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__courier_bold_6_latin_ext_y[560]={ 4,0,0,0,0,0,1,0,0,0,0,0,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,0,0,1,0,
0,0,0,0,0,1,2,2,0,-1,0,0,0,0,0,1,0,1,3,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
0,0,-1,0,0,1,-1,0,-1,0,-1,0,-1,0,-1,0,0,0,0,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,0,-1,0,0,0,-1,-1,0,0,-1,0,0,0,-1,0,0,0,-1,1,0,0,-1,0,0,0,1,-1,-1,0,
0,0,0,0,0,0,0,-1,0,0,1,-1,0,0,0,1,0,0,-1,0,-1,0,0,1,-1,0,0,1,-1,0,
-1,0,-1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,0,-1,
0,-1,0,-1,0,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-2,-1,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static unsigned short stb__courier_bold_6_latin_ext_w[560]={ 0,1,3,3,3,3,3,1,2,2,3,3,2,3,
1,3,3,3,3,3,3,3,3,3,3,3,1,2,4,4,4,3,3,5,4,3,3,3,4,4,4,3,4,4,
4,5,5,4,4,4,4,3,3,4,5,5,4,4,3,2,3,2,3,5,2,4,5,4,4,3,4,4,4,3,
3,4,3,5,4,3,5,4,4,3,4,4,4,5,4,4,3,3,1,3,3,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,1,3,3,3,4,
1,3,3,5,3,3,4,3,5,5,3,3,3,3,2,4,3,1,2,3,3,4,4,5,4,3,5,5,5,5,
5,5,5,3,3,3,3,3,3,3,3,3,4,5,4,4,4,4,4,3,4,4,4,4,4,4,4,3,4,4,
4,4,4,4,5,4,3,3,3,3,3,3,3,3,3,4,3,3,3,3,3,3,4,4,4,4,4,4,5,4,
5,4,5,4,5,4,3,4,3,4,3,4,3,4,3,4,4,4,3,3,3,3,3,3,4,3,3,3,4,4,
4,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,4,4,4,3,4,4,4,4,3,4,
3,4,3,4,3,4,3,5,4,5,4,5,4,5,3,3,4,3,4,3,4,3,5,5,4,4,4,4,4,4,
3,3,3,3,3,3,3,3,3,4,3,4,3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,4,4,
4,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,4,4,3,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,3,3,4,
3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,5,4,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__courier_bold_6_latin_ext_h[560]={ 0,5,3,5,5,5,4,3,5,5,3,4,2,1,
2,5,5,4,4,5,4,5,5,5,5,5,4,4,4,3,4,5,5,4,4,5,4,4,4,5,4,4,5,4,
4,4,4,5,4,5,4,5,4,5,4,4,4,4,4,5,5,5,3,1,2,4,5,4,5,4,4,5,4,4,
6,4,4,3,3,4,5,5,3,4,5,4,3,3,3,5,3,5,5,5,3,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,5,5,4,3,4,
5,5,2,5,3,3,2,1,5,2,2,4,3,3,2,5,5,2,2,3,3,3,4,4,4,5,5,5,5,5,
5,5,4,5,5,5,5,5,5,5,5,5,4,5,6,6,6,6,6,3,5,6,6,6,6,5,4,5,5,5,
5,5,5,5,4,4,5,5,5,5,4,4,4,4,5,4,5,5,5,5,5,3,4,5,5,5,5,6,6,6,
4,5,5,5,5,4,6,5,6,5,6,5,6,5,5,5,4,5,4,5,5,5,5,5,5,4,5,5,6,6,
6,6,6,6,6,6,5,5,4,4,5,4,4,4,5,4,5,5,5,3,5,6,6,6,6,6,3,5,5,6,
6,4,4,4,4,4,4,5,4,6,5,5,4,4,5,5,5,5,6,5,6,5,4,4,5,4,6,5,5,4,
6,5,6,5,6,4,6,5,6,6,5,5,4,5,6,5,5,5,6,5,6,5,6,5,5,4,5,4,5,6,
5,5,4,5,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,4,5,4,4,4,
4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,4,6,
5,6,5,6,5,6,6,6,6,6,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,6,6,5,5,6,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__courier_bold_6_latin_ext_s[560]={ 255,222,239,1,5,37,49,247,180,170,1,
152,42,56,28,114,166,144,57,72,53,76,46,154,29,158,253,87,135,198,113,
1,225,38,28,221,148,140,156,139,94,104,216,44,130,124,118,130,108,160,99,
126,90,82,81,75,70,65,61,92,73,70,216,50,253,33,43,23,34,15,10,
134,1,251,10,240,236,233,184,223,49,65,211,206,77,196,171,165,193,87,203,
95,107,122,176,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,255,144,126,
139,161,130,192,188,36,144,207,189,45,56,229,18,24,72,220,224,33,41,162,
40,30,5,9,13,22,16,11,181,191,185,225,201,215,231,247,221,197,211,207,
173,118,150,135,177,37,50,91,110,120,140,145,249,170,155,166,190,200,29,27,
110,105,100,95,90,85,80,237,32,68,64,60,56,46,50,42,19,33,59,25,
21,17,13,9,180,54,250,245,240,235,16,18,237,91,211,205,200,194,108,219,
183,228,175,210,165,14,155,151,146,1,139,6,130,25,122,118,114,109,148,103,
99,185,135,171,130,125,115,105,150,60,55,201,214,39,219,227,210,21,165,13,
9,5,243,250,11,250,6,62,1,228,217,213,96,101,182,192,187,169,177,173,
168,6,160,155,149,143,118,136,132,127,123,195,115,205,106,124,97,90,113,28,
76,71,86,242,57,246,48,24,68,176,224,82,72,17,33,243,245,1,38,43,
52,232,81,223,61,214,66,95,231,100,245,110,180,140,145,157,86,161,119,135,
103,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,160,152,152,164,
152,152,152,152,152,152,152,152,152,152,152,152,152,179,76,152,152,152,152,152,
152,152,152,152,152,152,152,152,174,81,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,188,194,
199,64,86,184,77,203,67,208,57,52,47,42,37,32,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,26,21,233,239,6,228,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152, };
static unsigned short stb__courier_bold_6_latin_ext_t[560]={ 1,8,32,15,21,21,32,32,15,21,37,
32,37,37,37,21,21,32,32,21,32,21,21,21,21,21,21,32,32,32,32,
21,15,32,32,15,32,32,32,21,32,32,15,32,32,32,32,21,32,15,32,
15,32,15,32,32,32,32,32,15,15,15,32,37,32,32,15,32,15,32,32,
15,32,27,8,27,27,32,32,27,15,15,32,27,15,27,32,32,32,15,32,
15,15,21,32,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,1,15,21,
27,32,27,15,15,37,21,32,32,37,37,15,37,37,27,32,32,37,21,21,
37,37,37,37,37,27,27,27,21,21,21,21,21,21,21,21,21,21,21,21,
21,21,21,21,21,27,21,1,1,1,1,1,32,15,1,1,1,1,15,27,
21,21,21,21,21,21,21,21,27,21,21,21,21,27,27,27,32,21,27,21,
21,21,21,21,32,27,15,15,15,15,1,8,1,27,15,15,15,15,27,1,
15,1,15,1,15,8,15,15,15,27,15,32,15,15,15,15,15,15,27,15,
15,1,1,1,1,1,1,1,1,15,15,27,27,15,27,27,27,15,27,15,
15,15,32,8,1,1,8,1,8,32,8,8,1,1,27,27,27,27,27,27,
8,27,1,8,8,27,27,8,8,8,8,1,8,1,8,27,27,8,27,8,
8,8,27,1,8,1,8,8,27,1,8,1,1,15,8,21,8,1,8,8,
8,1,8,1,8,1,8,8,27,8,27,8,1,8,8,27,8,27,8,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,8,27,27,8,
27,27,27,27,27,27,27,27,27,27,27,27,27,8,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,8,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,8,8,
8,27,1,8,1,8,1,8,1,1,1,1,1,1,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,1,1,8,8,1,8,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27, };
static unsigned short stb__courier_bold_6_latin_ext_a[560]={ 51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT or STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_bold_6_latin_ext(stb_fontchar font[STB_FONT_courier_bold_6_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT][STB_FONT_courier_bold_6_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_bold_6_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_bold_6_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_bold_6_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_bold_6_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_bold_6_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_bold_6_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__courier_bold_6_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__courier_bold_6_latin_ext_s[i] + stb__courier_bold_6_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__courier_bold_6_latin_ext_t[i] + stb__courier_bold_6_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__courier_bold_6_latin_ext_x[i];
            font[i].y0 = stb__courier_bold_6_latin_ext_y[i];
            font[i].x1 = stb__courier_bold_6_latin_ext_x[i] + stb__courier_bold_6_latin_ext_w[i];
            font[i].y1 = stb__courier_bold_6_latin_ext_y[i] + stb__courier_bold_6_latin_ext_h[i];
            font[i].advance_int = (stb__courier_bold_6_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__courier_bold_6_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_bold_6_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_bold_6_latin_ext_s[i] + stb__courier_bold_6_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_bold_6_latin_ext_t[i] + stb__courier_bold_6_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_bold_6_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__courier_bold_6_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__courier_bold_6_latin_ext_x[i] + stb__courier_bold_6_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__courier_bold_6_latin_ext_y[i] + stb__courier_bold_6_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__courier_bold_6_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_bold_6_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_bold_6_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_bold_6_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_bold_6_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_bold_6_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_bold_6_latin_ext_LINE_SPACING
#endif
