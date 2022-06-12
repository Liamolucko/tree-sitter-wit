#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_stream = 27,
  anon_sym_use = 28,
  anon_sym_from = 29,
  anon_sym_STAR = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  anon_sym_as = 33,
  anon_sym_type = 34,
  anon_sym_EQ = 35,
  anon_sym_record = 36,
  anon_sym_COLON = 37,
  anon_sym_flags = 38,
  anon_sym_variant = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_enum = 42,
  anon_sym_union = 43,
  anon_sym_async = 44,
  anon_sym_func = 45,
  anon_sym_DASH_GT = 46,
  anon_sym_resource = 47,
  anon_sym_static = 48,
  sym_file = 49,
  sym_comment = 50,
  sym_ty = 51,
  sym_item = 52,
  sym_option = 53,
  sym_expected = 54,
  sym_tuple = 55,
  sym_list = 56,
  sym_stream = 57,
  sym_use = 58,
  sym__useNames = 59,
  sym__useNameList = 60,
  sym__useName = 61,
  sym_alias = 62,
  sym_record = 63,
  sym__field = 64,
  sym_flags = 65,
  sym_variant = 66,
  sym__case = 67,
  sym_enum = 68,
  sym_union = 69,
  sym_func = 70,
  sym__arg = 71,
  sym_resource = 72,
  sym__resource_item = 73,
  aux_sym_file_repeat1 = 74,
  aux_sym_tuple_repeat1 = 75,
  aux_sym__useNameList_repeat1 = 76,
  aux_sym_record_repeat1 = 77,
  aux_sym_flags_repeat1 = 78,
  aux_sym_variant_repeat1 = 79,
  aux_sym_func_repeat1 = 80,
  aux_sym_resource_repeat1 = 81,
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
  [sym_stream] = "stream",
  [sym_use] = "use",
  [sym__useNames] = "_useNames",
  [sym__useNameList] = "_useNameList",
  [sym__useName] = "_useName",
  [sym_alias] = "alias",
  [sym_record] = "record",
  [sym__field] = "_field",
  [sym_flags] = "flags",
  [sym_variant] = "variant",
  [sym__case] = "_case",
  [sym_enum] = "enum",
  [sym_union] = "union",
  [sym_func] = "func",
  [sym__arg] = "_arg",
  [sym_resource] = "resource",
  [sym__resource_item] = "_resource_item",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym__useNameList_repeat1] = "_useNameList_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_flags_repeat1] = "flags_repeat1",
  [aux_sym_variant_repeat1] = "variant_repeat1",
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
  [sym_stream] = sym_stream,
  [sym_use] = sym_use,
  [sym__useNames] = sym__useNames,
  [sym__useNameList] = sym__useNameList,
  [sym__useName] = sym__useName,
  [sym_alias] = sym_alias,
  [sym_record] = sym_record,
  [sym__field] = sym__field,
  [sym_flags] = sym_flags,
  [sym_variant] = sym_variant,
  [sym__case] = sym__case,
  [sym_enum] = sym_enum,
  [sym_union] = sym_union,
  [sym_func] = sym_func,
  [sym__arg] = sym__arg,
  [sym_resource] = sym_resource,
  [sym__resource_item] = sym__resource_item,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym__useNameList_repeat1] = aux_sym__useNameList_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_flags_repeat1] = aux_sym_flags_repeat1,
  [aux_sym_variant_repeat1] = aux_sym_variant_repeat1,
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
  [sym__field] = {
    .visible = false,
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
  [sym__case] = {
    .visible = false,
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
  [sym__arg] = {
    .visible = false,
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
  [aux_sym_func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 92:
      if (lookahead == '3') ADVANCE(104);
      if (lookahead == '6') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == '4') ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_handle);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_expected);
      END_STATE();
    case 120:
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
  [180] = {(TSStateId)(-1)},
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
    [sym_file] = STATE(170),
    [sym_comment] = STATE(1),
    [sym_item] = STATE(53),
    [sym_use] = STATE(72),
    [sym_alias] = STATE(72),
    [sym_record] = STATE(72),
    [sym_flags] = STATE(72),
    [sym_variant] = STATE(72),
    [sym_enum] = STATE(72),
    [sym_union] = STATE(72),
    [sym_func] = STATE(72),
    [sym_resource] = STATE(72),
    [aux_sym_file_repeat1] = STATE(25),
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
  [0] = 14,
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
      anon_sym_stream,
    STATE(2), 1,
      sym_comment,
    STATE(115), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [61] = 14,
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
      anon_sym_stream,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(79), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [122] = 14,
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
      anon_sym_stream,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(90), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [183] = 14,
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
      anon_sym_stream,
    ACTIONS(49), 1,
      anon_sym_GT,
    STATE(5), 1,
      sym_comment,
    STATE(90), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [244] = 14,
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
      anon_sym_stream,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(90), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [305] = 14,
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
      anon_sym_stream,
    ACTIONS(53), 1,
      anon_sym_GT,
    STATE(7), 1,
      sym_comment,
    STATE(90), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [366] = 13,
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
      anon_sym_stream,
    STATE(8), 1,
      sym_comment,
    STATE(154), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [424] = 13,
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
      anon_sym_stream,
    STATE(9), 1,
      sym_comment,
    STATE(128), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [482] = 13,
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
      anon_sym_stream,
    STATE(10), 1,
      sym_comment,
    STATE(45), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [540] = 13,
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
      anon_sym_stream,
    STATE(11), 1,
      sym_comment,
    STATE(147), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [598] = 13,
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
      anon_sym_stream,
    STATE(12), 1,
      sym_comment,
    STATE(42), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [656] = 13,
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
      anon_sym_stream,
    STATE(13), 1,
      sym_comment,
    STATE(44), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [714] = 13,
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
      anon_sym_stream,
    STATE(14), 1,
      sym_comment,
    STATE(150), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [772] = 13,
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
      anon_sym_stream,
    STATE(15), 1,
      sym_comment,
    STATE(41), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [830] = 13,
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
      anon_sym_stream,
    STATE(16), 1,
      sym_comment,
    STATE(43), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [888] = 13,
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
      anon_sym_stream,
    STATE(17), 1,
      sym_comment,
    STATE(56), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [946] = 13,
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
      anon_sym_stream,
    STATE(18), 1,
      sym_comment,
    STATE(121), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [1004] = 13,
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
      anon_sym_stream,
    STATE(19), 1,
      sym_comment,
    STATE(90), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [1062] = 13,
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
      anon_sym_stream,
    STATE(20), 1,
      sym_comment,
    STATE(168), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [1120] = 13,
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
      anon_sym_stream,
    STATE(21), 1,
      sym_comment,
    STATE(171), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [1178] = 13,
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
      anon_sym_stream,
    STATE(22), 1,
      sym_comment,
    STATE(145), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [1236] = 13,
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
      anon_sym_stream,
    STATE(23), 1,
      sym_comment,
    STATE(140), 1,
      sym_ty,
    STATE(31), 5,
      sym_option,
      sym_expected,
      sym_tuple,
      sym_list,
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
  [1294] = 16,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_id,
    ACTIONS(60), 1,
      anon_sym_use,
    ACTIONS(63), 1,
      anon_sym_type,
    ACTIONS(66), 1,
      anon_sym_record,
    ACTIONS(69), 1,
      anon_sym_flags,
    ACTIONS(72), 1,
      anon_sym_variant,
    ACTIONS(75), 1,
      anon_sym_enum,
    ACTIONS(78), 1,
      anon_sym_union,
    ACTIONS(81), 1,
      anon_sym_resource,
    STATE(53), 1,
      sym_item,
    STATE(24), 2,
      sym_comment,
      aux_sym_file_repeat1,
    STATE(72), 9,
      sym_use,
      sym_alias,
      sym_record,
      sym_flags,
      sym_variant,
      sym_enum,
      sym_union,
      sym_func,
      sym_resource,
  [1352] = 17,
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
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_file_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(53), 1,
      sym_item,
    STATE(72), 9,
      sym_use,
      sym_alias,
      sym_record,
      sym_flags,
      sym_variant,
      sym_enum,
      sym_union,
      sym_func,
      sym_resource,
  [1412] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(88), 10,
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
  [1444] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(27), 1,
      sym_comment,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(92), 10,
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
  [1476] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(28), 1,
      sym_comment,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(96), 10,
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
  [1508] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(29), 1,
      sym_comment,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(100), 10,
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
  [1540] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(30), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(104), 10,
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
  [1572] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(108), 10,
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
  [1604] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(112), 10,
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
  [1636] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(116), 10,
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
  [1668] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(120), 10,
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
  [1700] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(124), 10,
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
  [1732] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(128), 10,
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
  [1764] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(136), 1,
      anon_sym_DASH_GT,
    STATE(37), 1,
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
  [1796] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(142), 1,
      anon_sym_DASH_GT,
    STATE(38), 1,
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
  [1828] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(148), 1,
      anon_sym_DASH_GT,
    STATE(39), 1,
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
  [1860] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(154), 1,
      anon_sym_DASH_GT,
    STATE(40), 1,
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
  [1892] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(41), 1,
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
  [1921] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(42), 1,
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
  [1950] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(43), 1,
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
  [1979] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(44), 1,
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
  [2008] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(162), 10,
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
  [2037] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(166), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2067] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
    ACTIONS(172), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2094] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
    ACTIONS(176), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2121] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_comment,
    ACTIONS(180), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2148] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
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
  [2175] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_comment,
    ACTIONS(188), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2202] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_comment,
    ACTIONS(192), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2229] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
    ACTIONS(196), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2256] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
    ACTIONS(200), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2283] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_comment,
    ACTIONS(204), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2310] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_comment,
    ACTIONS(208), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2337] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
    ACTIONS(212), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2364] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_comment,
    ACTIONS(216), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2391] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
    ACTIONS(220), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2418] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_comment,
    ACTIONS(224), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2445] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_comment,
    ACTIONS(228), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2472] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
    ACTIONS(232), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2499] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_comment,
    ACTIONS(236), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2526] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
    ACTIONS(240), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2553] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_comment,
    ACTIONS(244), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2580] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
    ACTIONS(248), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2607] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_comment,
    ACTIONS(252), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2634] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_comment,
    ACTIONS(256), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2661] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_comment,
    ACTIONS(260), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2688] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_comment,
    ACTIONS(264), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2715] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_comment,
    ACTIONS(268), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2742] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_comment,
    ACTIONS(272), 9,
      sym_id,
      anon_sym_use,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_resource,
  [2769] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_static,
    STATE(73), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_resource_repeat1,
    STATE(81), 1,
      sym_func,
    STATE(82), 1,
      sym__resource_item,
  [2800] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(278), 1,
      sym_id,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_static,
    STATE(81), 1,
      sym_func,
    STATE(82), 1,
      sym__resource_item,
    STATE(74), 2,
      sym_comment,
      aux_sym_resource_repeat1,
  [2829] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(276), 1,
      anon_sym_static,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_resource_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(81), 1,
      sym_func,
    STATE(82), 1,
      sym__resource_item,
  [2860] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(288), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym_comment,
      aux_sym_tuple_repeat1,
  [2881] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_record_repeat1,
  [2903] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_flags_repeat1,
  [2925] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_tuple_repeat1,
  [2947] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_func_repeat1,
  [2969] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(309), 2,
      sym_id,
      anon_sym_static,
  [2989] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym_id,
      anon_sym_static,
  [3009] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(317), 1,
      sym_id,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(107), 1,
      sym__arg,
  [3031] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(321), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(163), 1,
      sym__useNames,
  [3053] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_func_repeat1,
  [3075] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      sym_id,
    STATE(86), 1,
      sym_comment,
    STATE(122), 1,
      sym__arg,
  [3097] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(327), 1,
      sym_id,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(93), 1,
      sym__case,
  [3119] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(88), 2,
      sym_comment,
      aux_sym__useNameList_repeat1,
  [3139] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      sym_id,
    STATE(89), 1,
      sym_comment,
    STATE(120), 1,
      sym__field,
  [3161] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(90), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3179] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(317), 1,
      sym_id,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym__arg,
    STATE(91), 1,
      sym_comment,
  [3201] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_flags_repeat1,
  [3223] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_variant_repeat1,
  [3245] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(327), 1,
      sym_id,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_comment,
    STATE(129), 1,
      sym__case,
  [3267] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3287] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_variant_repeat1,
  [3309] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(97), 2,
      sym_comment,
      aux_sym_variant_repeat1,
  [3329] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(98), 2,
      sym_comment,
      aux_sym_record_repeat1,
  [3349] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_flags_repeat1,
  [3371] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_record_repeat1,
    STATE(100), 1,
      sym_comment,
  [3393] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(327), 1,
      sym_id,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(129), 1,
      sym__case,
  [3415] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_tuple_repeat1,
    STATE(102), 1,
      sym_comment,
  [3437] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(378), 2,
      sym_id,
      anon_sym_static,
  [3457] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(317), 1,
      sym_id,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_comment,
    STATE(122), 1,
      sym__arg,
  [3479] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(384), 1,
      sym_id,
    STATE(105), 1,
      sym_comment,
    STATE(114), 1,
      sym__useName,
    STATE(148), 1,
      sym__useNameList,
  [3501] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(336), 1,
      sym_id,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym__field,
    STATE(106), 1,
      sym_comment,
  [3523] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_func_repeat1,
    STATE(107), 1,
      sym_comment,
  [3545] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_flags_repeat1,
    STATE(108), 1,
      sym_comment,
  [3567] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(109), 2,
      sym_comment,
      aux_sym_flags_repeat1,
  [3587] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(317), 1,
      sym_id,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
    STATE(122), 1,
      sym__arg,
  [3609] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_func_repeat1,
  [3631] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_GT,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_tuple_repeat1,
    STATE(112), 1,
      sym_comment,
  [3653] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(405), 1,
      anon_sym_as,
    STATE(113), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3673] = 7,
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
    STATE(114), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym__useNameList_repeat1,
  [3695] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(411), 1,
      anon_sym_GT,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_tuple_repeat1,
    STATE(115), 1,
      sym_comment,
  [3717] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(116), 2,
      sym_comment,
      aux_sym_func_repeat1,
  [3737] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym__useNameList_repeat1,
    STATE(117), 1,
      sym_comment,
  [3759] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(336), 1,
      sym_id,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_comment,
    STATE(120), 1,
      sym__field,
  [3781] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(119), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3798] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(120), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3815] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(121), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3832] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(122), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3849] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(123), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3866] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(384), 1,
      sym_id,
    STATE(124), 1,
      sym_comment,
    STATE(137), 1,
      sym__useName,
  [3885] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(428), 1,
      sym_id,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_comment,
  [3904] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(103), 1,
      sym_func,
    STATE(126), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token2,
      sym_id,
  [3921] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(336), 1,
      sym_id,
    STATE(120), 1,
      sym__field,
    STATE(127), 1,
      sym_comment,
  [3940] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3957] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(129), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3974] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(327), 1,
      sym_id,
    STATE(129), 1,
      sym__case,
    STATE(130), 1,
      sym_comment,
  [3993] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(317), 1,
      sym_id,
    STATE(122), 1,
      sym__arg,
    STATE(131), 1,
      sym_comment,
  [4012] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(428), 1,
      sym_id,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_comment,
  [4031] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      sym_id,
    STATE(133), 1,
      sym_comment,
  [4050] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(436), 1,
      anon_sym_async,
    ACTIONS(438), 1,
      anon_sym_func,
    STATE(134), 1,
      sym_comment,
  [4069] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(440), 1,
      sym_id,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_comment,
  [4088] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      sym_id,
    STATE(136), 1,
      sym_comment,
  [4107] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(137), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4124] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(444), 1,
      sym_id,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_comment,
  [4143] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(139), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4160] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
  [4176] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_comment,
  [4192] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_comment,
  [4208] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(143), 1,
      sym_comment,
  [4224] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(458), 1,
      anon_sym_from,
    STATE(144), 1,
      sym_comment,
  [4240] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_comment,
  [4256] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(462), 1,
      sym_id,
    STATE(146), 1,
      sym_comment,
  [4272] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(464), 1,
      anon_sym_GT,
    STATE(147), 1,
      sym_comment,
  [4288] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_comment,
  [4304] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(468), 1,
      sym_id,
    STATE(149), 1,
      sym_comment,
  [4320] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_comment,
  [4336] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_comment,
  [4352] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      anon_sym_func,
    STATE(152), 1,
      sym_comment,
  [4368] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_comment,
  [4384] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(478), 1,
      anon_sym_GT,
    STATE(154), 1,
      sym_comment,
  [4400] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_comment,
  [4416] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(428), 1,
      sym_id,
    STATE(156), 1,
      sym_comment,
  [4432] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(482), 1,
      anon_sym_LT,
    STATE(157), 1,
      sym_comment,
  [4448] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_comment,
  [4464] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(486), 1,
      anon_sym_LT,
    STATE(159), 1,
      sym_comment,
  [4480] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_comment,
  [4496] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(490), 1,
      sym_id,
    STATE(161), 1,
      sym_comment,
  [4512] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(492), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_comment,
  [4528] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(494), 1,
      anon_sym_from,
    STATE(163), 1,
      sym_comment,
  [4544] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(496), 1,
      anon_sym_LT,
    STATE(164), 1,
      sym_comment,
  [4560] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(498), 1,
      anon_sym_from,
    STATE(165), 1,
      sym_comment,
  [4576] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(500), 1,
      anon_sym_LT,
    STATE(166), 1,
      sym_comment,
  [4592] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(502), 1,
      anon_sym_LT,
    STATE(167), 1,
      sym_comment,
  [4608] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(504), 1,
      anon_sym_GT,
    STATE(168), 1,
      sym_comment,
  [4624] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(506), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [4640] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_comment,
  [4656] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(510), 1,
      anon_sym_GT,
    STATE(171), 1,
      sym_comment,
  [4672] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(512), 1,
      sym_id,
    STATE(172), 1,
      sym_comment,
  [4688] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(514), 1,
      sym_id,
    STATE(173), 1,
      sym_comment,
  [4704] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(516), 1,
      sym_id,
    STATE(174), 1,
      sym_comment,
  [4720] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(518), 1,
      sym_id,
    STATE(175), 1,
      sym_comment,
  [4736] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(520), 1,
      sym_id,
    STATE(176), 1,
      sym_comment,
  [4752] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(522), 1,
      sym_id,
    STATE(177), 1,
      sym_comment,
  [4768] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(524), 1,
      sym_id,
    STATE(178), 1,
      sym_comment,
  [4784] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(526), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [4800] = 1,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 305,
  [SMALL_STATE(8)] = 366,
  [SMALL_STATE(9)] = 424,
  [SMALL_STATE(10)] = 482,
  [SMALL_STATE(11)] = 540,
  [SMALL_STATE(12)] = 598,
  [SMALL_STATE(13)] = 656,
  [SMALL_STATE(14)] = 714,
  [SMALL_STATE(15)] = 772,
  [SMALL_STATE(16)] = 830,
  [SMALL_STATE(17)] = 888,
  [SMALL_STATE(18)] = 946,
  [SMALL_STATE(19)] = 1004,
  [SMALL_STATE(20)] = 1062,
  [SMALL_STATE(21)] = 1120,
  [SMALL_STATE(22)] = 1178,
  [SMALL_STATE(23)] = 1236,
  [SMALL_STATE(24)] = 1294,
  [SMALL_STATE(25)] = 1352,
  [SMALL_STATE(26)] = 1412,
  [SMALL_STATE(27)] = 1444,
  [SMALL_STATE(28)] = 1476,
  [SMALL_STATE(29)] = 1508,
  [SMALL_STATE(30)] = 1540,
  [SMALL_STATE(31)] = 1572,
  [SMALL_STATE(32)] = 1604,
  [SMALL_STATE(33)] = 1636,
  [SMALL_STATE(34)] = 1668,
  [SMALL_STATE(35)] = 1700,
  [SMALL_STATE(36)] = 1732,
  [SMALL_STATE(37)] = 1764,
  [SMALL_STATE(38)] = 1796,
  [SMALL_STATE(39)] = 1828,
  [SMALL_STATE(40)] = 1860,
  [SMALL_STATE(41)] = 1892,
  [SMALL_STATE(42)] = 1921,
  [SMALL_STATE(43)] = 1950,
  [SMALL_STATE(44)] = 1979,
  [SMALL_STATE(45)] = 2008,
  [SMALL_STATE(46)] = 2037,
  [SMALL_STATE(47)] = 2067,
  [SMALL_STATE(48)] = 2094,
  [SMALL_STATE(49)] = 2121,
  [SMALL_STATE(50)] = 2148,
  [SMALL_STATE(51)] = 2175,
  [SMALL_STATE(52)] = 2202,
  [SMALL_STATE(53)] = 2229,
  [SMALL_STATE(54)] = 2256,
  [SMALL_STATE(55)] = 2283,
  [SMALL_STATE(56)] = 2310,
  [SMALL_STATE(57)] = 2337,
  [SMALL_STATE(58)] = 2364,
  [SMALL_STATE(59)] = 2391,
  [SMALL_STATE(60)] = 2418,
  [SMALL_STATE(61)] = 2445,
  [SMALL_STATE(62)] = 2472,
  [SMALL_STATE(63)] = 2499,
  [SMALL_STATE(64)] = 2526,
  [SMALL_STATE(65)] = 2553,
  [SMALL_STATE(66)] = 2580,
  [SMALL_STATE(67)] = 2607,
  [SMALL_STATE(68)] = 2634,
  [SMALL_STATE(69)] = 2661,
  [SMALL_STATE(70)] = 2688,
  [SMALL_STATE(71)] = 2715,
  [SMALL_STATE(72)] = 2742,
  [SMALL_STATE(73)] = 2769,
  [SMALL_STATE(74)] = 2800,
  [SMALL_STATE(75)] = 2829,
  [SMALL_STATE(76)] = 2860,
  [SMALL_STATE(77)] = 2881,
  [SMALL_STATE(78)] = 2903,
  [SMALL_STATE(79)] = 2925,
  [SMALL_STATE(80)] = 2947,
  [SMALL_STATE(81)] = 2969,
  [SMALL_STATE(82)] = 2989,
  [SMALL_STATE(83)] = 3009,
  [SMALL_STATE(84)] = 3031,
  [SMALL_STATE(85)] = 3053,
  [SMALL_STATE(86)] = 3075,
  [SMALL_STATE(87)] = 3097,
  [SMALL_STATE(88)] = 3119,
  [SMALL_STATE(89)] = 3139,
  [SMALL_STATE(90)] = 3161,
  [SMALL_STATE(91)] = 3179,
  [SMALL_STATE(92)] = 3201,
  [SMALL_STATE(93)] = 3223,
  [SMALL_STATE(94)] = 3245,
  [SMALL_STATE(95)] = 3267,
  [SMALL_STATE(96)] = 3287,
  [SMALL_STATE(97)] = 3309,
  [SMALL_STATE(98)] = 3329,
  [SMALL_STATE(99)] = 3349,
  [SMALL_STATE(100)] = 3371,
  [SMALL_STATE(101)] = 3393,
  [SMALL_STATE(102)] = 3415,
  [SMALL_STATE(103)] = 3437,
  [SMALL_STATE(104)] = 3457,
  [SMALL_STATE(105)] = 3479,
  [SMALL_STATE(106)] = 3501,
  [SMALL_STATE(107)] = 3523,
  [SMALL_STATE(108)] = 3545,
  [SMALL_STATE(109)] = 3567,
  [SMALL_STATE(110)] = 3587,
  [SMALL_STATE(111)] = 3609,
  [SMALL_STATE(112)] = 3631,
  [SMALL_STATE(113)] = 3653,
  [SMALL_STATE(114)] = 3673,
  [SMALL_STATE(115)] = 3695,
  [SMALL_STATE(116)] = 3717,
  [SMALL_STATE(117)] = 3737,
  [SMALL_STATE(118)] = 3759,
  [SMALL_STATE(119)] = 3781,
  [SMALL_STATE(120)] = 3798,
  [SMALL_STATE(121)] = 3815,
  [SMALL_STATE(122)] = 3832,
  [SMALL_STATE(123)] = 3849,
  [SMALL_STATE(124)] = 3866,
  [SMALL_STATE(125)] = 3885,
  [SMALL_STATE(126)] = 3904,
  [SMALL_STATE(127)] = 3921,
  [SMALL_STATE(128)] = 3940,
  [SMALL_STATE(129)] = 3957,
  [SMALL_STATE(130)] = 3974,
  [SMALL_STATE(131)] = 3993,
  [SMALL_STATE(132)] = 4012,
  [SMALL_STATE(133)] = 4031,
  [SMALL_STATE(134)] = 4050,
  [SMALL_STATE(135)] = 4069,
  [SMALL_STATE(136)] = 4088,
  [SMALL_STATE(137)] = 4107,
  [SMALL_STATE(138)] = 4124,
  [SMALL_STATE(139)] = 4143,
  [SMALL_STATE(140)] = 4160,
  [SMALL_STATE(141)] = 4176,
  [SMALL_STATE(142)] = 4192,
  [SMALL_STATE(143)] = 4208,
  [SMALL_STATE(144)] = 4224,
  [SMALL_STATE(145)] = 4240,
  [SMALL_STATE(146)] = 4256,
  [SMALL_STATE(147)] = 4272,
  [SMALL_STATE(148)] = 4288,
  [SMALL_STATE(149)] = 4304,
  [SMALL_STATE(150)] = 4320,
  [SMALL_STATE(151)] = 4336,
  [SMALL_STATE(152)] = 4352,
  [SMALL_STATE(153)] = 4368,
  [SMALL_STATE(154)] = 4384,
  [SMALL_STATE(155)] = 4400,
  [SMALL_STATE(156)] = 4416,
  [SMALL_STATE(157)] = 4432,
  [SMALL_STATE(158)] = 4448,
  [SMALL_STATE(159)] = 4464,
  [SMALL_STATE(160)] = 4480,
  [SMALL_STATE(161)] = 4496,
  [SMALL_STATE(162)] = 4512,
  [SMALL_STATE(163)] = 4528,
  [SMALL_STATE(164)] = 4544,
  [SMALL_STATE(165)] = 4560,
  [SMALL_STATE(166)] = 4576,
  [SMALL_STATE(167)] = 4592,
  [SMALL_STATE(168)] = 4608,
  [SMALL_STATE(169)] = 4624,
  [SMALL_STATE(170)] = 4640,
  [SMALL_STATE(171)] = 4656,
  [SMALL_STATE(172)] = 4672,
  [SMALL_STATE(173)] = 4688,
  [SMALL_STATE(174)] = 4704,
  [SMALL_STATE(175)] = 4720,
  [SMALL_STATE(176)] = 4736,
  [SMALL_STATE(177)] = 4752,
  [SMALL_STATE(178)] = 4768,
  [SMALL_STATE(179)] = 4784,
  [SMALL_STATE(180)] = 4800,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(179),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(84),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(178),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(177),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(176),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(175),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(174),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(173),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(172),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 6),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stream, 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stream, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expected, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 9),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 9),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 10),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 11),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 11),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 6),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags, 7),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags, 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 7),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union, 7),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(179),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(126),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(19),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_item, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_item, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__useNameList_repeat1, 2), SHIFT_REPEAT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__useNameList_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(130),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(127),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_item, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_item, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2), SHIFT_REPEAT(156),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useName, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNameList, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(131),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNameList, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useName, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNames, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__useNames, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [508] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
