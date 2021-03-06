// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_9_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_9_latin_ext'.
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

#define STB_FONT_arial_9_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT         68
#define STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT_POW2   128

#define STB_FONT_arial_9_latin_ext_FIRST_CHAR            32
#define STB_FONT_arial_9_latin_ext_NUM_CHARS            560

#define STB_FONT_arial_9_latin_ext_LINE_SPACING           6

static unsigned int stb__arial_9_latin_ext_pixels[]={
    0x04010044,0x200a8084,0x22010080,0x00804408,0x80cc0201,0x20002200,
    0x10088088,0x44000402,0x0c408808,0x22008044,0xc8101100,0x10084eee,
    0x04201000,0x88080444,0x03881e40,0x503d1033,0x414c0dc0,0x2a84a81a,
    0x93053070,0x02e05507,0x81cc8264,0x2a07705b,0xc883880b,0xd80bc80c,
    0x0aa0ee0c,0x904c80cc,0x44160907,0x05305503,0x03750597,0x90770179,
    0x260b8a69,0x5c533bcd,0x29837320,0x46b202e0,0x320b88a9,0x1711531a,
    0x88a98d64,0x4c37320b,0x4530b88a,0x305c530b,0x3cc98799,0x3261e64c,
    0x31664c3c,0x799305c5,0x12e2cc98,0xcc985993,0x4c1664c3,0x1606e642,
    0x0a98f326,0x9304cc17,0x24cc9899,0x714c2e29,0x322a94c1,0x54f61b10,
    0x389d4322,0x040e80a6,0x410c8aa1,0x20864550,0x3a864550,0x50c8aa71,
    0x322a8645,0x1b15c360,0x4570d8ae,0xc962570d,0x1b064550,0x2192c4ae,
    0x20c9622a,0xc962570d,0x22751540,0x2b86c2c3,0xbc986455,0x489d4916,
    0x219154ea,0x5398322a,0x172b8645,0xd10c8aab,0x42de5417,0x558dc3c9,
    0x2b1b8645,0x58dc322a,0xbe886455,0x550c8aa0,0x4322a864,0xac2aac2a,
    0xac2aac2a,0x8645501b,0x501bac2a,0x42a80dc5,0x22a80375,0x54580be8,
    0x4322aac2,0x540aab0c,0xa8645502,0x55398322,0xb1b9c864,0x6540c8aa,
    0x2321aea3,0x45558dc5,0x1556370c,0x2aac6e19,0x2a795032,0x19154322,
    0x8370c8aa,0x83758375,0x03758375,0x8370c8aa,0x43660375,0x7583701b,
    0xca82a803,0x2b06e2c3,0x685c322a,0x8dd7ae37,0x864555eb,0x3398322a,
    0x2a3b3347,0x43534733,0xe88b1595,0x9ac6e2da,0x26b1b9a3,0x26b1b9a3,
    0x4d61a9a3,0x99a399a3,0x52a499a3,0x524d2a49,0x934a9269,0x99a398dc,
    0x3724d2a4,0x98dc931c,0x3724d2a4,0x2c35154e,0x9a54930e,0x36cc89a3,
    0x35893589,0x23473347,0xa8f77239,0x6ee44dcd,0x54b73623,0x4cdd46cc,
    0xdc96f665,0xc96f663d,0x96f663dd,0x33623ddc,0x90f7722d,0x3ddc87bb,
    0x36e26edc,0x226edc4d,0x665c4ddb,0x2e1eee43,0x1e65c4dd,0xb879970e,
    0x1e65c4dd,0x66c41bb5,0x6edc142d,0x331eee44,0x22dcda96,0x3722dcda,
    0x21eee43d,0x00000039,0x00362c00,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x0065c400,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x08000000,
    0x1714c020,0x30100066,0x06e0ca83,0x83322021,0x1cc92e4a,0x2a066654,
    0x90080844,0x41b86039,0x20dcc810,0x20612e0a,0x0f764c08,0x6cc26021,
    0x220663cc,0x10480200,0xbc808400,0x83990510,0x0480d400,0x64550791,
    0x26058530,0x03622982,0x2985b109,0xc960dc2e,0x22226e1a,0x4c31510c,
    0x261e440e,0x241a8853,0x713a87a6,0x4c3350dc,0x3fa1e41c,0x1c0f4c49,
    0x70906c55,0x08888380,0x66441991,0x1042b880,0x479930e6,0x8085dc28,
    0x6493eeea,0x0c8aa531,0x0fbbaa53,0x265dddd5,0x20907a62,0x2191540d,
    0x4420ac1b,0x938dccab,0xa7776521,0x26c4320c,0x54913322,0x17d13eee,
    0x2d7931b8,0x21714c1a,0x336649fd,0x9ba8a63c,0xcd985c59,0x0c81b03c,
    0x5c7314c9,0x48640d80,0x2570d873,0x03714c29,0x2990c86c,0x1064550c,
    0x849d81b0,0x05712229,0x322a8793,0x23758370,0x9d22b155,0x222c2ab9,
    0x259a4755,0x40dc0b9b,0x371e540d,0x209bac32,0x4e44322a,0x370d8aa4,
    0x2a075e54,0x2606c552,0x3155cc3c,0x40c8f547,0x955cc3c9,0x26b0aa39,
    0x20371cc3,0x52a6a62c,0x02268e25,0xad8b9859,0x21cc530a,0x5458c82a,
    0x560dc322,0x5562eb1b,0x161360ab,0x93b316ee,0x0321555c,0x5cb0d459,
    0x5e5da171,0x41b55955,0x266ea49a,0xb32a8aa5,0xb33751b8,0x89b0b190,
    0x0656aa39,0x99361632,0x0e6b06e3,0x1d40dc73,0x224dc5e4,0xa8a63dcc,
    0xaadbbd83,0x240d4530,0x398b6ba2,0x1bac1b9a,0x3732ea6b,0xe82c25c2,
    0x3a23d880,0x10ea243c,0x88dc5b9b,0x556376cc,0x26a0d99b,0x983af2a4,
    0x3a2c8aa5,0x881d7950,0x225c2dae,0x3326aa39,0x70b6ba20,0x54931cc9,
    0x2e398734,0x34c82cc1,0x29815059,0x975930b3,0x24064530,0xb91666ea,
    0x4d60dc7b,0xb88b25bd,0x2c1602e2,0x441c594c,0x41b81664,0x8dd61329,
    0x35064555,0x2c599549,0x2a962244,0x599ba8b3,0x2a8e605c,0x4cdd41d9,
    0xb83305c5,0x730e64dd,0x1666741c,0x5c407477,0x66674620,0x333a21b2,
    0x540ee312,0x3001b161,0x64c015c9,0x2c0ea0bc,0x18397058,0x3333a1b8,
    0x23702e22,0x56370cb8,0x2898322a,0x0262c8aa,0x8aa09873,0x2a1b162c,
    0x44aa3983,0x2a1b160e,0x4c005c43,0x00731cc3,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,
    0x81100401,0x20002e39,0x2cc98000,0x81011008,0x80d40880,0x20420220,
    0x4488d41a,0x3501b03c,0x13bba617,0x20010801,0x2212a20a,0x408406a0,
    0x80d640ab,0x664c2886,0x26288a24,0x65cc2222,0x2e05542d,0x32059300,
    0x40c8f543,0x401504c9,0x8192c40b,0x6440b80b,0xa8170a63,0x202e1b82,
    0x508dc0da,0x14c41b15,0x20841e4c,0x22dc882a,0x2e0ae239,0x05c53041,
    0x440cdc77,0x9304c41e,0x44cc9879,0x9d4910a9,0x4c44e639,0xd9665970,
    0x0d811110,0x5c730360,0x2032b550,0x0171cc0d,0xd301b81d,0x3bba69dd,
    0x269ddd34,0x2a864192,0xd30350a8,0x8e4dc3bd,0x81b80eba,0x0c9b858c,
    0x26e35595,0x774ca62a,0x49ddd34e,0x3064551b,0xd325edc5,0x9af269dd,
    0xa922570d,0x0aad7933,0x42e731cc,0x371cc375,0x07932c2e,0x23d50f26,
    0x1993550c,0x8f543c98,0x2e1e4c0c,0x05505501,0x56273055,0x46e0aa3a,
    0x1b12a82a,0x3bea8fae,0x6d7441b8,0xca864dc2,0x987b31aa,0x20550553,
    0x3064551b,0x550c8dc7,0x21556190,0xac320555,0x8e6bd71b,0x05d61739,
    0xb0b8d453,0x58c82c64,0x550cad54,0x8b1903b2,0x8c8195aa,0x2a3724c5,
    0x55951aac,0x4c6ab2a3,0x05516ee3,0x8aa0aa37,0x2a1b571b,0x541b83b2,
    0x64dc599b,0x97620550,0x23559539,0x46e1aaca,0x2398322a,0x55654b2b,
    0x20dda171,0x5d7ae375,0x26b126d0,0x237298ab,0x4914c175,0x36ba2b1b,
    0x516d7442,0x4aa19935,0x36ba20e8,0x83326aa2,0x65c2dae8,0x46ab2a3c,
    0x5951aaca,0x81d0e635,0x2370ccda,0x4ae2a82a,0x2255499b,0xd8b06e0e,
    0x6d4326e0,0x4b5154cc,0x23559539,0x46e1aaca,0x5c731a39,0x2ab2a3cd,
    0x926d9911,0x9158934a,0x96e6d4d9,0xb30dc9b9,0x8a9864b7,0x556f663c,
    0x4dd4599b,0x0764aa59,0x266ea122,0x50764aa5,0x8530b337,0x2a82a82a,
    0x3702c398,0x2a82a8dc,0x38819036,0x481c00b8,0x31eecc70,0x40aa0aa7,
    0x30f7720b,0x41540dc7,0x26edcb09,0x84cb736a,0x20000c85,0xb1600039,
    0x954362c1,0x2c1cc0e8,0x0e895436,0x41b81b16,0x9b54ccda,0x53336a99,
    0x0b882c39,0x8666d46e,0x1c42dcda,0x200e2154,0x3a81cc39,0x66d4e614,
    0x2999b54c,0x98e60038,0x14ccda80,0x88000197,0x001cc0cb,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xb8800000,0x41ac8132,0xb82541bb,0x098aee2a,0x0e2a05dc,0x70501102,
    0x55408473,0x2e605541,0x26a0ca83,0x4084ee04,0x0b3260bb,0x92cc8851,
    0x4dc3324c,0x106ee242,0x55438883,0x2aa05541,0xb983ca81,0x2aa3cdbb,
    0x1ac83321,0x8531212a,0x1d22a0bb,0x99818808,0x8884cc40,0x44597708,
    0x886ce442,0x0a0ae3bc,0x4b595066,0x3054c0a9,0x6d44799b,0x22224170,
    0x4cb7952c,0x144392c2,0x35156436,0x229c8aa1,0x32a1c418,0x510aea5a,
    0x01730310,0x07c56032,0x22886662,0x88c4c420,0x88261088,0x20d5dcc2,
    0x2f223bc8,0x170ef223,0x5b5585d6,0x7b51de44,0xc96eee1b,0xc88ef223,
    0xc8ac6a3b,0xa8ef223b,0x226bc982,0x35e4c555,0x9decd655,0xb34baaa9,
    0x2688aa77,0x64553bd9,0x654ef661,0x9735d45a,0x3225aca8,0x216b2a3b,
    0x5b14c3b9,0x732c2e15,0x5617585c,0x8ac2eb0b,0xb9b843bc,0x90b92170,
    0x585c485c,0xa544d617,0x27225bbb,0x4d8626e3,0x90b96eee,0x921758d4,
    0x2b2a5bbb,0x7716191a,0x8d4b0c89,0x55dc2195,0x5c2193ba,0x542192c1,
    0x410c8322,0x962b26ba,0x2e6ba829,0xc86ba890,0x55b15458,0x4732c2e1,
    0xbac2eb0b,0x0bac2eb0,0x5ce91509,0x2e585cb0,0x2eb1b8b0,0x5cb326b1,
    0x2f72e189,0x0d479910,0x585c3137,0x4b0bac6a,0x2b2a189b,0x3a16191a,
    0x46a58640,0x7244a175,0x249942e3,0x39942e3a,0x564a1716,0x996f2a58,
    0x172c5642,0xe858ac96,0x0f9221da,0xb8e658dc,0x1bac6eb1,0xb0bac6eb,
    0x644aae70,0x88f3223c,0xadecc3cc,0x88e65bd9,0x4122e3cc,0x79912cc3,
    0x9221e644,0x33223cc8,0x2f620aa3,0x5bd88585,0xa8b322b0,0x8b3223cc,
    0x66444ddb,0x910f7322,0x416f2a59,0xb7951663,0x7951e644,0x4499ba8b,
    0x33cddbca,0xb31ccb7b,0x4d6f66b7,0x2b7b35bd,0x02083cc8,0x20000000,
    0x2b80001b,0x01cc0000,0x0999b500,0x0aa00160,0x00000000,0x01cc0000,
    0x64580000,0x03980000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x54240000,
    0x0dcc3b81,0x70e2072a,0x59035017,0x50904a83,0x81701103,0x5c1ac829,
    0x8482541b,0x5c1cc829,0x0d540823,0x89332041,0x3bcc9818,0x044e0222,
    0x39707015,0x65c170cc,0x20a82b20,0x330b3260,0x5c2bba89,0x2066dc2c,
    0x83505028,0xa84ac0ca,0x98826221,0x99808089,0xd9850280,0x7304543b,
    0x50530310,0x28828815,0x715c494c,0x1a831161,0x56d41c49,0x99ec3624,
    0x552225ac,0xa87062e3,0x219154b2,0x0e144b19,0x995c3225,0x55353ccd,
    0x731ca653,0x23bc88e2,0x32ee3bc8,0xeb877912,0x0b965dc0,0x2efaaeab,
    0x64477912,0x88ef223b,0xb04323bc,0x96b2a1f5,0x2b2a5aca,0xca96b2a5,
    0xa96b2a5a,0x4b2ee1a9,0x1de44b0b,0x1cca9235,0x2e57246a,0x64d61958,
    0x5e5c976b,0x4b0b86a4,0x4570322a,0x15ca1c39,0x455c1556,0x88195388,
    0x2485c0bd,0x716d490b,0x2acc9921,0x4b0b8b6a,0x775bbeb9,0x72dddcb7,
    0x2dddcb77,0x5d54ca17,0xd751aea2,0x35d46ba8,0x4d751aea,0x8b6a499a,
    0x2dddcb1b,0x4b089655,0x8dc64b1a,0x58656175,0x1c48dc53,0x322a9219,
    0x4c732cc0,0x5621ba41,0x2571aaca,0x205d5388,0x72c2e3ca,0x74a89961,
    0x45d0b961,0x56374a89,0x2e311d2c,0x8626e189,0x226e189b,0x654b3221,
    0x4b1590b9,0x22b258ac,0xac962b25,0xa962b258,0x52a26731,0x226e5bd9,
    0x099b36a1,0xb31e6d49,0xb6644ea3,0x1b8a6b0c,0x32c6a389,0x996132c7,
    0xaa4d60e3,0x2355953b,0x7128bb8b,0x9912c370,0x931e6447,0x88b2e259,
    0x33265ccc,0x32ab7b32,0x9911ccbc,0x911e6447,0x21e64479,0xa933a238,
    0x96f2a5bc,0x2f2a5bca,0xca96f2a5,0x4732aa5b,0x22382cc9,0x2206a3cc,
    0x2606a2bc,0x22b04dcc,0x65cb15bd,0x59911c2c,0x3223dcc8,0x5838e63c,
    0x154bb76e,0x3323bbb8,0x5b9b10cc,0x00000000,0x00000000,0x0021a800,
    0x00000000,0x80550000,0x00260009,0x00000280,0x01cc0000,0x99b5180e,
    0x00000009,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x26000000,0x910f3261,0x10715059,0x32e1664c,
    0x2040e5c0,0x2488e0ba,0x04712228,0x77504441,0x5541ca85,0x3105c330,
    0x5dc06a04,0x47133240,0x0333cdcb,0xccdd9815,0x982a3532,0x83b81701,
    0x54151c38,0x0733660a,0x11055c33,0x321bb811,0x8981b10b,0x73244aa0,
    0x0c82b86c,0x432488c4,0x8594cb1a,0x44171b83,0x05c710e3,0xb5e4d219,
    0x53299baa,0x66e4310e,0xbb7933ec,0x2218cc95,0x1a8a2238,0x419a8b05,
    0x54246c0b,0x40d4170a,0x84661098,0x22e609a8,0x25504cc5,0x642aa258,
    0x1022222b,0x1a855443,0x25507d6c,0x4585502a,0x406e03b9,0x1de44b0b,
    0x06aaaa1c,0x199c054e,0xb0c955cc,0xbb9ce66e,0x5951c41c,0x664321b5,
    0x52eee0db,0xb5955aca,0x6d45806a,0xb1731dc0,0x9b86a155,0x2cb86351,
    0x54ce2b2b,0x22066c3c,0x31b85dc3,0x5332a795,0xca98e200,0x5d54c353,
    0xcb8dcaa2,0x46458374,0x64406e05,0x512aea5c,0x82e71107,0x221baa88,
    0x726c1738,0x39dcdda1,0x54711659,0x2170d99b,0x46e0a8bc,0x58d56355,
    0x17d71035,0xad8760b6,0x4350aada,0xb863519b,0x86b322e1,0x06765448,
    0x372cc871,0x05635244,0x2a488710,0x4e2e72a1,0x9358932a,0x876ba1d4,
    0x88dc7329,0x22485c90,0x20655204,0x32a906a4,0x6bc892e0,0x2a535157,
    0x8aa388b0,0x9b99910c,0x46ab0b89,0x00d56355,0x30b81b8b,0x43509559,
    0x82e06a0b,0x1624cbc8,0x3882f72a,0x1621b154,0x71005635,0xe886a2c4,
    0x541b954c,0x376e1dcd,0x124cdd44,0x911e65c3,0x31de4459,0x970a8329,
    0x20cb85c5,0x05c5970a,0x3bbb9613,0x4710f322,0x7000322a,0x3558d561,
    0x20666d56,0xb8666d45,0x333a2190,0xb505c352,0x1d02e199,0x21e6ec95,
    0x6d438838,0x4f3762dd,0x06226b1a,0xa9e6ec71,0x00000021,0x00001916,
    0x00839500,0x00411104,0x00cb8875,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x204410c2,0x1dc1ccd9,
    0x54104aea,0x1a9204c4,0x18808575,0x0a80cc11,0x131ac813,0x799b3026,
    0xd9810762,0x540441cc,0x90a60c41,0x372e1cb8,0x4c99953c,0x332a3ccc,
    0x5324173d,0x198dc71c,0x99b30b87,0x4c333665,0x170cc2a3,0x66ccb126,
    0x44b3221c,0x6c2e3cbc,0x22c4aa0b,0x0b862209,0xcbb84ccb,0x15118312,
    0xaba8ef22,0x79b52bbe,0x411a85c1,0x50cd4220,0x5e447505,0xb32c4aa3,
    0x950ec477,0x4d91ccb5,0x220b0b1a,0xd80d8aa4,0x1b0aab10,0x74c85c39,
    0x0a6586e1,0x1eaa4c6a,0x50c8aa17,0x22a9aa1d,0x90bac6a5,0x5c2d85c5,
    0x50d4370b,0x12c2eb59,0x47116d47,0x42e59738,0xaddf5cc4,0x42e598aa,
    0x54711c9a,0x32ab5951,0x2e1971aa,0x1b8aa5bb,0x41ac8219,0x588e66ba,
    0x8360b0b0,0x2c8599ba,0x1f4425dc,0x1252a6a6,0x2ac98a69,0x55472aea,
    0x2ab2a175,0x9327750d,0x2910b12a,0x0b1b890b,0x1a86e599,0x4b1bac6a,
    0x452a2638,0x170dce23,0x311d2c96,0x542e58aa,0x51a8e22e,0x8d565563,
    0xa8626e29,0x7285cae2,0x2c564351,0x06c45851,0x32a2442c,0xe81d40eb,
    0xbc83d880,0x0ca448b8,0xaba8ab26,0x1773353b,0x543666ea,0x66d49749,
    0x3322580b,0x542df4c2,0x2a1a8362,0x896f66b1,0x1c4b3263,0xcc882e71,
    0x332f32a3,0x5c399b51,0x51c4b550,0x82aac6a3,0xa8f32229,0x96644362,
    0x2f2a5dcb,0x6c4b0625,0xa8170b00,0xb024cb32,0x99072360,0x89550b26,
    0x5561a829,0xc8aa1b91,0x49377350,0x0001402a,0x542ddda8,0x2202c6a1,
    0x2711c403,0x2a80000b,0x5266a170,0x58d46a38,0x0a6999b5,0x00b776a0,
    0x214c00d4,0x16133725,0xb2b8aa16,0xb858799b,0x3e3b8b11,0x414c1e80,
    0x2352dcda,0x864550e8,0x1549689a,0x00000710,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x51033000,
    0x91198190,0x42662104,0x10823aaa,0x22311082,0x21110420,0x2082082a,
    0x881c0e20,0x888e2a0b,0x05d4aea0,0x98dd4111,0x2310621b,0x221b9221,
    0x4dc6a23a,0x442e5302,0x4a72530a,0x86ea10a8,0x5ddc4224,0x2ee2531b,
    0x000001bb,0x0e606a00,0xd89a8773,0xca9a4320,0x5d493933,0x4e2b2b2b,
    0x2a5adbca,0x545975ac,0x44726e3c,0x872a2712,0x33221d98,0x65432e21,
    0x5c9751dc,0x54199951,0x0dcc4e71,0x32388f32,0x29aa4e44,0x23124557,
    0x80c5d30c,0x1330dcaa,0x00003104,0x80000000,0x4643981a,0x26075545,
    0x2a9221aa,0x322e4c89,0x5d6351ac,0x40dd6350,0x205d70db,0x4c5b7338,
    0x85b50beb,0x71a80bc8,0x544aaa95,0x2a1970aa,0xb877732b,0x1b9a9c1e,
    0x84218e72,0x0c441039,0x00000000,0x00000000,0xd0e606a0,0x1ded43b5,
    0xca8b126c,0x7912ec4c,0x1758d499,0x2a0bac6a,0x882cdc1c,0xa8240e23,
    0x220a2a0c,0xaaa88200,0x1c401110,0x10421ce2,0x00000a62,0x00000000,
    0x00000000,0x3981a800,0x1a9266ea,0x3764b839,0x24cdc03c,0x58d4951d,
    0x0bac6a17,0x53498b80,0x02665ce2,0x00000000,0x00000000,0x00000000,
    0x00000000,0x40000000,0x4730ccda,0xb11a8645,0x00000001,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__arial_9_latin_ext_x[560]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,-1,
0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,
-1,-1,0,0,0,0,0,0,0,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,0,-1,-1,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static signed short stb__arial_9_latin_ext_y[560]={ 7,1,1,1,0,1,1,1,1,1,1,2,6,4,
6,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,1,2,1,2,1,2,1,2,1,1,
1,1,1,2,2,2,2,2,2,2,1,2,2,2,2,2,2,1,1,1,3,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,2,1,1,2,1,
1,1,1,1,1,3,2,4,1,0,1,2,1,1,1,2,1,3,6,1,1,3,1,1,1,2,-1,-1,-1,-1,
0,-1,1,1,-1,-1,-1,0,-1,-1,-1,0,1,-1,-1,-1,-1,-1,0,2,1,-1,-1,-1,0,-1,1,1,1,1,
1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,
0,1,-1,1,1,2,-1,1,-1,1,-1,1,-1,1,-1,1,1,1,0,1,-1,1,-1,1,1,2,-1,1,-1,1,
-1,1,0,1,1,0,-1,-1,1,1,-1,1,0,1,-1,1,1,1,-1,2,1,1,-1,1,1,1,2,-1,-1,1,
1,1,1,1,1,1,1,-1,1,1,2,-1,1,1,1,2,0,1,-1,1,-1,1,1,2,-1,1,1,2,-1,1,
-1,1,-1,1,1,2,-1,1,1,1,-1,1,1,1,-1,1,0,1,-1,1,-1,1,-1,1,1,2,-1,1,-1,1,
0,-1,1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,-1,1,-1,
1,-1,1,-1,0,-1,-1,-1,-1,-1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-2,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static unsigned short stb__arial_9_latin_ext_w[560]={ 0,2,3,5,5,7,6,2,3,3,3,5,2,3,
2,3,5,4,5,5,5,5,5,5,5,5,2,2,5,5,5,5,8,7,5,6,6,5,5,6,6,2,4,6,
5,7,6,6,6,6,6,5,5,6,6,8,6,6,5,3,3,2,4,6,2,5,5,4,4,5,3,4,4,2,
3,4,2,7,4,5,5,4,3,4,3,4,4,6,4,4,4,3,2,3,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,5,5,5,6,
2,5,3,6,3,4,5,3,6,6,3,5,3,3,3,5,5,2,3,2,3,4,7,7,7,5,7,7,7,7,
7,7,8,6,5,5,5,5,2,3,4,3,7,6,6,6,6,6,6,5,6,6,6,6,6,6,6,5,5,5,
5,5,5,5,7,4,5,5,5,5,2,3,4,3,5,4,5,5,5,5,5,5,5,4,4,4,4,4,5,4,
7,5,7,5,8,5,6,4,6,4,6,4,6,4,6,5,7,5,5,5,5,5,5,5,5,5,5,5,6,4,
6,4,6,4,6,4,6,4,6,4,4,4,4,4,4,4,3,3,2,2,6,4,5,4,6,4,4,5,2,5,
3,5,3,5,3,5,2,6,4,6,4,6,4,5,6,4,6,5,6,5,6,5,8,8,6,3,6,3,6,3,
5,4,5,4,5,4,5,4,5,3,5,4,5,3,6,4,6,4,6,4,6,4,6,4,6,5,8,6,6,4,
6,5,4,5,4,5,4,3,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,7,6,5,5,5,5,5,5,5,5,5,5,5,5,5,7,6,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7,5,4,4,6,
5,6,4,6,4,6,4,6,4,6,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,7,5,8,7,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__arial_9_latin_ext_h[560]={ 0,6,3,7,8,7,7,3,8,8,3,5,3,2,
1,7,7,6,6,7,6,7,7,6,7,7,5,7,5,4,5,6,8,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,7,6,7,6,7,6,6,6,6,6,8,7,8,4,1,2,6,7,6,7,6,6,7,6,6,
8,6,6,5,5,6,7,7,5,6,7,6,5,5,5,7,5,8,8,8,2,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,7,8,7,5,6,
8,8,2,7,4,4,4,2,7,1,3,5,4,4,2,7,8,2,3,4,4,4,7,7,7,7,8,8,8,8,
7,8,6,8,8,8,8,7,8,8,8,7,6,8,9,9,9,9,8,4,7,9,9,9,8,8,6,7,7,7,
7,7,7,7,6,7,7,7,7,7,6,6,6,6,7,6,7,7,7,7,7,4,6,7,7,7,7,8,8,8,
7,7,8,7,8,7,9,7,9,7,9,7,9,7,8,7,6,7,7,7,8,7,8,7,8,7,8,7,9,8,
9,8,8,8,8,9,8,8,6,6,8,6,7,6,8,6,8,8,8,5,7,8,9,8,8,8,5,8,8,8,
8,6,6,6,6,6,6,8,6,8,7,8,6,6,7,7,8,7,9,7,9,7,7,6,8,6,8,7,8,6,
9,7,9,7,8,7,9,7,9,9,8,7,6,7,9,7,8,7,9,7,9,7,9,7,8,7,8,6,8,8,
7,8,6,8,6,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,6,8,6,6,6,
6,6,6,6,6,6,6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,7,8,6,9,
7,9,7,9,8,9,9,9,9,9,9,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,9,9,8,7,9,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6, };
static unsigned short stb__arial_9_latin_ext_s[560]={ 251,140,167,22,148,228,24,178,170,181,181,
93,175,198,216,215,192,143,148,205,128,149,97,160,44,38,81,28,99,124,70,
250,81,10,215,31,116,100,209,6,228,7,1,18,1,235,221,13,243,222,166,
248,154,198,202,193,186,179,173,69,188,73,153,209,185,134,182,123,173,110,106,
85,95,92,169,83,80,53,61,59,155,168,66,43,178,33,25,46,41,80,30,
50,41,120,192,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,251,219,114,
242,35,200,23,108,188,235,116,105,110,198,90,219,163,87,130,120,202,143,157,
206,171,150,134,158,72,64,56,50,192,1,9,31,20,46,161,54,61,67,73,
229,79,241,180,211,212,210,172,204,119,105,202,144,161,91,15,1,173,82,73,
120,114,108,102,96,90,84,65,73,67,61,55,49,52,48,38,88,18,28,7,
1,248,242,236,138,250,217,212,207,202,200,185,225,175,169,217,157,128,146,133,
135,154,122,165,109,179,97,104,86,15,73,67,61,157,137,163,38,142,28,191,
16,223,140,230,197,209,216,221,218,150,145,108,225,205,236,197,207,245,103,230,
250,154,84,228,137,186,123,116,111,76,98,95,89,136,140,170,178,174,152,158,
39,135,24,50,17,130,124,244,92,234,55,126,163,147,44,183,115,185,184,174,
240,163,55,192,31,78,126,130,11,22,13,198,161,95,152,146,34,140,6,62,
192,244,251,211,235,237,1,16,131,7,188,101,90,79,1,195,26,220,124,241,
246,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,102,230,230,44,
230,230,230,230,230,230,230,230,230,230,230,230,230,114,1,230,230,230,230,230,
230,230,230,230,230,230,230,230,127,8,230,230,230,230,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,54,140,
251,23,112,222,98,36,84,76,71,66,59,54,47,42,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,
230,230,230,34,28,32,41,8,78,230,230,230,230,230,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,230,
230,230,230,230,230,230,230,230,230, };
static unsigned short stb__arial_9_latin_ext_t[560]={ 10,53,60,29,20,28,37,60,11,11,60,
60,60,60,60,37,37,53,53,37,53,37,45,53,45,45,60,45,60,60,60,
53,11,60,53,45,53,53,53,45,53,60,45,60,60,53,53,45,53,37,53,
37,53,37,53,53,53,53,53,11,37,11,60,60,60,53,37,53,37,53,53,
45,53,53,20,53,53,60,60,53,37,37,60,53,37,53,60,60,60,45,60,
11,11,11,60,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,10,37,11,
37,60,45,11,11,60,37,60,60,60,60,45,60,60,60,60,60,60,37,11,
60,60,60,60,60,45,45,45,45,11,20,20,20,45,20,45,20,20,20,20,
37,20,11,20,37,45,11,1,1,1,1,20,60,37,1,1,1,20,20,53,
37,37,37,37,37,37,37,53,37,37,37,37,37,53,53,53,53,37,53,37,
37,28,28,28,60,45,29,29,29,29,11,20,11,29,29,11,29,20,29,1,
29,1,29,1,29,1,29,20,29,53,29,29,29,20,37,20,29,20,29,20,
29,1,11,1,20,20,20,20,1,11,11,45,45,11,45,29,45,11,45,11,
11,20,60,20,20,1,20,20,20,60,20,20,20,11,45,45,45,45,45,45,
20,45,20,29,20,45,45,20,29,11,29,1,29,1,29,29,45,11,45,11,
20,11,53,1,37,1,37,11,29,1,37,1,1,11,29,45,29,1,29,11,
29,1,20,1,20,1,29,11,37,11,45,11,11,29,11,45,11,45,11,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,29,45,45,11,
45,45,45,45,45,45,45,45,45,45,45,45,45,29,53,45,45,45,45,45,
45,45,45,45,45,45,45,45,29,53,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,11,29,
1,53,1,29,1,37,1,11,1,1,1,1,1,1,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,1,1,11,37,1,37,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45, };
static unsigned short stb__arial_9_latin_ext_a[560]={ 36,36,46,72,72,115,86,25,
43,43,50,75,36,43,36,36,72,72,72,72,72,72,72,72,
72,72,36,36,75,75,75,72,131,86,86,93,93,86,79,100,
93,36,64,86,72,107,93,100,86,100,93,86,79,93,86,122,
86,86,79,36,36,36,60,72,43,72,72,64,72,72,36,72,
72,29,29,64,29,107,72,72,72,72,43,64,36,72,64,93,
64,64,64,43,33,43,75,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,36,43,72,72,72,72,33,72,
43,95,48,72,75,43,95,71,52,71,43,43,43,74,69,36,
43,43,47,72,107,107,107,79,86,86,86,86,86,86,129,93,
86,86,86,86,36,36,36,36,93,93,100,100,100,100,100,75,
100,93,93,93,93,86,86,79,72,72,72,72,72,72,115,64,
72,72,72,72,36,36,36,36,72,72,72,72,72,72,72,71,
79,72,72,72,72,64,72,64,86,72,86,72,86,72,93,64,
93,64,93,64,93,64,93,79,93,72,86,72,86,72,86,72,
86,72,86,72,100,72,100,72,100,72,100,72,93,72,93,72,
36,36,36,36,36,36,36,29,36,36,95,57,64,29,86,64,
64,72,29,72,29,72,38,72,43,72,29,93,72,93,72,93,
72,78,93,72,100,72,100,72,100,72,129,122,93,43,93,43,
93,43,86,64,86,64,86,64,86,64,79,36,79,48,79,36,
93,72,93,72,93,72,93,72,93,72,93,72,122,93,86,64,
86,79,64,79,64,79,64,29,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,72,97,97,97,97,97,
97,97,97,97,97,97,97,97,111,85,97,97,97,97,97,97,
97,97,97,97,97,97,97,110,86,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,86,72,36,29,100,72,93,72,93,72,93,
72,93,72,93,72,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,86,72,129,115,100,79,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,97,
97,97,97,97,97,97,97,97, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT or STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_9_latin_ext(stb_fontchar font[STB_FONT_arial_9_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT][STB_FONT_arial_9_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_9_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_9_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_9_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_9_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_9_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_9_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__arial_9_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__arial_9_latin_ext_s[i] + stb__arial_9_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__arial_9_latin_ext_t[i] + stb__arial_9_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__arial_9_latin_ext_x[i];
            font[i].y0 = stb__arial_9_latin_ext_y[i];
            font[i].x1 = stb__arial_9_latin_ext_x[i] + stb__arial_9_latin_ext_w[i];
            font[i].y1 = stb__arial_9_latin_ext_y[i] + stb__arial_9_latin_ext_h[i];
            font[i].advance_int = (stb__arial_9_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__arial_9_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_9_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_9_latin_ext_s[i] + stb__arial_9_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_9_latin_ext_t[i] + stb__arial_9_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_9_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__arial_9_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__arial_9_latin_ext_x[i] + stb__arial_9_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__arial_9_latin_ext_y[i] + stb__arial_9_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__arial_9_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_9_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_9_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_9_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_9_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_9_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_9_latin_ext_LINE_SPACING
#endif

