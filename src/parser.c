#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  sym_string = 9,
  sym_octal_number = 10,
  sym_hex_number = 11,
  sym_exponential_number = 12,
  aux_sym_number_token1 = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  anon_sym_POUND = 16,
  sym_unquoted_string = 17,
  sym_indent = 18,
  sym_dedent = 19,
  sym_newline = 20,
  sym_document = 21,
  sym_property = 22,
  sym_lvalue = 23,
  sym_rvalue = 24,
  sym_entity = 25,
  sym_param_list = 26,
  sym_parameter = 27,
  sym_array = 28,
  sym_list = 29,
  sym_list_item = 30,
  sym_number = 31,
  sym_boolean = 32,
  sym_comment = 33,
  aux_sym_document_repeat1 = 34,
  aux_sym_param_list_repeat1 = 35,
  aux_sym_array_repeat1 = 36,
  aux_sym_list_repeat1 = 37,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 18,
  [21] = 13,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 15,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 28,
  [37] = 26,
  [38] = 38,
  [39] = 24,
  [40] = 40,
  [41] = 22,
  [42] = 29,
  [43] = 27,
  [44] = 40,
  [45] = 38,
  [46] = 25,
  [47] = 23,
  [48] = 30,
  [49] = 49,
  [50] = 33,
  [51] = 35,
  [52] = 34,
  [53] = 49,
  [54] = 54,
  [55] = 40,
  [56] = 38,
  [57] = 31,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 58,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 59,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 80,
  [84] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 't') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ']') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_octal_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_exponential_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_exponential_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14, .external_lex_state = 3},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14, .external_lex_state = 3},
  [19] = {.lex_state = 14, .external_lex_state = 3},
  [20] = {.lex_state = 14, .external_lex_state = 3},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14, .external_lex_state = 3},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14, .external_lex_state = 3},
  [37] = {.lex_state = 14, .external_lex_state = 3},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14, .external_lex_state = 3},
  [40] = {.lex_state = 14, .external_lex_state = 3},
  [41] = {.lex_state = 14, .external_lex_state = 3},
  [42] = {.lex_state = 14, .external_lex_state = 3},
  [43] = {.lex_state = 14, .external_lex_state = 3},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14, .external_lex_state = 3},
  [46] = {.lex_state = 14, .external_lex_state = 3},
  [47] = {.lex_state = 14, .external_lex_state = 3},
  [48] = {.lex_state = 14, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 14, .external_lex_state = 3},
  [51] = {.lex_state = 14, .external_lex_state = 3},
  [52] = {.lex_state = 14, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 14, .external_lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
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
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(82),
    [sym_property] = STATE(17),
    [sym_lvalue] = STATE(80),
    [sym_comment] = STATE(34),
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    STATE(59), 1,
      sym_rvalue,
    ACTIONS(17), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(19), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [38] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_rvalue,
    ACTIONS(17), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(19), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [76] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    STATE(72), 1,
      sym_rvalue,
    ACTIONS(17), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(19), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [111] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_indent,
    STATE(56), 1,
      sym_rvalue,
    ACTIONS(17), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(19), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [146] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(23), 1,
      sym_indent,
    STATE(70), 1,
      sym_rvalue,
    ACTIONS(17), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(19), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [181] = 9,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_string,
    ACTIONS(41), 1,
      sym_indent,
    STATE(45), 1,
      sym_rvalue,
    ACTIONS(35), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(37), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [216] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_string,
    ACTIONS(43), 1,
      sym_indent,
    STATE(38), 1,
      sym_rvalue,
    ACTIONS(17), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(19), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [251] = 9,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_string,
    ACTIONS(45), 1,
      sym_indent,
    STATE(74), 1,
      sym_rvalue,
    ACTIONS(35), 2,
      sym_octal_number,
      sym_hex_number,
    ACTIONS(37), 2,
      sym_exponential_number,
      aux_sym_number_token1,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 5,
      sym_entity,
      sym_array,
      sym_list,
      sym_number,
      sym_boolean,
  [286] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(19), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(49), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [311] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(18), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(53), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [336] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(20), 2,
      sym_property,
      aux_sym_document_repeat1,
    STATE(49), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [361] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_property,
    STATE(75), 1,
      sym_param_list,
    STATE(83), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
  [384] = 6,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    STATE(80), 1,
      sym_lvalue,
    ACTIONS(55), 2,
      sym_identifier,
      sym_string,
    STATE(14), 2,
      sym_property,
      aux_sym_document_repeat1,
  [405] = 2,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [418] = 6,
    ACTIONS(53), 1,
      sym_dedent,
    ACTIONS(65), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(55), 2,
      sym_identifier,
      sym_string,
    STATE(16), 2,
      sym_property,
      aux_sym_document_repeat1,
  [439] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
    STATE(80), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(14), 2,
      sym_property,
      aux_sym_document_repeat1,
  [460] = 6,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      sym_dedent,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(16), 2,
      sym_property,
      aux_sym_document_repeat1,
  [481] = 6,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      sym_dedent,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(16), 2,
      sym_property,
      aux_sym_document_repeat1,
  [502] = 6,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      sym_dedent,
    STATE(52), 1,
      sym_comment,
    STATE(81), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
    STATE(16), 2,
      sym_property,
      aux_sym_document_repeat1,
  [523] = 7,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(64), 1,
      sym_property,
    STATE(78), 1,
      sym_param_list,
    STATE(83), 1,
      sym_lvalue,
    ACTIONS(5), 2,
      sym_identifier,
      sym_string,
  [546] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [556] = 1,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [566] = 1,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [576] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [586] = 1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [596] = 1,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [606] = 1,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [616] = 1,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [626] = 1,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [636] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [645] = 2,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [656] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [665] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [674] = 1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [683] = 1,
    ACTIONS(88), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [691] = 1,
    ACTIONS(84), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [699] = 2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [709] = 1,
    ACTIONS(82), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [717] = 2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(106), 4,
      sym_dedent,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [727] = 1,
    ACTIONS(78), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [735] = 1,
    ACTIONS(90), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [743] = 1,
    ACTIONS(86), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [751] = 2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [761] = 2,
    STATE(50), 1,
      sym_comment,
    ACTIONS(104), 4,
      sym_dedent,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [771] = 1,
    ACTIONS(61), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [779] = 1,
    ACTIONS(80), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [787] = 1,
    ACTIONS(92), 5,
      sym_dedent,
      anon_sym_DASH,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [795] = 3,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_dedent,
    STATE(54), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [806] = 1,
    ACTIONS(98), 4,
      sym_dedent,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [813] = 1,
    ACTIONS(102), 4,
      sym_dedent,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [820] = 1,
    ACTIONS(100), 4,
      sym_dedent,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [827] = 3,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(110), 1,
      sym_dedent,
    STATE(54), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [838] = 3,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      sym_dedent,
    STATE(54), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [849] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [860] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [871] = 1,
    ACTIONS(94), 4,
      sym_dedent,
      sym_identifier,
      sym_string,
      anon_sym_POUND,
  [878] = 2,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(53), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [886] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_array_repeat1,
  [896] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_param_list_repeat1,
  [906] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(71), 1,
      sym_parameter,
  [916] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [926] = 2,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(49), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [934] = 3,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_param_list_repeat1,
  [944] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [954] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_array_repeat1,
  [964] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_array_repeat1,
  [974] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_param_list_repeat1,
  [984] = 3,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_parameter,
  [994] = 1,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [999] = 1,
    ACTIONS(142), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1004] = 1,
    ACTIONS(149), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1009] = 2,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(71), 1,
      sym_parameter,
  [1016] = 1,
    ACTIONS(151), 2,
      sym_dedent,
      anon_sym_DASH,
  [1021] = 1,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [1025] = 1,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [1029] = 1,
    ACTIONS(157), 1,
      anon_sym_COLON,
  [1033] = 1,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [1037] = 1,
    ACTIONS(161), 1,
      sym_unquoted_string,
  [1041] = 1,
    ACTIONS(163), 1,
      anon_sym_COLON,
  [1045] = 1,
    ACTIONS(165), 1,
      anon_sym_COLON,
  [1049] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [1053] = 1,
    ACTIONS(169), 1,
      anon_sym_COLON,
  [1057] = 1,
    ACTIONS(171), 1,
      sym_unquoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 384,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 439,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 481,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 546,
  [SMALL_STATE(23)] = 556,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 576,
  [SMALL_STATE(26)] = 586,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 606,
  [SMALL_STATE(29)] = 616,
  [SMALL_STATE(30)] = 626,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 645,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 665,
  [SMALL_STATE(35)] = 674,
  [SMALL_STATE(36)] = 683,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 709,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 727,
  [SMALL_STATE(42)] = 735,
  [SMALL_STATE(43)] = 743,
  [SMALL_STATE(44)] = 751,
  [SMALL_STATE(45)] = 761,
  [SMALL_STATE(46)] = 771,
  [SMALL_STATE(47)] = 779,
  [SMALL_STATE(48)] = 787,
  [SMALL_STATE(49)] = 795,
  [SMALL_STATE(50)] = 806,
  [SMALL_STATE(51)] = 813,
  [SMALL_STATE(52)] = 820,
  [SMALL_STATE(53)] = 827,
  [SMALL_STATE(54)] = 838,
  [SMALL_STATE(55)] = 849,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 871,
  [SMALL_STATE(58)] = 878,
  [SMALL_STATE(59)] = 886,
  [SMALL_STATE(60)] = 896,
  [SMALL_STATE(61)] = 906,
  [SMALL_STATE(62)] = 916,
  [SMALL_STATE(63)] = 926,
  [SMALL_STATE(64)] = 934,
  [SMALL_STATE(65)] = 944,
  [SMALL_STATE(66)] = 954,
  [SMALL_STATE(67)] = 964,
  [SMALL_STATE(68)] = 974,
  [SMALL_STATE(69)] = 984,
  [SMALL_STATE(70)] = 994,
  [SMALL_STATE(71)] = 999,
  [SMALL_STATE(72)] = 1004,
  [SMALL_STATE(73)] = 1009,
  [SMALL_STATE(74)] = 1016,
  [SMALL_STATE(75)] = 1021,
  [SMALL_STATE(76)] = 1025,
  [SMALL_STATE(77)] = 1029,
  [SMALL_STATE(78)] = 1033,
  [SMALL_STATE(79)] = 1037,
  [SMALL_STATE(80)] = 1041,
  [SMALL_STATE(81)] = 1045,
  [SMALL_STATE(82)] = 1049,
  [SMALL_STATE(83)] = 1053,
  [SMALL_STATE(84)] = 1057,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(73),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_newline] = true,
  },
  [2] = {
    [ts_external_token_indent] = true,
  },
  [3] = {
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
