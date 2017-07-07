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

#include "internal.h"

/*------------------------------------------------------------------------------*
 | Fonts database                                                               |
 *------------------------------------------------------------------------------*/

#define rec_t struct rec_s
struct rec_s {
    RB_ENTRY(rec_s) Entry;
    char *name;  /* search key */
    font_t  font;
};

/* compare function */
static int cmp_str(rec_t *rec1, rec_t *rec2) 
    { 
    return strcmp(rec1->name, rec2->name);
    } 

static RB_HEAD(Tree, rec_s) Head = RB_INITIALIZER(&Head);
RB_PROTOTYPE_STATIC(Tree, rec_s, Entry, cmp_str) 
RB_GENERATE_STATIC(Tree, rec_s, Entry, cmp_str) 
 
static rec_t *rremove(rec_t *rec) 
    { return RB_REMOVE(Tree, &Head, rec); }
static rec_t *insert(rec_t *rec) 
    { return RB_INSERT(Tree, &Head, rec); }
static rec_t *search(const char* name)
    { rec_t tmp; tmp.name= (char*)name; return RB_FIND(Tree, &Head, &tmp); }
static rec_t *first(const char* name) 
    { rec_t tmp; tmp.name= (char*)name; return RB_NFIND(Tree, &Head, &tmp); }
static rec_t *next(rec_t *rec)
    { return RB_NEXT(Tree, &Head, rec); }
#if 0
static rec_t *prev(rec_t *rec)
    { return RB_PREV(Tree, &Head, rec); }
static rec_t *min(void)
    { return RB_MIN(Tree, &Head); }
static rec_t *max(void)
    { return RB_MAX(Tree, &Head); }
static rec_t *root(void)
    { return RB_ROOT(&Head); }
#endif


static font_t *font_search(lua_State *L, const char *name)
    {
    rec_t *rec = search(name);
    (void)L;
    if(!rec) return NULL;
    return &(rec->font);
    }

static int font_new(lua_State *L, const char *name, createfunc_t create,
    unsigned int first_char, unsigned int num_chars, 
    unsigned int width, unsigned int height, unsigned int height_pow2, unsigned int line_spacing)
    {
    rec_t *rec;
    if((rec = (rec_t*)Malloc(L, sizeof(rec_t))) == NULL) 
        return luaL_error(L, errstring(ERR_MEMORY));

    memset(rec, 0, sizeof(rec_t));
    rec->name= Strdup(L, name);
    rec->font.name = name;
    rec->font.create = create;
    rec->font.num_chars = num_chars;
    rec->font.first_char = first_char;
    rec->font.width = width;
    rec->font.height = height;
    rec->font.height_pow2 = height_pow2;
    rec->font.line_spacing = line_spacing;

    if(search(name))
        {
        Free(L, rec->name);
        Free(L, rec); 
        return unexpected(L); /* duplicate value */
        }
    insert(rec);
    return 0;
    }

static void font_free(lua_State *L, rec_t* rec)
    {
    if(search(rec->name) == rec)
        rremove(rec);
    Free(L, rec->name);
    Free(L, rec);   
    }

void font_free_all(lua_State *L)
    {
    rec_t *rec;
    while((rec = first(" ")))
        font_free(L, rec);
    }


/*------------------------------------------------------------------------------*
 | Bindings                                                                     |
 *------------------------------------------------------------------------------*/


static int pushfontchar(lua_State *L, stb_fontchar *p, unsigned int codepoint)
    { 
    lua_newtable(L);
    lua_pushinteger(L, codepoint);
    lua_setfield(L, -2, "codepoint");
#define Set(x, s) do { lua_pushnumber(L, p->x); lua_setfield(L, -2, s); } while(0)
    // coordinates if using integer positioning
    Set(s0, "s0");
    Set(t0, "t0");
    Set(s1, "s1");
    Set(t1, "t1");
    Set(x0, "x0");
    Set(y0, "y0");
    Set(x1, "x1");
    Set(y1, "y1");
    Set(advance_int, "advance");
    // coordinates if using floating positioning
    Set(s0f, "s0f");
    Set(t0f, "t0f");
    Set(s1f, "s1f");
    Set(t1f, "t1f");
    Set(x0f, "x0f");
    Set(y0f, "y0f");
    Set(x1f, "x1f");
    Set(y1f, "y1f");
    Set(advance, "advancef");
#undef Set
    return 1;
    }

