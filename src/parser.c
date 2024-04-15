#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  sym_string = 10,
  sym_octal_number = 11,
  sym_hex_number = 12,
  sym_exponential_number = 13,
  aux_sym_number_token1 = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_POUND = 17,
  sym_unquoted_string = 18,
  sym_indent = 19,
  sym_dedent = 20,
  sym_newline = 21,
  sym_document = 22,
  sym_property = 23,
  sym_lvalue = 24,
  sym_rvalue = 25,
  sym_entity = 26,
  sym_param_list = 27,
  sym_parameter = 28,
  sym_array = 29,
  sym_list = 30,
  sym_list_item = 31,
  sym_number = 32,
  sym_boolean = 33,
  sym_comment = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_param_list_repeat1 = 36,
  aux_sym_array_repeat1 = 37,
  aux_sym_list_repeat1 = 38,
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
  [sym_string] = "string",
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
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [sym_string] = sym_string,
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
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [8] = 4,
  [9] = 9,
  [10] = 5,
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
  [22] = 18,
  [23] = 19,
  [24] = 17,
  [25] = 19,
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
  [41] = 40,
  [42] = 26,
  [43] = 43,
  [44] = 43,
  [45] = 37,
  [46] = 32,
  [47] = 31,
  [48] = 34,
  [49] = 30,
  [50] = 36,
  [51] = 29,
  [52] = 39,
  [53] = 35,
  [54] = 38,
  [55] = 27,
  [56] = 28,
  [57] = 33,
  [58] = 58,
  [59] = 43,
  [60] = 60,
  [61] = 60,
  [62] = 60,
  [63] = 40,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 26,
  [70] = 70,
  [71] = 67,
  [72] = 67,
  [73] = 73,
  [74] = 65,
  [75] = 70,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 32,
  [80] = 80,
  [81] = 29,
  [82] = 34,
  [83] = 35,
  [84] = 84,
  [85] = 85,
  [86] = 28,
  [87] = 27,
  [88] = 33,
  [89] = 89,
  [90] = 31,
  [91] = 30,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 92,
  [99] = 95,
  [100] = 100,
  [101] = 97,
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
      if (eof) ADVANCE(15);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '%' ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ']') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ']') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '-') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ']') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == ' ' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == ' ' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == ' ' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(30);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(33);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(29);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      if (lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier_lvalue);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_exponential_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14, .external_lex_state = 4},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14, .external_lex_state = 4},
  [22] = {.lex_state = 14, .external_lex_state = 4},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14, .external_lex_state = 4},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14, .external_lex_state = 4},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14, .external_lex_state = 4},
  [43] = {.lex_state = 14, .external_lex_state = 4},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14, .external_lex_state = 4},
  [46] = {.lex_state = 14, .external_lex_state = 4},
  [47] = {.lex_state = 14, .external_lex_state = 4},
  [48] = {.lex_state = 14, .external_lex_state = 4},
  [49] = {.lex_state = 14, .external_lex_state = 4},
  [50] = {.lex_state = 14, .external_lex_state = 4},
  [51] = {.lex_state = 14, .external_lex_state = 4},
  [52] = {.lex_state = 14, .external_lex_state = 4},
  [53] = {.lex_state = 14, .external_lex_state = 4},
  [54] = {.lex_state = 14, .external_lex_state = 4},
  [55] = {.lex_state = 14, .external_lex_state = 4},
  [56] = {.lex_state = 14, .external_lex_state = 4},
  [57] = {.lex_state = 14, .external_lex_state = 4},
  [58] = {.lex_state = 9, .external_lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9, .external_lex_state = 4},
  [61] = {.lex_state = 9, .external_lex_state = 4},
  [62] = {.lex_state = 9, .external_lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 9, .external_lex_state = 4},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 9, .external_lex_state = 4},
  [79] = {.lex_state = 9, .external_lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 9, .external_lex_state = 4},
  [82] = {.lex_state = 9, .external_lex_state = 4},
  [83] = {.lex_state = 9, .external_lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 9, .external_lex_state = 4},
  [87] = {.lex_state = 9, .external_lex_state = 4},
  [88] = {.lex_state = 9, .external_lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 9, .external_lex_state = 4},
  [91] = {.lex_state = 9, .external_lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
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
    [sym_string] = ACTIONS(1),
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
    [sym_document] = STATE(100),
    [sym_property] = STATE(20),
    [sym_lvalue] = STATE(96),
    [sym_number] = STATE(93),
    [sym_comment] = STATE(36),
    [aux_sym_document_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier_lvalue] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_octal_number] = ACTIONS(9),
    [sym_hex_number] = ACTIONS(9),
    [sym_exponential_number] = ACTIONS(9),
    [aux_sym_number_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    STATE(80), 1,
      sym_rvalue,
    STATE(89), 1,
      sym_parameter,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [39] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_rvalue,
    STATE(89), 1,
      sym_parameter,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [78] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(65), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [114] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_indent,
    ACTIONS(33), 1,
      sym_newline,
    STATE(63), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [150] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [186] = 9,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_string,
    ACTIONS(47), 1,
      sym_indent,
    ACTIONS(49), 1,
      sym_newline,
    STATE(40), 1,
      sym_rvalue,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(56), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [222] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [258] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    STATE(80), 1,
      sym_rvalue,
    STATE(89), 1,
      sym_parameter,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [294] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_indent,
    ACTIONS(55), 1,
      sym_newline,
    STATE(41), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [330] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(84), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [363] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(85), 1,
      sym_rvalue,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(28), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [396] = 8,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(67), 1,
      sym_indent,
    STATE(78), 1,
      sym_rvalue,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(86), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [429] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(60), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [465] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(21), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(60), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [501] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(22), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(62), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [537] = 9,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_identifier_lvalue,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(84), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(96), 1,
      sym_lvalue,
    STATE(17), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(81), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [569] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      sym_dedent,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(24), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [601] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(73), 1,
      sym_property,
    STATE(93), 1,
      sym_number,
    STATE(98), 1,
      sym_param_list,
    STATE(99), 1,
      sym_lvalue,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [635] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(96), 1,
      sym_lvalue,
    STATE(17), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [667] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_dedent,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(24), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [699] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_dedent,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(24), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [731] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(73), 1,
      sym_property,
    STATE(93), 1,
      sym_number,
    STATE(94), 1,
      sym_param_list,
    STATE(99), 1,
      sym_lvalue,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [765] = 9,
    ACTIONS(73), 1,
      sym_dedent,
    ACTIONS(75), 1,
      sym_identifier_lvalue,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(99), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    STATE(93), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(24), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(81), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [797] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(73), 1,
      sym_property,
    STATE(92), 1,
      sym_param_list,
    STATE(93), 1,
      sym_number,
    STATE(99), 1,
      sym_lvalue,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [831] = 3,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [850] = 2,
    ACTIONS(112), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [867] = 2,
    ACTIONS(108), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [883] = 2,
    ACTIONS(116), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [899] = 2,
    ACTIONS(120), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [915] = 2,
    ACTIONS(124), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [931] = 2,
    ACTIONS(128), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [947] = 2,
    ACTIONS(132), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [963] = 2,
    ACTIONS(136), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [979] = 2,
    ACTIONS(140), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [995] = 2,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(144), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1010] = 2,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(148), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1025] = 2,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(152), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1040] = 2,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(156), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1055] = 3,
    STATE(52), 1,
      sym_comment,
    ACTIONS(160), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(158), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1071] = 3,
    STATE(39), 1,
      sym_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym_string,
      anon_sym_POUND,
    ACTIONS(158), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1087] = 3,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(108), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1103] = 3,
    STATE(54), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(164), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1119] = 3,
    STATE(38), 1,
      sym_comment,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      sym_string,
      anon_sym_POUND,
    ACTIONS(164), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1135] = 2,
    ACTIONS(146), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(148), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1148] = 2,
    ACTIONS(126), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(128), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1161] = 2,
    ACTIONS(122), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(124), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1174] = 2,
    ACTIONS(134), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(136), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1187] = 2,
    ACTIONS(118), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(120), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1200] = 2,
    ACTIONS(142), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(144), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1213] = 2,
    ACTIONS(114), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(116), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1226] = 2,
    ACTIONS(154), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(156), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1239] = 2,
    ACTIONS(138), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(140), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1252] = 2,
    ACTIONS(150), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(152), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1265] = 2,
    ACTIONS(110), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(112), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1278] = 2,
    ACTIONS(104), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(108), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1291] = 2,
    ACTIONS(130), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(132), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1304] = 3,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      sym_dedent,
    STATE(58), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1315] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1326] = 3,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      sym_dedent,
    STATE(58), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1337] = 3,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(177), 1,
      sym_dedent,
    STATE(58), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1348] = 3,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      sym_dedent,
    STATE(58), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1359] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1370] = 3,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(104), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1381] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_array_repeat1,
  [1391] = 3,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_param_list_repeat1,
  [1401] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_array_repeat1,
  [1411] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_array_repeat1,
  [1421] = 2,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 2,
      sym_dedent,
      anon_sym_DASH,
  [1429] = 2,
    ACTIONS(173), 1,
      anon_sym_DASH,
    STATE(60), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1437] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_array_repeat1,
  [1447] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_array_repeat1,
  [1457] = 3,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_param_list_repeat1,
  [1467] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [1477] = 2,
    ACTIONS(173), 1,
      anon_sym_DASH,
    STATE(61), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1485] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_array_repeat1,
  [1495] = 3,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_param_list_repeat1,
  [1505] = 1,
    ACTIONS(215), 2,
      sym_dedent,
      anon_sym_DASH,
  [1510] = 1,
    ACTIONS(126), 2,
      sym_dedent,
      anon_sym_DASH,
  [1515] = 1,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1520] = 1,
    ACTIONS(114), 2,
      sym_dedent,
      anon_sym_DASH,
  [1525] = 1,
    ACTIONS(134), 2,
      sym_dedent,
      anon_sym_DASH,
  [1530] = 1,
    ACTIONS(138), 2,
      sym_dedent,
      anon_sym_DASH,
  [1535] = 1,
    ACTIONS(219), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1540] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1545] = 1,
    ACTIONS(104), 2,
      sym_dedent,
      anon_sym_DASH,
  [1550] = 1,
    ACTIONS(110), 2,
      sym_dedent,
      anon_sym_DASH,
  [1555] = 1,
    ACTIONS(130), 2,
      sym_dedent,
      anon_sym_DASH,
  [1560] = 1,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1565] = 1,
    ACTIONS(122), 2,
      sym_dedent,
      anon_sym_DASH,
  [1570] = 1,
    ACTIONS(118), 2,
      sym_dedent,
      anon_sym_DASH,
  [1575] = 1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [1579] = 1,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [1583] = 1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [1587] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [1591] = 1,
    ACTIONS(229), 1,
      anon_sym_COLON,
  [1595] = 1,
    ACTIONS(231), 1,
      sym_unquoted_string,
  [1599] = 1,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [1603] = 1,
    ACTIONS(235), 1,
      anon_sym_COLON,
  [1607] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [1611] = 1,
    ACTIONS(239), 1,
      sym_unquoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 258,
  [SMALL_STATE(10)] = 294,
  [SMALL_STATE(11)] = 330,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 429,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 537,
  [SMALL_STATE(18)] = 569,
  [SMALL_STATE(19)] = 601,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 667,
  [SMALL_STATE(22)] = 699,
  [SMALL_STATE(23)] = 731,
  [SMALL_STATE(24)] = 765,
  [SMALL_STATE(25)] = 797,
  [SMALL_STATE(26)] = 831,
  [SMALL_STATE(27)] = 850,
  [SMALL_STATE(28)] = 867,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 899,
  [SMALL_STATE(31)] = 915,
  [SMALL_STATE(32)] = 931,
  [SMALL_STATE(33)] = 947,
  [SMALL_STATE(34)] = 963,
  [SMALL_STATE(35)] = 979,
  [SMALL_STATE(36)] = 995,
  [SMALL_STATE(37)] = 1010,
  [SMALL_STATE(38)] = 1025,
  [SMALL_STATE(39)] = 1040,
  [SMALL_STATE(40)] = 1055,
  [SMALL_STATE(41)] = 1071,
  [SMALL_STATE(42)] = 1087,
  [SMALL_STATE(43)] = 1103,
  [SMALL_STATE(44)] = 1119,
  [SMALL_STATE(45)] = 1135,
  [SMALL_STATE(46)] = 1148,
  [SMALL_STATE(47)] = 1161,
  [SMALL_STATE(48)] = 1174,
  [SMALL_STATE(49)] = 1187,
  [SMALL_STATE(50)] = 1200,
  [SMALL_STATE(51)] = 1213,
  [SMALL_STATE(52)] = 1226,
  [SMALL_STATE(53)] = 1239,
  [SMALL_STATE(54)] = 1252,
  [SMALL_STATE(55)] = 1265,
  [SMALL_STATE(56)] = 1278,
  [SMALL_STATE(57)] = 1291,
  [SMALL_STATE(58)] = 1304,
  [SMALL_STATE(59)] = 1315,
  [SMALL_STATE(60)] = 1326,
  [SMALL_STATE(61)] = 1337,
  [SMALL_STATE(62)] = 1348,
  [SMALL_STATE(63)] = 1359,
  [SMALL_STATE(64)] = 1370,
  [SMALL_STATE(65)] = 1381,
  [SMALL_STATE(66)] = 1391,
  [SMALL_STATE(67)] = 1401,
  [SMALL_STATE(68)] = 1411,
  [SMALL_STATE(69)] = 1421,
  [SMALL_STATE(70)] = 1429,
  [SMALL_STATE(71)] = 1437,
  [SMALL_STATE(72)] = 1447,
  [SMALL_STATE(73)] = 1457,
  [SMALL_STATE(74)] = 1467,
  [SMALL_STATE(75)] = 1477,
  [SMALL_STATE(76)] = 1485,
  [SMALL_STATE(77)] = 1495,
  [SMALL_STATE(78)] = 1505,
  [SMALL_STATE(79)] = 1510,
  [SMALL_STATE(80)] = 1515,
  [SMALL_STATE(81)] = 1520,
  [SMALL_STATE(82)] = 1525,
  [SMALL_STATE(83)] = 1530,
  [SMALL_STATE(84)] = 1535,
  [SMALL_STATE(85)] = 1540,
  [SMALL_STATE(86)] = 1545,
  [SMALL_STATE(87)] = 1550,
  [SMALL_STATE(88)] = 1555,
  [SMALL_STATE(89)] = 1560,
  [SMALL_STATE(90)] = 1565,
  [SMALL_STATE(91)] = 1570,
  [SMALL_STATE(92)] = 1575,
  [SMALL_STATE(93)] = 1579,
  [SMALL_STATE(94)] = 1583,
  [SMALL_STATE(95)] = 1587,
  [SMALL_STATE(96)] = 1591,
  [SMALL_STATE(97)] = 1595,
  [SMALL_STATE(98)] = 1599,
  [SMALL_STATE(99)] = 1603,
  [SMALL_STATE(100)] = 1607,
  [SMALL_STATE(101)] = 1611,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rvalue, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(9),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(12),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
