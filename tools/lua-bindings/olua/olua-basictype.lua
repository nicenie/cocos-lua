local olua = require "olua.olua-typecls"
local typedef = olua.typedef

typedef {
    CPPCLS = 'void',
    CONV_FUNC = '<NONE>',
}

typedef {
    CPPCLS = [[
        void *
        GLvoid *
    ]],
    LUACLS = 'void *',
    CONV_FUNC = 'olua_$$_obj',
}

typedef {
    CPPCLS = 'bool',
    CONV_FUNC = 'olua_$$_bool',
}

typedef {
    CPPCLS = 'const char *',
    CONV_FUNC = 'olua_$$_string',
}

typedef {
    CPPCLS = [[
        unsigned char *
        const unsigned char *
        const GLchar *
    ]],
    DECLTYPE = 'const char *',
    CONV_FUNC = 'olua_$$_string',
}

typedef {
    CPPCLS = 'std::string',
    INIT_VALUE = false,
    CONV_FUNC = 'olua_$$_std_string',
}

typedef {
    CPPCLS = 'std::function',
    INIT_VALUE = 'nullptr',
    CONV_FUNC = 'olua_$$_std_function',
}

typedef {
    CPPCLS = 'std::set',
    INIT_VALUE = false,
    IS_ARRAY = true,
    CONV_FUNC = 'olua_$$_std_set',
    FN_PUSH_BACK = 'insert',
    FN_ITERATOR = true,
    PUSH_VALUETYPE = [[
        int ${ARG_NAME}_i = 1;
        lua_createtable(L, (int)${ARG_NAME}.size(), 0);
        for (auto it = ${ARG_NAME}.begin(); it != ${ARG_NAME}.end(); ++it) {
            ${SUBTYPE_PUSH_FUNC}(L, ${SUBTYPE_CAST}(*it));
            lua_rawseti(L, -2, ${ARG_NAME}_i++);
        }
    ]]
}

typedef {
    CPPCLS = 'std::vector',
    INIT_VALUE = false,
    IS_ARRAY = true,
    CONV_FUNC = 'olua_$$_std_vector',
    FN_RESERVE = 'reserve',
    FN_PUSH_BACK = 'push_back',
    FN_ITERATOR = true,
    PUSH_VALUETYPE = [[
        int ${ARG_NAME}_size = (int)${ARG_NAME}.size();
        lua_createtable(L, ${ARG_NAME}_size, 0);
        for (int i = 0; i < ${ARG_NAME}_size; i++) {
            ${SUBTYPE_PUSH_FUNC}(L, ${SUBTYPE_CAST}((${TYPE_CAST})${ARG_NAME})[i]);
            lua_rawseti(L, -2, i + 1);
        }
    ]]
}

typedef {
    CPPCLS = [[
        float
        double
        GLfloat
    ]],
    DECLTYPE = 'lua_Number',
    CONV_FUNC = 'olua_$$_number',
}

typedef {
    CPPCLS = [[
        char
        GLint
        GLshort
        GLsizei
        int
        long
        short
        ssize_t
        int8_t
        std::int32_t
        unsigned short
    ]],
    DECLTYPE = 'lua_Integer',
    CONV_FUNC = 'olua_$$_int',
}

typedef {
    CPPCLS = [[
        GLboolean
        GLenum
        GLubyte
        GLuint
        size_t
        std::size_t
        std::string::size_type
        uint32_t
        uint64_t
        unsigned char
        unsigned int
        unsigned short
    ]],
    DECLTYPE = 'lua_Unsigned',
    CONV_FUNC = 'olua_$$_uint',
}
