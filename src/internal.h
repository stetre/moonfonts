/* The MIT License (MIT)
 *
 * Copyright (c) 2017 Stefano Trettel
 *
 * Software repository: MoonFonts, https://github.com/stetre/moonfonts
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/********************************************************************************
 * Internal common header                                                       *
 ********************************************************************************/

#ifndef internalDEFINED
#define internalDEFINED

#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "moonfonts.h"

#define TOSTR_(x) #x
#define TOSTR(x) TOSTR_(x)

#include "tree.h"

#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF
typedef struct stb_fontchar {
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

/* Note: all the dynamic symbols of this library (should) start with 'moonfonts_' .
 * The only exception is the luaopen_moonfonts() function, which is searched for
 * with that name by Lua.
 * MoonFonts's string references on the Lua registry also start with 'moonfonts_'.
 */

#define createfunc_t moonfonts_createfunc_t
typedef void (*createfunc_t)(stb_fontchar*, unsigned char (*)[], int);

#define font_t moonfonts_font_t
typedef struct {
    const char* name;
    unsigned int width, height, height_pow2, line_spacing;
    unsigned int first_char, num_chars;
    createfunc_t create; /* the create function */
} font_t;

#if 0
/* .c */
#define  moonfonts_
#endif

/* utils.c */
#define noprintf moonfonts_noprintf
int noprintf(const char *fmt, ...); 
#define notavailable moonfonts_notavailable
int notavailable(lua_State *L, ...);
#define malloc_init moonfonts_malloc_init
void malloc_init(lua_State *L);
#define Malloc moonfonts_Malloc
void *Malloc(lua_State *L, size_t size);
#define MallocNoErr moonfonts_MallocNoErr
void *MallocNoErr(lua_State *L, size_t size);
#define Strdup moonfonts_Strdup
char *Strdup(lua_State *L, const char *s);
#define Free moonfonts_Free
void Free(lua_State *L, void *ptr);
#define checkboolean moonfonts_checkboolean
int checkboolean(lua_State *L, int arg);
#define testboolean moonfonts_testboolean
int testboolean(lua_State *L, int arg, int *err);
#define optboolean moonfonts_optboolean
int optboolean(lua_State *L, int arg, int d);

/* Internal error codes */
#define ERR_NOTPRESENT       1
#define ERR_SUCCESS          0
#define ERR_GENERIC         -1
#define ERR_TYPE            -2
#define ERR_VALUE           -3
#define ERR_TABLE           -4
#define ERR_EMPTY           -5
#define ERR_MEMORY          -6
#define ERR_LENGTH          -7
#define ERR_POOL            -8
#define ERR_BOUNDARIES      -9
#define ERR_UNKNOWN         -10
#define errstring moonfonts_errstring
const char* errstring(int err);

/* fonts.c */
#define font_free_all moonfonts_font_free_all
void font_free_all(lua_State *L);

/* main.c */
int luaopen_moonfonts(lua_State *L);
void moonfonts_open_fonts(lua_State *L);

/*------------------------------------------------------------------------------*
 | Debug and other utilities                                                    |
 *------------------------------------------------------------------------------*/

/* If this is printed, it denotes a suspect bug: */
#define UNEXPECTED_ERROR "unexpected error (%s, %d)", __FILE__, __LINE__
#define unexpected(L) luaL_error((L), UNEXPECTED_ERROR)
#define notsupported(L) luaL_error((L), "operation not supported")

/* DEBUG -------------------------------------------------------- */
#if defined(DEBUG)

#define DBG printf
#define TR() do { printf("trace %s %d\n",__FILE__,__LINE__); } while(0)
#define BK() do { printf("break %s %d\n",__FILE__,__LINE__); getchar(); } while(0)

#else 

#define DBG noprintf
#define TR()
#define BK()

#endif /* DEBUG ------------------------------------------------- */


#endif /* internalDEFINED */
