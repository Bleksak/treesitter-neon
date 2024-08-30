#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DASH = 7,
  sym_identifier = 8,
  sym_identifier_lvalue = 9,
  aux_sym_string_token1 = 10,
  aux_sym_string_token2 = 11,
  aux_sym_string_token3 = 12,
  aux_sym_string_token4 = 13,
  aux_sym_string_token5 = 14,
  sym_octal_number = 15,
  sym_hex_number = 16,
  sym_exponential_number = 17,
  aux_sym_number_token1 = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_POUND = 21,
  sym_unquoted_string = 22,
  sym_indent = 23,
  sym_dedent = 24,
  sym_newline = 25,
  sym_document = 26,
  sym_property = 27,
  sym_lvalue = 28,
  sym_rvalue = 29,
  sym_entity = 30,
  sym_param_list = 31,
  sym_parameter = 32,
  sym_array = 33,
  sym_list = 34,
  sym_list_item = 35,
  sym_string = 36,
  sym_number = 37,
  sym_boolean = 38,
  sym_comment = 39,
  aux_sym_document_repeat1 = 40,
  aux_sym_param_list_repeat1 = 41,
  aux_sym_array_repeat1 = 42,
  aux_sym_list_repeat1 = 43,
  aux_sym_string_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [sym_identifier] = "identifier",
  [sym_identifier_lvalue] = "identifier_lvalue",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym_string_token4] = "string_token4",
  [aux_sym_string_token5] = "string_token5",
  [sym_octal_number] = "octal_number",
  [sym_hex_number] = "hex_number",
  [sym_exponential_number] = "exponential_number",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_POUND] = "#",
  [sym_unquoted_string] = "unquoted_string",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_newline] = "newline",
  [sym_document] = "document",
  [sym_property] = "property",
  [sym_lvalue] = "lvalue",
  [sym_rvalue] = "rvalue",
  [sym_entity] = "entity",
  [sym_param_list] = "param_list",
  [sym_parameter] = "parameter",
  [sym_array] = "array",
  [sym_list] = "list",
  [sym_list_item] = "list_item",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_identifier] = sym_identifier,
  [sym_identifier_lvalue] = sym_identifier_lvalue,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [aux_sym_string_token5] = aux_sym_string_token5,
  [sym_octal_number] = sym_octal_number,
  [sym_hex_number] = sym_hex_number,
  [sym_exponential_number] = sym_exponential_number,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_newline] = sym_newline,
  [sym_document] = sym_document,
  [sym_property] = sym_property,
  [sym_lvalue] = sym_lvalue,
  [sym_rvalue] = sym_rvalue,
  [sym_entity] = sym_entity,
  [sym_param_list] = sym_param_list,
  [sym_parameter] = sym_parameter,
  [sym_array] = sym_array,
  [sym_list] = sym_list,
  [sym_list_item] = sym_list_item,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_lvalue] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_octal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_exponential_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_rvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 5,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 19,
  [23] = 18,
  [24] = 19,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 29,
  [47] = 44,
  [48] = 35,
  [49] = 33,
  [50] = 28,
  [51] = 30,
  [52] = 27,
  [53] = 26,
  [54] = 31,
  [55] = 39,
  [56] = 36,
  [57] = 41,
  [58] = 32,
  [59] = 34,
  [60] = 38,
  [61] = 40,
  [62] = 37,
  [63] = 42,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 68,
  [71] = 66,
  [72] = 64,
  [73] = 65,
  [74] = 66,
  [75] = 68,
  [76] = 65,
  [77] = 64,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 44,
  [82] = 82,
  [83] = 43,
  [84] = 79,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 87,
  [90] = 86,
  [91] = 91,
  [92] = 87,
  [93] = 29,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 86,
  [98] = 28,
  [99] = 37,
  [100] = 26,
  [101] = 101,
  [102] = 32,
  [103] = 30,
  [104] = 104,
  [105] = 105,
  [106] = 34,
  [107] = 27,
  [108] = 31,
  [109] = 36,
  [110] = 35,
  [111] = 111,
  [112] = 112,
  [113] = 33,
  [114] = 38,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 118,
  [122] = 115,
  [123] = 123,
  [124] = 119,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '*'
      ? (c < '%'
        ? c == ' '
        : c <= '%')
      : (c <= '*' || c == '.'))
    : (c <= ':' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'b' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '0'
    ? (c < '*'
      ? (c < '%'
        ? c == ' '
        : c <= '%')
      : (c <= '*' || c == '.'))
    : (c <= ':' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '%'
        ? c == ' '
        : c <= '%')
      : (c <= '*' || c == '.'))
    : (c <= ':' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < '8'
    ? (c < '*'
      ? (c < '%'
        ? c == ' '
        : c <= '%')
      : (c <= '*' || c == '.'))
    : (c <= ':' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '%'
        ? c == ' '
        : c <= '%')
      : (c <= '*' || c == '.'))
    : (c <= ':' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'g' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 't') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\'') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '-') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ']') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == ' ' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == ' ' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(30);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(29);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_exponential_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15, .external_lex_state = 4},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15, .external_lex_state = 4},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15, .external_lex_state = 4},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15, .external_lex_state = 4},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15, .external_lex_state = 4},
  [44] = {.lex_state = 15, .external_lex_state = 4},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15, .external_lex_state = 4},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15, .external_lex_state = 4},
  [49] = {.lex_state = 15, .external_lex_state = 4},
  [50] = {.lex_state = 15, .external_lex_state = 4},
  [51] = {.lex_state = 15, .external_lex_state = 4},
  [52] = {.lex_state = 15, .external_lex_state = 4},
  [53] = {.lex_state = 15, .external_lex_state = 4},
  [54] = {.lex_state = 15, .external_lex_state = 4},
  [55] = {.lex_state = 15, .external_lex_state = 4},
  [56] = {.lex_state = 15, .external_lex_state = 4},
  [57] = {.lex_state = 15, .external_lex_state = 4},
  [58] = {.lex_state = 15, .external_lex_state = 4},
  [59] = {.lex_state = 15, .external_lex_state = 4},
  [60] = {.lex_state = 15, .external_lex_state = 4},
  [61] = {.lex_state = 15, .external_lex_state = 4},
  [62] = {.lex_state = 15, .external_lex_state = 4},
  [63] = {.lex_state = 15, .external_lex_state = 4},
  [64] = {.lex_state = 1, .external_lex_state = 1},
  [65] = {.lex_state = 2, .external_lex_state = 1},
  [66] = {.lex_state = 1, .external_lex_state = 1},
  [67] = {.lex_state = 2, .external_lex_state = 1},
  [68] = {.lex_state = 2, .external_lex_state = 1},
  [69] = {.lex_state = 1, .external_lex_state = 1},
  [70] = {.lex_state = 2, .external_lex_state = 1},
  [71] = {.lex_state = 1, .external_lex_state = 1},
  [72] = {.lex_state = 1, .external_lex_state = 1},
  [73] = {.lex_state = 2, .external_lex_state = 1},
  [74] = {.lex_state = 1, .external_lex_state = 1},
  [75] = {.lex_state = 2, .external_lex_state = 1},
  [76] = {.lex_state = 2, .external_lex_state = 1},
  [77] = {.lex_state = 1, .external_lex_state = 1},
  [78] = {.lex_state = 10, .external_lex_state = 4},
  [79] = {.lex_state = 10, .external_lex_state = 4},
  [80] = {.lex_state = 10, .external_lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10, .external_lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10, .external_lex_state = 4},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10, .external_lex_state = 4},
  [99] = {.lex_state = 10, .external_lex_state = 4},
  [100] = {.lex_state = 10, .external_lex_state = 4},
  [101] = {.lex_state = 10, .external_lex_state = 4},
  [102] = {.lex_state = 10, .external_lex_state = 4},
  [103] = {.lex_state = 10, .external_lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10, .external_lex_state = 4},
  [107] = {.lex_state = 10, .external_lex_state = 4},
  [108] = {.lex_state = 10, .external_lex_state = 4},
  [109] = {.lex_state = 10, .external_lex_state = 4},
  [110] = {.lex_state = 10, .external_lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10, .external_lex_state = 4},
  [114] = {.lex_state = 10, .external_lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [aux_sym_string_token4] = ACTIONS(1),
    [aux_sym_string_token5] = ACTIONS(1),
    [sym_octal_number] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_exponential_number] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(116),
    [sym_property] = STATE(17),
    [sym_lvalue] = STATE(115),
    [sym_string] = STATE(123),
    [sym_number] = STATE(123),
    [sym_comment] = STATE(40),
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier_lvalue] = ACTIONS(5),
    [aux_sym_string_token1] = ACTIONS(7),
    [aux_sym_string_token3] = ACTIONS(9),
    [aux_sym_string_token4] = ACTIONS(11),
    [aux_sym_string_token5] = ACTIONS(11),
    [sym_octal_number] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(13),
    [sym_exponential_number] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_indent,
    STATE(111), 1,
      sym_parameter,
    STATE(112), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [47] = 12,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_indent,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_parameter,
    STATE(112), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [94] = 11,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_indent,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(92), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [138] = 11,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      aux_sym_string_token1,
    ACTIONS(39), 1,
      aux_sym_string_token3,
    ACTIONS(47), 1,
      sym_indent,
    ACTIONS(49), 1,
      sym_newline,
    STATE(44), 1,
      sym_rvalue,
    ACTIONS(41), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(56), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [182] = 11,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_indent,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [226] = 11,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_indent,
    ACTIONS(55), 1,
      sym_newline,
    STATE(81), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [270] = 11,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_indent,
    ACTIONS(59), 1,
      sym_newline,
    STATE(47), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [314] = 11,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_indent,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [358] = 11,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_indent,
    STATE(111), 1,
      sym_parameter,
    STATE(112), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [402] = 10,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_indent,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(104), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [443] = 10,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_indent,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(105), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(36), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [484] = 10,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_string_token1,
    ACTIONS(69), 1,
      aux_sym_string_token3,
    ACTIONS(77), 1,
      sym_indent,
    STATE(101), 1,
      sym_rvalue,
    ACTIONS(71), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(109), 6,
      sym_entity,
      sym_array,
      sym_list,
      sym_string,
      sym_number,
      sym_boolean,
  [525] = 12,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(21), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(79), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [569] = 12,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(23), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(79), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [613] = 12,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(80), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [657] = 11,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_comment,
    STATE(115), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(20), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [697] = 11,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_dedent,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(25), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [737] = 12,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_comment,
    STATE(95), 1,
      sym_property,
    STATE(120), 1,
      sym_param_list,
    STATE(122), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [779] = 11,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_identifier_lvalue,
    ACTIONS(94), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      aux_sym_string_token3,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    STATE(115), 1,
      sym_lvalue,
    ACTIONS(100), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(20), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(103), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [819] = 11,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_dedent,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(25), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [859] = 12,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_comment,
    STATE(95), 1,
      sym_property,
    STATE(121), 1,
      sym_param_list,
    STATE(122), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [901] = 11,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_dedent,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(25), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [941] = 12,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      aux_sym_string_token1,
    ACTIONS(9), 1,
      aux_sym_string_token3,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_comment,
    STATE(95), 1,
      sym_property,
    STATE(118), 1,
      sym_param_list,
    STATE(122), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(13), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [983] = 11,
    ACTIONS(89), 1,
      sym_dedent,
    ACTIONS(91), 1,
      sym_identifier_lvalue,
    ACTIONS(94), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      aux_sym_string_token3,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    STATE(117), 1,
      sym_lvalue,
    ACTIONS(100), 2,
      aux_sym_string_token4,
      aux_sym_string_token5,
    STATE(25), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(123), 2,
      sym_string,
      sym_number,
    ACTIONS(103), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1023] = 2,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(122), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1043] = 2,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(126), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1063] = 2,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(130), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1083] = 3,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(136), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1105] = 2,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(140), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1125] = 2,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(144), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1144] = 2,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(148), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1163] = 2,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(152), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1182] = 2,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(156), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1201] = 2,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(160), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1220] = 2,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(136), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1239] = 2,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(164), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1258] = 2,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_POUND,
    ACTIONS(168), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1277] = 2,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
    ACTIONS(172), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1295] = 2,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
    ACTIONS(176), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1313] = 2,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
    ACTIONS(180), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1331] = 2,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
    ACTIONS(184), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1349] = 3,
    STATE(57), 1,
      sym_comment,
    ACTIONS(188), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(186), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1368] = 3,
    STATE(55), 1,
      sym_comment,
    ACTIONS(192), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(190), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1387] = 3,
    STATE(41), 1,
      sym_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(186), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1406] = 3,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(136), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1425] = 3,
    STATE(39), 1,
      sym_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(190), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1444] = 2,
    ACTIONS(158), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(160), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1460] = 2,
    ACTIONS(150), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(152), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1476] = 2,
    ACTIONS(128), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(130), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1492] = 2,
    ACTIONS(138), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(140), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1508] = 2,
    ACTIONS(124), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(126), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1524] = 2,
    ACTIONS(120), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(122), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1540] = 2,
    ACTIONS(142), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(144), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1556] = 2,
    ACTIONS(170), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(172), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1572] = 2,
    ACTIONS(132), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(136), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1588] = 2,
    ACTIONS(178), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(180), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1604] = 2,
    ACTIONS(146), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(148), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1620] = 2,
    ACTIONS(154), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(156), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1636] = 2,
    ACTIONS(166), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(168), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1652] = 2,
    ACTIONS(174), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(176), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1668] = 2,
    ACTIONS(162), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(164), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1684] = 2,
    ACTIONS(182), 2,
      sym_dedent,
      anon_sym_POUND,
    ACTIONS(184), 9,
      sym_identifier_lvalue,
      aux_sym_string_token1,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1700] = 4,
    ACTIONS(196), 1,
      aux_sym_string_token1,
    ACTIONS(198), 1,
      aux_sym_string_token2,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(200), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1715] = 4,
    ACTIONS(196), 1,
      aux_sym_string_token3,
    ACTIONS(202), 1,
      aux_sym_string_token2,
    STATE(68), 1,
      aux_sym_string_repeat1,
    ACTIONS(204), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1730] = 4,
    ACTIONS(206), 1,
      aux_sym_string_token1,
    ACTIONS(208), 1,
      aux_sym_string_token2,
    STATE(69), 1,
      aux_sym_string_repeat1,
    ACTIONS(210), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1745] = 4,
    ACTIONS(212), 1,
      aux_sym_string_token2,
    ACTIONS(215), 1,
      aux_sym_string_token3,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(217), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1760] = 4,
    ACTIONS(206), 1,
      aux_sym_string_token3,
    ACTIONS(220), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(222), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1775] = 4,
    ACTIONS(215), 1,
      aux_sym_string_token1,
    ACTIONS(224), 1,
      aux_sym_string_token2,
    STATE(69), 1,
      aux_sym_string_repeat1,
    ACTIONS(227), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1790] = 4,
    ACTIONS(220), 1,
      aux_sym_string_token2,
    ACTIONS(230), 1,
      aux_sym_string_token3,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(222), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1805] = 4,
    ACTIONS(208), 1,
      aux_sym_string_token2,
    ACTIONS(230), 1,
      aux_sym_string_token1,
    STATE(69), 1,
      aux_sym_string_repeat1,
    ACTIONS(210), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1820] = 4,
    ACTIONS(232), 1,
      aux_sym_string_token1,
    ACTIONS(234), 1,
      aux_sym_string_token2,
    STATE(74), 1,
      aux_sym_string_repeat1,
    ACTIONS(236), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1835] = 4,
    ACTIONS(232), 1,
      aux_sym_string_token3,
    ACTIONS(238), 1,
      aux_sym_string_token2,
    STATE(75), 1,
      aux_sym_string_repeat1,
    ACTIONS(240), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1850] = 4,
    ACTIONS(208), 1,
      aux_sym_string_token2,
    ACTIONS(242), 1,
      aux_sym_string_token1,
    STATE(69), 1,
      aux_sym_string_repeat1,
    ACTIONS(210), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1865] = 4,
    ACTIONS(220), 1,
      aux_sym_string_token2,
    ACTIONS(242), 1,
      aux_sym_string_token3,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(222), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1880] = 4,
    ACTIONS(244), 1,
      aux_sym_string_token2,
    ACTIONS(246), 1,
      aux_sym_string_token3,
    STATE(70), 1,
      aux_sym_string_repeat1,
    ACTIONS(248), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1895] = 4,
    ACTIONS(246), 1,
      aux_sym_string_token1,
    ACTIONS(250), 1,
      aux_sym_string_token2,
    STATE(71), 1,
      aux_sym_string_repeat1,
    ACTIONS(252), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
  [1910] = 3,
    ACTIONS(254), 1,
      anon_sym_DASH,
    ACTIONS(257), 1,
      sym_dedent,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1921] = 3,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      sym_dedent,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1932] = 3,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      sym_dedent,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1943] = 3,
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1954] = 3,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(132), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1965] = 3,
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1976] = 3,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(267), 1,
      sym_dedent,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1987] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_array_repeat1,
  [1997] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_array_repeat1,
  [2007] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_array_repeat1,
  [2017] = 3,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_param_list_repeat1,
  [2027] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym_array_repeat1,
  [2037] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_array_repeat1,
  [2047] = 3,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_param_list_repeat1,
  [2057] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_array_repeat1,
  [2067] = 2,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 2,
      sym_dedent,
      anon_sym_DASH,
  [2075] = 2,
    ACTIONS(259), 1,
      anon_sym_DASH,
    STATE(79), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [2083] = 3,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_param_list_repeat1,
  [2093] = 2,
    ACTIONS(259), 1,
      anon_sym_DASH,
    STATE(84), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [2101] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_array_repeat1,
  [2111] = 1,
    ACTIONS(128), 2,
      sym_dedent,
      anon_sym_DASH,
  [2116] = 1,
    ACTIONS(162), 2,
      sym_dedent,
      anon_sym_DASH,
  [2121] = 1,
    ACTIONS(120), 2,
      sym_dedent,
      anon_sym_DASH,
  [2126] = 1,
    ACTIONS(301), 2,
      sym_dedent,
      anon_sym_DASH,
  [2131] = 1,
    ACTIONS(146), 2,
      sym_dedent,
      anon_sym_DASH,
  [2136] = 1,
    ACTIONS(138), 2,
      sym_dedent,
      anon_sym_DASH,
  [2141] = 1,
    ACTIONS(303), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2146] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2151] = 1,
    ACTIONS(154), 2,
      sym_dedent,
      anon_sym_DASH,
  [2156] = 1,
    ACTIONS(124), 2,
      sym_dedent,
      anon_sym_DASH,
  [2161] = 1,
    ACTIONS(142), 2,
      sym_dedent,
      anon_sym_DASH,
  [2166] = 1,
    ACTIONS(132), 2,
      sym_dedent,
      anon_sym_DASH,
  [2171] = 1,
    ACTIONS(158), 2,
      sym_dedent,
      anon_sym_DASH,
  [2176] = 1,
    ACTIONS(286), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2181] = 1,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2186] = 1,
    ACTIONS(150), 2,
      sym_dedent,
      anon_sym_DASH,
  [2191] = 1,
    ACTIONS(166), 2,
      sym_dedent,
      anon_sym_DASH,
  [2196] = 1,
    ACTIONS(307), 1,
      anon_sym_COLON,
  [2200] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [2204] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [2208] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [2212] = 1,
    ACTIONS(315), 1,
      sym_unquoted_string,
  [2216] = 1,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [2220] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2224] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON,
  [2228] = 1,
    ACTIONS(323), 1,
      anon_sym_COLON,
  [2232] = 1,
    ACTIONS(325), 1,
      sym_unquoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 484,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 613,
  [SMALL_STATE(17)] = 657,
  [SMALL_STATE(18)] = 697,
  [SMALL_STATE(19)] = 737,
  [SMALL_STATE(20)] = 779,
  [SMALL_STATE(21)] = 819,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 901,
  [SMALL_STATE(24)] = 941,
  [SMALL_STATE(25)] = 983,
  [SMALL_STATE(26)] = 1023,
  [SMALL_STATE(27)] = 1043,
  [SMALL_STATE(28)] = 1063,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1105,
  [SMALL_STATE(31)] = 1125,
  [SMALL_STATE(32)] = 1144,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1182,
  [SMALL_STATE(35)] = 1201,
  [SMALL_STATE(36)] = 1220,
  [SMALL_STATE(37)] = 1239,
  [SMALL_STATE(38)] = 1258,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1295,
  [SMALL_STATE(41)] = 1313,
  [SMALL_STATE(42)] = 1331,
  [SMALL_STATE(43)] = 1349,
  [SMALL_STATE(44)] = 1368,
  [SMALL_STATE(45)] = 1387,
  [SMALL_STATE(46)] = 1406,
  [SMALL_STATE(47)] = 1425,
  [SMALL_STATE(48)] = 1444,
  [SMALL_STATE(49)] = 1460,
  [SMALL_STATE(50)] = 1476,
  [SMALL_STATE(51)] = 1492,
  [SMALL_STATE(52)] = 1508,
  [SMALL_STATE(53)] = 1524,
  [SMALL_STATE(54)] = 1540,
  [SMALL_STATE(55)] = 1556,
  [SMALL_STATE(56)] = 1572,
  [SMALL_STATE(57)] = 1588,
  [SMALL_STATE(58)] = 1604,
  [SMALL_STATE(59)] = 1620,
  [SMALL_STATE(60)] = 1636,
  [SMALL_STATE(61)] = 1652,
  [SMALL_STATE(62)] = 1668,
  [SMALL_STATE(63)] = 1684,
  [SMALL_STATE(64)] = 1700,
  [SMALL_STATE(65)] = 1715,
  [SMALL_STATE(66)] = 1730,
  [SMALL_STATE(67)] = 1745,
  [SMALL_STATE(68)] = 1760,
  [SMALL_STATE(69)] = 1775,
  [SMALL_STATE(70)] = 1790,
  [SMALL_STATE(71)] = 1805,
  [SMALL_STATE(72)] = 1820,
  [SMALL_STATE(73)] = 1835,
  [SMALL_STATE(74)] = 1850,
  [SMALL_STATE(75)] = 1865,
  [SMALL_STATE(76)] = 1880,
  [SMALL_STATE(77)] = 1895,
  [SMALL_STATE(78)] = 1910,
  [SMALL_STATE(79)] = 1921,
  [SMALL_STATE(80)] = 1932,
  [SMALL_STATE(81)] = 1943,
  [SMALL_STATE(82)] = 1954,
  [SMALL_STATE(83)] = 1965,
  [SMALL_STATE(84)] = 1976,
  [SMALL_STATE(85)] = 1987,
  [SMALL_STATE(86)] = 1997,
  [SMALL_STATE(87)] = 2007,
  [SMALL_STATE(88)] = 2017,
  [SMALL_STATE(89)] = 2027,
  [SMALL_STATE(90)] = 2037,
  [SMALL_STATE(91)] = 2047,
  [SMALL_STATE(92)] = 2057,
  [SMALL_STATE(93)] = 2067,
  [SMALL_STATE(94)] = 2075,
  [SMALL_STATE(95)] = 2083,
  [SMALL_STATE(96)] = 2093,
  [SMALL_STATE(97)] = 2101,
  [SMALL_STATE(98)] = 2111,
  [SMALL_STATE(99)] = 2116,
  [SMALL_STATE(100)] = 2121,
  [SMALL_STATE(101)] = 2126,
  [SMALL_STATE(102)] = 2131,
  [SMALL_STATE(103)] = 2136,
  [SMALL_STATE(104)] = 2141,
  [SMALL_STATE(105)] = 2146,
  [SMALL_STATE(106)] = 2151,
  [SMALL_STATE(107)] = 2156,
  [SMALL_STATE(108)] = 2161,
  [SMALL_STATE(109)] = 2166,
  [SMALL_STATE(110)] = 2171,
  [SMALL_STATE(111)] = 2176,
  [SMALL_STATE(112)] = 2181,
  [SMALL_STATE(113)] = 2186,
  [SMALL_STATE(114)] = 2191,
  [SMALL_STATE(115)] = 2196,
  [SMALL_STATE(116)] = 2200,
  [SMALL_STATE(117)] = 2204,
  [SMALL_STATE(118)] = 2208,
  [SMALL_STATE(119)] = 2212,
  [SMALL_STATE(120)] = 2216,
  [SMALL_STATE(121)] = 2220,
  [SMALL_STATE(122)] = 2224,
  [SMALL_STATE(123)] = 2228,
  [SMALL_STATE(124)] = 2232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rvalue, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(12),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(10),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token_newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token_newline] = sym_newline,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_newline] = true,
  },
  [2] = {
    [ts_external_token_indent] = true,
  },
  [3] = {
    [ts_external_token_indent] = true,
    [ts_external_token_newline] = true,
  },
  [4] = {
    [ts_external_token_dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_neon_external_scanner_create(void);
void tree_sitter_neon_external_scanner_destroy(void *);
bool tree_sitter_neon_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_neon_external_scanner_serialize(void *, char *);
void tree_sitter_neon_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_neon() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_neon_external_scanner_create,
      tree_sitter_neon_external_scanner_destroy,
      tree_sitter_neon_external_scanner_scan,
      tree_sitter_neon_external_scanner_serialize,
      tree_sitter_neon_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