static int Load(lua_State *L)
    {
    int width, height;
    unsigned int i, codepoint;
    unsigned char **pixels ; /* [height][width] */
    stb_fontchar *fontchar; /* [num_chars] */ 
    const char *name = luaL_checkstring(L, 1);
    int height_pow2 = optboolean(L, 2, 0);

    font_t *font = font_search(L, name);
    if(!font)
        return 0;

    width = font->width;
    height = height_pow2 ? font->height_pow2 : font->height;
    pixels = (unsigned char**)Malloc(L, sizeof(unsigned char) * width * height);
    fontchar = (stb_fontchar*)Malloc(L, sizeof(stb_fontchar) * font->num_chars);
    font->create(fontchar, (unsigned char (*)[])(pixels), height);

    lua_newtable(L);

    lua_pushstring(L, font->name);
    lua_setfield(L, -2, "name");

    lua_pushlstring(L, (const char*)pixels, sizeof(unsigned char) * width * height);
    lua_setfield(L, -2, "pixels");

    lua_pushinteger(L, width);
    lua_setfield(L, -2, "width");
    lua_pushinteger(L, height);
    lua_setfield(L, -2, "height");
    lua_pushinteger(L, font->line_spacing);
    lua_setfield(L, -2, "line_spacing");
    lua_pushinteger(L, font->num_chars);
    lua_setfield(L, -2, "num_chars");
/*
    lua_pushinteger(L, font->first_char);
    lua_setfield(L, -2, "first_char");
*/

    lua_newtable(L); /* chars data */

    for(i=0; i < font->num_chars; i++)
        {
        codepoint = i + font->first_char;
        pushfontchar(L, &fontchar[i], codepoint);
        lua_seti(L, -2, codepoint);
        }
    lua_setfield(L, -2, "fontchar");

    Free(L, (char*)pixels);
    Free(L, (char*)fontchar);
    return 1;
    }

static int List(lua_State *L)
    {
    int i, byname;
    rec_t *rec;

    byname = optboolean(L, 1, 0);

    lua_newtable(L);

    if(byname)
        {
        rec = first(" ");
        while(rec)
            {
            lua_pushboolean(L, 1);
            lua_setfield(L, -2, (const char*)rec->name);
            rec = next(rec);
            }
        }
    else
        {
        i = 1;
        rec = first(" ");
        while(rec)
            {
            lua_pushstring(L, (const char*)rec->name);
            lua_seti(L, -2, i++);
            rec = next(rec);
            }
        }

    return 1;
    }

static int IsAvailable(lua_State *L)
    {
    const char *name = luaL_checkstring(L, 1);
    font_t *font = font_search(L, name);
    lua_pushboolean(L, font !=NULL);
    return 1;
    }



static const struct luaL_Reg Functions[] = 
    {
        { "is_available", IsAvailable },
        { "list", List },
        { "load", Load },
        { NULL, NULL } /* sentinel */
    };


#define ADD(fontname) font_new(L, #fontname, stb_font_##fontname,               \
        STB_FONT_##fontname##_FIRST_CHAR, STB_FONT_##fontname##_NUM_CHARS,      \
        STB_FONT_##fontname##_BITMAP_WIDTH, STB_FONT_##fontname##_BITMAP_HEIGHT,\
        STB_FONT_##fontname##_BITMAP_HEIGHT_POW2, STB_FONT_##fontname##_LINE_SPACING)

#ifdef DEBUG
#include "fonts-debug.h"
#else
#include "fonts.h"
#endif


void moonfonts_open_fonts(lua_State *L)
    {
    luaL_setfuncs(L, Functions, 0);
    
    AddFonts(L);
    }

