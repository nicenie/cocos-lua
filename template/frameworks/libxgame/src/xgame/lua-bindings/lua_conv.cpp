//
// generated by olua
//
#include "xgame/lua-bindings/lua_conv.h"
#include "xgame/xlua.h"
#include "olua/olua.hpp"

int auto_luacv_push_cocos2d_Vec2(lua_State *L, const cocos2d::Vec2 *value)
{
    if (value) {
        lua_createtable(L, 0, 2);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
}

void auto_luacv_opt_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value, const cocos2d::Vec2 &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->x = (float)olua_checkfieldnumber(L, idx, "x");
        value->y = (float)olua_checkfieldnumber(L, idx, "y");
    }
}

void auto_luacv_pack_cocos2d_Vec2(lua_State *L, int idx, cocos2d::Vec2 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->x = (float)olua_checknumber(L, idx + 0);
    value->y = (float)olua_checknumber(L, idx + 1);
}

int auto_luacv_unpack_cocos2d_Vec2(lua_State *L, const cocos2d::Vec2 *value)
{
    if (value) {
        lua_pushnumber(L, value->x);
        lua_pushnumber(L, value->y);
    } else {
        for (int i = 0; i < 2; i++) {
            lua_pushnil(L);
        }
    }

    return 2;
}

bool auto_luacv_is_cocos2d_Vec2(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

bool auto_luacv_ispack_cocos2d_Vec2(lua_State *L, int idx)
{
    return olua_is_number(L, idx + 0) && olua_is_number(L, idx + 1);
}

int auto_luacv_push_cocos2d_Vec3(lua_State *L, const cocos2d::Vec3 *value)
{
    if (value) {
        lua_createtable(L, 0, 3);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
        olua_rawsetfieldnumber(L, -1, "z", value->z);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
    value->z = (float)olua_checkfieldnumber(L, idx, "z");
}

void auto_luacv_opt_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value, const cocos2d::Vec3 &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->x = (float)olua_checkfieldnumber(L, idx, "x");
        value->y = (float)olua_checkfieldnumber(L, idx, "y");
        value->z = (float)olua_checkfieldnumber(L, idx, "z");
    }
}

void auto_luacv_pack_cocos2d_Vec3(lua_State *L, int idx, cocos2d::Vec3 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->x = (float)olua_checknumber(L, idx + 0);
    value->y = (float)olua_checknumber(L, idx + 1);
    value->z = (float)olua_checknumber(L, idx + 2);
}

int auto_luacv_unpack_cocos2d_Vec3(lua_State *L, const cocos2d::Vec3 *value)
{
    if (value) {
        lua_pushnumber(L, value->x);
        lua_pushnumber(L, value->y);
        lua_pushnumber(L, value->z);
    } else {
        for (int i = 0; i < 3; i++) {
            lua_pushnil(L);
        }
    }

    return 3;
}

