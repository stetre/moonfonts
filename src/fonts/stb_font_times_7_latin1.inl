// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_7_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_7_latin1'.
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

#define STB_FONT_times_7_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_7_latin1_BITMAP_HEIGHT         28
#define STB_FONT_times_7_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_times_7_latin1_FIRST_CHAR            32
#define STB_FONT_times_7_latin1_NUM_CHARS            224

#define STB_FONT_times_7_latin1_LINE_SPACING           5

static unsigned int stb__times_7_latin1_pixels[]={
    0x440040c0,0x881004c0,0x80440440,0x40882881,0x04402208,0x14041004,
    0x00418044,0x30202060,0x40c13010,0x30044081,0x0c081010,0x44300002,
    0x4418c310,0x060c0cc0,0x88307066,0x394c33a0,0x851ca211,0x80c09a89,
    0x83881881,0x08860662,0x233118a0,0x13109898,0x42222213,0x444420a1,
    0x13060608,0x131c5418,0x21822222,0x221310b8,0x83162661,0x10a884c1,
    0x54426633,0x2332a860,0x2aa23119,0x26215310,0x2e133109,0x8b955c18,
    0x1219d1c1,0x2142e48a,0x1c544339,0x45447151,0x250e2a23,0x54c638a8,
    0x46282a08,0xa86350c8,0x8618d431,0x18d4aa22,0x4e3311ce,0x25371ce3,
    0x88a73198,0x26293319,0x54d21551,0x4a665331,0x26533299,0x2aa15529,
    0x4ca61550,0x54ca6532,0x26115308,0x2115308a,0x5139c1a8,0x8484c383,
    0x4285c323,0x0b921aa9,0x42e485c9,0x5c9282e4,0x98271330,0x54a51860,
    0x2a185430,0x20a82030,0x2e39c30a,0x4738e709,0xab826e73,0x749c26e0,
    0x4dc6a613,0x49d270a8,0x52749d27,0x263531a9,0x4c66331a,0x98ae6331,
    0xb98ae62b,0x7145c1c2,0x35108850,0x229b88e1,0x42e3b8c2,0x5c2e170b,
    0x05c2e170,0x9985c2e5,0x282609b9,0x86350c86,0x218d431a,0x350c98a1,
    0x2ea4aa86,0x25549550,0x702ea537,0x25350ba8,0x265570ba,0x54a6a28b,
    0x26a53529,0x4aae5352,0x265572ab,0x8cc66331,0x98266099,0x18826609,
    0x0220c438,0x90222811,0x1242a143,0x14d44535,0x4d445351,0x429a8942,
    0x31418861,0x0cdc4622,0x4dc43371,0x71022861,0x00000033,0x00002440,
    0x00000000,0x2a753a80,0x466ea753,0x337519ba,0x980c66ea,0x00000060,
    0x00000c41,0x8004c000,0x41004408,0x00800000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40c04c00,0x4104c080,0x10c10888,0x22110441,0x20884410,0x02620c08,
    0x45c20461,0x80882621,0x0ccc1020,0x08808081,0x30288088,0x82080110,
    0x41020820,0x04430220,0x04040110,0x04009804,0x0a710404,0x30a8988e,
    0x54a52435,0x19cc3299,0x186350d4,0x70a514a6,0x8a8a3a98,0x261a8821,
    0x4c17529a,0x0724193a,0x4c0c4183,0x00882881,0x288a0201,0x426184c3,
    0x866298c1,0x1065719a,0x41b86215,0x4715128a,0xa8662729,0x21335128,
    0x13099252,0x2a089449,0x4e474920,0x30d54c1c,0x20c30a87,0x2e064c34,
    0x119b9429,0x98705419,0x819332ab,0x42ea3872,0x441550aa,0x84884884,
    0x48848848,0x13066208,0x84418983,0x24c75518,0x0c981155,0x260aac82,
    0x38485c91,0x155139c7,0x49243261,0x4411c473,0x32398923,0x43b8c1b9,
    0x50418d42,0x39c58815,0x8b6a7386,0x89983109,0x50c19534,0x1a98a1c3,
    0x205cc353,0x205cc0b9,0x205cc0b9,0x1102a0b9,0x10cc4433,0x2a106331,
    0x2a61d429,0x22a31283,0x2e17041c,0x738e7090,0x4cc22aa2,0x55491313,
    0x89866624,0x26144550,0x24854199,0x066e22ba,0x214d4483,0x1998a19a,
    0x2a063512,0xbb8753ab,0x2ae08902,0x15545572,0x85550aaa,0x215542aa,
    0x2314e2aa,0x2305462a,0x0984432a,0x8ae31554,0x2ae53099,0x9a88a1cb,
    0x55426a22,0x4544a664,0x000062a2,0x00000000,0x00000000,0x00000000,
    0x0d8e0000,0x436386c7,0x21b1c363,0x40008363,0x00800000,0x00000200,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x5c399800,0x0988a32a,0x08818210,0x21ccc0c1,0x82199808,0x98813109,
    0x0004cc40,0x22133102,0x44266219,0x10c62110,0x41880311,0x98442208,
    0x02088110,0x31555453,0x270c5c33,0x25330423,0x55462089,0x2e2e3310,
    0x43330208,0x11026088,0x38738304,0x9a98e2a7,0x070a9544,0x53507033,
    0x046404c4,0x41753011,0x22a649a9,0x22244330,0x5466a60a,0x21713089,
    0x22a44539,0x8e6609aa,0x2c730caa,0x4c299253,0x8e613312,0x10c61aa8,
    0x0d439c15,0x9b9d4527,0x426e3532,0x26a21ca9,0x13300070,0x51330dcc,
    0x5528b875,0x46e2ea19,0x22e13298,0x9b8542a1,0x83986ea2,0x4c2a2aa9,
    0x8cc17730,0x0545731b,0x214dc173,0x730ae60a,0x224c0ab8,0x31cdc0c9,
    0x262e6195,0x19926e64,0x0aa810cc,0x14543937,0x4c49550e,0x8c4ca6a1,
    0x2a557298,0x830a2e0b,0x884c00ba,0x1986e619,0x33050e1c,0x09a5dc2e,
    0x21309877,0x31145473,0x84c11950,0x19895308,0x09826617,0xa8738aaa,
    0x20902660,0x2e60c983,0x85314dc4,0x46649b89,0x00330664,0x00013100,
    0x80000000,0x11100998,0x40201001,0x2ea020c1,0x71a94429,0x71a8d473,
    0x0a60c491,0x0d426ae7,0x3751cd54,0x1a8cdd45,0x448c86c7,0x3590aa2b,
    0x226a2445,0x01b3550d,0x6ce2a154,0x9ba96550,0x00000751,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x26e08100,0x5c5371ab,0x2a986aa1,
    0x22081042,0xa8211040,0x084ccc00,0x330420c0,0x1998aa33,0x00000ccc,
    0x00000000,0x00000000,0x00000000,0x00000000,0x9c261351,0xb071ce53,
    0x33395470,0x10ab94c1,0x11289445,0x13331994,0x404ccc22,0x00020108,
    0x00000000,0x00000000,0x00000000,0x00000000,0x20c00000,0x27191709,
    0x8a82e48c,0x084c66e3,0x41119831,0x40c46a31,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000008,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_7_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_7_latin1_y[224]={ 5,0,0,0,0,0,0,0,0,0,0,1,4,3,
4,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,2,0,2,0,2,0,2,0,0,
0,0,0,2,2,2,2,2,2,2,1,2,2,2,2,2,2,0,0,0,2,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,0,0,1,0,
0,0,0,0,0,2,2,3,0,0,0,1,0,0,0,2,0,2,4,0,0,2,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
 };
static unsigned short stb__times_7_latin1_w[224]={ 0,2,3,4,3,6,5,1,2,2,3,4,2,2,
2,2,3,3,3,3,3,3,3,3,3,3,2,2,4,4,4,3,6,5,4,4,5,4,4,5,5,2,3,5,
4,6,6,5,4,5,5,4,4,5,5,6,5,5,4,2,2,2,3,5,2,3,4,3,4,3,3,4,4,2,
3,4,2,5,4,3,4,4,3,3,2,4,4,5,4,4,3,3,1,3,4,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,3,4,4,4,
1,3,2,5,3,3,4,2,5,5,3,4,2,2,2,4,4,2,2,2,2,3,5,5,5,3,5,5,5,5,
5,5,7,4,4,4,4,4,2,2,2,2,5,6,5,5,5,5,5,4,5,5,5,5,5,5,4,3,3,3,
3,3,3,3,5,3,3,3,3,3,2,2,2,2,3,4,3,3,3,3,3,4,4,4,4,4,4,4,4,4,
 };
static unsigned short stb__times_7_latin1_h[224]={ 0,6,3,6,6,6,6,3,7,7,4,4,3,1,
2,6,6,5,5,6,5,6,6,6,6,6,4,5,4,2,4,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,6,6,5,7,5,6,5,6,6,6,5,5,5,7,6,7,3,1,2,4,6,4,6,4,5,5,5,5,
7,5,5,3,3,4,5,5,3,4,5,4,4,4,3,5,3,7,7,7,2,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,6,7,6,4,5,
7,7,2,6,3,4,2,1,6,1,3,4,3,3,2,5,7,2,3,3,3,4,6,6,6,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,7,7,7,7,7,7,4,6,7,7,7,7,6,5,6,6,6,
6,6,6,6,4,5,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,5,6,6,6,6,7,7,7,
 };
static unsigned short stb__times_7_latin1_s[224]={ 255,70,46,73,78,82,96,36,29,16,247,
1,60,96,82,67,122,247,240,153,22,89,213,209,132,161,239,65,242,69,251,
102,81,88,230,112,74,80,104,136,149,160,157,126,155,142,172,106,137,32,68,
199,99,184,193,165,120,114,109,38,190,72,50,99,74,210,204,229,142,214,50,
45,40,37,88,29,26,9,15,198,6,1,20,168,244,188,183,218,24,225,29,
92,96,122,77,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,
233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,233,255,93,126,
179,178,217,120,98,66,147,42,206,91,96,126,105,38,224,54,57,85,11,19,
88,63,6,33,202,61,55,49,45,39,33,27,21,15,9,54,24,250,245,240,
235,232,229,226,223,16,41,48,54,60,66,75,193,185,130,114,102,108,163,235,
155,1,5,181,215,211,219,172,251,141,169,159,177,62,222,34,85,173,94,191,
195,199,203,207,163,132,136,150,145,117,11,6,1, };
static unsigned short stb__times_7_latin1_t[224]={ 1,9,22,9,9,9,9,22,1,1,16,
22,22,22,22,9,9,8,8,8,16,9,8,8,9,8,16,16,16,22,16,
9,1,16,8,9,16,16,16,8,16,16,8,16,16,16,8,9,16,1,16,
8,16,8,8,8,16,16,16,1,8,1,22,22,22,16,8,16,8,16,16,
16,16,16,1,16,16,22,22,16,16,16,22,16,8,16,16,16,22,8,22,
1,1,1,22,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,
16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,1,9,1,
8,16,8,1,1,22,8,22,16,22,22,9,22,22,16,22,22,22,16,1,
22,22,22,22,16,9,9,9,9,9,9,9,9,9,9,16,1,1,1,1,
1,1,1,1,1,16,1,1,1,1,1,1,16,1,1,1,1,1,1,8,
1,9,9,1,1,1,1,16,8,1,1,1,1,16,8,16,16,1,16,1,
1,1,1,1,16,16,1,1,1,9,1,1,1, };
static unsigned short stb__times_7_latin1_a[224]={ 25,34,41,51,51,84,79,18,
34,34,51,57,25,34,25,28,51,51,51,51,51,51,51,51,
51,51,28,28,57,57,57,45,93,73,67,67,73,62,56,73,
73,34,39,73,62,90,73,73,56,73,67,56,62,73,73,95,
73,73,62,34,28,34,47,51,34,45,51,45,51,45,34,51,
51,28,28,51,28,79,51,51,51,51,34,39,28,51,51,73,
51,51,45,49,20,49,55,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,25,34,51,51,51,51,20,51,
34,77,28,51,57,34,77,51,40,56,30,30,34,58,46,25,
34,30,31,51,76,76,76,45,73,73,73,73,73,73,90,67,
62,62,62,62,34,34,34,34,73,73,73,73,73,73,73,57,
73,73,73,73,73,73,56,51,45,45,45,45,45,45,67,45,
45,45,45,45,28,28,28,28,51,51,51,51,51,51,51,56,
51,51,51,51,51,51,51,51, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_7_latin1_BITMAP_HEIGHT or STB_FONT_times_7_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_7_latin1(stb_fontchar font[STB_FONT_times_7_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_7_latin1_BITMAP_HEIGHT][STB_FONT_times_7_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_7_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_7_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_7_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_7_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_7_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_7_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_7_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_7_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_7_latin1_s[i] + stb__times_7_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_7_latin1_t[i] + stb__times_7_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_7_latin1_x[i];
            font[i].y0 = stb__times_7_latin1_y[i];
            font[i].x1 = stb__times_7_latin1_x[i] + stb__times_7_latin1_w[i];
            font[i].y1 = stb__times_7_latin1_y[i] + stb__times_7_latin1_h[i];
            font[i].advance_int = (stb__times_7_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_7_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_7_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_7_latin1_s[i] + stb__times_7_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_7_latin1_t[i] + stb__times_7_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_7_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_7_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_7_latin1_x[i] + stb__times_7_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_7_latin1_y[i] + stb__times_7_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_7_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_7_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_7_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_7_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_7_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_7_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_7_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_7_latin1_LINE_SPACING
#endif

