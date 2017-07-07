// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_7_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_7_latin1'.
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

#define STB_FONT_arial_7_latin1_BITMAP_WIDTH         256
#define STB_FONT_arial_7_latin1_BITMAP_HEIGHT         28
#define STB_FONT_arial_7_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_arial_7_latin1_FIRST_CHAR            32
#define STB_FONT_arial_7_latin1_NUM_CHARS            224

#define STB_FONT_arial_7_latin1_LINE_SPACING           5

static unsigned int stb__arial_7_latin1_pixels[]={
    0x0980c331,0x0181820c,0x14198375,0x204c41c4,0x2a0c4088,0x19c306a0,
    0x02e60a0a,0x30bb8833,0x44098288,0x310a0cc0,0x441b8283,0x83310540,
    0x0662140a,0x20543373,0x0506621a,0x4cc0a811,0x543304c0,0x2330a111,
    0x1104dc31,0x44530c41,0x13707222,0x07221c55,0x41c98393,0x10c461c9,
    0x223066a3,0x3118cc52,0x2226394c,0x2628f7a1,0x50e6e188,0x18428570,
    0xa8715054,0x70260d40,0x261a8285,0x2a0d43b3,0x411104c0,0x98622088,
    0x350dc189,0x2130a8d4,0x5c73acc9,0x5471ce4a,0x37399c4a,0x38aeae2a,
    0x7398dce6,0x398dce63,0x46238e37,0x5199c2ba,0x048e3944,0x147b91c7,
    0x9a8271c7,0x39a8e6a4,0x9c9351ce,0x39a8e6a3,0x249a8e6a,0x4926a49a,
    0xa926a715,0x73926a49,0x971ce39c,0x82a49a8e,0x5c2a150a,0xa9c55308,
    0x571c5530,0x57387481,0x871c5331,0x73873873,0x2311c738,0x524e0b9b,
    0x0c71c748,0x1c0ee1c7,0x2a71dcc7,0x5de42a70,0x25ba8e70,0x42ef2553,
    0x17790bbc,0x215396ea,0x262ae5ba,0x0a9c2a72,0x4e39c2a7,0x75371ce3,
    0x54152dd4,0x65c2a150,0x25dc1b1b,0x7931a836,0x54a61748,0xb8e1bcc9,
    0x94c2e530,0x4c2e530b,0x21892152,0x45199c4a,0xc8921518,0x2e242a3b,
    0xb890a8a3,0x3a992ea0,0x24ba92e6,0x57370dab,0x24b992e6,0x436ae4b9,
    0x436ae4ba,0x92ea4bca,0xa92ea4ba,0xba92ea4b,0xb5725ce4,0x150a82a1,
    0x70e21c2a,0x21470710,0x5712f21a,0x7905c751,0x5e44bc89,0x79125e44,
    0x44998d47,0x11a8a714,0xc8870779,0x4451dc3b,0x000043bc,0x00000000,
    0x00000000,0x68e00000,0x2a150540,0x2ef2e150,0x01008080,0x81310004,
    0x00000008,0x441304c0,0x20030460,0x08220008,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x44282980,0x206a0441,
    0x26033008,0x81403302,0x86608809,0x31044621,0x0554140c,0x222c8866,
    0x08415012,0x30aa20d4,0x0c0b9837,0x980c3035,0x2aa0d41b,0x130c0d40,
    0x20dc4098,0x2110541a,0x41311dc0,0x98421861,0x257732cc,0x882a2cb9,
    0x5502981a,0x81540a60,0x11051019,0x394439c4,0x43143944,0x99309aaa,
    0x89b866e1,0x0a71c5c2,0x2a09a877,0x21ca6172,0x23989172,0x854a608b,
    0x2aa6a28a,0x2e909150,0x39966e59,0x8b8a2a37,0x8b8e4224,0x71493738,
    0x045ce71c,0x5045c117,0x5c24d493,0x0ee07703,0x703b81dc,0x4d541707,
    0x20454c08,0x26a60899,0x4ca2eea2,0x4c5b30ba,0x322e089b,0x42d88e70,
    0x938923bb,0x70aa4260,0x292564b3,0x54777098,0xa424c512,0x70e39c73,
    0x449930f2,0x42f22191,0x8e38a153,0x237972a9,0x37971bcb,0x85ba96ea,
    0x80ab80ab,0x80ab80ab,0x20ab80ab,0x448a8829,0x454439a8,0x2aaa2644,
    0x221b7928,0x11dd40b9,0xb96ee175,0xb85423c8,0x8a18e530,0x271d2173,
    0x2751170a,0x26aaa153,0x34842e12,0x172dccb7,0x5ce0cca6,0x9118e330,
    0x151892ee,0x0e0e1b12,0x5c36ae0e,0x0f32a0da,0xcca87995,0x2a1e6543,
    0x1e6543cc,0x4a9c1753,0x4a9c3a9c,0x8aaa20cc,0x3132a18a,0x71dd4751,
    0x5d499750,0x443b3223,0x3b98a3bc,0x43ab96ea,0x49531cbc,0x8eea2aa8,
    0x9351c2bb,0x2ef24bc8,0xa94c7550,0x40e57932,0x1c477912,0x2f2e7797,
    0x00077973,0x24492249,0x24912489,0x00044492,0x00660008,0x08000300,
    0x00040000,0x00000000,0x004c0800,0x20011000,0x00010000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x41800000,0x4c4c0bb9,0x021088c0,0x44061835,0x46141810,0x42633031,
    0x18e23301,0x04c57770,0x861304c3,0x14330aa9,0x450c0c35,0x30c51bb9,
    0x18c2630c,0x2ea1a886,0x2e60c41b,0xb98ae61b,0x0c17730b,0x213104c3,
    0x57731bb9,0x0c422262,0x45c3a820,0x2eb66a48,0x473922a0,0x5ca6e38a,
    0x223911bc,0x984c9350,0x2110ce70,0x1981170a,0x530e6a39,0x231cdc19,
    0x11d2e49a,0x14a9dc91,0x0c9c1c33,0x29a98dc4,0x77386ae2,0x439491ce,
    0x91c3b81a,0x88b9c45c,0x71c91174,0x71da9854,0x37045c11,0x750b273b,
    0x361ccc44,0x7b750b8b,0x3866cc17,0x39dc4907,0x15381892,0x5738542a,
    0x370a8543,0x32370a89,0x95ed20bb,0x25ba9c13,0x70d43a9b,0x724dcee7,
    0x85305970,0x4544a84c,0x515319bb,0x5c054488,0xb8ef2e0a,0x275571cb,
    0x2de5c2e3,0x5ca66e15,0x237970bc,0x2aa1ce73,0x8e0dbd82,0x50eeeae3,
    0x912ea17b,0xbbb9dd41,0xba84c623,0x738542a4,0x70985419,0xb98a150e,
    0x730ef664,0x70dab9c7,0xa8b8912e,0xb838e73a,0x260e20c8,0x2e20cc81,
    0x141dc3a9,0x8f32a054,0x2e91c533,0x38e38e09,0x0726542a,0x839ce707,
    0x5c38262a,0x01c002bc,0x0b805e64,0x0a801188,0x2a49ce15,0x2a1ce130,
    0x2f648050,0x1a380e03,0x4e71b387,0x89c2eee3,0x198af364,0x58ac485c,
    0x054141d4,0x70c8e492,0x32e0e777,0x02a38e3b,0x03bcb838,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x263aa800,0x08502119,0x0c441821,0x000d4111,0x11104215,
    0x233140c1,0x04445318,0x23044453,0x86603129,0x1984ccc1,0x25063595,
    0x4c222209,0x00026750,0x00000000,0x00000000,0x2e000000,0x5d4ea238,
    0x4dc2f6a2,0x4179519c,0x93126e3c,0x0ba8aa61,0x2f6601ce,0x44ee1930,
    0x8554c552,0x9c6ea64a,0x89445338,0x09998953,0x08841811,0x00213330,
    0x00000000,0x00000000,0x00000000,0x2244b770,0x2eea1c0e,0x49730543,
    0x3215cc73,0x54c2ee24,0x14e0b802,0x5dd45318,0x41881550,0x4aa1102b,
    0x00000008,0x00000000,0x00000000,0x00000000,0x6c040000,0x6549173b,
    0x0093b10b,0x99808e70,0x22234101,0x00000208,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_7_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,
0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,
-1,-1,0,0,0,0,0,0,0,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__arial_7_latin1_y[224]={ 5,0,0,0,0,0,0,0,0,0,0,1,4,3,
4,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,2,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,0,0,1,0,
0,0,0,0,0,1,1,3,0,-1,0,1,0,0,0,1,0,2,4,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
 };
static unsigned short stb__arial_7_latin1_w[224]={ 0,2,2,4,4,6,5,1,2,2,3,4,2,2,
2,2,4,3,4,4,4,4,4,4,4,4,2,2,4,4,4,4,7,6,4,5,5,4,4,5,5,2,3,5,
4,5,5,5,4,5,5,4,4,5,5,6,5,5,4,2,2,2,3,5,2,4,4,4,4,4,2,4,4,1,
2,4,1,5,4,4,4,4,3,3,2,4,4,5,4,4,3,2,2,2,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,4,4,4,5,
2,4,2,5,3,4,4,2,5,5,3,4,2,2,2,4,4,2,2,2,3,4,6,6,6,4,6,6,6,6,
6,6,6,5,4,4,4,4,2,2,3,2,6,5,5,5,5,5,5,4,5,5,5,5,5,5,4,4,4,4,
4,4,4,4,6,4,4,4,4,4,2,2,3,2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
 };
static unsigned short stb__arial_7_latin1_h[224]={ 0,5,3,6,6,6,6,3,7,7,3,4,2,1,
1,6,6,5,5,6,5,6,6,5,6,6,4,5,4,3,4,5,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,5,6,5,6,5,6,5,6,5,5,5,5,5,7,6,7,3,2,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,5,4,4,4,6,4,7,7,7,2,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,6,7,6,4,5,
7,7,2,6,3,4,3,1,6,2,3,4,3,3,2,6,7,2,3,3,3,4,6,6,6,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,6,7,7,7,7,7,4,6,7,7,7,7,6,5,6,6,6,
6,6,6,6,5,6,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,5,6,6,6,6,7,7,7,
 };
static unsigned short stb__arial_7_latin1_s[224]={ 126,73,75,106,111,116,133,99,16,24,114,
66,147,150,153,156,159,45,31,191,1,139,180,118,221,123,253,49,51,85,41,
175,33,185,198,150,208,233,228,174,214,220,196,139,134,123,112,210,203,144,192,
232,180,245,169,162,156,150,145,41,242,74,71,141,132,107,169,100,164,88,85,
205,76,105,82,65,63,238,36,52,237,200,244,36,229,26,56,20,10,251,6,
85,88,91,127,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,126,226,19,
216,1,20,117,77,124,185,90,248,94,150,100,118,104,15,101,111,135,128,112,
138,108,78,81,46,87,80,73,68,61,54,47,40,33,26,93,100,11,6,1,
251,248,245,241,238,6,227,27,44,50,56,62,31,191,68,94,120,106,94,40,
156,151,16,176,21,186,233,13,126,141,161,166,171,57,60,81,70,136,129,181,
131,197,202,207,26,223,212,217,222,146,11,6,1, };
static unsigned short stb__arial_7_latin1_t[224]={ 8,16,22,9,9,9,9,22,1,1,22,
22,22,22,22,9,9,16,16,9,16,9,9,16,9,9,16,16,22,22,22,
16,1,16,16,9,16,16,16,9,16,16,9,16,16,16,16,9,16,9,16,
9,16,9,16,16,16,16,16,1,9,1,22,22,22,16,9,16,9,16,16,
9,16,16,1,16,16,16,22,16,9,9,16,16,9,16,22,22,22,9,22,
1,1,1,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,8,9,1,
9,22,16,1,1,22,9,22,16,22,22,9,22,22,22,22,22,22,9,1,
22,22,22,22,22,9,9,9,9,9,9,9,9,9,9,16,1,9,9,9,
1,1,1,1,1,16,1,1,1,1,1,1,22,1,1,1,1,1,9,16,
1,1,9,1,9,1,1,16,1,1,1,1,1,16,16,16,16,1,16,1,
1,1,1,1,22,16,1,1,1,1,1,1,1, };
static unsigned short stb__arial_7_latin1_a[224]={ 28,28,36,56,56,89,67,19,
33,33,39,59,28,33,28,28,56,56,56,56,56,56,56,56,
56,56,28,28,59,59,59,56,102,67,67,72,72,67,61,78,
72,28,50,67,56,84,72,78,67,78,72,67,61,72,67,95,
67,67,61,28,28,28,47,56,33,56,56,50,56,56,28,56,
56,22,22,50,22,84,56,56,56,56,33,50,28,56,50,72,
50,50,50,33,26,33,59,75,75,75,75,75,75,75,75,75,
75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,
75,75,75,75,75,75,75,75,28,33,56,56,56,56,26,56,
33,74,37,56,59,33,74,55,40,55,33,33,33,58,54,28,
33,33,37,56,84,84,84,61,67,67,67,67,67,67,100,72,
67,67,67,67,28,28,28,28,72,72,78,78,78,78,78,59,
78,72,72,72,72,67,67,61,56,56,56,56,56,56,89,50,
56,56,56,56,28,28,28,28,56,56,56,56,56,56,56,55,
61,56,56,56,56,50,56,50, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_7_latin1_BITMAP_HEIGHT or STB_FONT_arial_7_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_7_latin1(stb_fontchar font[STB_FONT_arial_7_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_arial_7_latin1_BITMAP_HEIGHT][STB_FONT_arial_7_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_7_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_7_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_7_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_7_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_7_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_7_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_7_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__arial_7_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__arial_7_latin1_s[i] + stb__arial_7_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__arial_7_latin1_t[i] + stb__arial_7_latin1_h[i]) * recip_height;
            font[i].x0 = stb__arial_7_latin1_x[i];
            font[i].y0 = stb__arial_7_latin1_y[i];
            font[i].x1 = stb__arial_7_latin1_x[i] + stb__arial_7_latin1_w[i];
            font[i].y1 = stb__arial_7_latin1_y[i] + stb__arial_7_latin1_h[i];
            font[i].advance_int = (stb__arial_7_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__arial_7_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_7_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_7_latin1_s[i] + stb__arial_7_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_7_latin1_t[i] + stb__arial_7_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_7_latin1_x[i] - 0.5f;
            font[i].y0f = stb__arial_7_latin1_y[i] - 0.5f;
            font[i].x1f = stb__arial_7_latin1_x[i] + stb__arial_7_latin1_w[i] + 0.5f;
            font[i].y1f = stb__arial_7_latin1_y[i] + stb__arial_7_latin1_h[i] + 0.5f;
            font[i].advance = stb__arial_7_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_7_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_7_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_7_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_7_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_7_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_7_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_7_latin1_LINE_SPACING
#endif
