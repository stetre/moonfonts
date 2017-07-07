// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_8_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_8_latin1'.
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

#define STB_FONT_courier_8_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_8_latin1_BITMAP_HEIGHT         28
#define STB_FONT_courier_8_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_courier_8_latin1_FIRST_CHAR            32
#define STB_FONT_courier_8_latin1_NUM_CHARS            224

#define STB_FONT_courier_8_latin1_LINE_SPACING           4

static unsigned int stb__courier_8_latin1_pixels[]={
    0x88080602,0x30008800,0x01000804,0x80811010,0x44088300,0x20220208,
    0x22080041,0x22020440,0x04404180,0x1022040c,0x20800081,0x00266208,
    0x00c33062,0x08088018,0x80806084,0x3306a219,0x882044c1,0x8a6620c0,
    0x20c04408,0x214c0808,0x054c0880,0x10081102,0x445129a8,0x30a60440,
    0x19830081,0x02204404,0x2a208811,0x3314cc41,0x066a2304,0x4060c313,
    0x419820a9,0x25104c19,0x94466a63,0x2998a663,0x4454a22a,0x8a667512,
    0x22a06299,0x45453328,0x22133128,0x21331099,0x13310998,0x444caa62,
    0x26213311,0x06133109,0x4cc1330c,0x09982660,0x20998266,0x4c622629,
    0x23113289,0x13311889,0x70d4615c,0x26221817,0x13505dc0,0x44d46666,
    0x260b9822,0x8982e60b,0x1130c260,0x4328650c,0x50c60c31,0x8c305286,
    0x18630ca1,0x30c618c3,0x210c3186,0x2aa35551,0x5435551a,0x8ccc4219,
    0x33311998,0x4cc46662,0x18433311,0x308530c2,0x43555184,0x7118cc19,
    0x26621817,0x46062620,0x86266309,0x20c0c0c0,0x104ccc28,0x250ca185,
    0x31830c61,0x4d44a194,0x0ca18c31,0x4c426623,0x22133109,0x21331099,
    0x4aaa0998,0x33311998,0x21886662,0x26533318,0x25333299,0x53332999,
    0x54cca666,0xa830aaa1,0x4c4aaa2a,0x4c357119,0x8606609a,0x84d419a8,
    0x333509a8,0x81810cc6,0x06044181,0x98a66044,0x3504d429,0x4c533281,
    0x26a0c429,0x09a85330,0x00000000,0x00000000,0x00000000,0x50000398,
    0x011008e1,0x35000000,0x0b982651,0x10b982e6,0x4c419813,0x44000000,
    0x00000009,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x03100000,0x0c020083,0x41880131,
    0x13000618,0x00c40004,0x00131060,0x10220210,0x10202220,0x22311300,
    0x39800872,0x02022001,0x00440001,0x20110220,0x41870080,0x04441998,
    0x28222335,0x2189860a,0x8626288a,0x73310630,0x9988c0a8,0x18a85332,
    0x194d4335,0x2133108c,0x20c629a8,0x21886398,0x3054c3bb,0x21144cc5,
    0x2b882261,0x4c1880d4,0x81306609,0x4466aa18,0x22026399,0x10330601,
    0x44101101,0x411110ab,0x30661989,0x0c0a8a13,0x2230c331,0x4310b830,
    0x841370a1,0x28a8a181,0x98609862,0x20318618,0x04186031,0x30844353,
    0x2a14c337,0x2260a22a,0x994c1711,0x2653530b,0x2535329a,0x461329a9,
    0x2b82b8a1,0x0ae14d44,0x130ae0ae,0x3044c418,0x22182331,0x1304c509,
    0x42230c30,0x99886181,0x18281942,0x2062988a,0x31898318,0x98c5328c,
    0x11850c10,0x209a8155,0x03065c30,0x0c515011,0x1a835060,0x9986a0d4,
    0x4c333109,0x850c1981,0x19819819,0x44666094,0x31062099,0x14508885,
    0x826a0c06,0x8826a22a,0x30ccc180,0x14cc66a2,0x331442a6,0x21308633,
    0x535109a8,0x3066218c,0x0ab8a944,0x4c51330c,0x2204c403,0x4066e22b,
    0x11104441,0x21110444,0x55c46201,0xa886ae21,0x886ae239,0x86ae21ab,
    0x06600018,0x10611002,0x00001310,0x06006204,0x11400000,0x041ab833,
    0x104400c6,0x00000000,0x985cc000,0x2535329a,0x535329a9,0x0a866066,
    0xa8038547,0x2a385470,0x00000070,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x80000000,0x00301808,0x01008088,
    0x41300130,0x08204008,0x0c019800,0x08008880,0x00831010,0x04408833,
    0x44080000,0x00220440,0x10030080,0x50008110,0x0c44c711,0x82182310,
    0x04335021,0x41104cd4,0x20220998,0x4c40c181,0x8811042a,0x3104c2b9,
    0x14d40813,0x85704cc0,0x530609a9,0x88c44413,0x2355129b,0x51332899,
    0x70b8e22a,0x4ae66188,0x515129a9,0x33711c6a,0x25135144,0x885cc0b8,
    0x4535319b,0x21841a98,0x453331ab,0x2a2a298a,0x83504cc2,0x430d431a,
    0x0b9886a1,0x8986a60c,0x9a886a19,0xab857330,0x0d435550,0x0ccc4003,
    0x20aa8833,0x2066219a,0x30606a09,0x2a662985,0x421818c1,0x33506a09,
    0x8a306666,0x18626619,0x0d431830,0x8aaa0cdc,0x51145441,0x84454451,
    0x260c1999,0x26621830,0x20c0c0c0,0x204dcc1a,0xb9a8c221,0x066620c1,
    0x4c019a83,0x43571299,0x82ea2888,0x2604c0a9,0x2a0c08c0,0x33066662,
    0x11106060,0x19898c4c,0x217510d4,0x0c08c331,0x000530c6,0x41c40dc4,
    0x200a8838,0x266a0b98,0x44017310,0x235310b9,0x53510b98,0x985cc404,
    0x09b80289,0x8802e620,0x42a00888,0x98066a63,0x884d4c52,0x9866a20b,
    0x54ce2663,0x5cc14c29,0x29a98e60,0x1c2a5153,0x2a170171,0x45371289,
    0x233710b9,0x00000529,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x84444100,0x30101009,
    0x0cce6001,0x84d44533,0x41100888,0x2a211089,0x44713529,0x011040ba,
    0x12884431,0x42662333,0x84618129,0x85555408,0x00009998,0x00000000,
    0x00000000,0x19b98000,0x054c3537,0x1114c135,0x29854411,0x260322a8,
    0x38c9c5c2,0x21d46222,0x26286f61,0x06204cc2,0x26311855,0xa9847308,
    0x2013311a,0x11098410,0x00000000,0x00000000,0x00000000,0x4c630800,
    0x41570e21,0x51044429,0x38aa0a61,0x5330cc32,0x98404d44,0x221986a2,
    0x14c53531,0x44210cdc,0x000c1882,0x00000000,0x00000000,0x00000000,
    0x40000000,0x0aa52899,0x0804c208,0x50009808,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__courier_8_latin1_x[224]={ 0,1,0,0,0,0,0,1,2,1,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,1,0,0,0,0,0,0,-1,1,0,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__courier_8_latin1_y[224]={ 5,0,0,0,0,0,1,0,0,0,0,1,3,2,
4,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,2,2,2,2,2,2,0,0,0,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,0,0,1,0,
0,0,0,0,0,2,2,2,0,0,-1,0,0,0,0,2,0,2,4,0,0,2,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
 };
static unsigned short stb__courier_8_latin1_w[224]={ 0,2,4,4,4,4,4,2,2,2,3,4,2,4,
2,4,4,4,4,4,4,4,4,4,4,4,2,2,4,4,4,3,4,5,4,4,4,4,4,4,4,4,5,5,
4,5,4,4,4,4,5,4,4,4,5,5,4,4,4,2,3,2,4,5,2,4,4,4,5,4,4,4,4,4,
3,5,4,5,4,4,4,5,4,4,4,4,5,5,4,5,4,2,2,2,4,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,4,
2,4,3,5,3,4,4,4,5,6,3,4,2,2,2,4,4,2,2,2,3,4,5,5,5,3,5,5,5,5,
5,5,5,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,5,
 };
static unsigned short stb__courier_8_latin1_h[224]={ 0,6,3,6,6,6,5,3,6,6,4,4,4,2,
2,6,6,5,5,6,5,6,6,6,6,6,4,4,4,2,4,6,6,5,5,6,5,5,5,6,5,5,6,5,
5,5,5,6,5,6,5,6,5,6,5,5,5,5,5,6,6,6,3,1,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,4,3,4,3,5,3,6,6,6,2,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,6,5,5,4,5,
6,6,2,6,3,3,3,2,6,1,3,5,3,3,2,5,6,2,3,3,3,3,5,5,5,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,6,7,7,7,7,7,4,6,7,7,7,7,6,5,6,6,6,
6,6,6,6,5,6,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,5,6,6,6,6,7,7,7,
 };
static unsigned short stb__courier_8_latin1_s[224]={ 255,127,78,201,92,97,129,117,102,105,12,
31,46,128,133,108,123,177,140,128,208,222,143,206,217,161,253,49,36,123,21,
166,87,118,124,151,228,187,145,188,192,223,199,233,218,197,213,156,203,183,134,
170,182,118,171,165,160,155,150,175,133,237,102,158,136,113,227,102,48,92,87,
31,76,71,38,60,55,6,1,40,26,137,250,19,76,245,91,239,86,237,97,
205,193,196,142,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,
107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,107,255,208,217,
248,16,227,148,178,147,81,52,61,66,128,211,151,71,50,75,83,139,232,113,
120,110,107,113,56,7,13,1,72,66,60,54,190,42,36,211,52,21,16,11,
6,1,250,245,240,29,232,42,47,18,23,62,41,196,67,57,28,33,170,243,
160,155,150,145,140,135,130,81,122,117,112,107,185,97,24,45,35,97,222,77,
87,72,82,92,26,66,102,165,175,180,12,7,1, };
static unsigned short stb__courier_8_latin1_t[224]={ 1,1,22,1,8,8,16,22,8,8,22,
22,22,22,22,8,8,16,16,8,16,1,8,1,1,8,8,22,22,22,22,
8,8,16,16,8,16,16,16,8,16,16,8,16,16,16,16,8,16,8,16,
8,16,8,16,16,16,16,16,8,8,1,22,22,22,16,1,16,9,16,16,
9,16,16,1,16,16,22,22,16,9,8,16,16,8,16,22,16,22,8,22,
8,8,8,22,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,
16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,1,8,8,
8,22,8,8,8,22,8,22,22,22,22,1,22,22,16,22,22,22,8,8,
22,22,22,22,22,16,16,16,8,9,9,9,1,9,9,8,1,9,9,9,
9,9,1,1,1,16,1,1,1,1,1,1,22,1,1,1,1,1,1,8,
1,1,1,1,1,1,1,16,1,1,1,1,1,16,16,16,16,1,8,1,
1,1,1,1,22,16,1,1,1,1,1,1,1, };
static unsigned short stb__courier_8_latin1_a[224]={ 68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_8_latin1_BITMAP_HEIGHT or STB_FONT_courier_8_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_8_latin1(stb_fontchar font[STB_FONT_courier_8_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_8_latin1_BITMAP_HEIGHT][STB_FONT_courier_8_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_8_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_8_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_8_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_8_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_8_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_8_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_8_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_8_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_8_latin1_s[i] + stb__courier_8_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_8_latin1_t[i] + stb__courier_8_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_8_latin1_x[i];
            font[i].y0 = stb__courier_8_latin1_y[i];
            font[i].x1 = stb__courier_8_latin1_x[i] + stb__courier_8_latin1_w[i];
            font[i].y1 = stb__courier_8_latin1_y[i] + stb__courier_8_latin1_h[i];
            font[i].advance_int = (stb__courier_8_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_8_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_8_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_8_latin1_s[i] + stb__courier_8_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_8_latin1_t[i] + stb__courier_8_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_8_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_8_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_8_latin1_x[i] + stb__courier_8_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_8_latin1_y[i] + stb__courier_8_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_8_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_8_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_8_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_8_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_8_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_8_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_8_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_8_latin1_LINE_SPACING
#endif

