#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
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
  [4] = 3,
  [5] = 2,
  [6] = 3,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 17,
  [20] = 14,
  [21] = 14,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
  [38] = 37,
  [39] = 39,
  [40] = 23,
  [41] = 39,
  [42] = 31,
  [43] = 28,
  [44] = 25,
  [45] = 27,
  [46] = 32,
  [47] = 29,
  [48] = 30,
  [49] = 34,
  [50] = 35,
  [51] = 26,
  [52] = 33,
  [53] = 36,
  [54] = 24,
  [55] = 37,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 57,
  [60] = 39,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 61,
  [66] = 66,
  [67] = 63,
  [68] = 23,
  [69] = 69,
  [70] = 66,
  [71] = 61,
  [72] = 72,
  [73] = 63,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 24,
  [80] = 27,
  [81] = 31,
  [82] = 32,
  [83] = 26,
  [84] = 84,
  [85] = 85,
  [86] = 30,
  [87] = 29,
  [88] = 28,
  [89] = 25,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 91,
  [98] = 94,
  [99] = 99,
  [100] = 96,
};

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
      if (('*' <= lookahead && lookahead <= '.') ||
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
      if (('*' <= lookahead && lookahead <= '.') ||
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
      if (('*' <= lookahead && lookahead <= '.') ||
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
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '-') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
          lookahead == '*' ||
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
          lookahead == '*' ||
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
          lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14, .external_lex_state = 4},
  [18] = {.lex_state = 14, .external_lex_state = 4},
  [19] = {.lex_state = 14, .external_lex_state = 4},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14, .external_lex_state = 4},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
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
  [38] = {.lex_state = 14, .external_lex_state = 4},
  [39] = {.lex_state = 14, .external_lex_state = 4},
  [40] = {.lex_state = 14, .external_lex_state = 4},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14, .external_lex_state = 4},
  [43] = {.lex_state = 14, .external_lex_state = 4},
  [44] = {.lex_state = 14, .external_lex_state = 4},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9, .external_lex_state = 4},
  [57] = {.lex_state = 9, .external_lex_state = 4},
  [58] = {.lex_state = 9, .external_lex_state = 4},
  [59] = {.lex_state = 9, .external_lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 9, .external_lex_state = 4},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9, .external_lex_state = 4},
  [80] = {.lex_state = 9, .external_lex_state = 4},
  [81] = {.lex_state = 9, .external_lex_state = 4},
  [82] = {.lex_state = 9, .external_lex_state = 4},
  [83] = {.lex_state = 9, .external_lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9, .external_lex_state = 4},
  [86] = {.lex_state = 9, .external_lex_state = 4},
  [87] = {.lex_state = 9, .external_lex_state = 4},
  [88] = {.lex_state = 9, .external_lex_state = 4},
  [89] = {.lex_state = 9, .external_lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
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
    [sym_document] = STATE(99),
    [sym_property] = STATE(16),
    [sym_lvalue] = STATE(95),
    [sym_number] = STATE(90),
    [sym_comment] = STATE(34),
    [aux_sym_document_repeat1] = STATE(16),
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
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(21), 1,
      sym_indent,
    ACTIONS(23), 1,
      sym_newline,
    STATE(60), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [36] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      sym_indent,
    STATE(71), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [72] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_indent,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [108] = 9,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_string,
    ACTIONS(41), 1,
      sym_indent,
    ACTIONS(43), 1,
      sym_newline,
    STATE(39), 1,
      sym_rvalue,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(42), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [144] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_indent,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [180] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(47), 1,
      sym_indent,
    ACTIONS(49), 1,
      sym_newline,
    STATE(41), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [216] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_indent,
    STATE(84), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [249] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_string,
    ACTIONS(61), 1,
      sym_indent,
    STATE(85), 1,
      sym_rvalue,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(81), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [282] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_indent,
    STATE(78), 1,
      sym_rvalue,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    STATE(31), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [315] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(19), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(57), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [351] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(22), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(57), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [387] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(17), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(59), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [423] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_property,
    STATE(90), 1,
      sym_number,
    STATE(93), 1,
      sym_param_list,
    STATE(98), 1,
      sym_lvalue,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [457] = 9,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_identifier_lvalue,
    ACTIONS(74), 1,
      sym_string,
    ACTIONS(80), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(15), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(77), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [489] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(95), 1,
      sym_lvalue,
    STATE(15), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [521] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_dedent,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [553] = 9,
    ACTIONS(69), 1,
      sym_dedent,
    ACTIONS(71), 1,
      sym_identifier_lvalue,
    ACTIONS(74), 1,
      sym_string,
    ACTIONS(87), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(77), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [585] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      sym_dedent,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [617] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_property,
    STATE(90), 1,
      sym_number,
    STATE(91), 1,
      sym_param_list,
    STATE(98), 1,
      sym_lvalue,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [651] = 10,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_property,
    STATE(90), 1,
      sym_number,
    STATE(97), 1,
      sym_param_list,
    STATE(98), 1,
      sym_lvalue,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [685] = 9,
    ACTIONS(5), 1,
      sym_identifier_lvalue,
    ACTIONS(7), 1,
      sym_string,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      sym_dedent,
    STATE(49), 1,
      sym_comment,
    STATE(90), 1,
      sym_number,
    STATE(94), 1,
      sym_lvalue,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    ACTIONS(9), 4,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [717] = 3,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [736] = 2,
    ACTIONS(106), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [753] = 2,
    ACTIONS(110), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [769] = 2,
    ACTIONS(114), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [785] = 2,
    ACTIONS(118), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [801] = 2,
    ACTIONS(122), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [817] = 2,
    ACTIONS(126), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [833] = 2,
    ACTIONS(130), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [849] = 2,
    ACTIONS(102), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [865] = 2,
    ACTIONS(134), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_string,
      anon_sym_POUND,
  [881] = 2,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(138), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [896] = 2,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(142), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [911] = 2,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(146), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [926] = 2,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_POUND,
    ACTIONS(150), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [941] = 3,
    STATE(36), 1,
      sym_comment,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      sym_string,
      anon_sym_POUND,
    ACTIONS(154), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [957] = 3,
    STATE(53), 1,
      sym_comment,
    ACTIONS(152), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(154), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [973] = 3,
    STATE(52), 1,
      sym_comment,
    ACTIONS(158), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(156), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [989] = 3,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(102), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1005] = 3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      sym_string,
      anon_sym_POUND,
    ACTIONS(156), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1021] = 2,
    ACTIONS(98), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(102), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1034] = 2,
    ACTIONS(120), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(122), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1047] = 2,
    ACTIONS(108), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(110), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1060] = 2,
    ACTIONS(116), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(118), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1073] = 2,
    ACTIONS(132), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(134), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1086] = 2,
    ACTIONS(124), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(126), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1099] = 2,
    ACTIONS(128), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(130), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1112] = 2,
    ACTIONS(140), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(142), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1125] = 2,
    ACTIONS(144), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(146), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1138] = 2,
    ACTIONS(112), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(114), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1151] = 2,
    ACTIONS(136), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(138), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1164] = 2,
    ACTIONS(148), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(150), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1177] = 2,
    ACTIONS(104), 3,
      sym_dedent,
      sym_string,
      anon_sym_POUND,
    ACTIONS(106), 5,
      sym_identifier_lvalue,
      sym_octal_number,
      sym_hex_number,
      sym_exponential_number,
      aux_sym_number_token1,
  [1190] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1201] = 3,
    ACTIONS(162), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      sym_dedent,
    STATE(56), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1212] = 3,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      sym_dedent,
    STATE(56), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1223] = 3,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      sym_dedent,
    STATE(56), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1234] = 3,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(173), 1,
      sym_dedent,
    STATE(56), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1245] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1256] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_array_repeat1,
  [1266] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [1276] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [1286] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_param_list_repeat1,
  [1296] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1306] = 2,
    ACTIONS(167), 1,
      anon_sym_DASH,
    STATE(58), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1314] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [1324] = 2,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 2,
      sym_dedent,
      anon_sym_DASH,
  [1332] = 3,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(77), 1,
      sym_parameter,
  [1342] = 2,
    ACTIONS(167), 1,
      anon_sym_DASH,
    STATE(57), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1350] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_array_repeat1,
  [1360] = 3,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_param_list_repeat1,
  [1370] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [1380] = 3,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_parameter,
  [1390] = 3,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_param_list_repeat1,
  [1400] = 2,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(77), 1,
      sym_parameter,
  [1407] = 1,
    ACTIONS(208), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1412] = 1,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1417] = 1,
    ACTIONS(104), 2,
      sym_dedent,
      anon_sym_DASH,
  [1422] = 1,
    ACTIONS(116), 2,
      sym_dedent,
      anon_sym_DASH,
  [1427] = 1,
    ACTIONS(98), 2,
      sym_dedent,
      anon_sym_DASH,
  [1432] = 1,
    ACTIONS(132), 2,
      sym_dedent,
      anon_sym_DASH,
  [1437] = 1,
    ACTIONS(112), 2,
      sym_dedent,
      anon_sym_DASH,
  [1442] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1447] = 1,
    ACTIONS(215), 2,
      sym_dedent,
      anon_sym_DASH,
  [1452] = 1,
    ACTIONS(128), 2,
      sym_dedent,
      anon_sym_DASH,
  [1457] = 1,
    ACTIONS(124), 2,
      sym_dedent,
      anon_sym_DASH,
  [1462] = 1,
    ACTIONS(120), 2,
      sym_dedent,
      anon_sym_DASH,
  [1467] = 1,
    ACTIONS(108), 2,
      sym_dedent,
      anon_sym_DASH,
  [1472] = 1,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [1476] = 1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [1480] = 1,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [1484] = 1,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [1488] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [1492] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [1496] = 1,
    ACTIONS(229), 1,
      sym_unquoted_string,
  [1500] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [1504] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [1508] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1512] = 1,
    ACTIONS(237), 1,
      sym_unquoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 457,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 521,
  [SMALL_STATE(18)] = 553,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 617,
  [SMALL_STATE(21)] = 651,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 736,
  [SMALL_STATE(25)] = 753,
  [SMALL_STATE(26)] = 769,
  [SMALL_STATE(27)] = 785,
  [SMALL_STATE(28)] = 801,
  [SMALL_STATE(29)] = 817,
  [SMALL_STATE(30)] = 833,
  [SMALL_STATE(31)] = 849,
  [SMALL_STATE(32)] = 865,
  [SMALL_STATE(33)] = 881,
  [SMALL_STATE(34)] = 896,
  [SMALL_STATE(35)] = 911,
  [SMALL_STATE(36)] = 926,
  [SMALL_STATE(37)] = 941,
  [SMALL_STATE(38)] = 957,
  [SMALL_STATE(39)] = 973,
  [SMALL_STATE(40)] = 989,
  [SMALL_STATE(41)] = 1005,
  [SMALL_STATE(42)] = 1021,
  [SMALL_STATE(43)] = 1034,
  [SMALL_STATE(44)] = 1047,
  [SMALL_STATE(45)] = 1060,
  [SMALL_STATE(46)] = 1073,
  [SMALL_STATE(47)] = 1086,
  [SMALL_STATE(48)] = 1099,
  [SMALL_STATE(49)] = 1112,
  [SMALL_STATE(50)] = 1125,
  [SMALL_STATE(51)] = 1138,
  [SMALL_STATE(52)] = 1151,
  [SMALL_STATE(53)] = 1164,
  [SMALL_STATE(54)] = 1177,
  [SMALL_STATE(55)] = 1190,
  [SMALL_STATE(56)] = 1201,
  [SMALL_STATE(57)] = 1212,
  [SMALL_STATE(58)] = 1223,
  [SMALL_STATE(59)] = 1234,
  [SMALL_STATE(60)] = 1245,
  [SMALL_STATE(61)] = 1256,
  [SMALL_STATE(62)] = 1266,
  [SMALL_STATE(63)] = 1276,
  [SMALL_STATE(64)] = 1286,
  [SMALL_STATE(65)] = 1296,
  [SMALL_STATE(66)] = 1306,
  [SMALL_STATE(67)] = 1314,
  [SMALL_STATE(68)] = 1324,
  [SMALL_STATE(69)] = 1332,
  [SMALL_STATE(70)] = 1342,
  [SMALL_STATE(71)] = 1350,
  [SMALL_STATE(72)] = 1360,
  [SMALL_STATE(73)] = 1370,
  [SMALL_STATE(74)] = 1380,
  [SMALL_STATE(75)] = 1390,
  [SMALL_STATE(76)] = 1400,
  [SMALL_STATE(77)] = 1407,
  [SMALL_STATE(78)] = 1412,
  [SMALL_STATE(79)] = 1417,
  [SMALL_STATE(80)] = 1422,
  [SMALL_STATE(81)] = 1427,
  [SMALL_STATE(82)] = 1432,
  [SMALL_STATE(83)] = 1437,
  [SMALL_STATE(84)] = 1442,
  [SMALL_STATE(85)] = 1447,
  [SMALL_STATE(86)] = 1452,
  [SMALL_STATE(87)] = 1457,
  [SMALL_STATE(88)] = 1462,
  [SMALL_STATE(89)] = 1467,
  [SMALL_STATE(90)] = 1472,
  [SMALL_STATE(91)] = 1476,
  [SMALL_STATE(92)] = 1480,
  [SMALL_STATE(93)] = 1484,
  [SMALL_STATE(94)] = 1488,
  [SMALL_STATE(95)] = 1492,
  [SMALL_STATE(96)] = 1496,
  [SMALL_STATE(97)] = 1500,
  [SMALL_STATE(98)] = 1504,
  [SMALL_STATE(99)] = 1508,
  [SMALL_STATE(100)] = 1512,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rvalue, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
    [ts_external_token_newline] = true,
  },
  [3] = {
    [ts_external_token_indent] = true,
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
