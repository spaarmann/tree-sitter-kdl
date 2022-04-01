#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_SEMI = 3,
  anon_sym_EQ = 4,
  sym_identifier = 5,
  sym__binary = 6,
  sym__octal = 7,
  sym__hex = 8,
  sym__decimal = 9,
  anon_sym_false = 10,
  anon_sym_true = 11,
  sym_null = 12,
  sym_string = 13,
  sym__newline = 14,
  anon_sym_BSLASH = 15,
  anon_sym_SLASH_SLASH = 16,
  aux_sym_single_line_comment_token1 = 17,
  sym_document = 18,
  sym_node = 19,
  sym__node_prop_or_arg = 20,
  sym__node_children = 21,
  sym__node_terminator = 22,
  sym_prop = 23,
  sym_value = 24,
  sym_number = 25,
  sym_boolean = 26,
  sym__linespace = 27,
  sym__escline = 28,
  sym_single_line_comment = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_node_repeat1 = 31,
  aux_sym_single_line_comment_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym__binary] = "_binary",
  [sym__octal] = "_octal",
  [sym__hex] = "_hex",
  [sym__decimal] = "_decimal",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_null] = "null",
  [sym_string] = "string",
  [sym__newline] = "_newline",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym__node_prop_or_arg] = "_node_prop_or_arg",
  [sym__node_children] = "_node_children",
  [sym__node_terminator] = "_node_terminator",
  [sym_prop] = "prop",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym__linespace] = "_linespace",
  [sym__escline] = "_escline",
  [sym_single_line_comment] = "single_line_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym__binary] = sym__binary,
  [sym__octal] = sym__octal,
  [sym__hex] = sym__hex,
  [sym__decimal] = sym__decimal,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_null] = sym_null,
  [sym_string] = sym_string,
  [sym__newline] = sym__newline,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym__node_prop_or_arg] = sym__node_prop_or_arg,
  [sym__node_children] = sym__node_children,
  [sym__node_terminator] = sym__node_terminator,
  [sym_prop] = sym_prop,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym__linespace] = sym__linespace,
  [sym__escline] = sym__escline,
  [sym_single_line_comment] = sym_single_line_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym__node_prop_or_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__node_children] = {
    .visible = false,
    .named = true,
  },
  [sym__node_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [sym__linespace] = {
    .visible = false,
    .named = true,
  },
  [sym__escline] = {
    .visible = false,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_line_comment_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(31)
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(1);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(24)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(31)
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(32)
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
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
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(44),
    [sym_node] = STATE(17),
    [sym__linespace] = STATE(27),
    [sym_single_line_comment] = STATE(27),
    [aux_sym_document_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(3),
    [sym__node_children] = STATE(19),
    [sym__node_terminator] = STATE(23),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym__escline] = STATE(5),
    [sym_single_line_comment] = STATE(23),
    [aux_sym_node_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym__newline] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym__node_children] = STATE(26),
    [sym__node_terminator] = STATE(25),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_single_line_comment] = STATE(25),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(29),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym__newline] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym__node_children] = STATE(21),
    [sym__node_terminator] = STATE(22),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_single_line_comment] = STATE(22),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(31),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym__newline] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(4),
    [sym__node_children] = STATE(26),
    [sym__node_terminator] = STATE(25),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_single_line_comment] = STATE(25),
    [aux_sym_node_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(29),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym__newline] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(11),
    [sym_boolean] = STATE(11),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym__binary] = ACTIONS(38),
    [sym__octal] = ACTIONS(38),
    [sym__hex] = ACTIONS(38),
    [sym__decimal] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(44),
    [anon_sym_true] = ACTIONS(44),
    [sym_null] = ACTIONS(47),
    [sym_string] = ACTIONS(50),
    [sym__newline] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      sym__escline,
    ACTIONS(55), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(53), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [24] = 2,
    ACTIONS(59), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(57), 9,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [43] = 2,
    ACTIONS(63), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(61), 9,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [62] = 2,
    ACTIONS(67), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(65), 9,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [81] = 2,
    ACTIONS(71), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(69), 9,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [100] = 2,
    ACTIONS(75), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(73), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [118] = 2,
    ACTIONS(79), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(77), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [136] = 2,
    ACTIONS(83), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(81), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [154] = 6,
    ACTIONS(19), 1,
      sym__decimal,
    STATE(8), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_null,
      sym_string,
    ACTIONS(85), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(11), 2,
      sym_number,
      sym_boolean,
    ACTIONS(17), 3,
      sym__binary,
      sym__octal,
      sym__hex,
  [178] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym__newline,
    STATE(17), 1,
      sym_node,
    STATE(28), 1,
      aux_sym_document_repeat1,
    STATE(31), 2,
      sym__linespace,
      sym_single_line_comment,
  [201] = 4,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      sym__newline,
    STATE(39), 2,
      sym__linespace,
      sym_single_line_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [217] = 4,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [231] = 3,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(25), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [243] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [251] = 3,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(20), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [263] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [271] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [279] = 1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [287] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [295] = 3,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(22), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [307] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_node,
    STATE(32), 1,
      aux_sym_document_repeat1,
  [320] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [333] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [346] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [359] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_node,
    STATE(30), 1,
      aux_sym_document_repeat1,
  [372] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [385] = 3,
    ACTIONS(118), 1,
      sym__newline,
    ACTIONS(120), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_single_line_comment,
  [395] = 3,
    ACTIONS(122), 1,
      sym__newline,
    ACTIONS(124), 1,
      aux_sym_single_line_comment_token1,
    STATE(35), 1,
      aux_sym_single_line_comment_repeat1,
  [405] = 3,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(128), 1,
      aux_sym_single_line_comment_token1,
    STATE(35), 1,
      aux_sym_single_line_comment_repeat1,
  [415] = 1,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [421] = 1,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [427] = 1,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [433] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [439] = 3,
    ACTIONS(124), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(137), 1,
      sym__newline,
    STATE(35), 1,
      aux_sym_single_line_comment_repeat1,
  [449] = 2,
    ACTIONS(139), 1,
      aux_sym_single_line_comment_token1,
    STATE(34), 1,
      aux_sym_single_line_comment_repeat1,
  [456] = 2,
    ACTIONS(141), 1,
      aux_sym_single_line_comment_token1,
    STATE(40), 1,
      aux_sym_single_line_comment_repeat1,
  [463] = 1,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [467] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 24,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 62,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 251,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 271,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 295,
  [SMALL_STATE(27)] = 307,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 346,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 372,
  [SMALL_STATE(33)] = 385,
  [SMALL_STATE(34)] = 395,
  [SMALL_STATE(35)] = 405,
  [SMALL_STATE(36)] = 415,
  [SMALL_STATE(37)] = 421,
  [SMALL_STATE(38)] = 427,
  [SMALL_STATE(39)] = 433,
  [SMALL_STATE(40)] = 439,
  [SMALL_STATE(41)] = 449,
  [SMALL_STATE(42)] = 456,
  [SMALL_STATE(43)] = 463,
  [SMALL_STATE(44)] = 467,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(43),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kdl(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