bool auto_luacv_is_cocos2d_Vec3(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

bool auto_luacv_ispack_cocos2d_Vec3(lua_State *L, int idx)
{
    return olua_is_number(L, idx + 0) && olua_is_number(L, idx + 1) && olua_is_number(L, idx + 2);
}

int auto_luacv_push_cocos2d_Vec4(lua_State *L, const cocos2d::Vec4 *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
        olua_rawsetfieldnumber(L, -1, "z", value->z);
        olua_rawsetfieldnumber(L, -1, "w", value->w);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Vec4(lua_State *L, int idx, cocos2d::Vec4 *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
    value->z = (float)olua_checkfieldnumber(L, idx, "z");
    value->w = (float)olua_checkfieldnumber(L, idx, "w");
}

void auto_luacv_opt_cocos2d_Vec4(lua_State *L, int idx, cocos2d::Vec4 *value, const cocos2d::Vec4 &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->x = (float)olua_checkfieldnumber(L, idx, "x");
        value->y = (float)olua_checkfieldnumber(L, idx, "y");
        value->z = (float)olua_checkfieldnumber(L, idx, "z");
        value->w = (float)olua_checkfieldnumber(L, idx, "w");
    }
}

bool auto_luacv_is_cocos2d_Vec4(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Size(lua_State *L, const cocos2d::Size *value)
{
    if (value) {
        lua_createtable(L, 0, 2);
        olua_rawsetfieldnumber(L, -1, "width", value->width);
        olua_rawsetfieldnumber(L, -1, "height", value->height);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->width = (float)olua_checkfieldnumber(L, idx, "width");
    value->height = (float)olua_checkfieldnumber(L, idx, "height");
}

void auto_luacv_opt_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value, const cocos2d::Size &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->width = (float)olua_checkfieldnumber(L, idx, "width");
        value->height = (float)olua_checkfieldnumber(L, idx, "height");
    }
}

void auto_luacv_pack_cocos2d_Size(lua_State *L, int idx, cocos2d::Size *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    value->width = (float)olua_checknumber(L, idx + 0);
    value->height = (float)olua_checknumber(L, idx + 1);
}

int auto_luacv_unpack_cocos2d_Size(lua_State *L, const cocos2d::Size *value)
{
    if (value) {
        lua_pushnumber(L, value->width);
        lua_pushnumber(L, value->height);
    } else {
        for (int i = 0; i < 2; i++) {
            lua_pushnil(L);
        }
    }

    return 2;
}

bool auto_luacv_is_cocos2d_Size(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

bool auto_luacv_ispack_cocos2d_Size(lua_State *L, int idx)
{
    return olua_is_number(L, idx + 0) && olua_is_number(L, idx + 1);
}

int auto_luacv_push_cocos2d_Color4F(lua_State *L, const cocos2d::Color4F *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "r", value->r);
        olua_rawsetfieldnumber(L, -1, "g", value->g);
        olua_rawsetfieldnumber(L, -1, "b", value->b);
        olua_rawsetfieldnumber(L, -1, "a", value->a);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Color4F(lua_State *L, int idx, cocos2d::Color4F *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->r = (GLfloat)olua_checkfieldnumber(L, idx, "r");
    value->g = (GLfloat)olua_checkfieldnumber(L, idx, "g");
    value->b = (GLfloat)olua_checkfieldnumber(L, idx, "b");
    value->a = (GLfloat)olua_checkfieldnumber(L, idx, "a");
}

void auto_luacv_opt_cocos2d_Color4F(lua_State *L, int idx, cocos2d::Color4F *value, const cocos2d::Color4F &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->r = (GLfloat)olua_checkfieldnumber(L, idx, "r");
        value->g = (GLfloat)olua_checkfieldnumber(L, idx, "g");
        value->b = (GLfloat)olua_checkfieldnumber(L, idx, "b");
        value->a = (GLfloat)olua_checkfieldnumber(L, idx, "a");
    }
}

bool auto_luacv_is_cocos2d_Color4F(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Texture2D_TexParams(lua_State *L, const cocos2d::Texture2D::TexParams *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "minFilter", (lua_Unsigned)value->minFilter);
        olua_rawsetfieldinteger(L, -1, "magFilter", (lua_Unsigned)value->magFilter);
        olua_rawsetfieldinteger(L, -1, "wrapS", (lua_Unsigned)value->wrapS);
        olua_rawsetfieldinteger(L, -1, "wrapT", (lua_Unsigned)value->wrapT);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Texture2D_TexParams(lua_State *L, int idx, cocos2d::Texture2D::TexParams *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->minFilter = (GLuint)olua_checkfieldinteger(L, idx, "minFilter");
    value->magFilter = (GLuint)olua_checkfieldinteger(L, idx, "magFilter");
    value->wrapS = (GLuint)olua_checkfieldinteger(L, idx, "wrapS");
    value->wrapT = (GLuint)olua_checkfieldinteger(L, idx, "wrapT");
}

void auto_luacv_opt_cocos2d_Texture2D_TexParams(lua_State *L, int idx, cocos2d::Texture2D::TexParams *value, const cocos2d::Texture2D::TexParams &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->minFilter = (GLuint)olua_checkfieldinteger(L, idx, "minFilter");
        value->magFilter = (GLuint)olua_checkfieldinteger(L, idx, "magFilter");
        value->wrapS = (GLuint)olua_checkfieldinteger(L, idx, "wrapS");
        value->wrapT = (GLuint)olua_checkfieldinteger(L, idx, "wrapT");
    }
}

bool auto_luacv_is_cocos2d_Texture2D_TexParams(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Uniform(lua_State *L, const cocos2d::Uniform *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "location", (lua_Integer)value->location);
        olua_rawsetfieldinteger(L, -1, "size", (lua_Integer)value->size);
        olua_rawsetfieldinteger(L, -1, "type", (lua_Unsigned)value->type);
        olua_rawsetfieldstring(L, -1, "name", value->name.c_str());
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Uniform(lua_State *L, int idx, cocos2d::Uniform *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->location = (GLint)olua_checkfieldinteger(L, idx, "location");
    value->size = (GLint)olua_checkfieldinteger(L, idx, "size");
    value->type = (GLenum)olua_checkfieldinteger(L, idx, "type");
    value->name = (std::string)olua_checkfieldstring(L, idx, "name");
}

void auto_luacv_opt_cocos2d_Uniform(lua_State *L, int idx, cocos2d::Uniform *value, const cocos2d::Uniform &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->location = (GLint)olua_checkfieldinteger(L, idx, "location");
        value->size = (GLint)olua_checkfieldinteger(L, idx, "size");
        value->type = (GLenum)olua_checkfieldinteger(L, idx, "type");
        value->name = (std::string)olua_checkfieldstring(L, idx, "name");
    }
}

bool auto_luacv_is_cocos2d_Uniform(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_VertexAttrib(lua_State *L, const cocos2d::VertexAttrib *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldinteger(L, -1, "index", (lua_Unsigned)value->index);
        olua_rawsetfieldinteger(L, -1, "size", (lua_Integer)value->size);
        olua_rawsetfieldinteger(L, -1, "type", (lua_Unsigned)value->type);
        olua_rawsetfieldstring(L, -1, "name", value->name.c_str());
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_VertexAttrib(lua_State *L, int idx, cocos2d::VertexAttrib *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->index = (GLuint)olua_checkfieldinteger(L, idx, "index");
    value->size = (GLint)olua_checkfieldinteger(L, idx, "size");
    value->type = (GLenum)olua_checkfieldinteger(L, idx, "type");
    value->name = (std::string)olua_checkfieldstring(L, idx, "name");
}

void auto_luacv_opt_cocos2d_VertexAttrib(lua_State *L, int idx, cocos2d::VertexAttrib *value, const cocos2d::VertexAttrib &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->index = (GLuint)olua_checkfieldinteger(L, idx, "index");
        value->size = (GLint)olua_checkfieldinteger(L, idx, "size");
        value->type = (GLenum)olua_checkfieldinteger(L, idx, "type");
        value->name = (std::string)olua_checkfieldstring(L, idx, "name");
    }
}

bool auto_luacv_is_cocos2d_VertexAttrib(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_experimental_Viewport(lua_State *L, const cocos2d::experimental::Viewport *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "left", value->_left);
        olua_rawsetfieldnumber(L, -1, "bottom", value->_bottom);
        olua_rawsetfieldnumber(L, -1, "width", value->_width);
        olua_rawsetfieldnumber(L, -1, "height", value->_height);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_experimental_Viewport(lua_State *L, int idx, cocos2d::experimental::Viewport *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->_left = (float)olua_checkfieldnumber(L, idx, "left");
    value->_bottom = (float)olua_checkfieldnumber(L, idx, "bottom");
    value->_width = (float)olua_checkfieldnumber(L, idx, "width");
    value->_height = (float)olua_checkfieldnumber(L, idx, "height");
}

void auto_luacv_opt_cocos2d_experimental_Viewport(lua_State *L, int idx, cocos2d::experimental::Viewport *value, const cocos2d::experimental::Viewport &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->_left = (float)olua_checkfieldnumber(L, idx, "left");
        value->_bottom = (float)olua_checkfieldnumber(L, idx, "bottom");
        value->_width = (float)olua_checkfieldnumber(L, idx, "width");
        value->_height = (float)olua_checkfieldnumber(L, idx, "height");
    }
}

bool auto_luacv_is_cocos2d_experimental_Viewport(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Quaternion(lua_State *L, const cocos2d::Quaternion *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "x", value->x);
        olua_rawsetfieldnumber(L, -1, "y", value->y);
        olua_rawsetfieldnumber(L, -1, "z", value->z);
        olua_rawsetfieldnumber(L, -1, "w", value->w);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Quaternion(lua_State *L, int idx, cocos2d::Quaternion *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->x = (float)olua_checkfieldnumber(L, idx, "x");
    value->y = (float)olua_checkfieldnumber(L, idx, "y");
    value->z = (float)olua_checkfieldnumber(L, idx, "z");
    value->w = (float)olua_checkfieldnumber(L, idx, "w");
}

void auto_luacv_opt_cocos2d_Quaternion(lua_State *L, int idx, cocos2d::Quaternion *value, const cocos2d::Quaternion &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->x = (float)olua_checkfieldnumber(L, idx, "x");
        value->y = (float)olua_checkfieldnumber(L, idx, "y");
        value->z = (float)olua_checkfieldnumber(L, idx, "z");
        value->w = (float)olua_checkfieldnumber(L, idx, "w");
    }
}

bool auto_luacv_is_cocos2d_Quaternion(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_AffineTransform(lua_State *L, const cocos2d::AffineTransform *value)
{
    if (value) {
        lua_createtable(L, 0, 6);
        olua_rawsetfieldnumber(L, -1, "a", value->a);
        olua_rawsetfieldnumber(L, -1, "b", value->b);
        olua_rawsetfieldnumber(L, -1, "c", value->c);
        olua_rawsetfieldnumber(L, -1, "d", value->d);
        olua_rawsetfieldnumber(L, -1, "tx", value->tx);
        olua_rawsetfieldnumber(L, -1, "ty", value->ty);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_AffineTransform(lua_State *L, int idx, cocos2d::AffineTransform *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->a = (float)olua_checkfieldnumber(L, idx, "a");
    value->b = (float)olua_checkfieldnumber(L, idx, "b");
    value->c = (float)olua_checkfieldnumber(L, idx, "c");
    value->d = (float)olua_checkfieldnumber(L, idx, "d");
    value->tx = (float)olua_checkfieldnumber(L, idx, "tx");
    value->ty = (float)olua_checkfieldnumber(L, idx, "ty");
}

void auto_luacv_opt_cocos2d_AffineTransform(lua_State *L, int idx, cocos2d::AffineTransform *value, const cocos2d::AffineTransform &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->a = (float)olua_checkfieldnumber(L, idx, "a");
        value->b = (float)olua_checkfieldnumber(L, idx, "b");
        value->c = (float)olua_checkfieldnumber(L, idx, "c");
        value->d = (float)olua_checkfieldnumber(L, idx, "d");
        value->tx = (float)olua_checkfieldnumber(L, idx, "tx");
        value->ty = (float)olua_checkfieldnumber(L, idx, "ty");
    }
}

bool auto_luacv_is_cocos2d_AffineTransform(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_GLContextAttrs(lua_State *L, const GLContextAttrs *value)
{
    if (value) {
        lua_createtable(L, 0, 7);
        olua_rawsetfieldinteger(L, -1, "redBits", (lua_Integer)value->redBits);
        olua_rawsetfieldinteger(L, -1, "greenBits", (lua_Integer)value->greenBits);
        olua_rawsetfieldinteger(L, -1, "blueBits", (lua_Integer)value->blueBits);
        olua_rawsetfieldinteger(L, -1, "alphaBits", (lua_Integer)value->alphaBits);
        olua_rawsetfieldinteger(L, -1, "depthBits", (lua_Integer)value->depthBits);
        olua_rawsetfieldinteger(L, -1, "stencilBits", (lua_Integer)value->stencilBits);
        olua_rawsetfieldinteger(L, -1, "multisamplingCount", (lua_Integer)value->multisamplingCount);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_GLContextAttrs(lua_State *L, int idx, GLContextAttrs *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->redBits = (int)olua_checkfieldinteger(L, idx, "redBits");
    value->greenBits = (int)olua_checkfieldinteger(L, idx, "greenBits");
    value->blueBits = (int)olua_checkfieldinteger(L, idx, "blueBits");
    value->alphaBits = (int)olua_checkfieldinteger(L, idx, "alphaBits");
    value->depthBits = (int)olua_checkfieldinteger(L, idx, "depthBits");
    value->stencilBits = (int)olua_checkfieldinteger(L, idx, "stencilBits");
    value->multisamplingCount = (int)olua_checkfieldinteger(L, idx, "multisamplingCount");
}

void auto_luacv_opt_GLContextAttrs(lua_State *L, int idx, GLContextAttrs *value, const GLContextAttrs &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->redBits = (int)olua_checkfieldinteger(L, idx, "redBits");
        value->greenBits = (int)olua_checkfieldinteger(L, idx, "greenBits");
        value->blueBits = (int)olua_checkfieldinteger(L, idx, "blueBits");
        value->alphaBits = (int)olua_checkfieldinteger(L, idx, "alphaBits");
        value->depthBits = (int)olua_checkfieldinteger(L, idx, "depthBits");
        value->stencilBits = (int)olua_checkfieldinteger(L, idx, "stencilBits");
        value->multisamplingCount = (int)olua_checkfieldinteger(L, idx, "multisamplingCount");
    }
}

bool auto_luacv_is_GLContextAttrs(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_Tex2F(lua_State *L, const cocos2d::Tex2F *value)
{
    if (value) {
        lua_createtable(L, 0, 2);
        olua_rawsetfieldnumber(L, -1, "u", value->u);
        olua_rawsetfieldnumber(L, -1, "v", value->v);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_Tex2F(lua_State *L, int idx, cocos2d::Tex2F *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->u = (GLfloat)olua_checkfieldnumber(L, idx, "u");
    value->v = (GLfloat)olua_checkfieldnumber(L, idx, "v");
}

void auto_luacv_opt_cocos2d_Tex2F(lua_State *L, int idx, cocos2d::Tex2F *value, const cocos2d::Tex2F &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->u = (GLfloat)olua_checkfieldnumber(L, idx, "u");
        value->v = (GLfloat)olua_checkfieldnumber(L, idx, "v");
    }
}

bool auto_luacv_is_cocos2d_Tex2F(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_T2F_Quad(lua_State *L, const cocos2d::T2F_Quad *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        auto_luacv_push_cocos2d_Tex2F(L, &value->bl);
        olua_rawgetfield(L, -2, "bl");
        auto_luacv_push_cocos2d_Tex2F(L, &value->br);
        olua_rawgetfield(L, -2, "br");
        auto_luacv_push_cocos2d_Tex2F(L, &value->tl);
        olua_rawgetfield(L, -2, "tl");
        auto_luacv_push_cocos2d_Tex2F(L, &value->tr);
        olua_rawgetfield(L, -2, "tr");
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_T2F_Quad(lua_State *L, int idx, cocos2d::T2F_Quad *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    olua_rawgetfield(L, -1, "bl");
    auto_luacv_check_cocos2d_Tex2F(L, idx, &value->bl);
    lua_pop(L, 1);
    olua_rawgetfield(L, -1, "br");
    auto_luacv_check_cocos2d_Tex2F(L, idx, &value->br);
    lua_pop(L, 1);
    olua_rawgetfield(L, -1, "tl");
    auto_luacv_check_cocos2d_Tex2F(L, idx, &value->tl);
    lua_pop(L, 1);
    olua_rawgetfield(L, -1, "tr");
    auto_luacv_check_cocos2d_Tex2F(L, idx, &value->tr);
    lua_pop(L, 1);
}

bool auto_luacv_is_cocos2d_T2F_Quad(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_TTFConfig(lua_State *L, const cocos2d::TTFConfig *value)
{
    if (value) {
        lua_createtable(L, 0, 10);
        olua_rawsetfieldstring(L, -1, "fontFilePath", value->fontFilePath.c_str());
        olua_rawsetfieldnumber(L, -1, "fontSize", value->fontSize);
        olua_rawsetfieldinteger(L, -1, "glyphs", (lua_Unsigned)value->glyphs);
        olua_rawsetfieldstring(L, -1, "customGlyphs", value->customGlyphs);
        olua_rawsetfieldboolean(L, -1, "distanceFieldEnabled", value->distanceFieldEnabled);
        olua_rawsetfieldinteger(L, -1, "outlineSize", (lua_Integer)value->outlineSize);
        olua_rawsetfieldboolean(L, -1, "italics", value->italics);
        olua_rawsetfieldboolean(L, -1, "bold", value->bold);
        olua_rawsetfieldboolean(L, -1, "underline", value->underline);
        olua_rawsetfieldboolean(L, -1, "strikethrough", value->strikethrough);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_TTFConfig(lua_State *L, int idx, cocos2d::TTFConfig *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->fontFilePath = (std::string)olua_checkfieldstring(L, idx, "fontFilePath");
    value->fontSize = (float)olua_checkfieldnumber(L, idx, "fontSize");
    value->glyphs = (cocos2d::GlyphCollection)olua_checkfieldinteger(L, idx, "glyphs");
    value->customGlyphs = (const char *)olua_checkfieldstring(L, idx, "customGlyphs");
    value->distanceFieldEnabled = (bool)olua_checkfieldboolean(L, idx, "distanceFieldEnabled");
    value->outlineSize = (int)olua_checkfieldinteger(L, idx, "outlineSize");
    value->italics = (bool)olua_checkfieldboolean(L, idx, "italics");
    value->bold = (bool)olua_checkfieldboolean(L, idx, "bold");
    value->underline = (bool)olua_checkfieldboolean(L, idx, "underline");
    value->strikethrough = (bool)olua_checkfieldboolean(L, idx, "strikethrough");
}

bool auto_luacv_is_cocos2d_TTFConfig(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_BlendFunc(lua_State *L, const cocos2d::BlendFunc *value)
{
    if (value) {
        lua_createtable(L, 0, 2);
        olua_rawsetfieldinteger(L, -1, "src", (lua_Unsigned)value->src);
        olua_rawsetfieldinteger(L, -1, "dst", (lua_Unsigned)value->dst);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_BlendFunc(lua_State *L, int idx, cocos2d::BlendFunc *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->src = (GLenum)olua_checkfieldinteger(L, idx, "src");
    value->dst = (GLenum)olua_checkfieldinteger(L, idx, "dst");
}

void auto_luacv_opt_cocos2d_BlendFunc(lua_State *L, int idx, cocos2d::BlendFunc *value, const cocos2d::BlendFunc &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->src = (GLenum)olua_checkfieldinteger(L, idx, "src");
        value->dst = (GLenum)olua_checkfieldinteger(L, idx, "dst");
    }
}

bool auto_luacv_is_cocos2d_BlendFunc(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_ui_Margin(lua_State *L, const cocos2d::ui::Margin *value)
{
    if (value) {
        lua_createtable(L, 0, 4);
        olua_rawsetfieldnumber(L, -1, "left", value->left);
        olua_rawsetfieldnumber(L, -1, "top", value->top);
        olua_rawsetfieldnumber(L, -1, "right", value->right);
        olua_rawsetfieldnumber(L, -1, "bottom", value->bottom);
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_ui_Margin(lua_State *L, int idx, cocos2d::ui::Margin *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->left = (float)olua_checkfieldnumber(L, idx, "left");
    value->top = (float)olua_checkfieldnumber(L, idx, "top");
    value->right = (float)olua_checkfieldnumber(L, idx, "right");
    value->bottom = (float)olua_checkfieldnumber(L, idx, "bottom");
}

void auto_luacv_opt_cocos2d_ui_Margin(lua_State *L, int idx, cocos2d::ui::Margin *value, const cocos2d::ui::Margin &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->left = (float)olua_checkfieldnumber(L, idx, "left");
        value->top = (float)olua_checkfieldnumber(L, idx, "top");
        value->right = (float)olua_checkfieldnumber(L, idx, "right");
        value->bottom = (float)olua_checkfieldnumber(L, idx, "bottom");
    }
}

bool auto_luacv_is_cocos2d_ui_Margin(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}

int auto_luacv_push_cocos2d_ResourceData(lua_State *L, const cocos2d::ResourceData *value)
{
    if (value) {
        lua_createtable(L, 0, 3);
        olua_rawsetfieldinteger(L, -1, "type", (lua_Integer)value->type);
        olua_rawsetfieldstring(L, -1, "file", value->file.c_str());
        olua_rawsetfieldstring(L, -1, "plist", value->plist.c_str());
    } else {
        lua_pushnil(L);
    }

    return 1;
}

void auto_luacv_check_cocos2d_ResourceData(lua_State *L, int idx, cocos2d::ResourceData *value)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    idx = lua_absindex(L, idx);
    luaL_checktype(L, idx, LUA_TTABLE);
    value->type = (int)olua_checkfieldinteger(L, idx, "type");
    value->file = (std::string)olua_checkfieldstring(L, idx, "file");
    value->plist = (std::string)olua_checkfieldstring(L, idx, "plist");
}

void auto_luacv_opt_cocos2d_ResourceData(lua_State *L, int idx, cocos2d::ResourceData *value, const cocos2d::ResourceData &def)
{
    if (!value) {
        luaL_error(L, "value is NULL");
    }
    if (olua_isnil(L, idx)) {
        *value = def;
    } else {
        idx = lua_absindex(L, idx);
        luaL_checktype(L, idx, LUA_TTABLE);
        value->type = (int)olua_checkfieldinteger(L, idx, "type");
        value->file = (std::string)olua_checkfieldstring(L, idx, "file");
        value->plist = (std::string)olua_checkfieldstring(L, idx, "plist");
    }
}

bool auto_luacv_is_cocos2d_ResourceData(lua_State *L, int idx)
{
    return lua_istable(L, idx);
}
