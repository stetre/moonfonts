// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_6_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_6_latin1'.
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

#define STB_FONT_arial_6_latin1_BITMAP_WIDTH         256
#define STB_FONT_arial_6_latin1_BITMAP_HEIGHT         22
#define STB_FONT_arial_6_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_arial_6_latin1_FIRST_CHAR            32
#define STB_FONT_arial_6_latin1_NUM_CHARS            224

#define STB_FONT_arial_6_latin1_LINE_SPACING           4

static unsigned int stb__arial_6_latin1_pixels[]={
    0x2a141433,0x831060c1,0xaa811041,0x06614c1a,0xb8605c53,0x461ca510,
    0x10cc51a9,0x4132e177,0x0c8711a9,0x0a142871,0xa884c413,0x2e2388a0,
    0x2a850a3b,0x28262151,0x261310cc,0x9850c6a1,0x30260d41,0x440d4c50,
    0x528a1980,0x452946ae,0x28a51452,0xba895cca,0x44575331,0x237511ba,
    0x22131ba8,0x284c71ba,0x4a3a8a13,0x2fa11ca2,0x530e3752,0x95546e63,
    0x263532aa,0x54c6671a,0x994a5551,0x54d2a71a,0x52ee3531,0x2a3531a9,
    0x554a172a,0x228a2852,0x17770bbb,0x5ddc2eee,0x062e5550,0xac82e032,
    0x54e70aa9,0x8a39470a,0x86e71473,0x21b9d4e3,0x38e71ce3,0x1c738e13,
    0x7171ca25,0x2211ca38,0x9554572b,0x54ce72ab,0x4aae7533,0x5c7712ab,
    0x9ce7532a,0x9ce2ae73,0x39de4e73,0x73a99ce7,0x439d4ca7,0x866e38e3,
    0xb866e19b,0x45cea619,0x23a83a83,0x9564b173,0x13944e58,0x2289ca25,
    0x538e5953,0x271c3955,0x42671ce3,0x99451ce3,0x94ae2170,0x86ee6513,
    0x2a38ea2a,0x2ae5552a,0x4aaa7573,0x5550e2aa,0xa9d5ceae,0x2a37952a,
    0x8aa5552a,0x2e5552aa,0x2e55173a,0x38e3873a,0x219b866e,0xb866e19b,
    0xba87573a,0x5572dd45,0x98a61c53,0x217730bb,0x9c17730a,0x446ee208,
    0x2ee23aab,0x2e237711,0x2ee2171b,0x39466171,0x32954ca2,0x2a0cc177,
    0x00005772,0x0001c000,0x00000000,0x38702a9c,0x42eee38e,0x17770bbb,
    0x70002eee,0x005138a2,0x00000000,0x00000100,0x10040800,0x00080000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x02606a00,0x4529860a,0x428cc519,0x3710ca62,0xa81311c4,0x2e6314a0,
    0x46a63531,0x223531b9,0x263530aa,0x2237711a,0x817710aa,0x22865532,
    0x098a3552,0x26294773,0x2a237711,0x0045531b,0x2940a9ca,0x85d42eee,
    0x8ef26019,0x159551a9,0x442942a2,0x5c70a33a,0x40b80b80,0x9882aa62,
    0x2504cc42,0x0c885552,0x0b85294a,0x4e7099ce,0x55c17298,0x2aea1550,
    0x39ce5552,0x2394dd42,0xc9ce7530,0x8a739470,0x0aa82aa1,0x38e71c66,
    0xbb85c4e7,0x5d5c6e63,0x270b8e70,0x15cc50ba,0x339c1357,0x4aaa55b5,
    0x4e6e1373,0x3a863572,0x263a83a8,0x3305cc41,0x385cc435,0xab855447,
    0xa8739ce4,0x2714eae3,0x210dce23,0x8d5cce73,0x4e75339b,0x8e33534a,
    0x29d54e70,0x32ac944e,0x10b88854,0x3a47198b,0x1c99d54e,0xb9edc757,
    0x647570b9,0x31c6aa71,0x86b32639,0x359572aa,0x547739ce,0x2a1ce72b,
    0x2a2dd45b,0x8a8eaa5b,0x15064a0b,0x8a8eae19,0x2e39551a,0x5d47573a,
    0x954c50a5,0x2a5592aa,0x2a65532a,0x2aa5551a,0x2a677711,0x2a37731a,
    0x42a5553a,0x23070bb9,0x2617750a,0x65cc2ee2,0x53837713,0xb8822259,
    0x77700370,0x75380e01,0x9ce70007,0x1ce7019b,0x8a27144e,0x04000513,
    0x40000000,0x00000513,0x00000000,0x00000200,0x00020000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x20000000,0x9554ae52,0x18e23aba,0x253298cc,0x46615129,0x2e655019,
    0x3b986332,0x45095411,0x4263531a,0x5546a1a9,0x46e38222,0x5cc030a4,
    0xa8a8cce5,0x22715250,0x0f2a7751,0x5c50bbb8,0x0b9450bb,0xb9406a65,
    0x40bbb920,0xa98eee0b,0x5ddc7771,0xa8cd42a0,0x2a53351b,0x2739c70a,
    0x501550ab,0x532b9dc7,0xb88c46e6,0x5ccaa332,0x4ca02312,0x9146332a,
    0x0714aae3,0x4701d4c5,0x980e58ab,0x3b88a62a,0x73717164,0x87054294,
    0x253170b8,0xa9b8d4e3,0x3384a772,0x4886ee37,0x371d438e,0x41373847,
    0x442e219b,0x257551c5,0x4e738e48,0x10c2109b,0x30080033,0x00000013,
    0x955451c0,0x2e38aaa3,0xaab8a03a,0x8dd430e3,0x22c83838,0x1d445739,
    0x71c9870e,0x43771c93,0x5517299b,0x2ae5511c,0x751c71c2,0x1705cdcb,
    0x219b866e,0x323372bc,0x0019731a,0x00000000,0x43330000,0x4c6a113b,
    0x80a38c51,0x11101c03,0x22c8b861,0x363012bb,0x2a2e1c3b,0x86e06520,
    0x27041c28,0x51c1c738,0x2045154e,0x7771c353,0x777289c1,0x5c1c6f21,
    0x000660bb,0x00000000,0x44000000,0x00006608,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x80000000,
    0x000002aa,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_6_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,
0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,
-1,-1,0,0,0,0,0,0,0,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__arial_6_latin1_y[224]={ 4,0,0,0,-1,0,0,0,0,0,0,0,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,
0,0,0,0,0,1,1,2,0,-1,0,0,0,0,0,1,0,1,3,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,0,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
 };
static unsigned short stb__arial_6_latin1_w[224]={ 0,2,2,3,3,5,4,1,2,2,2,3,2,2,
2,2,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,6,5,4,4,4,4,4,4,4,2,3,4,
3,5,4,4,4,4,4,4,4,4,4,6,4,4,4,2,2,2,3,5,2,3,3,3,3,3,2,3,3,1,
2,3,1,5,3,3,3,3,2,3,2,3,3,4,3,3,3,2,1,2,3,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,3,3,3,4,
1,3,2,4,2,3,3,2,4,5,2,3,2,2,2,3,3,2,2,2,2,3,5,5,5,3,5,5,5,5,
5,5,6,4,4,4,4,4,2,2,3,2,5,4,4,4,4,4,4,3,4,4,4,4,4,4,4,4,3,3,
3,3,3,3,5,3,3,3,3,3,2,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
 };
static unsigned short stb__arial_6_latin1_h[224]={ 0,4,2,5,6,5,5,2,6,6,2,4,2,1,
1,5,5,4,4,5,4,5,5,4,5,5,3,4,4,2,4,4,6,4,4,5,4,4,4,5,4,4,5,4,
4,4,4,5,4,5,4,5,4,5,4,4,4,4,4,6,5,6,3,2,1,4,5,4,5,4,4,5,4,4,
6,4,4,3,3,4,5,5,3,4,5,4,3,3,3,5,3,6,6,6,2,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,5,6,5,4,4,
6,6,1,5,3,3,2,1,5,1,2,4,3,3,1,5,6,2,3,3,3,3,5,5,5,5,5,5,5,5,
5,5,4,6,5,5,5,5,5,5,5,5,4,5,6,6,6,6,6,4,5,6,6,6,6,5,4,5,5,5,
5,5,5,5,4,5,5,5,5,5,4,4,4,4,5,4,5,5,5,5,5,3,4,5,5,5,5,6,6,6,
 };
static unsigned short stb__arial_6_latin1_s[224]={ 111,31,238,173,107,45,51,254,84,23,250,
87,239,244,253,74,77,127,147,81,161,89,93,78,102,106,199,44,47,232,118,
114,43,136,142,120,131,156,151,110,104,96,160,122,40,34,109,169,99,164,91,
151,82,136,73,66,61,56,51,73,145,65,195,232,250,22,252,14,125,7,4,
129,250,248,31,240,238,189,185,224,141,174,182,206,133,196,178,173,165,156,169,
76,79,81,246,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,
26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,111,148,34,
85,182,186,91,87,247,115,206,202,242,244,97,1,236,178,209,212,241,70,103,
253,226,219,229,222,35,29,23,19,13,7,64,1,246,240,217,98,226,221,216,
211,208,205,201,198,200,189,38,68,60,50,55,213,160,18,26,13,93,139,191,
235,231,127,123,148,194,185,228,111,131,135,115,144,1,11,18,210,119,234,165,
169,156,177,181,215,244,152,41,56,60,9,5,1, };
static unsigned short stb__arial_6_latin1_t[224]={ 7,14,16,1,1,8,8,8,1,1,13,
14,13,16,16,8,8,14,14,8,14,8,8,14,8,8,13,14,14,13,14,
14,1,14,14,8,14,14,14,8,14,14,8,14,14,14,14,8,14,8,14,
8,14,8,14,14,14,14,14,1,8,1,13,16,16,14,1,14,8,14,14,
8,8,8,1,8,8,13,13,8,8,8,13,8,8,8,13,14,14,8,14,
1,1,1,13,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,7,8,1,
8,8,8,1,1,16,8,13,13,13,16,8,19,13,8,13,13,16,8,1,
13,13,13,13,13,8,8,8,8,8,8,8,8,1,1,8,1,1,1,1,
1,1,1,1,1,8,1,1,1,1,1,1,8,1,1,1,1,1,1,8,
1,1,1,1,1,1,1,8,1,1,1,1,1,14,14,14,8,1,8,1,
1,1,1,1,13,8,1,8,8,8,1,1,1, };
static unsigned short stb__arial_6_latin1_a[224]={ 24,24,31,48,48,76,57,16,
29,29,33,50,24,29,24,24,48,48,48,48,48,48,48,48,
48,48,24,24,50,50,50,48,87,57,57,62,62,57,52,67,
62,24,43,57,48,72,62,67,57,67,62,57,52,62,57,81,
57,57,52,24,24,24,40,48,29,48,48,43,48,48,24,48,
48,19,19,43,19,72,48,48,48,48,29,43,24,48,43,62,
43,43,43,29,22,29,50,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,
64,64,64,64,64,64,64,64,24,29,48,48,48,48,22,48,
29,63,32,48,50,29,63,47,34,47,29,29,29,50,46,24,
29,29,31,48,72,72,72,52,57,57,57,57,57,57,86,62,
57,57,57,57,24,24,24,24,62,62,67,67,67,67,67,50,
67,62,62,62,62,57,57,52,48,48,48,48,48,48,76,43,
48,48,48,48,24,24,24,24,48,48,48,48,48,48,48,47,
52,48,48,48,48,43,48,43, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_6_latin1_BITMAP_HEIGHT or STB_FONT_arial_6_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_6_latin1(stb_fontchar font[STB_FONT_arial_6_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_arial_6_latin1_BITMAP_HEIGHT][STB_FONT_arial_6_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_6_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_6_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_6_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_6_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_6_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_6_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_6_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__arial_6_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__arial_6_latin1_s[i] + stb__arial_6_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__arial_6_latin1_t[i] + stb__arial_6_latin1_h[i]) * recip_height;
            font[i].x0 = stb__arial_6_latin1_x[i];
            font[i].y0 = stb__arial_6_latin1_y[i];
            font[i].x1 = stb__arial_6_latin1_x[i] + stb__arial_6_latin1_w[i];
            font[i].y1 = stb__arial_6_latin1_y[i] + stb__arial_6_latin1_h[i];
            font[i].advance_int = (stb__arial_6_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__arial_6_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_6_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_6_latin1_s[i] + stb__arial_6_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_6_latin1_t[i] + stb__arial_6_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_6_latin1_x[i] - 0.5f;
            font[i].y0f = stb__arial_6_latin1_y[i] - 0.5f;
            font[i].x1f = stb__arial_6_latin1_x[i] + stb__arial_6_latin1_w[i] + 0.5f;
            font[i].y1f = stb__arial_6_latin1_y[i] + stb__arial_6_latin1_h[i] + 0.5f;
            font[i].advance = stb__arial_6_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_6_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_6_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_6_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_6_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_6_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_6_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_6_latin1_LINE_SPACING
#endif

