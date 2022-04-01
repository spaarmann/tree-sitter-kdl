#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  sym__newline = 13,
  anon_sym_BSLASH = 14,
  anon_sym_SLASH_SLASH = 15,
  aux_sym_single_line_comment_token1 = 16,
  sym_document = 17,
  sym_node = 18,
  sym__node_prop_or_arg = 19,
  sym__node_children = 20,
  sym__node_terminator = 21,
  sym_prop = 22,
  sym_value = 23,
  sym_number = 24,
  sym_boolean = 25,
  sym__linespace = 26,
  sym__escline = 27,
  sym_single_line_comment = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_node_repeat1 = 30,
  aux_sym_single_line_comment_repeat1 = 31,
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
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(21)
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(15)
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(21)
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) SKIP(22)
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '}') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
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
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
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
    [sym__newline] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(25),
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
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym__newline] = ACTIONS(27),
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
    [anon_sym_SEMI] = ACTIONS(29),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym__newline] = ACTIONS(29),
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
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym__newline] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(11),
    [sym_boolean] = STATE(11),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym__binary] = ACTIONS(36),
    [sym__octal] = ACTIONS(36),
    [sym__hex] = ACTIONS(36),
    [sym__decimal] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(42),
    [anon_sym_true] = ACTIONS(42),
    [sym_null] = ACTIONS(45),
    [sym__newline] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      sym__escline,
    ACTIONS(50), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(48), 7,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [23] = 2,
    ACTIONS(54), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(52), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [41] = 2,
    ACTIONS(58), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(56), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [59] = 2,
    ACTIONS(62), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(60), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [77] = 2,
    ACTIONS(66), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(64), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [95] = 2,
    ACTIONS(70), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(68), 7,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [112] = 2,
    ACTIONS(74), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(72), 7,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [129] = 2,
    ACTIONS(78), 5,
      sym_identifier,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
    ACTIONS(76), 7,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [146] = 6,
    ACTIONS(19), 1,
      sym__decimal,
    ACTIONS(82), 1,
      sym_null,
    STATE(8), 1,
      sym_value,
    ACTIONS(80), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(11), 2,
      sym_number,
      sym_boolean,
    ACTIONS(17), 3,
      sym__binary,
      sym__octal,
      sym__hex,
  [169] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__newline,
    STATE(17), 1,
      sym_node,
    STATE(28), 1,
      aux_sym_document_repeat1,
    STATE(31), 2,
      sym__linespace,
      sym_single_line_comment,
  [192] = 4,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(90), 1,
      sym__newline,
    STATE(39), 2,
      sym__linespace,
      sym_single_line_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [208] = 4,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [222] = 3,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(25), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [234] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [242] = 3,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(20), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [254] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [262] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [270] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [278] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [286] = 3,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(22), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [298] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_node,
    STATE(32), 1,
      aux_sym_document_repeat1,
  [311] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [324] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [337] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [350] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_node,
    STATE(30), 1,
      aux_sym_document_repeat1,
  [363] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_node,
    STATE(18), 1,
      aux_sym_document_repeat1,
  [376] = 3,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(117), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_single_line_comment,
  [386] = 3,
    ACTIONS(119), 1,
      sym__newline,
    ACTIONS(121), 1,
      aux_sym_single_line_comment_token1,
    STATE(35), 1,
      aux_sym_single_line_comment_repeat1,
  [396] = 3,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(125), 1,
      aux_sym_single_line_comment_token1,
    STATE(35), 1,
      aux_sym_single_line_comment_repeat1,
  [406] = 1,
    ACTIONS(128), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [412] = 1,
    ACTIONS(130), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [418] = 1,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [424] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [430] = 3,
    ACTIONS(121), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(134), 1,
      sym__newline,
    STATE(35), 1,
      aux_sym_single_line_comment_repeat1,
  [440] = 2,
    ACTIONS(136), 1,
      aux_sym_single_line_comment_token1,
    STATE(34), 1,
      aux_sym_single_line_comment_repeat1,
  [447] = 2,
    ACTIONS(138), 1,
      aux_sym_single_line_comment_token1,
    STATE(40), 1,
      aux_sym_single_line_comment_repeat1,
  [454] = 1,
    ACTIONS(140), 1,
      anon_sym_EQ,
  [458] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 23,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 95,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 254,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 270,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 298,
  [SMALL_STATE(28)] = 311,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 350,
  [SMALL_STATE(32)] = 363,
  [SMALL_STATE(33)] = 376,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 396,
  [SMALL_STATE(36)] = 406,
  [SMALL_STATE(37)] = 412,
  [SMALL_STATE(38)] = 418,
  [SMALL_STATE(39)] = 424,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 440,
  [SMALL_STATE(42)] = 447,
  [SMALL_STATE(43)] = 454,
  [SMALL_STATE(44)] = 458,
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
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(43),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(35),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
