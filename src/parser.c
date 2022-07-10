#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 25

enum {
  sym_id = 1,
  sym__whitespace = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_u8 = 5,
  anon_sym_u16 = 6,
  anon_sym_u32 = 7,
  anon_sym_u64 = 8,
  anon_sym_s8 = 9,
  anon_sym_s16 = 10,
  anon_sym_s32 = 11,
  anon_sym_s64 = 12,
  anon_sym_float32 = 13,
  anon_sym_float64 = 14,
  anon_sym_char = 15,
  anon_sym_bool = 16,
  anon_sym_string = 17,
  anon_sym_unit = 18,
  anon_sym_handle = 19,
  anon_sym_option = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_expected = 23,
  anon_sym_COMMA = 24,
  anon_sym_tuple = 25,
  anon_sym_list = 26,
  anon_sym_future = 27,
  anon_sym_stream = 28,
  anon_sym_use = 29,
  anon_sym_from = 30,
  anon_sym_STAR = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  anon_sym_as = 34,
  anon_sym_type = 35,
  anon_sym_EQ = 36,
  anon_sym_record = 37,
  anon_sym_COLON = 38,
  anon_sym_flags = 39,
  anon_sym_variant = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_enum = 43,
  anon_sym_union = 44,
  anon_sym_async = 45,
  anon_sym_func = 46,
  anon_sym_DASH_GT = 47,
  anon_sym_resource = 48,
  anon_sym_static = 49,
  sym_file = 50,
  sym_comment = 51,
  sym_ty = 52,
  sym_item = 53,
  sym_option = 54,
  sym_expected = 55,
  sym_tuple = 56,
  sym_list = 57,
  sym_future = 58,
  sym_stream = 59,
  sym_use = 60,
  sym__useNames = 61,
  sym__useNameList = 62,
  sym__useName = 63,
  sym_alias = 64,
  sym_record = 65,
  sym_field = 66,
  sym_flags = 67,
  sym_variant = 68,
  sym_case = 69,
  sym_enum = 70,
  sym_union = 71,
  sym_func = 72,
  sym_arg = 73,
  sym_resource = 74,
  sym__resource_item = 75,
  aux_sym_file_repeat1 = 76,
  aux_sym_tuple_repeat1 = 77,
  aux_sym__useNameList_repeat1 = 78,
  aux_sym_record_repeat1 = 79,
  aux_sym_flags_repeat1 = 80,
  aux_sym_variant_repeat1 = 81,
  aux_sym_enum_repeat1 = 82,
  aux_sym_union_repeat1 = 83,
  aux_sym_func_repeat1 = 84,
  aux_sym_resource_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [sym__whitespace] = "_whitespace",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_s8] = "s8",
  [anon_sym_s16] = "s16",
  [anon_sym_s32] = "s32",
  [anon_sym_s64] = "s64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_char] = "char",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_unit] = "unit",
  [anon_sym_handle] = "handle",
  [anon_sym_option] = "option",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_expected] = "expected",
  [anon_sym_COMMA] = ",",
  [anon_sym_tuple] = "tuple",
  [anon_sym_list] = "list",
  [anon_sym_future] = "future",
  [anon_sym_stream] = "stream",
  [anon_sym_use] = "use",
  [anon_sym_from] = "from",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_as] = "as",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_record] = "record",
  [anon_sym_COLON] = ":",
  [anon_sym_flags] = "flags",
  [anon_sym_variant] = "variant",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_enum] = "enum",
  [anon_sym_union] = "union",
  [anon_sym_async] = "async",
  [anon_sym_func] = "func",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_resource] = "resource",
  [anon_sym_static] = "static",
  [sym_file] = "file",
  [sym_comment] = "comment",
  [sym_ty] = "ty",
  [sym_item] = "item",
  [sym_option] = "option",
  [sym_expected] = "expected",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym_future] = "future",
  [sym_stream] = "stream",
  [sym_use] = "use",
  [sym__useNames] = "_useNames",
  [sym__useNameList] = "_useNameList",
  [sym__useName] = "_useName",
  [sym_alias] = "alias",
  [sym_record] = "record",
  [sym_field] = "field",
  [sym_flags] = "flags",
  [sym_variant] = "variant",
  [sym_case] = "case",
  [sym_enum] = "enum",
  [sym_union] = "union",
  [sym_func] = "func",
  [sym_arg] = "arg",
  [sym_resource] = "resource",
  [sym__resource_item] = "_resource_item",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym__useNameList_repeat1] = "_useNameList_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_flags_repeat1] = "flags_repeat1",
  [aux_sym_variant_repeat1] = "variant_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_union_repeat1] = "union_repeat1",
  [aux_sym_func_repeat1] = "func_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [sym__whitespace] = sym__whitespace,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_s8] = anon_sym_s8,
  [anon_sym_s16] = anon_sym_s16,
  [anon_sym_s32] = anon_sym_s32,
  [anon_sym_s64] = anon_sym_s64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_handle] = anon_sym_handle,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_expected] = anon_sym_expected,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_future] = anon_sym_future,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_variant] = anon_sym_variant,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_static] = anon_sym_static,
  [sym_file] = sym_file,
  [sym_comment] = sym_comment,
  [sym_ty] = sym_ty,
  [sym_item] = sym_item,
  [sym_option] = sym_option,
  [sym_expected] = sym_expected,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym_future] = sym_future,
  [sym_stream] = sym_stream,
  [sym_use] = sym_use,
  [sym__useNames] = sym__useNames,
  [sym__useNameList] = sym__useNameList,
  [sym__useName] = sym__useName,
  [sym_alias] = sym_alias,
  [sym_record] = sym_record,
  [sym_field] = sym_field,
  [sym_flags] = sym_flags,
  [sym_variant] = sym_variant,
  [sym_case] = sym_case,
  [sym_enum] = sym_enum,
  [sym_union] = sym_union,
  [sym_func] = sym_func,
  [sym_arg] = sym_arg,
  [sym_resource] = sym_resource,
  [sym__resource_item] = sym__resource_item,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym__useNameList_repeat1] = aux_sym__useNameList_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_flags_repeat1] = aux_sym_flags_repeat1,
  [aux_sym_variant_repeat1] = aux_sym_variant_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_union_repeat1] = aux_sym_union_repeat1,
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_handle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_future] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_expected] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_future] = {
    .visible = true,
    .named = true,
  },
  [sym_stream] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__useNames] = {
    .visible = false,
    .named = true,
  },
  [sym__useNameList] = {
    .visible = false,
    .named = true,
  },
  [sym__useName] = {
    .visible = false,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_union] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym__resource_item] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__useNameList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_case = 2,
  field_err = 3,
  field_flag = 4,
  field_item = 5,
  field_name = 6,
  field_ok = 7,
  field_payload = 8,
  field_return = 9,
  field_target = 10,
  field_ty = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_case] = "case",
  [field_err] = "err",
  [field_flag] = "flag",
  [field_item] = "item",
  [field_name] = "name",
  [field_ok] = "ok",
  [field_payload] = "payload",
  [field_return] = "return",
  [field_target] = "target",
  [field_ty] = "ty",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 1},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 2},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 2},
  [24] = {.index = 46, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_alias, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [4] =
    {field_alias, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [6] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [10] =
    {field_name, 1},
    {field_target, 3},
  [12] =
    {field_alias, 2},
    {field_name, 0},
  [14] =
    {field_flag, 3},
    {field_name, 1},
  [16] =
    {field_case, 3},
    {field_name, 1},
  [18] =
    {field_name, 0},
    {field_ty, 2},
  [20] =
    {field_flag, 1},
  [21] =
    {field_flag, 3},
    {field_flag, 4, .inherited = true},
    {field_name, 1},
  [24] =
    {field_flag, 0, .inherited = true},
    {field_flag, 1, .inherited = true},
  [26] =
    {field_case, 1},
  [27] =
    {field_case, 3},
    {field_case, 4, .inherited = true},
    {field_name, 1},
  [30] =
    {field_case, 0, .inherited = true},
    {field_case, 1, .inherited = true},
  [32] =
    {field_name, 0},
    {field_return, 6},
  [34] =
    {field_name, 0},
    {field_payload, 2},
  [36] =
    {field_name, 0},
    {field_return, 7},
  [38] =
    {field_name, 0},
    {field_return, 8},
  [40] =
    {field_err, 4},
    {field_ok, 2},
  [42] =
    {field_item, 2},
    {field_return, 4},
  [44] =
    {field_name, 0},
    {field_return, 9},
  [46] =
    {field_name, 0},
    {field_return, 10},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_id_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1749
              ? (c < 1488
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8134
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6276 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6279 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_id_character_set_2(int32_t c) {
  return (c < 7927
    ? (c < 2558
      ? (c < 976
        ? (c < 421
          ? (c < 322
            ? (c < 281
              ? (c < 261
                ? (c < 186
                  ? (c < 170
                    ? (c < 'a'
                      ? (c >= '0' && c <= '9')
                      : c <= 'z')
                    : (c <= 170 || (c < 183
                      ? c == 181
                      : c <= 183)))
                  : (c <= 186 || (c < 257
                    ? (c < 248
                      ? (c >= 223 && c <= 246)
                      : c <= 255)
                    : (c <= 257 || c == 259))))
                : (c <= 261 || (c < 271
                  ? (c < 267
                    ? (c < 265
                      ? c == 263
                      : c <= 265)
                    : (c <= 267 || c == 269))
                  : (c <= 271 || (c < 277
                    ? (c < 275
                      ? c == 273
                      : c <= 275)
                    : (c <= 277 || c == 279))))))
              : (c <= 281 || (c < 301
                ? (c < 291
                  ? (c < 287
                    ? (c < 285
                      ? c == 283
                      : c <= 285)
                    : (c <= 287 || c == 289))
                  : (c <= 291 || (c < 297
                    ? (c < 295
                      ? c == 293
                      : c <= 295)
                    : (c <= 297 || c == 299))))
                : (c <= 301 || (c < 311
                  ? (c < 307
                    ? (c < 305
                      ? c == 303
                      : c <= 305)
                    : (c <= 307 || c == 309))
                  : (c <= 312 || (c < 318
                    ? (c < 316
                      ? c == 314
                      : c <= 316)
                    : (c <= 318 || c == 320))))))))
            : (c <= 322 || (c < 363
              ? (c < 343
                ? (c < 333
                  ? (c < 328
                    ? (c < 326
                      ? c == 324
                      : c <= 326)
                    : (c <= 329 || c == 331))
                  : (c <= 333 || (c < 339
                    ? (c < 337
                      ? c == 335
                      : c <= 337)
                    : (c <= 339 || c == 341))))
                : (c <= 343 || (c < 353
                  ? (c < 349
                    ? (c < 347
                      ? c == 345
                      : c <= 347)
                    : (c <= 349 || c == 351))
                  : (c <= 353 || (c < 359
                    ? (c < 357
                      ? c == 355
                      : c <= 357)
                    : (c <= 359 || c == 361))))))
              : (c <= 363 || (c < 387
                ? (c < 373
                  ? (c < 369
                    ? (c < 367
                      ? c == 365
                      : c <= 367)
                    : (c <= 369 || c == 371))
                  : (c <= 373 || (c < 380
                    ? (c < 378
                      ? c == 375
                      : c <= 378)
                    : (c <= 380 || (c >= 382 && c <= 384)))))
                : (c <= 387 || (c < 405
                  ? (c < 396
                    ? (c < 392
                      ? c == 389
                      : c <= 392)
                    : (c <= 397 || c == 402))
                  : (c <= 405 || (c < 417
                    ? (c < 414
                      ? (c >= 409 && c <= 411)
                      : c <= 414)
                    : (c <= 417 || c == 419))))))))))
          : (c <= 421 || (c < 525
            ? (c < 481
              ? (c < 459
                ? (c < 438
                  ? (c < 429
                    ? (c < 426
                      ? c == 424
                      : c <= 427)
                    : (c <= 429 || (c < 436
                      ? c == 432
                      : c <= 436)))
                  : (c <= 438 || (c < 453
                    ? (c < 445
                      ? (c >= 441 && c <= 443)
                      : c <= 451)
                    : (c <= 454 || (c >= 456 && c <= 457)))))
                : (c <= 460 || (c < 470
                  ? (c < 466
                    ? (c < 464
                      ? c == 462
                      : c <= 464)
                    : (c <= 466 || c == 468))
                  : (c <= 470 || (c < 476
                    ? (c < 474
                      ? c == 472
                      : c <= 474)
                    : (c <= 477 || c == 479))))))
              : (c <= 481 || (c < 505
                ? (c < 491
                  ? (c < 487
                    ? (c < 485
                      ? c == 483
                      : c <= 485)
                    : (c <= 487 || c == 489))
                  : (c <= 491 || (c < 498
                    ? (c < 495
                      ? c == 493
                      : c <= 496)
                    : (c <= 499 || c == 501))))
                : (c <= 505 || (c < 515
                  ? (c < 511
                    ? (c < 509
                      ? c == 507
                      : c <= 509)
                    : (c <= 511 || c == 513))
                  : (c <= 515 || (c < 521
                    ? (c < 519
                      ? c == 517
                      : c <= 519)
                    : (c <= 521 || c == 523))))))))
            : (c <= 525 || (c < 572
              ? (c < 545
                ? (c < 535
                  ? (c < 531
                    ? (c < 529
                      ? c == 527
                      : c <= 529)
                    : (c <= 531 || c == 533))
                  : (c <= 535 || (c < 541
                    ? (c < 539
                      ? c == 537
                      : c <= 539)
                    : (c <= 541 || c == 543))))
                : (c <= 545 || (c < 555
                  ? (c < 551
                    ? (c < 549
                      ? c == 547
                      : c <= 549)
                    : (c <= 551 || c == 553))
                  : (c <= 555 || (c < 561
                    ? (c < 559
                      ? c == 557
                      : c <= 559)
                    : (c <= 561 || (c >= 563 && c <= 569)))))))
              : (c <= 572 || (c < 748
                ? (c < 587
                  ? (c < 583
                    ? (c < 578
                      ? (c >= 575 && c <= 576)
                      : c <= 578)
                    : (c <= 583 || c == 585))
                  : (c <= 587 || (c < 710
                    ? (c < 591
                      ? c == 589
                      : c <= 705)
                    : (c <= 721 || (c >= 736 && c <= 740)))))
                : (c <= 748 || (c < 887
                  ? (c < 881
                    ? (c < 768
                      ? c == 750
                      : c <= 879)
                    : (c <= 881 || (c >= 883 && c <= 884)))
                  : (c <= 887 || (c < 912
                    ? (c < 903
                      ? (c >= 891 && c <= 893)
                      : c <= 903)
                    : (c <= 912 || (c >= 940 && c <= 974)))))))))))))
        : (c <= 977 || (c < 1255
          ? (c < 1173
            ? (c < 1127
              ? (c < 1003
                ? (c < 993
                  ? (c < 987
                    ? (c < 985
                      ? (c >= 981 && c <= 983)
                      : c <= 985)
                    : (c <= 987 || (c < 991
                      ? c == 989
                      : c <= 991)))
                  : (c <= 993 || (c < 999
                    ? (c < 997
                      ? c == 995
                      : c <= 997)
                    : (c <= 999 || c == 1001))))
                : (c <= 1003 || (c < 1019
                  ? (c < 1013
                    ? (c < 1007
                      ? c == 1005
                      : c <= 1011)
                    : (c <= 1013 || c == 1016))
                  : (c <= 1020 || (c < 1123
                    ? (c < 1121
                      ? (c >= 1072 && c <= 1119)
                      : c <= 1121)
                    : (c <= 1123 || c == 1125))))))
              : (c <= 1127 || (c < 1147
                ? (c < 1137
                  ? (c < 1133
                    ? (c < 1131
                      ? c == 1129
                      : c <= 1131)
                    : (c <= 1133 || c == 1135))
                  : (c <= 1137 || (c < 1143
                    ? (c < 1141
                      ? c == 1139
                      : c <= 1141)
                    : (c <= 1143 || c == 1145))))
                : (c <= 1147 || (c < 1163
                  ? (c < 1153
                    ? (c < 1151
                      ? c == 1149
                      : c <= 1151)
                    : (c <= 1153 || (c >= 1155 && c <= 1159)))
                  : (c <= 1163 || (c < 1169
                    ? (c < 1167
                      ? c == 1165
                      : c <= 1167)
                    : (c <= 1169 || c == 1171))))))))
            : (c <= 1173 || (c < 1213
              ? (c < 1193
                ? (c < 1183
                  ? (c < 1179
                    ? (c < 1177
                      ? c == 1175
                      : c <= 1177)
                    : (c <= 1179 || c == 1181))
                  : (c <= 1183 || (c < 1189
                    ? (c < 1187
                      ? c == 1185
                      : c <= 1187)
                    : (c <= 1189 || c == 1191))))
                : (c <= 1193 || (c < 1203
                  ? (c < 1199
                    ? (c < 1197
                      ? c == 1195
                      : c <= 1197)
                    : (c <= 1199 || c == 1201))
                  : (c <= 1203 || (c < 1209
                    ? (c < 1207
                      ? c == 1205
                      : c <= 1207)
                    : (c <= 1209 || c == 1211))))))
              : (c <= 1213 || (c < 1235
                ? (c < 1224
                  ? (c < 1220
                    ? (c < 1218
                      ? c == 1215
                      : c <= 1218)
                    : (c <= 1220 || c == 1222))
                  : (c <= 1224 || (c < 1230
                    ? (c < 1228
                      ? c == 1226
                      : c <= 1228)
                    : (c <= 1231 || c == 1233))))
                : (c <= 1235 || (c < 1245
                  ? (c < 1241
                    ? (c < 1239
                      ? c == 1237
                      : c <= 1239)
                    : (c <= 1241 || c == 1243))
                  : (c <= 1245 || (c < 1251
                    ? (c < 1249
                      ? c == 1247
                      : c <= 1249)
                    : (c <= 1251 || c == 1253))))))))))
          : (c <= 1255 || (c < 1473
            ? (c < 1297
              ? (c < 1277
                ? (c < 1267
                  ? (c < 1261
                    ? (c < 1259
                      ? c == 1257
                      : c <= 1259)
                    : (c <= 1261 || (c < 1265
                      ? c == 1263
                      : c <= 1265)))
                  : (c <= 1267 || (c < 1273
                    ? (c < 1271
                      ? c == 1269
                      : c <= 1271)
                    : (c <= 1273 || c == 1275))))
                : (c <= 1277 || (c < 1287
                  ? (c < 1283
                    ? (c < 1281
                      ? c == 1279
                      : c <= 1281)
                    : (c <= 1283 || c == 1285))
                  : (c <= 1287 || (c < 1293
                    ? (c < 1291
                      ? c == 1289
                      : c <= 1291)
                    : (c <= 1293 || c == 1295))))))
              : (c <= 1297 || (c < 1317
                ? (c < 1307
                  ? (c < 1303
                    ? (c < 1301
                      ? c == 1299
                      : c <= 1301)
                    : (c <= 1303 || c == 1305))
                  : (c <= 1307 || (c < 1313
                    ? (c < 1311
                      ? c == 1309
                      : c <= 1311)
                    : (c <= 1313 || c == 1315))))
                : (c <= 1317 || (c < 1327
                  ? (c < 1323
                    ? (c < 1321
                      ? c == 1319
                      : c <= 1321)
                    : (c <= 1323 || c == 1325))
                  : (c <= 1327 || (c < 1425
                    ? (c < 1376
                      ? c == 1369
                      : c <= 1416)
                    : (c <= 1469 || c == 1471))))))))
            : (c <= 1474 || (c < 2160
              ? (c < 1770
                ? (c < 1552
                  ? (c < 1488
                    ? (c < 1479
                      ? (c >= 1476 && c <= 1477)
                      : c <= 1479)
                    : (c <= 1514 || (c >= 1519 && c <= 1522)))
                  : (c <= 1562 || (c < 1749
                    ? (c < 1646
                      ? (c >= 1568 && c <= 1641)
                      : c <= 1747)
                    : (c <= 1756 || (c >= 1759 && c <= 1768)))))
                : (c <= 1788 || (c < 2042
                  ? (c < 1869
                    ? (c < 1808
                      ? c == 1791
                      : c <= 1866)
                    : (c <= 1969 || (c >= 1984 && c <= 2037)))
                  : (c <= 2042 || (c < 2112
                    ? (c < 2048
                      ? c == 2045
                      : c <= 2093)
                    : (c <= 2139 || (c >= 2144 && c <= 2154)))))))
              : (c <= 2183 || (c < 2482
                ? (c < 2417
                  ? (c < 2275
                    ? (c < 2200
                      ? (c >= 2185 && c <= 2190)
                      : c <= 2273)
                    : (c <= 2403 || (c >= 2406 && c <= 2415)))
                  : (c <= 2435 || (c < 2451
                    ? (c < 2447
                      ? (c >= 2437 && c <= 2444)
                      : c <= 2448)
                    : (c <= 2472 || (c >= 2474 && c <= 2480)))))
                : (c <= 2482 || (c < 2519
                  ? (c < 2503
                    ? (c < 2492
                      ? (c >= 2486 && c <= 2489)
                      : c <= 2500)
                    : (c <= 2504 || (c >= 2507 && c <= 2510)))
                  : (c <= 2519 || (c < 2534
                    ? (c < 2527
                      ? (c >= 2524 && c <= 2525)
                      : c <= 2531)
                    : (c <= 2545 || c == 2556))))))))))))))
      : (c <= 2558 || (c < 5870
        ? (c < 3270
          ? (c < 2901
            ? (c < 2730
              ? (c < 2631
                ? (c < 2610
                  ? (c < 2575
                    ? (c < 2565
                      ? (c >= 2561 && c <= 2563)
                      : c <= 2570)
                    : (c <= 2576 || (c < 2602
                      ? (c >= 2579 && c <= 2600)
                      : c <= 2608)))
                  : (c <= 2611 || (c < 2620
                    ? (c < 2616
                      ? (c >= 2613 && c <= 2614)
                      : c <= 2617)
                    : (c <= 2620 || (c >= 2622 && c <= 2626)))))
                : (c <= 2632 || (c < 2662
                  ? (c < 2649
                    ? (c < 2641
                      ? (c >= 2635 && c <= 2637)
                      : c <= 2641)
                    : (c <= 2652 || c == 2654))
                  : (c <= 2677 || (c < 2703
                    ? (c < 2693
                      ? (c >= 2689 && c <= 2691)
                      : c <= 2701)
                    : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
              : (c <= 2736 || (c < 2817
                ? (c < 2763
                  ? (c < 2748
                    ? (c < 2741
                      ? (c >= 2738 && c <= 2739)
                      : c <= 2745)
                    : (c <= 2757 || (c >= 2759 && c <= 2761)))
                  : (c <= 2765 || (c < 2790
                    ? (c < 2784
                      ? c == 2768
                      : c <= 2787)
                    : (c <= 2799 || (c >= 2809 && c <= 2815)))))
                : (c <= 2819 || (c < 2866
                  ? (c < 2835
                    ? (c < 2831
                      ? (c >= 2821 && c <= 2828)
                      : c <= 2832)
                    : (c <= 2856 || (c >= 2858 && c <= 2864)))
                  : (c <= 2867 || (c < 2887
                    ? (c < 2876
                      ? (c >= 2869 && c <= 2873)
                      : c <= 2884)
                    : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
            : (c <= 2903 || (c < 3046
              ? (c < 2972
                ? (c < 2946
                  ? (c < 2918
                    ? (c < 2911
                      ? (c >= 2908 && c <= 2909)
                      : c <= 2915)
                    : (c <= 2927 || c == 2929))
                  : (c <= 2947 || (c < 2962
                    ? (c < 2958
                      ? (c >= 2949 && c <= 2954)
                      : c <= 2960)
                    : (c <= 2965 || (c >= 2969 && c <= 2970)))))
                : (c <= 2972 || (c < 3006
                  ? (c < 2984
                    ? (c < 2979
                      ? (c >= 2974 && c <= 2975)
                      : c <= 2980)
                    : (c <= 2986 || (c >= 2990 && c <= 3001)))
                  : (c <= 3010 || (c < 3024
                    ? (c < 3018
                      ? (c >= 3014 && c <= 3016)
                      : c <= 3021)
                    : (c <= 3024 || c == 3031))))))
              : (c <= 3055 || (c < 3165
                ? (c < 3132
                  ? (c < 3090
                    ? (c < 3086
                      ? (c >= 3072 && c <= 3084)
                      : c <= 3088)
                    : (c <= 3112 || (c >= 3114 && c <= 3129)))
                  : (c <= 3140 || (c < 3157
                    ? (c < 3146
                      ? (c >= 3142 && c <= 3144)
                      : c <= 3149)
                    : (c <= 3158 || (c >= 3160 && c <= 3162)))))
                : (c <= 3165 || (c < 3214
                  ? (c < 3200
                    ? (c < 3174
                      ? (c >= 3168 && c <= 3171)
                      : c <= 3183)
                    : (c <= 3203 || (c >= 3205 && c <= 3212)))
                  : (c <= 3216 || (c < 3253
                    ? (c < 3242
                      ? (c >= 3218 && c <= 3240)
                      : c <= 3251)
                    : (c <= 3257 || (c >= 3260 && c <= 3268)))))))))))
          : (c <= 3272 || (c < 3804
            ? (c < 3520
              ? (c < 3402
                ? (c < 3313
                  ? (c < 3293
                    ? (c < 3285
                      ? (c >= 3274 && c <= 3277)
                      : c <= 3286)
                    : (c <= 3294 || (c < 3302
                      ? (c >= 3296 && c <= 3299)
                      : c <= 3311)))
                  : (c <= 3314 || (c < 3346
                    ? (c < 3342
                      ? (c >= 3328 && c <= 3340)
                      : c <= 3344)
                    : (c <= 3396 || (c >= 3398 && c <= 3400)))))
                : (c <= 3406 || (c < 3457
                  ? (c < 3430
                    ? (c < 3423
                      ? (c >= 3412 && c <= 3415)
                      : c <= 3427)
                    : (c <= 3439 || (c >= 3450 && c <= 3455)))
                  : (c <= 3459 || (c < 3507
                    ? (c < 3482
                      ? (c >= 3461 && c <= 3478)
                      : c <= 3505)
                    : (c <= 3515 || c == 3517))))))
              : (c <= 3526 || (c < 3713
                ? (c < 3558
                  ? (c < 3542
                    ? (c < 3535
                      ? c == 3530
                      : c <= 3540)
                    : (c <= 3542 || (c >= 3544 && c <= 3551)))
                  : (c <= 3567 || (c < 3648
                    ? (c < 3585
                      ? (c >= 3570 && c <= 3571)
                      : c <= 3642)
                    : (c <= 3662 || (c >= 3664 && c <= 3673)))))
                : (c <= 3714 || (c < 3751
                  ? (c < 3724
                    ? (c < 3718
                      ? c == 3716
                      : c <= 3722)
                    : (c <= 3747 || c == 3749))
                  : (c <= 3773 || (c < 3784
                    ? (c < 3782
                      ? (c >= 3776 && c <= 3780)
                      : c <= 3782)
                    : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
            : (c <= 3807 || (c < 4698
              ? (c < 3974
                ? (c < 3895
                  ? (c < 3872
                    ? (c < 3864
                      ? c == 3840
                      : c <= 3865)
                    : (c <= 3881 || c == 3893))
                  : (c <= 3895 || (c < 3913
                    ? (c < 3902
                      ? c == 3897
                      : c <= 3911)
                    : (c <= 3948 || (c >= 3953 && c <= 3972)))))
                : (c <= 3991 || (c < 4304
                  ? (c < 4096
                    ? (c < 4038
                      ? (c >= 3993 && c <= 4028)
                      : c <= 4038)
                    : (c <= 4169 || (c >= 4176 && c <= 4253)))
                  : (c <= 4346 || (c < 4688
                    ? (c < 4682
                      ? (c >= 4348 && c <= 4680)
                      : c <= 4685)
                    : (c <= 4694 || c == 4696))))))
              : (c <= 4701 || (c < 4882
                ? (c < 4792
                  ? (c < 4752
                    ? (c < 4746
                      ? (c >= 4704 && c <= 4744)
                      : c <= 4749)
                    : (c <= 4784 || (c >= 4786 && c <= 4789)))
                  : (c <= 4798 || (c < 4808
                    ? (c < 4802
                      ? c == 4800
                      : c <= 4805)
                    : (c <= 4822 || (c >= 4824 && c <= 4880)))))
                : (c <= 4885 || (c < 5112
                  ? (c < 4969
                    ? (c < 4957
                      ? (c >= 4888 && c <= 4954)
                      : c <= 4959)
                    : (c <= 4977 || (c >= 4992 && c <= 5007)))
                  : (c <= 5117 || (c < 5761
                    ? (c < 5743
                      ? (c >= 5121 && c <= 5740)
                      : c <= 5759)
                    : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))))))
        : (c <= 5880 || (c < 7757
          ? (c < 7380
            ? (c < 6528
              ? (c < 6155
                ? (c < 6002
                  ? (c < 5952
                    ? (c < 5919
                      ? (c >= 5888 && c <= 5909)
                      : c <= 5940)
                    : (c <= 5971 || (c < 5998
                      ? (c >= 5984 && c <= 5996)
                      : c <= 6000)))
                  : (c <= 6003 || (c < 6108
                    ? (c < 6103
                      ? (c >= 6016 && c <= 6099)
                      : c <= 6103)
                    : (c <= 6109 || (c >= 6112 && c <= 6121)))))
                : (c <= 6157 || (c < 6400
                  ? (c < 6272
                    ? (c < 6176
                      ? (c >= 6159 && c <= 6169)
                      : c <= 6264)
                    : (c <= 6314 || (c >= 6320 && c <= 6389)))
                  : (c <= 6430 || (c < 6470
                    ? (c < 6448
                      ? (c >= 6432 && c <= 6443)
                      : c <= 6459)
                    : (c <= 6509 || (c >= 6512 && c <= 6516)))))))
              : (c <= 6571 || (c < 6847
                ? (c < 6752
                  ? (c < 6656
                    ? (c < 6608
                      ? (c >= 6576 && c <= 6601)
                      : c <= 6618)
                    : (c <= 6683 || (c >= 6688 && c <= 6750)))
                  : (c <= 6780 || (c < 6823
                    ? (c < 6800
                      ? (c >= 6783 && c <= 6793)
                      : c <= 6809)
                    : (c <= 6823 || (c >= 6832 && c <= 6845)))))
                : (c <= 6862 || (c < 7168
                  ? (c < 7019
                    ? (c < 6992
                      ? (c >= 6912 && c <= 6988)
                      : c <= 7001)
                    : (c <= 7027 || (c >= 7040 && c <= 7155)))
                  : (c <= 7223 || (c < 7296
                    ? (c < 7245
                      ? (c >= 7232 && c <= 7241)
                      : c <= 7293)
                    : (c <= 7304 || (c >= 7376 && c <= 7378)))))))))
            : (c <= 7418 || (c < 7717
              ? (c < 7697
                ? (c < 7687
                  ? (c < 7683
                    ? (c < 7681
                      ? (c >= 7424 && c <= 7679)
                      : c <= 7681)
                    : (c <= 7683 || c == 7685))
                  : (c <= 7687 || (c < 7693
                    ? (c < 7691
                      ? c == 7689
                      : c <= 7691)
                    : (c <= 7693 || c == 7695))))
                : (c <= 7697 || (c < 7707
                  ? (c < 7703
                    ? (c < 7701
                      ? c == 7699
                      : c <= 7701)
                    : (c <= 7703 || c == 7705))
                  : (c <= 7707 || (c < 7713
                    ? (c < 7711
                      ? c == 7709
                      : c <= 7711)
                    : (c <= 7713 || c == 7715))))))
              : (c <= 7717 || (c < 7737
                ? (c < 7727
                  ? (c < 7723
                    ? (c < 7721
                      ? c == 7719
                      : c <= 7721)
                    : (c <= 7723 || c == 7725))
                  : (c <= 7727 || (c < 7733
                    ? (c < 7731
                      ? c == 7729
                      : c <= 7731)
                    : (c <= 7733 || c == 7735))))
                : (c <= 7737 || (c < 7747
                  ? (c < 7743
                    ? (c < 7741
                      ? c == 7739
                      : c <= 7741)
                    : (c <= 7743 || c == 7745))
                  : (c <= 7747 || (c < 7753
                    ? (c < 7751
                      ? c == 7749
                      : c <= 7751)
                    : (c <= 7753 || c == 7755))))))))))
          : (c <= 7757 || (c < 7847
            ? (c < 7799
              ? (c < 7779
                ? (c < 7769
                  ? (c < 7763
                    ? (c < 7761
                      ? c == 7759
                      : c <= 7761)
                    : (c <= 7763 || (c < 7767
                      ? c == 7765
                      : c <= 7767)))
                  : (c <= 7769 || (c < 7775
                    ? (c < 7773
                      ? c == 7771
                      : c <= 7773)
                    : (c <= 7775 || c == 7777))))
                : (c <= 7779 || (c < 7789
                  ? (c < 7785
                    ? (c < 7783
                      ? c == 7781
                      : c <= 7783)
                    : (c <= 7785 || c == 7787))
                  : (c <= 7789 || (c < 7795
                    ? (c < 7793
                      ? c == 7791
                      : c <= 7793)
                    : (c <= 7795 || c == 7797))))))
              : (c <= 7799 || (c < 7819
                ? (c < 7809
                  ? (c < 7805
                    ? (c < 7803
                      ? c == 7801
                      : c <= 7803)
                    : (c <= 7805 || c == 7807))
                  : (c <= 7809 || (c < 7815
                    ? (c < 7813
                      ? c == 7811
                      : c <= 7813)
                    : (c <= 7815 || c == 7817))))
                : (c <= 7819 || (c < 7829
                  ? (c < 7825
                    ? (c < 7823
                      ? c == 7821
                      : c <= 7823)
                    : (c <= 7825 || c == 7827))
                  : (c <= 7837 || (c < 7843
                    ? (c < 7841
                      ? c == 7839
                      : c <= 7841)
                    : (c <= 7843 || c == 7845))))))))
            : (c <= 7847 || (c < 7887
              ? (c < 7867
                ? (c < 7857
                  ? (c < 7853
                    ? (c < 7851
                      ? c == 7849
                      : c <= 7851)
                    : (c <= 7853 || c == 7855))
                  : (c <= 7857 || (c < 7863
                    ? (c < 7861
                      ? c == 7859
                      : c <= 7861)
                    : (c <= 7863 || c == 7865))))
                : (c <= 7867 || (c < 7877
                  ? (c < 7873
                    ? (c < 7871
                      ? c == 7869
                      : c <= 7871)
                    : (c <= 7873 || c == 7875))
                  : (c <= 7877 || (c < 7883
                    ? (c < 7881
                      ? c == 7879
                      : c <= 7881)
                    : (c <= 7883 || c == 7885))))))
              : (c <= 7887 || (c < 7907
                ? (c < 7897
                  ? (c < 7893
                    ? (c < 7891
                      ? c == 7889
                      : c <= 7891)
                    : (c <= 7893 || c == 7895))
                  : (c <= 7897 || (c < 7903
                    ? (c < 7901
                      ? c == 7899
                      : c <= 7901)
                    : (c <= 7903 || c == 7905))))
                : (c <= 7907 || (c < 7917
                  ? (c < 7913
                    ? (c < 7911
                      ? c == 7909
                      : c <= 7911)
                    : (c <= 7913 || c == 7915))
                  : (c <= 7917 || (c < 7923
                    ? (c < 7921
                      ? c == 7919
                      : c <= 7921)
                    : (c <= 7923 || c == 7925))))))))))))))))
    : (c <= 7927 || (c < 65536
      ? (c < 42612
        ? (c < 11449
          ? (c < 8526
            ? (c < 8160
              ? (c < 8048
                ? (c < 7968
                  ? (c < 7933
                    ? (c < 7931
                      ? c == 7929
                      : c <= 7931)
                    : (c <= 7933 || (c < 7952
                      ? (c >= 7935 && c <= 7943)
                      : c <= 7957)))
                  : (c <= 7975 || (c < 8016
                    ? (c < 8000
                      ? (c >= 7984 && c <= 7991)
                      : c <= 8005)
                    : (c <= 8023 || (c >= 8032 && c <= 8039)))))
                : (c <= 8061 || (c < 8130
                  ? (c < 8124
                    ? (c < 8118
                      ? (c >= 8064 && c <= 8116)
                      : c <= 8119)
                    : (c <= 8124 || c == 8126))
                  : (c <= 8132 || (c < 8144
                    ? (c < 8140
                      ? (c >= 8134 && c <= 8135)
                      : c <= 8140)
                    : (c <= 8147 || (c >= 8150 && c <= 8151)))))))
              : (c <= 8167 || (c < 8417
                ? (c < 8276
                  ? (c < 8188
                    ? (c < 8182
                      ? (c >= 8178 && c <= 8180)
                      : c <= 8183)
                    : (c <= 8188 || (c >= 8255 && c <= 8256)))
                  : (c <= 8276 || (c < 8336
                    ? (c < 8319
                      ? c == 8305
                      : c <= 8319)
                    : (c <= 8348 || (c >= 8400 && c <= 8412)))))
                : (c <= 8417 || (c < 8472
                  ? (c < 8462
                    ? (c < 8458
                      ? (c >= 8421 && c <= 8432)
                      : c <= 8458)
                    : (c <= 8463 || c == 8467))
                  : (c <= 8472 || (c < 8508
                    ? (c < 8500
                      ? (c >= 8494 && c <= 8495)
                      : c <= 8505)
                    : (c <= 8509 || (c >= 8518 && c <= 8521)))))))))
            : (c <= 8526 || (c < 11409
              ? (c < 11379
                ? (c < 11365
                  ? (c < 11312
                    ? (c < 8580
                      ? (c >= 8544 && c <= 8578)
                      : c <= 8584)
                    : (c <= 11359 || c == 11361))
                  : (c <= 11366 || (c < 11372
                    ? (c < 11370
                      ? c == 11368
                      : c <= 11370)
                    : (c <= 11372 || c == 11377))))
                : (c <= 11380 || (c < 11399
                  ? (c < 11395
                    ? (c < 11393
                      ? (c >= 11382 && c <= 11389)
                      : c <= 11393)
                    : (c <= 11395 || c == 11397))
                  : (c <= 11399 || (c < 11405
                    ? (c < 11403
                      ? c == 11401
                      : c <= 11403)
                    : (c <= 11405 || c == 11407))))))
              : (c <= 11409 || (c < 11429
                ? (c < 11419
                  ? (c < 11415
                    ? (c < 11413
                      ? c == 11411
                      : c <= 11413)
                    : (c <= 11415 || c == 11417))
                  : (c <= 11419 || (c < 11425
                    ? (c < 11423
                      ? c == 11421
                      : c <= 11423)
                    : (c <= 11425 || c == 11427))))
                : (c <= 11429 || (c < 11439
                  ? (c < 11435
                    ? (c < 11433
                      ? c == 11431
                      : c <= 11433)
                    : (c <= 11435 || c == 11437))
                  : (c <= 11439 || (c < 11445
                    ? (c < 11443
                      ? c == 11441
                      : c <= 11443)
                    : (c <= 11445 || c == 11447))))))))))
          : (c <= 11449 || (c < 12321
            ? (c < 11491
              ? (c < 11471
                ? (c < 11461
                  ? (c < 11455
                    ? (c < 11453
                      ? c == 11451
                      : c <= 11453)
                    : (c <= 11455 || (c < 11459
                      ? c == 11457
                      : c <= 11459)))
                  : (c <= 11461 || (c < 11467
                    ? (c < 11465
                      ? c == 11463
                      : c <= 11465)
                    : (c <= 11467 || c == 11469))))
                : (c <= 11471 || (c < 11481
                  ? (c < 11477
                    ? (c < 11475
                      ? c == 11473
                      : c <= 11475)
                    : (c <= 11477 || c == 11479))
                  : (c <= 11481 || (c < 11487
                    ? (c < 11485
                      ? c == 11483
                      : c <= 11485)
                    : (c <= 11487 || c == 11489))))))
              : (c <= 11492 || (c < 11680
                ? (c < 11559
                  ? (c < 11507
                    ? (c < 11502
                      ? c == 11500
                      : c <= 11505)
                    : (c <= 11507 || (c >= 11520 && c <= 11557)))
                  : (c <= 11559 || (c < 11631
                    ? (c < 11568
                      ? c == 11565
                      : c <= 11623)
                    : (c <= 11631 || (c >= 11647 && c <= 11670)))))
                : (c <= 11686 || (c < 11720
                  ? (c < 11704
                    ? (c < 11696
                      ? (c >= 11688 && c <= 11694)
                      : c <= 11702)
                    : (c <= 11710 || (c >= 11712 && c <= 11718)))
                  : (c <= 11726 || (c < 11744
                    ? (c < 11736
                      ? (c >= 11728 && c <= 11734)
                      : c <= 11742)
                    : (c <= 11775 || (c >= 12293 && c <= 12295)))))))))
            : (c <= 12335 || (c < 42567
              ? (c < 12704
                ? (c < 12445
                  ? (c < 12353
                    ? (c < 12344
                      ? (c >= 12337 && c <= 12341)
                      : c <= 12348)
                    : (c <= 12438 || (c >= 12441 && c <= 12442)))
                  : (c <= 12447 || (c < 12549
                    ? (c < 12540
                      ? (c >= 12449 && c <= 12538)
                      : c <= 12543)
                    : (c <= 12591 || (c >= 12593 && c <= 12686)))))
                : (c <= 12735 || (c < 42240
                  ? (c < 19968
                    ? (c < 13312
                      ? (c >= 12784 && c <= 12799)
                      : c <= 19903)
                    : (c <= 42124 || (c >= 42192 && c <= 42237)))
                  : (c <= 42508 || (c < 42563
                    ? (c < 42561
                      ? (c >= 42512 && c <= 42539)
                      : c <= 42561)
                    : (c <= 42563 || c == 42565))))))
              : (c <= 42567 || (c < 42587
                ? (c < 42577
                  ? (c < 42573
                    ? (c < 42571
                      ? c == 42569
                      : c <= 42571)
                    : (c <= 42573 || c == 42575))
                  : (c <= 42577 || (c < 42583
                    ? (c < 42581
                      ? c == 42579
                      : c <= 42581)
                    : (c <= 42583 || c == 42585))))
                : (c <= 42587 || (c < 42597
                  ? (c < 42593
                    ? (c < 42591
                      ? c == 42589
                      : c <= 42591)
                    : (c <= 42593 || c == 42595))
                  : (c <= 42597 || (c < 42603
                    ? (c < 42601
                      ? c == 42599
                      : c <= 42601)
                    : (c <= 42603 || (c >= 42605 && c <= 42607)))))))))))))
        : (c <= 42621 || (c < 42941
          ? (c < 42837
            ? (c < 42795
              ? (c < 42643
                ? (c < 42633
                  ? (c < 42627
                    ? (c < 42625
                      ? c == 42623
                      : c <= 42625)
                    : (c <= 42627 || (c < 42631
                      ? c == 42629
                      : c <= 42631)))
                  : (c <= 42633 || (c < 42639
                    ? (c < 42637
                      ? c == 42635
                      : c <= 42637)
                    : (c <= 42639 || c == 42641))))
                : (c <= 42643 || (c < 42775
                  ? (c < 42649
                    ? (c < 42647
                      ? c == 42645
                      : c <= 42647)
                    : (c <= 42649 || (c >= 42651 && c <= 42737)))
                  : (c <= 42783 || (c < 42791
                    ? (c < 42789
                      ? c == 42787
                      : c <= 42789)
                    : (c <= 42791 || c == 42793))))))
              : (c <= 42795 || (c < 42817
                ? (c < 42807
                  ? (c < 42803
                    ? (c < 42799
                      ? c == 42797
                      : c <= 42801)
                    : (c <= 42803 || c == 42805))
                  : (c <= 42807 || (c < 42813
                    ? (c < 42811
                      ? c == 42809
                      : c <= 42811)
                    : (c <= 42813 || c == 42815))))
                : (c <= 42817 || (c < 42827
                  ? (c < 42823
                    ? (c < 42821
                      ? c == 42819
                      : c <= 42821)
                    : (c <= 42823 || c == 42825))
                  : (c <= 42827 || (c < 42833
                    ? (c < 42831
                      ? c == 42829
                      : c <= 42831)
                    : (c <= 42833 || c == 42835))))))))
            : (c <= 42837 || (c < 42887
              ? (c < 42857
                ? (c < 42847
                  ? (c < 42843
                    ? (c < 42841
                      ? c == 42839
                      : c <= 42841)
                    : (c <= 42843 || c == 42845))
                  : (c <= 42847 || (c < 42853
                    ? (c < 42851
                      ? c == 42849
                      : c <= 42851)
                    : (c <= 42853 || c == 42855))))
                : (c <= 42857 || (c < 42876
                  ? (c < 42863
                    ? (c < 42861
                      ? c == 42859
                      : c <= 42861)
                    : (c <= 42872 || c == 42874))
                  : (c <= 42876 || (c < 42883
                    ? (c < 42881
                      ? c == 42879
                      : c <= 42881)
                    : (c <= 42883 || c == 42885))))))
              : (c <= 42888 || (c < 42913
                ? (c < 42903
                  ? (c < 42897
                    ? (c < 42894
                      ? c == 42892
                      : c <= 42895)
                    : (c <= 42897 || (c >= 42899 && c <= 42901)))
                  : (c <= 42903 || (c < 42909
                    ? (c < 42907
                      ? c == 42905
                      : c <= 42907)
                    : (c <= 42909 || c == 42911))))
                : (c <= 42913 || (c < 42927
                  ? (c < 42919
                    ? (c < 42917
                      ? c == 42915
                      : c <= 42917)
                    : (c <= 42919 || c == 42921))
                  : (c <= 42927 || (c < 42937
                    ? (c < 42935
                      ? c == 42933
                      : c <= 42935)
                    : (c <= 42937 || c == 42939))))))))))
          : (c <= 42941 || (c < 44012
            ? (c < 43360
              ? (c < 42994
                ? (c < 42961
                  ? (c < 42947
                    ? (c < 42945
                      ? c == 42943
                      : c <= 42945)
                    : (c <= 42947 || (c < 42954
                      ? c == 42952
                      : c <= 42954)))
                  : (c <= 42961 || (c < 42967
                    ? (c < 42965
                      ? c == 42963
                      : c <= 42965)
                    : (c <= 42967 || c == 42969))))
                : (c <= 42996 || (c < 43216
                  ? (c < 43072
                    ? (c < 43052
                      ? (c >= 42998 && c <= 43047)
                      : c <= 43052)
                    : (c <= 43123 || (c >= 43136 && c <= 43205)))
                  : (c <= 43225 || (c < 43261
                    ? (c < 43259
                      ? (c >= 43232 && c <= 43255)
                      : c <= 43259)
                    : (c <= 43309 || (c >= 43312 && c <= 43347)))))))
              : (c <= 43388 || (c < 43744
                ? (c < 43584
                  ? (c < 43488
                    ? (c < 43471
                      ? (c >= 43392 && c <= 43456)
                      : c <= 43481)
                    : (c <= 43518 || (c >= 43520 && c <= 43574)))
                  : (c <= 43597 || (c < 43642
                    ? (c < 43616
                      ? (c >= 43600 && c <= 43609)
                      : c <= 43638)
                    : (c <= 43714 || (c >= 43739 && c <= 43741)))))
                : (c <= 43759 || (c < 43808
                  ? (c < 43785
                    ? (c < 43777
                      ? (c >= 43762 && c <= 43766)
                      : c <= 43782)
                    : (c <= 43790 || (c >= 43793 && c <= 43798)))
                  : (c <= 43814 || (c < 43868
                    ? (c < 43824
                      ? (c >= 43816 && c <= 43822)
                      : c <= 43866)
                    : (c <= 43881 || (c >= 43888 && c <= 44010)))))))))
            : (c <= 44013 || (c < 65008
              ? (c < 64298
                ? (c < 63744
                  ? (c < 55216
                    ? (c < 44032
                      ? (c >= 44016 && c <= 44025)
                      : c <= 55203)
                    : (c <= 55238 || (c >= 55243 && c <= 55291)))
                  : (c <= 64109 || (c < 64275
                    ? (c < 64256
                      ? (c >= 64112 && c <= 64217)
                      : c <= 64262)
                    : (c <= 64279 || (c >= 64285 && c <= 64296)))))
                : (c <= 64310 || (c < 64326
                  ? (c < 64320
                    ? (c < 64318
                      ? (c >= 64312 && c <= 64316)
                      : c <= 64318)
                    : (c <= 64321 || (c >= 64323 && c <= 64324)))
                  : (c <= 64433 || (c < 64848
                    ? (c < 64612
                      ? (c >= 64467 && c <= 64605)
                      : c <= 64829)
                    : (c <= 64911 || (c >= 64914 && c <= 64967)))))))
              : (c <= 65017 || (c < 65149
                ? (c < 65137
                  ? (c < 65075
                    ? (c < 65056
                      ? (c >= 65024 && c <= 65039)
                      : c <= 65071)
                    : (c <= 65076 || (c >= 65101 && c <= 65103)))
                  : (c <= 65137 || (c < 65145
                    ? (c < 65143
                      ? c == 65139
                      : c <= 65143)
                    : (c <= 65145 || c == 65147))))
                : (c <= 65149 || (c < 65382
                  ? (c < 65343
                    ? (c < 65296
                      ? (c >= 65151 && c <= 65276)
                      : c <= 65305)
                    : (c <= 65343 || (c >= 65345 && c <= 65370)))
                  : (c <= 65470 || (c < 65490
                    ? (c < 65482
                      ? (c >= 65474 && c <= 65479)
                      : c <= 65487)
                    : (c <= 65495 || (c >= 65498 && c <= 65500)))))))))))))))
      : (c <= 65547 || (c < 72968
        ? (c < 69840
          ? (c < 67712
            ? (c < 66776
              ? (c < 66272
                ? (c < 65664
                  ? (c < 65596
                    ? (c < 65576
                      ? (c >= 65549 && c <= 65574)
                      : c <= 65594)
                    : (c <= 65597 || (c < 65616
                      ? (c >= 65599 && c <= 65613)
                      : c <= 65629)))
                  : (c <= 65786 || (c < 66176
                    ? (c < 66045
                      ? (c >= 65856 && c <= 65908)
                      : c <= 66045)
                    : (c <= 66204 || (c >= 66208 && c <= 66256)))))
                : (c <= 66272 || (c < 66464
                  ? (c < 66384
                    ? (c < 66349
                      ? (c >= 66304 && c <= 66335)
                      : c <= 66378)
                    : (c <= 66426 || (c >= 66432 && c <= 66461)))
                  : (c <= 66499 || (c < 66600
                    ? (c < 66513
                      ? (c >= 66504 && c <= 66511)
                      : c <= 66517)
                    : (c <= 66717 || (c >= 66720 && c <= 66729)))))))
              : (c <= 66811 || (c < 67456
                ? (c < 66995
                  ? (c < 66967
                    ? (c < 66864
                      ? (c >= 66816 && c <= 66855)
                      : c <= 66915)
                    : (c <= 66977 || (c >= 66979 && c <= 66993)))
                  : (c <= 67001 || (c < 67392
                    ? (c < 67072
                      ? (c >= 67003 && c <= 67004)
                      : c <= 67382)
                    : (c <= 67413 || (c >= 67424 && c <= 67431)))))
                : (c <= 67461 || (c < 67594
                  ? (c < 67584
                    ? (c < 67506
                      ? (c >= 67463 && c <= 67504)
                      : c <= 67514)
                    : (c <= 67589 || c == 67592))
                  : (c <= 67637 || (c < 67647
                    ? (c < 67644
                      ? (c >= 67639 && c <= 67640)
                      : c <= 67644)
                    : (c <= 67669 || (c >= 67680 && c <= 67702)))))))))
            : (c <= 67742 || (c < 68448
              ? (c < 68117
                ? (c < 67968
                  ? (c < 67840
                    ? (c < 67828
                      ? (c >= 67808 && c <= 67826)
                      : c <= 67829)
                    : (c <= 67861 || (c >= 67872 && c <= 67897)))
                  : (c <= 68023 || (c < 68101
                    ? (c < 68096
                      ? (c >= 68030 && c <= 68031)
                      : c <= 68099)
                    : (c <= 68102 || (c >= 68108 && c <= 68115)))))
                : (c <= 68119 || (c < 68224
                  ? (c < 68159
                    ? (c < 68152
                      ? (c >= 68121 && c <= 68149)
                      : c <= 68154)
                    : (c <= 68159 || (c >= 68192 && c <= 68220)))
                  : (c <= 68252 || (c < 68352
                    ? (c < 68297
                      ? (c >= 68288 && c <= 68295)
                      : c <= 68326)
                    : (c <= 68405 || (c >= 68416 && c <= 68437)))))))
              : (c <= 68466 || (c < 69376
                ? (c < 68864
                  ? (c < 68736
                    ? (c < 68608
                      ? (c >= 68480 && c <= 68497)
                      : c <= 68680)
                    : (c <= 68786 || (c >= 68800 && c <= 68850)))
                  : (c <= 68903 || (c < 69291
                    ? (c < 69248
                      ? (c >= 68912 && c <= 68921)
                      : c <= 69289)
                    : (c <= 69292 || (c >= 69296 && c <= 69297)))))
                : (c <= 69404 || (c < 69600
                  ? (c < 69488
                    ? (c < 69424
                      ? c == 69415
                      : c <= 69456)
                    : (c <= 69509 || (c >= 69552 && c <= 69572)))
                  : (c <= 69622 || (c < 69759
                    ? (c < 69734
                      ? (c >= 69632 && c <= 69702)
                      : c <= 69749)
                    : (c <= 69818 || c == 69826))))))))))
          : (c <= 69864 || (c < 70864
            ? (c < 70400
              ? (c < 70144
                ? (c < 70006
                  ? (c < 69942
                    ? (c < 69888
                      ? (c >= 69872 && c <= 69881)
                      : c <= 69940)
                    : (c <= 69951 || (c < 69968
                      ? (c >= 69956 && c <= 69959)
                      : c <= 70003)))
                  : (c <= 70006 || (c < 70094
                    ? (c < 70089
                      ? (c >= 70016 && c <= 70084)
                      : c <= 70092)
                    : (c <= 70106 || c == 70108))))
                : (c <= 70161 || (c < 70282
                  ? (c < 70272
                    ? (c < 70206
                      ? (c >= 70163 && c <= 70199)
                      : c <= 70206)
                    : (c <= 70278 || c == 70280))
                  : (c <= 70285 || (c < 70320
                    ? (c < 70303
                      ? (c >= 70287 && c <= 70301)
                      : c <= 70312)
                    : (c <= 70378 || (c >= 70384 && c <= 70393)))))))
              : (c <= 70403 || (c < 70480
                ? (c < 70450
                  ? (c < 70419
                    ? (c < 70415
                      ? (c >= 70405 && c <= 70412)
                      : c <= 70416)
                    : (c <= 70440 || (c >= 70442 && c <= 70448)))
                  : (c <= 70451 || (c < 70471
                    ? (c < 70459
                      ? (c >= 70453 && c <= 70457)
                      : c <= 70468)
                    : (c <= 70472 || (c >= 70475 && c <= 70477)))))
                : (c <= 70480 || (c < 70656
                  ? (c < 70502
                    ? (c < 70493
                      ? c == 70487
                      : c <= 70499)
                    : (c <= 70508 || (c >= 70512 && c <= 70516)))
                  : (c <= 70730 || (c < 70784
                    ? (c < 70750
                      ? (c >= 70736 && c <= 70745)
                      : c <= 70753)
                    : (c <= 70853 || c == 70855))))))))
            : (c <= 70873 || (c < 71991
              ? (c < 71453
                ? (c < 71236
                  ? (c < 71128
                    ? (c < 71096
                      ? (c >= 71040 && c <= 71093)
                      : c <= 71104)
                    : (c <= 71133 || (c >= 71168 && c <= 71232)))
                  : (c <= 71236 || (c < 71360
                    ? (c < 71296
                      ? (c >= 71248 && c <= 71257)
                      : c <= 71352)
                    : (c <= 71369 || (c >= 71424 && c <= 71450)))))
                : (c <= 71467 || (c < 71935
                  ? (c < 71680
                    ? (c < 71488
                      ? (c >= 71472 && c <= 71481)
                      : c <= 71494)
                    : (c <= 71738 || (c >= 71840 && c <= 71913)))
                  : (c <= 71942 || (c < 71957
                    ? (c < 71948
                      ? c == 71945
                      : c <= 71955)
                    : (c <= 71958 || (c >= 71960 && c <= 71989)))))))
              : (c <= 71992 || (c < 72349
                ? (c < 72154
                  ? (c < 72096
                    ? (c < 72016
                      ? (c >= 71995 && c <= 72003)
                      : c <= 72025)
                    : (c <= 72103 || (c >= 72106 && c <= 72151)))
                  : (c <= 72161 || (c < 72263
                    ? (c < 72192
                      ? (c >= 72163 && c <= 72164)
                      : c <= 72254)
                    : (c <= 72263 || (c >= 72272 && c <= 72345)))))
                : (c <= 72349 || (c < 72784
                  ? (c < 72714
                    ? (c < 72704
                      ? (c >= 72368 && c <= 72440)
                      : c <= 72712)
                    : (c <= 72758 || (c >= 72760 && c <= 72768)))
                  : (c <= 72793 || (c < 72873
                    ? (c < 72850
                      ? (c >= 72818 && c <= 72847)
                      : c <= 72871)
                    : (c <= 72886 || (c >= 72960 && c <= 72966)))))))))))))
        : (c <= 72969 || (c < 120488
          ? (c < 101632
            ? (c < 92736
              ? (c < 73120
                ? (c < 73056
                  ? (c < 73020
                    ? (c < 73018
                      ? (c >= 72971 && c <= 73014)
                      : c <= 73018)
                    : (c <= 73021 || (c < 73040
                      ? (c >= 73023 && c <= 73031)
                      : c <= 73049)))
                  : (c <= 73061 || (c < 73104
                    ? (c < 73066
                      ? (c >= 73063 && c <= 73064)
                      : c <= 73102)
                    : (c <= 73105 || (c >= 73107 && c <= 73112)))))
                : (c <= 73129 || (c < 74880
                  ? (c < 73728
                    ? (c < 73648
                      ? (c >= 73440 && c <= 73462)
                      : c <= 73648)
                    : (c <= 74649 || (c >= 74752 && c <= 74862)))
                  : (c <= 75075 || (c < 82944
                    ? (c < 77824
                      ? (c >= 77712 && c <= 77808)
                      : c <= 78894)
                    : (c <= 83526 || (c >= 92160 && c <= 92728)))))))
              : (c <= 92766 || (c < 93053
                ? (c < 92912
                  ? (c < 92864
                    ? (c < 92784
                      ? (c >= 92768 && c <= 92777)
                      : c <= 92862)
                    : (c <= 92873 || (c >= 92880 && c <= 92909)))
                  : (c <= 92916 || (c < 93008
                    ? (c < 92992
                      ? (c >= 92928 && c <= 92982)
                      : c <= 92995)
                    : (c <= 93017 || (c >= 93027 && c <= 93047)))))
                : (c <= 93071 || (c < 94176
                  ? (c < 94031
                    ? (c < 93952
                      ? (c >= 93760 && c <= 93823)
                      : c <= 94026)
                    : (c <= 94087 || (c >= 94095 && c <= 94111)))
                  : (c <= 94177 || (c < 94208
                    ? (c < 94192
                      ? (c >= 94179 && c <= 94180)
                      : c <= 94193)
                    : (c <= 100343 || (c >= 100352 && c <= 101589)))))))))
            : (c <= 101640 || (c < 119362
              ? (c < 113792
                ? (c < 110928
                  ? (c < 110589
                    ? (c < 110581
                      ? (c >= 110576 && c <= 110579)
                      : c <= 110587)
                    : (c <= 110590 || (c >= 110592 && c <= 110882)))
                  : (c <= 110930 || (c < 113664
                    ? (c < 110960
                      ? (c >= 110948 && c <= 110951)
                      : c <= 111355)
                    : (c <= 113770 || (c >= 113776 && c <= 113788)))))
                : (c <= 113800 || (c < 119141
                  ? (c < 118528
                    ? (c < 113821
                      ? (c >= 113808 && c <= 113817)
                      : c <= 113822)
                    : (c <= 118573 || (c >= 118576 && c <= 118598)))
                  : (c <= 119145 || (c < 119173
                    ? (c < 119163
                      ? (c >= 119149 && c <= 119154)
                      : c <= 119170)
                    : (c <= 119179 || (c >= 119210 && c <= 119213)))))))
              : (c <= 119364 || (c < 120005
                ? (c < 119973
                  ? (c < 119966
                    ? (c < 119894
                      ? (c >= 119808 && c <= 119892)
                      : c <= 119964)
                    : (c <= 119967 || c == 119970))
                  : (c <= 119974 || (c < 119995
                    ? (c < 119982
                      ? (c >= 119977 && c <= 119980)
                      : c <= 119993)
                    : (c <= 119995 || (c >= 119997 && c <= 120003)))))
                : (c <= 120069 || (c < 120123
                  ? (c < 120086
                    ? (c < 120077
                      ? (c >= 120071 && c <= 120074)
                      : c <= 120084)
                    : (c <= 120092 || (c >= 120094 && c <= 120121)))
                  : (c <= 120126 || (c < 120138
                    ? (c < 120134
                      ? (c >= 120128 && c <= 120132)
                      : c <= 120134)
                    : (c <= 120144 || (c >= 120146 && c <= 120485)))))))))))
          : (c <= 120512 || (c < 126497
            ? (c < 122888
              ? (c < 120772
                ? (c < 120630
                  ? (c < 120572
                    ? (c < 120540
                      ? (c >= 120514 && c <= 120538)
                      : c <= 120570)
                    : (c <= 120596 || (c >= 120598 && c <= 120628)))
                  : (c <= 120654 || (c < 120714
                    ? (c < 120688
                      ? (c >= 120656 && c <= 120686)
                      : c <= 120712)
                    : (c <= 120744 || (c >= 120746 && c <= 120770)))))
                : (c <= 120779 || (c < 121476
                  ? (c < 121403
                    ? (c < 121344
                      ? (c >= 120782 && c <= 120831)
                      : c <= 121398)
                    : (c <= 121452 || c == 121461))
                  : (c <= 121476 || (c < 122624
                    ? (c < 121505
                      ? (c >= 121499 && c <= 121503)
                      : c <= 121519)
                    : (c <= 122654 || (c >= 122880 && c <= 122886)))))))
              : (c <= 122904 || (c < 124896
                ? (c < 123184
                  ? (c < 122918
                    ? (c < 122915
                      ? (c >= 122907 && c <= 122913)
                      : c <= 122916)
                    : (c <= 122922 || (c >= 123136 && c <= 123180)))
                  : (c <= 123197 || (c < 123536
                    ? (c < 123214
                      ? (c >= 123200 && c <= 123209)
                      : c <= 123214)
                    : (c <= 123566 || (c >= 123584 && c <= 123641)))))
                : (c <= 124902 || (c < 125136
                  ? (c < 124912
                    ? (c < 124909
                      ? (c >= 124904 && c <= 124907)
                      : c <= 124910)
                    : (c <= 124926 || (c >= 124928 && c <= 125124)))
                  : (c <= 125142 || (c < 126464
                    ? (c < 125264
                      ? (c >= 125184 && c <= 125259)
                      : c <= 125273)
                    : (c <= 126467 || (c >= 126469 && c <= 126495)))))))))
            : (c <= 126498 || (c < 126564
              ? (c < 126539
                ? (c < 126521
                  ? (c < 126505
                    ? (c < 126503
                      ? c == 126500
                      : c <= 126503)
                    : (c <= 126514 || (c >= 126516 && c <= 126519)))
                  : (c <= 126521 || (c < 126535
                    ? (c < 126530
                      ? c == 126523
                      : c <= 126530)
                    : (c <= 126535 || c == 126537))))
                : (c <= 126539 || (c < 126553
                  ? (c < 126548
                    ? (c < 126545
                      ? (c >= 126541 && c <= 126543)
                      : c <= 126546)
                    : (c <= 126548 || c == 126551))
                  : (c <= 126553 || (c < 126559
                    ? (c < 126557
                      ? c == 126555
                      : c <= 126557)
                    : (c <= 126559 || (c >= 126561 && c <= 126562)))))))
              : (c <= 126564 || (c < 126635
                ? (c < 126590
                  ? (c < 126580
                    ? (c < 126572
                      ? (c >= 126567 && c <= 126570)
                      : c <= 126578)
                    : (c <= 126583 || (c >= 126585 && c <= 126588)))
                  : (c <= 126590 || (c < 126625
                    ? (c < 126603
                      ? (c >= 126592 && c <= 126601)
                      : c <= 126619)
                    : (c <= 126627 || (c >= 126629 && c <= 126633)))))
                : (c <= 126651 || (c < 178208
                  ? (c < 173824
                    ? (c < 131072
                      ? (c >= 130032 && c <= 130041)
                      : c <= 173791)
                    : (c <= 177976 || (c >= 177984 && c <= 178205)))
                  : (c <= 183969 || (c < 196608
                    ? (c < 194560
                      ? (c >= 183984 && c <= 191456)
                      : c <= 195101)
                    : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (sym_id_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 6:
      if (sym_id_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(6);
      if (sym_id_character_set_2(lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == '8') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(57);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == '6') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(64);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 94:
      if (lookahead == '3') ADVANCE(107);
      if (lookahead == '6') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == '4') ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_future);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_handle);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_expected);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_s64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_handle] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_expected] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_future] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_variant] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(184),
    [sym_comment] = STATE(1),
    [sym_item] = STATE(56),
    [sym_use] = STATE(57),
    [sym_alias] = STATE(57),
    [sym_record] = STATE(57),
    [sym_flags] = STATE(57),
    [sym_variant] = STATE(57),
    [sym_enum] = STATE(57),
    [sym_union] = STATE(57),
    [sym_func] = STATE(57),
    [sym_resource] = STATE(57),
    [aux_sym_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_id] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_record] = ACTIONS(17),
    [anon_sym_flags] = ACTIONS(19),
    [anon_sym_variant] = ACTIONS(21),
    [anon_sym_enum] = ACTIONS(23),
    [anon_sym_union] = ACTIONS(25),
    [anon_sym_resource] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(2), 1,
      sym_comment,
    STATE(131), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [65] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(95), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [130] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    ACTIONS(49), 1,
      anon_sym_GT,
    STATE(4), 1,
      sym_comment,
    STATE(117), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [195] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(142), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [260] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(142), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [325] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    ACTIONS(55), 1,
      anon_sym_GT,
    STATE(7), 1,
      sym_comment,
    STATE(131), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [390] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(8), 1,
      sym_comment,
    STATE(127), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [452] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(9), 1,
      sym_comment,
    STATE(126), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [514] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(10), 1,
      sym_comment,
    STATE(177), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [576] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(11), 1,
      sym_comment,
    STATE(163), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [638] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(12), 1,
      sym_comment,
    STATE(175), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [700] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(13), 1,
      sym_comment,
    STATE(45), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [762] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(14), 1,
      sym_comment,
    STATE(131), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [824] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(15), 1,
      sym_comment,
    STATE(48), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [886] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(16), 1,
      sym_comment,
    STATE(180), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [948] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(17), 1,
      sym_comment,
    STATE(166), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1010] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(18), 1,
      sym_comment,
    STATE(44), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1072] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(19), 1,
      sym_comment,
    STATE(142), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1134] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(20), 1,
      sym_comment,
    STATE(183), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1196] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(21), 1,
      sym_comment,
    STATE(67), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1258] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(22), 1,
      sym_comment,
    STATE(46), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1320] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(23), 1,
      sym_comment,
    STATE(47), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1382] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(24), 1,
      sym_comment,
    STATE(178), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1444] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(31), 1,
      anon_sym_handle,
    ACTIONS(33), 1,
      anon_sym_option,
    ACTIONS(37), 1,
      anon_sym_expected,
    ACTIONS(39), 1,
      anon_sym_tuple,
    ACTIONS(41), 1,
      anon_sym_list,
    ACTIONS(43), 1,
      anon_sym_future,
    ACTIONS(45), 1,
      anon_sym_stream,
    STATE(25), 1,
      sym_comment,
    STATE(181), 1,
      sym_ty,
    STATE(38), 6,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
      sym_future,
      sym_stream,
    ACTIONS(29), 15,
      sym_id,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_unit,
  [1506] = 17,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_record,
    ACTIONS(19), 1,
      anon_sym_flags,
    ACTIONS(21), 1,
      anon_sym_variant,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_union,
    ACTIONS(27), 1,
      anon_sym_resource,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_file_repeat1,
    STATE(56), 1,
      sym_item,
    STATE(57), 9,
      sym_use,
      sym_alias,
      sym_record,
      sym_flags,
      sym_variant,
      sym_enum,
      sym_union,
      sym_func,
      sym_resource,
  [1566] = 16,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_id,
    ACTIONS(64), 1,
      anon_sym_use,
    ACTIONS(67), 1,
      anon_sym_type,
    ACTIONS(70), 1,
      anon_sym_record,
    ACTIONS(73), 1,
      anon_sym_flags,
    ACTIONS(76), 1,
      anon_sym_variant,
    ACTIONS(79), 1,
      anon_sym_enum,
    ACTIONS(82), 1,
      anon_sym_union,
    ACTIONS(85), 1,
      anon_sym_resource,
    STATE(56), 1,
      sym_item,
    STATE(27), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(57), 9,
      sym_use,
      sym_alias,
      sym_record,
      sym_flags,
      sym_variant,
      sym_enum,
      sym_union,
      sym_func,
      sym_resource,
  [1624] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(28), 1,
      sym_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(90), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1656] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(29), 1,
      sym_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(94), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1688] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(30), 1,
      sym_comment,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(98), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1720] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(102), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1752] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(106), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1784] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(110), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1816] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(114), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1848] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(118), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1880] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(36), 1,
      sym_comment,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(122), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1912] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(126), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1944] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(38), 1,
      sym_comment,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(130), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [1976] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(136), 1,
      anon_sym_DASH_GT,
    STATE(39), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(134), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2008] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(142), 1,
      anon_sym_DASH_GT,
    STATE(40), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(140), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2040] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(148), 1,
      anon_sym_DASH_GT,
    STATE(41), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(146), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2072] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(154), 1,
      anon_sym_DASH_GT,
    STATE(42), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(152), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2104] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(158), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2136] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(164), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2165] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(168), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2194] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(46), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(172), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2223] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(47), 1,
      sym_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(176), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2252] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(180), 10,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
      anon_sym_static,
  [2281] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(184), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2311] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_comment,
    ACTIONS(190), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2338] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_comment,
    ACTIONS(194), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2365] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_comment,
    ACTIONS(198), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2392] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
    ACTIONS(202), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2419] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
    ACTIONS(206), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2446] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_comment,
    ACTIONS(210), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2473] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
    ACTIONS(214), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2500] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
    ACTIONS(218), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2527] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_comment,
    ACTIONS(222), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2554] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
    ACTIONS(226), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2581] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_comment,
    ACTIONS(230), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2608] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_comment,
    ACTIONS(234), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2635] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
    ACTIONS(238), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2662] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_comment,
    ACTIONS(242), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2689] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
    ACTIONS(246), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2716] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_comment,
    ACTIONS(250), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2743] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
    ACTIONS(254), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2770] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_comment,
    ACTIONS(258), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2797] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_comment,
    ACTIONS(262), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2824] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_comment,
    ACTIONS(266), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2851] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_comment,
    ACTIONS(270), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2878] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_comment,
    ACTIONS(274), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2905] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_comment,
    ACTIONS(278), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2932] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_comment,
    ACTIONS(282), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2959] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_comment,
    ACTIONS(286), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2986] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_comment,
    ACTIONS(290), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [3013] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_comment,
    ACTIONS(294), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [3040] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_comment,
    ACTIONS(298), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [3067] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_comment,
    ACTIONS(302), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [3094] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(304), 1,
      sym_id,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_static,
    STATE(84), 1,
      sym_func,
    STATE(85), 1,
      sym__resource_item,
    STATE(79), 2,
      sym_comment,
      aux_sym_resource_repeat1,
  [3123] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_static,
    STATE(79), 1,
      aux_sym_resource_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(84), 1,
      sym_func,
    STATE(85), 1,
      sym__resource_item,
  [3154] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(314), 1,
      anon_sym_static,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_resource_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      sym_func,
    STATE(85), 1,
      sym__resource_item,
  [3185] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_func_repeat1,
  [3207] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3227] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(326), 2,
      sym_id,
      anon_sym_static,
  [3247] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(330), 2,
      sym_id,
      anon_sym_static,
  [3267] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      sym_id,
    STATE(86), 1,
      sym_comment,
    STATE(109), 1,
      sym_arg,
  [3289] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_func_repeat1,
  [3311] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(342), 1,
      anon_sym_as,
    STATE(88), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3331] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(334), 1,
      sym_id,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_comment,
    STATE(146), 1,
      sym_arg,
  [3353] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(90), 2,
      sym_comment,
      aux_sym__useNameList_repeat1,
  [3373] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(349), 1,
      sym_id,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(141), 1,
      sym_field,
  [3395] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(353), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_comment,
    STATE(172), 1,
      sym__useNames,
  [3417] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_record_repeat1,
  [3439] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      sym_comment,
      aux_sym_union_repeat1,
  [3459] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_union_repeat1,
  [3481] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_flags_repeat1,
  [3503] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(372), 1,
      sym_id,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_comment,
    STATE(133), 1,
      sym_case,
  [3525] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_variant_repeat1,
  [3547] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym_enum_repeat1,
  [3569] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_variant_repeat1,
    STATE(100), 1,
      sym_comment,
  [3591] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_enum_repeat1,
  [3613] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym__useNameList_repeat1,
  [3635] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(103), 2,
      sym_comment,
      aux_sym_func_repeat1,
  [3655] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_union_repeat1,
    STATE(104), 1,
      sym_comment,
  [3677] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(403), 2,
      sym_id,
      anon_sym_static,
  [3697] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_flags_repeat1,
    STATE(106), 1,
      sym_comment,
  [3719] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_record_repeat1,
    STATE(107), 1,
      sym_comment,
  [3741] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(372), 1,
      sym_id,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_case,
    STATE(108), 1,
      sym_comment,
  [3763] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_func_repeat1,
    STATE(109), 1,
      sym_comment,
  [3785] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(55), 1,
      anon_sym_GT,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_tuple_repeat1,
  [3807] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(349), 1,
      sym_id,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_field,
    STATE(111), 1,
      sym_comment,
  [3829] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(334), 1,
      sym_id,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
    STATE(146), 1,
      sym_arg,
  [3851] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_func_repeat1,
    STATE(113), 1,
      sym_comment,
  [3873] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym_comment,
      aux_sym_enum_repeat1,
  [3893] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(430), 1,
      sym_id,
    STATE(102), 1,
      sym__useName,
    STATE(115), 1,
      sym_comment,
    STATE(171), 1,
      sym__useNameList,
  [3915] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(334), 1,
      sym_id,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
    STATE(146), 1,
      sym_arg,
  [3937] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(434), 1,
      anon_sym_GT,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_tuple_repeat1,
    STATE(117), 1,
      sym_comment,
  [3959] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(118), 2,
      sym_comment,
      aux_sym_variant_repeat1,
  [3979] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(372), 1,
      sym_id,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_comment,
    STATE(133), 1,
      sym_case,
  [4001] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym__useNameList_repeat1,
    STATE(120), 1,
      sym_comment,
  [4023] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(121), 2,
      sym_comment,
      aux_sym_flags_repeat1,
  [4043] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(452), 1,
      anon_sym_GT,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(122), 2,
      sym_comment,
      aux_sym_tuple_repeat1,
  [4063] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(349), 1,
      sym_id,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_comment,
    STATE(141), 1,
      sym_field,
  [4085] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(124), 2,
      sym_comment,
      aux_sym_record_repeat1,
  [4105] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(334), 1,
      sym_id,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_arg,
    STATE(125), 1,
      sym_comment,
  [4127] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(126), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4144] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4161] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(470), 1,
      sym_id,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      sym_comment,
  [4180] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(129), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4197] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(430), 1,
      sym_id,
    STATE(130), 1,
      sym_comment,
    STATE(148), 1,
      sym__useName,
  [4216] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(131), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [4233] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(476), 1,
      sym_id,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_comment,
  [4252] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(133), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4269] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(334), 1,
      sym_id,
    STATE(134), 1,
      sym_comment,
    STATE(146), 1,
      sym_arg,
  [4288] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(480), 1,
      anon_sym_async,
    ACTIONS(482), 1,
      anon_sym_func,
    STATE(135), 1,
      sym_comment,
  [4307] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(136), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4324] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(372), 1,
      sym_id,
    STATE(133), 1,
      sym_case,
    STATE(137), 1,
      sym_comment,
  [4343] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(486), 1,
      sym_id,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_comment,
  [4362] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(139), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4379] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(349), 1,
      sym_id,
    STATE(140), 1,
      sym_comment,
    STATE(141), 1,
      sym_field,
  [4398] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(141), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4415] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(142), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4432] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(494), 1,
      sym_id,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_comment,
  [4451] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      sym_func,
    STATE(144), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token2,
      sym_id,
  [4468] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(486), 1,
      sym_id,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      sym_comment,
  [4487] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(146), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4504] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(470), 1,
      sym_id,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
  [4523] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(148), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4540] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(149), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4557] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_comment,
  [4573] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(508), 1,
      anon_sym_LT,
    STATE(151), 1,
      sym_comment,
  [4589] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_comment,
  [4605] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(512), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [4621] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(514), 1,
      anon_sym_func,
    STATE(154), 1,
      sym_comment,
  [4637] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_comment,
  [4653] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_comment,
  [4669] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_comment,
  [4685] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_comment,
  [4701] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(524), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
  [4717] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_comment,
  [4733] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(528), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
  [4749] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(530), 1,
      anon_sym_COLON,
    STATE(162), 1,
      sym_comment,
  [4765] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(532), 1,
      anon_sym_GT,
    STATE(163), 1,
      sym_comment,
  [4781] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(534), 1,
      anon_sym_LT,
    STATE(164), 1,
      sym_comment,
  [4797] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(470), 1,
      sym_id,
    STATE(165), 1,
      sym_comment,
  [4813] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_comment,
  [4829] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(538), 1,
      anon_sym_LT,
    STATE(167), 1,
      sym_comment,
  [4845] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(540), 1,
      sym_id,
    STATE(168), 1,
      sym_comment,
  [4861] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(542), 1,
      anon_sym_LT,
    STATE(169), 1,
      sym_comment,
  [4877] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(486), 1,
      sym_id,
    STATE(170), 1,
      sym_comment,
  [4893] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_comment,
  [4909] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(546), 1,
      anon_sym_from,
    STATE(172), 1,
      sym_comment,
  [4925] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(548), 1,
      anon_sym_LT,
    STATE(173), 1,
      sym_comment,
  [4941] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(550), 1,
      anon_sym_from,
    STATE(174), 1,
      sym_comment,
  [4957] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(552), 1,
      anon_sym_GT,
    STATE(175), 1,
      sym_comment,
  [4973] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(554), 1,
      anon_sym_LT,
    STATE(176), 1,
      sym_comment,
  [4989] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(556), 1,
      anon_sym_GT,
    STATE(177), 1,
      sym_comment,
  [5005] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(558), 1,
      anon_sym_GT,
    STATE(178), 1,
      sym_comment,
  [5021] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(560), 1,
      sym_id,
    STATE(179), 1,
      sym_comment,
  [5037] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      sym_comment,
  [5053] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_comment,
  [5069] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(566), 1,
      anon_sym_from,
    STATE(182), 1,
      sym_comment,
  [5085] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(568), 1,
      anon_sym_GT,
    STATE(183), 1,
      sym_comment,
  [5101] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      sym_comment,
  [5117] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(572), 1,
      sym_id,
    STATE(185), 1,
      sym_comment,
  [5133] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(574), 1,
      sym_id,
    STATE(186), 1,
      sym_comment,
  [5149] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(576), 1,
      sym_id,
    STATE(187), 1,
      sym_comment,
  [5165] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(578), 1,
      sym_id,
    STATE(188), 1,
      sym_comment,
  [5181] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(580), 1,
      sym_id,
    STATE(189), 1,
      sym_comment,
  [5197] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(582), 1,
      sym_id,
    STATE(190), 1,
      sym_comment,
  [5213] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(584), 1,
      sym_id,
    STATE(191), 1,
      sym_comment,
  [5229] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(586), 1,
      sym_id,
    STATE(192), 1,
      sym_comment,
  [5245] = 1,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 325,
  [SMALL_STATE(8)] = 390,
  [SMALL_STATE(9)] = 452,
  [SMALL_STATE(10)] = 514,
  [SMALL_STATE(11)] = 576,
  [SMALL_STATE(12)] = 638,
  [SMALL_STATE(13)] = 700,
  [SMALL_STATE(14)] = 762,
  [SMALL_STATE(15)] = 824,
  [SMALL_STATE(16)] = 886,
  [SMALL_STATE(17)] = 948,
  [SMALL_STATE(18)] = 1010,
  [SMALL_STATE(19)] = 1072,
  [SMALL_STATE(20)] = 1134,
  [SMALL_STATE(21)] = 1196,
  [SMALL_STATE(22)] = 1258,
  [SMALL_STATE(23)] = 1320,
  [SMALL_STATE(24)] = 1382,
  [SMALL_STATE(25)] = 1444,
  [SMALL_STATE(26)] = 1506,
  [SMALL_STATE(27)] = 1566,
  [SMALL_STATE(28)] = 1624,
  [SMALL_STATE(29)] = 1656,
  [SMALL_STATE(30)] = 1688,
  [SMALL_STATE(31)] = 1720,
  [SMALL_STATE(32)] = 1752,
  [SMALL_STATE(33)] = 1784,
  [SMALL_STATE(34)] = 1816,
  [SMALL_STATE(35)] = 1848,
  [SMALL_STATE(36)] = 1880,
  [SMALL_STATE(37)] = 1912,
  [SMALL_STATE(38)] = 1944,
  [SMALL_STATE(39)] = 1976,
  [SMALL_STATE(40)] = 2008,
  [SMALL_STATE(41)] = 2040,
  [SMALL_STATE(42)] = 2072,
  [SMALL_STATE(43)] = 2104,
  [SMALL_STATE(44)] = 2136,
  [SMALL_STATE(45)] = 2165,
  [SMALL_STATE(46)] = 2194,
  [SMALL_STATE(47)] = 2223,
  [SMALL_STATE(48)] = 2252,
  [SMALL_STATE(49)] = 2281,
  [SMALL_STATE(50)] = 2311,
  [SMALL_STATE(51)] = 2338,
  [SMALL_STATE(52)] = 2365,
  [SMALL_STATE(53)] = 2392,
  [SMALL_STATE(54)] = 2419,
  [SMALL_STATE(55)] = 2446,
  [SMALL_STATE(56)] = 2473,
  [SMALL_STATE(57)] = 2500,
  [SMALL_STATE(58)] = 2527,
  [SMALL_STATE(59)] = 2554,
  [SMALL_STATE(60)] = 2581,
  [SMALL_STATE(61)] = 2608,
  [SMALL_STATE(62)] = 2635,
  [SMALL_STATE(63)] = 2662,
  [SMALL_STATE(64)] = 2689,
  [SMALL_STATE(65)] = 2716,
  [SMALL_STATE(66)] = 2743,
  [SMALL_STATE(67)] = 2770,
  [SMALL_STATE(68)] = 2797,
  [SMALL_STATE(69)] = 2824,
  [SMALL_STATE(70)] = 2851,
  [SMALL_STATE(71)] = 2878,
  [SMALL_STATE(72)] = 2905,
  [SMALL_STATE(73)] = 2932,
  [SMALL_STATE(74)] = 2959,
  [SMALL_STATE(75)] = 2986,
  [SMALL_STATE(76)] = 3013,
  [SMALL_STATE(77)] = 3040,
  [SMALL_STATE(78)] = 3067,
  [SMALL_STATE(79)] = 3094,
  [SMALL_STATE(80)] = 3123,
  [SMALL_STATE(81)] = 3154,
  [SMALL_STATE(82)] = 3185,
  [SMALL_STATE(83)] = 3207,
  [SMALL_STATE(84)] = 3227,
  [SMALL_STATE(85)] = 3247,
  [SMALL_STATE(86)] = 3267,
  [SMALL_STATE(87)] = 3289,
  [SMALL_STATE(88)] = 3311,
  [SMALL_STATE(89)] = 3331,
  [SMALL_STATE(90)] = 3353,
  [SMALL_STATE(91)] = 3373,
  [SMALL_STATE(92)] = 3395,
  [SMALL_STATE(93)] = 3417,
  [SMALL_STATE(94)] = 3439,
  [SMALL_STATE(95)] = 3459,
  [SMALL_STATE(96)] = 3481,
  [SMALL_STATE(97)] = 3503,
  [SMALL_STATE(98)] = 3525,
  [SMALL_STATE(99)] = 3547,
  [SMALL_STATE(100)] = 3569,
  [SMALL_STATE(101)] = 3591,
  [SMALL_STATE(102)] = 3613,
  [SMALL_STATE(103)] = 3635,
  [SMALL_STATE(104)] = 3655,
  [SMALL_STATE(105)] = 3677,
  [SMALL_STATE(106)] = 3697,
  [SMALL_STATE(107)] = 3719,
  [SMALL_STATE(108)] = 3741,
  [SMALL_STATE(109)] = 3763,
  [SMALL_STATE(110)] = 3785,
  [SMALL_STATE(111)] = 3807,
  [SMALL_STATE(112)] = 3829,
  [SMALL_STATE(113)] = 3851,
  [SMALL_STATE(114)] = 3873,
  [SMALL_STATE(115)] = 3893,
  [SMALL_STATE(116)] = 3915,
  [SMALL_STATE(117)] = 3937,
  [SMALL_STATE(118)] = 3959,
  [SMALL_STATE(119)] = 3979,
  [SMALL_STATE(120)] = 4001,
  [SMALL_STATE(121)] = 4023,
  [SMALL_STATE(122)] = 4043,
  [SMALL_STATE(123)] = 4063,
  [SMALL_STATE(124)] = 4085,
  [SMALL_STATE(125)] = 4105,
  [SMALL_STATE(126)] = 4127,
  [SMALL_STATE(127)] = 4144,
  [SMALL_STATE(128)] = 4161,
  [SMALL_STATE(129)] = 4180,
  [SMALL_STATE(130)] = 4197,
  [SMALL_STATE(131)] = 4216,
  [SMALL_STATE(132)] = 4233,
  [SMALL_STATE(133)] = 4252,
  [SMALL_STATE(134)] = 4269,
  [SMALL_STATE(135)] = 4288,
  [SMALL_STATE(136)] = 4307,
  [SMALL_STATE(137)] = 4324,
  [SMALL_STATE(138)] = 4343,
  [SMALL_STATE(139)] = 4362,
  [SMALL_STATE(140)] = 4379,
  [SMALL_STATE(141)] = 4398,
  [SMALL_STATE(142)] = 4415,
  [SMALL_STATE(143)] = 4432,
  [SMALL_STATE(144)] = 4451,
  [SMALL_STATE(145)] = 4468,
  [SMALL_STATE(146)] = 4487,
  [SMALL_STATE(147)] = 4504,
  [SMALL_STATE(148)] = 4523,
  [SMALL_STATE(149)] = 4540,
  [SMALL_STATE(150)] = 4557,
  [SMALL_STATE(151)] = 4573,
  [SMALL_STATE(152)] = 4589,
  [SMALL_STATE(153)] = 4605,
  [SMALL_STATE(154)] = 4621,
  [SMALL_STATE(155)] = 4637,
  [SMALL_STATE(156)] = 4653,
  [SMALL_STATE(157)] = 4669,
  [SMALL_STATE(158)] = 4685,
  [SMALL_STATE(159)] = 4701,
  [SMALL_STATE(160)] = 4717,
  [SMALL_STATE(161)] = 4733,
  [SMALL_STATE(162)] = 4749,
  [SMALL_STATE(163)] = 4765,
  [SMALL_STATE(164)] = 4781,
  [SMALL_STATE(165)] = 4797,
  [SMALL_STATE(166)] = 4813,
  [SMALL_STATE(167)] = 4829,
  [SMALL_STATE(168)] = 4845,
  [SMALL_STATE(169)] = 4861,
  [SMALL_STATE(170)] = 4877,
  [SMALL_STATE(171)] = 4893,
  [SMALL_STATE(172)] = 4909,
  [SMALL_STATE(173)] = 4925,
  [SMALL_STATE(174)] = 4941,
  [SMALL_STATE(175)] = 4957,
  [SMALL_STATE(176)] = 4973,
  [SMALL_STATE(177)] = 4989,
  [SMALL_STATE(178)] = 5005,
  [SMALL_STATE(179)] = 5021,
  [SMALL_STATE(180)] = 5037,
  [SMALL_STATE(181)] = 5053,
  [SMALL_STATE(182)] = 5069,
  [SMALL_STATE(183)] = 5085,
  [SMALL_STATE(184)] = 5101,
  [SMALL_STATE(185)] = 5117,
  [SMALL_STATE(186)] = 5133,
  [SMALL_STATE(187)] = 5149,
  [SMALL_STATE(188)] = 5165,
  [SMALL_STATE(189)] = 5181,
  [SMALL_STATE(190)] = 5197,
  [SMALL_STATE(191)] = 5213,
  [SMALL_STATE(192)] = 5229,
  [SMALL_STATE(193)] = 5245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(159),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(92),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(191),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(190),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(189),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(188),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(187),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(186),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(185),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected, 6, .production_id = 21),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expected, 6, .production_id = 21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stream, 6, .production_id = 22),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stream, 6, .production_id = 22),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 9, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 9, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 11, .production_id = 24),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 11, .production_id = 24),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 10, .production_id = 23),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 10, .production_id = 23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 17),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 17),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 19),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 19),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 9, .production_id = 20),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 9, .production_id = 20),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource, 2, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 5, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 7, .production_id = 12),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 7, .production_id = 12),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 6, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 6, .production_id = 12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 6, .production_id = 8),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 6, .production_id = 8),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 6, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 6, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 9),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6, .production_id = 9),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 15),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6, .production_id = 15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 6, .production_id = 9),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 6, .production_id = 9),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 7, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 7, .production_id = 15),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7, .production_id = 15),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 7, .production_id = 15),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 7, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 7, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource, 4, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 7, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource, 5, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 5, .production_id = 9),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 5, .production_id = 9),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 4, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 4, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 9),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 4, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 6, .production_id = 15),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 6, .production_id = 15),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 5, .production_id = 8),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 5, .production_id = 8),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 4, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 4, .production_id = 1),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(159),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(144),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_item, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_item, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useName, 1, .production_id = 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__useNameList_repeat1, 2, .production_id = 5), SHIFT_REPEAT(130),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__useNameList_repeat1, 2, .production_id = 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_repeat1, 2, .production_id = 16), SHIFT_REPEAT(19),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_repeat1, 2, .production_id = 16),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNameList, 1, .production_id = 3),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(134),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_item, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_item, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 16), SHIFT_REPEAT(170),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 16),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(137),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNameList, 2, .production_id = 5),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 13), SHIFT_REPEAT(165),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(14),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(140),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3, .production_id = 10),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2, .production_id = 11),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, .production_id = 14),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4, .production_id = 18),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_repeat1, 2, .production_id = 14),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__useNameList_repeat1, 2, .production_id = 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useName, 3, .production_id = 7),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNames, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNames, 3, .production_id = 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [570] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wit(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
