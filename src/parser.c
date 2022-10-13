#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym__bare_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_EQ = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym__binary = 8,
  sym__octal = 9,
  sym__hex = 10,
  sym__decimal = 11,
  anon_sym_false = 12,
  anon_sym_true = 13,
  sym_null = 14,
  sym__escaped_string = 15,
  sym__newline = 16,
  anon_sym_BSLASH = 17,
  anon_sym_SLASH_SLASH = 18,
  aux_sym_single_line_comment_token1 = 19,
  anon_sym_SLASH_STAR = 20,
  anon_sym_STAR_SLASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  aux_sym__commented_block_token1 = 24,
  sym__raw_string = 25,
  sym_document = 26,
  sym_node = 27,
  sym__node_prop_or_arg = 28,
  sym__node_children = 29,
  sym__node_terminator = 30,
  sym_prop = 31,
  sym_identifier = 32,
  sym_value = 33,
  sym_type = 34,
  sym_number = 35,
  sym_boolean = 36,
  sym_string = 37,
  sym__linespace = 38,
  sym__escline = 39,
  sym_single_line_comment = 40,
  sym_multi_line_comment = 41,
  sym__commented_block = 42,
  aux_sym_document_repeat1 = 43,
  aux_sym_document_repeat2 = 44,
  aux_sym_node_repeat1 = 45,
  aux_sym__node_children_repeat1 = 46,
  aux_sym_single_line_comment_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__bare_identifier] = "_bare_identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__binary] = "_binary",
  [sym__octal] = "_octal",
  [sym__hex] = "_hex",
  [sym__decimal] = "_decimal",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_null] = "null",
  [sym__escaped_string] = "_escaped_string",
  [sym__newline] = "_newline",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym__commented_block_token1] = "_commented_block_token1",
  [sym__raw_string] = "_raw_string",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym__node_prop_or_arg] = "_node_prop_or_arg",
  [sym__node_children] = "_node_children",
  [sym__node_terminator] = "_node_terminator",
  [sym_prop] = "prop",
  [sym_identifier] = "identifier",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym__linespace] = "_linespace",
  [sym__escline] = "_escline",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym__commented_block] = "_commented_block",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym__node_children_repeat1] = "_node_children_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__bare_identifier] = sym__bare_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__binary] = sym__binary,
  [sym__octal] = sym__octal,
  [sym__hex] = sym__hex,
  [sym__decimal] = sym__decimal,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_null] = sym_null,
  [sym__escaped_string] = sym__escaped_string,
  [sym__newline] = sym__newline,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__commented_block_token1] = aux_sym__commented_block_token1,
  [sym__raw_string] = sym__raw_string,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym__node_prop_or_arg] = sym__node_prop_or_arg,
  [sym__node_children] = sym__node_children,
  [sym__node_terminator] = sym__node_terminator,
  [sym_prop] = sym_prop,
  [sym_identifier] = sym_identifier,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym__linespace] = sym__linespace,
  [sym__escline] = sym__escline,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym__commented_block] = sym__commented_block,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym__node_children_repeat1] = aux_sym__node_children_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__bare_identifier] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym__escaped_string] = {
    .visible = false,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__commented_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__raw_string] = {
    .visible = false,
    .named = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
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
  [sym_string] = {
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
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__commented_block] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__node_children_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
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
  [45] = 45,
  [46] = 22,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 49,
  [53] = 53,
  [54] = 54,
  [55] = 50,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 31,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 18,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 60,
  [79] = 61,
};

static inline bool sym__bare_identifier_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= '"' || (c >= '(' && c <= ',')))
    : (c <= '/' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__bare_identifier_character_set_2(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '/' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__bare_identifier_character_set_3(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '9' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__bare_identifier_character_set_4(int32_t c) {
  return (c < ','
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= '"' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym__commented_block_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? c == '\t'
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8202 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(87);
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
      if (lookahead == '{') ADVANCE(33);
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
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(76);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 29:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(103);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 30:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 31:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 34:
      if (eof) ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(73);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(73);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) SKIP(37)
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) SKIP(37)
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (!sym__bare_identifier_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '0') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'u') ADVANCE(54);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(73);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(63);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(65);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (!sym__bare_identifier_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_null);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__escaped_string);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(96);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(90);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(99);
      if (!sym__bare_identifier_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(98);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__commented_block_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(104);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35, .external_lex_state = 1},
  [2] = {.lex_state = 22, .external_lex_state = 1},
  [3] = {.lex_state = 22, .external_lex_state = 1},
  [4] = {.lex_state = 22, .external_lex_state = 1},
  [5] = {.lex_state = 22, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 22, .external_lex_state = 1},
  [9] = {.lex_state = 22, .external_lex_state = 1},
  [10] = {.lex_state = 22, .external_lex_state = 1},
  [11] = {.lex_state = 22, .external_lex_state = 1},
  [12] = {.lex_state = 22, .external_lex_state = 1},
  [13] = {.lex_state = 22, .external_lex_state = 1},
  [14] = {.lex_state = 22, .external_lex_state = 1},
  [15] = {.lex_state = 22, .external_lex_state = 1},
  [16] = {.lex_state = 22, .external_lex_state = 1},
  [17] = {.lex_state = 22, .external_lex_state = 1},
  [18] = {.lex_state = 22, .external_lex_state = 1},
  [19] = {.lex_state = 36, .external_lex_state = 1},
  [20] = {.lex_state = 22, .external_lex_state = 1},
  [21] = {.lex_state = 22, .external_lex_state = 1},
  [22] = {.lex_state = 22, .external_lex_state = 1},
  [23] = {.lex_state = 22, .external_lex_state = 1},
  [24] = {.lex_state = 35, .external_lex_state = 1},
  [25] = {.lex_state = 35, .external_lex_state = 1},
  [26] = {.lex_state = 36, .external_lex_state = 1},
  [27] = {.lex_state = 35, .external_lex_state = 1},
  [28] = {.lex_state = 35, .external_lex_state = 1},
  [29] = {.lex_state = 35, .external_lex_state = 1},
  [30] = {.lex_state = 35, .external_lex_state = 1},
  [31] = {.lex_state = 36, .external_lex_state = 1},
  [32] = {.lex_state = 35, .external_lex_state = 1},
  [33] = {.lex_state = 35, .external_lex_state = 1},
  [34] = {.lex_state = 35, .external_lex_state = 1},
  [35] = {.lex_state = 35, .external_lex_state = 1},
  [36] = {.lex_state = 35, .external_lex_state = 1},
  [37] = {.lex_state = 35, .external_lex_state = 1},
  [38] = {.lex_state = 35, .external_lex_state = 1},
  [39] = {.lex_state = 35, .external_lex_state = 1},
  [40] = {.lex_state = 35, .external_lex_state = 1},
  [41] = {.lex_state = 35, .external_lex_state = 1},
  [42] = {.lex_state = 35, .external_lex_state = 1},
  [43] = {.lex_state = 35, .external_lex_state = 1},
  [44] = {.lex_state = 35, .external_lex_state = 1},
  [45] = {.lex_state = 35, .external_lex_state = 1},
  [46] = {.lex_state = 35, .external_lex_state = 1},
  [47] = {.lex_state = 35, .external_lex_state = 1},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 35, .external_lex_state = 1},
  [57] = {.lex_state = 35, .external_lex_state = 1},
  [58] = {.lex_state = 35, .external_lex_state = 1},
  [59] = {.lex_state = 35, .external_lex_state = 1},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 35, .external_lex_state = 1},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 30},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 30},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 30},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {(TSStateId)(-1)},
  [79] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__raw_string = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__raw_string] = sym__raw_string,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__raw_string] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_multi_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__bare_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym__escaped_string] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__raw_string] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(77),
    [sym_node] = STATE(29),
    [sym_identifier] = STATE(3),
    [sym_type] = STATE(57),
    [sym__linespace] = STATE(47),
    [sym_single_line_comment] = STATE(44),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(24),
    [aux_sym_document_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__bare_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym__escaped_string] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(7),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(53),
    [sym__node_terminator] = STATE(39),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym__escline] = STATE(7),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(8),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(51),
    [sym__node_terminator] = STATE(42),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym__escline] = STATE(6),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(4),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(53),
    [sym__node_terminator] = STATE(39),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(9),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(48),
    [sym__node_terminator] = STATE(43),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(9),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(53),
    [sym__node_terminator] = STATE(39),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(8),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [7] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(54),
    [sym__node_terminator] = STATE(45),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(7),
    [aux_sym_node_repeat1] = STATE(5),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [8] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym__node_children] = STATE(54),
    [sym__node_terminator] = STATE(45),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym_single_line_comment] = STATE(40),
    [sym_multi_line_comment] = STATE(8),
    [aux_sym_node_repeat1] = STATE(9),
    [sym__bare_identifier] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__binary] = ACTIONS(25),
    [sym__octal] = ACTIONS(25),
    [sym__hex] = ACTIONS(25),
    [sym__decimal] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym__escaped_string] = ACTIONS(31),
    [sym__newline] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(35),
  },
  [9] = {
    [sym__node_prop_or_arg] = STATE(23),
    [sym_prop] = STATE(10),
    [sym_identifier] = STATE(74),
    [sym_value] = STATE(10),
    [sym_type] = STATE(26),
    [sym_number] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_string] = STATE(16),
    [sym_multi_line_comment] = STATE(9),
    [aux_sym_node_repeat1] = STATE(9),
    [sym__bare_identifier] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(42),
    [sym__binary] = ACTIONS(45),
    [sym__octal] = ACTIONS(45),
    [sym__hex] = ACTIONS(45),
    [sym__decimal] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_true] = ACTIONS(48),
    [sym_null] = ACTIONS(51),
    [sym__escaped_string] = ACTIONS(54),
    [sym__newline] = ACTIONS(40),
    [anon_sym_SLASH_SLASH] = ACTIONS(40),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      anon_sym_BSLASH,
    ACTIONS(62), 1,
      sym__raw_string,
    STATE(10), 1,
      sym_multi_line_comment,
    STATE(20), 1,
      sym__escline,
    ACTIONS(60), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [32] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      sym__raw_string,
    STATE(11), 1,
      sym_multi_line_comment,
    ACTIONS(64), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [62] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(68), 1,
      sym__raw_string,
    STATE(12), 1,
      sym_multi_line_comment,
    ACTIONS(64), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [89] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      sym__raw_string,
    STATE(13), 1,
      sym_multi_line_comment,
    ACTIONS(70), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      sym__raw_string,
    STATE(14), 1,
      sym_multi_line_comment,
    ACTIONS(74), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      sym__raw_string,
    STATE(15), 1,
      sym_multi_line_comment,
    ACTIONS(78), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(84), 1,
      sym__raw_string,
    STATE(16), 1,
      sym_multi_line_comment,
    ACTIONS(82), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      sym__raw_string,
    STATE(17), 1,
      sym_multi_line_comment,
    ACTIONS(86), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [224] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      sym__raw_string,
    STATE(18), 1,
      sym_multi_line_comment,
    ACTIONS(90), 15,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [251] = 11,
    ACTIONS(25), 1,
      sym__decimal,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_null,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_value,
    STATE(19), 1,
      sym_multi_line_comment,
    STATE(26), 1,
      sym_type,
    ACTIONS(96), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(100), 2,
      sym__raw_string,
      sym__escaped_string,
    ACTIONS(94), 3,
      sym__binary,
      sym__octal,
      sym__hex,
    STATE(16), 3,
      sym_number,
      sym_boolean,
      sym_string,
  [291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      sym__raw_string,
    STATE(20), 1,
      sym_multi_line_comment,
    ACTIONS(104), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      sym__raw_string,
    STATE(21), 1,
      sym_multi_line_comment,
    ACTIONS(108), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      sym__raw_string,
    STATE(22), 1,
      sym_multi_line_comment,
    ACTIONS(112), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      sym__raw_string,
    STATE(23), 1,
      sym_multi_line_comment,
    ACTIONS(116), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
      anon_sym_LPAREN,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [395] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_identifier,
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(27), 1,
      aux_sym_document_repeat1,
    STATE(29), 1,
      sym_node,
    STATE(32), 1,
      aux_sym_document_repeat2,
    STATE(44), 1,
      sym_single_line_comment,
    STATE(47), 1,
      sym__linespace,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [442] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_identifier,
    STATE(25), 1,
      sym_multi_line_comment,
    STATE(35), 1,
      sym_node,
    STATE(36), 1,
      sym__linespace,
    STATE(37), 1,
      aux_sym__node_children_repeat1,
    STATE(44), 1,
      sym_single_line_comment,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [486] = 8,
    ACTIONS(25), 1,
      sym__decimal,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      sym_null,
    STATE(26), 1,
      sym_multi_line_comment,
    ACTIONS(96), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(100), 2,
      sym__raw_string,
      sym__escaped_string,
    ACTIONS(94), 3,
      sym__binary,
      sym__octal,
      sym__hex,
    STATE(13), 3,
      sym_number,
      sym_boolean,
      sym_string,
  [517] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      sym__newline,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    STATE(44), 1,
      sym_single_line_comment,
    STATE(47), 1,
      sym__linespace,
    ACTIONS(128), 2,
      anon_sym_LPAREN,
      sym__escaped_string,
    STATE(27), 2,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(126), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
  [546] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      aux_sym_document_repeat1,
    STATE(28), 1,
      sym_multi_line_comment,
    STATE(44), 1,
      sym_single_line_comment,
    STATE(47), 1,
      sym__linespace,
    ACTIONS(138), 2,
      anon_sym_LPAREN,
      sym__escaped_string,
    ACTIONS(136), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
  [577] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      aux_sym_document_repeat1,
    STATE(29), 1,
      sym_multi_line_comment,
    STATE(44), 1,
      sym_single_line_comment,
    STATE(47), 1,
      sym__linespace,
    ACTIONS(142), 2,
      anon_sym_LPAREN,
      sym__escaped_string,
    ACTIONS(140), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
  [608] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_identifier,
    STATE(30), 1,
      sym_multi_line_comment,
    STATE(34), 1,
      aux_sym__node_children_repeat1,
    STATE(35), 1,
      sym_node,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [640] = 4,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      sym__decimal,
    STATE(31), 1,
      sym_multi_line_comment,
    ACTIONS(146), 8,
      sym__raw_string,
      sym__binary,
      sym__octal,
      sym__hex,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym__escaped_string,
  [660] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_identifier,
    STATE(29), 1,
      sym_node,
    STATE(32), 1,
      sym_multi_line_comment,
    STATE(33), 1,
      aux_sym_document_repeat2,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [692] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      sym__escaped_string,
    STATE(3), 1,
      sym_identifier,
    STATE(29), 1,
      sym_node,
    STATE(57), 1,
      sym_type,
    ACTIONS(152), 2,
      sym__raw_string,
      sym__bare_identifier,
    STATE(33), 2,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
  [722] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym__escaped_string,
    STATE(3), 1,
      sym_identifier,
    STATE(35), 1,
      sym_node,
    STATE(57), 1,
      sym_type,
    ACTIONS(161), 2,
      sym__raw_string,
      sym__bare_identifier,
    STATE(34), 2,
      sym_multi_line_comment,
      aux_sym__node_children_repeat1,
  [752] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_multi_line_comment,
    STATE(44), 1,
      sym_single_line_comment,
    STATE(56), 1,
      sym__linespace,
    ACTIONS(172), 2,
      sym__raw_string,
      sym__bare_identifier,
    ACTIONS(174), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
  [780] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym__node_children_repeat1,
    STATE(35), 1,
      sym_node,
    STATE(36), 1,
      sym_multi_line_comment,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [812] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym__node_children_repeat1,
    STATE(35), 1,
      sym_node,
    STATE(37), 1,
      sym_multi_line_comment,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [844] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__escaped_string,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_identifier,
    STATE(29), 1,
      sym_node,
    STATE(33), 1,
      aux_sym_document_repeat2,
    STATE(38), 1,
      sym_multi_line_comment,
    STATE(57), 1,
      sym_type,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_multi_line_comment,
    ACTIONS(178), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(180), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_multi_line_comment,
    ACTIONS(182), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(184), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_multi_line_comment,
    ACTIONS(186), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(188), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [933] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_multi_line_comment,
    ACTIONS(190), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(192), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_multi_line_comment,
    ACTIONS(194), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(196), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_multi_line_comment,
    ACTIONS(198), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(200), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [990] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_multi_line_comment,
    ACTIONS(202), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(204), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1009] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_multi_line_comment,
    ACTIONS(114), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(112), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1028] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_multi_line_comment,
    ACTIONS(206), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(208), 4,
      anon_sym_LPAREN,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1046] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_single_line_comment,
    STATE(41), 1,
      sym__node_terminator,
    STATE(48), 1,
      sym_multi_line_comment,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      sym__newline,
  [1066] = 6,
    ACTIONS(214), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(220), 1,
      aux_sym__commented_block_token1,
    STATE(49), 1,
      sym_multi_line_comment,
    STATE(60), 1,
      sym__commented_block,
    ACTIONS(218), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1086] = 6,
    ACTIONS(214), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym__commented_block_token1,
    ACTIONS(222), 1,
      anon_sym_STAR_SLASH,
    STATE(50), 1,
      sym_multi_line_comment,
    STATE(61), 1,
      sym__commented_block,
    ACTIONS(218), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1106] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym__node_terminator,
    STATE(40), 1,
      sym_single_line_comment,
    STATE(51), 1,
      sym_multi_line_comment,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      sym__newline,
  [1126] = 6,
    ACTIONS(214), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(228), 1,
      aux_sym__commented_block_token1,
    STATE(52), 1,
      sym_multi_line_comment,
    STATE(78), 1,
      sym__commented_block,
    ACTIONS(226), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1146] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_single_line_comment,
    STATE(45), 1,
      sym__node_terminator,
    STATE(53), 1,
      sym_multi_line_comment,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      sym__newline,
  [1166] = 6,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_single_line_comment,
    STATE(43), 1,
      sym__node_terminator,
    STATE(54), 1,
      sym_multi_line_comment,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      sym__newline,
  [1186] = 6,
    ACTIONS(214), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym__commented_block_token1,
    ACTIONS(230), 1,
      anon_sym_STAR_SLASH,
    STATE(55), 1,
      sym_multi_line_comment,
    STATE(79), 1,
      sym__commented_block,
    ACTIONS(226), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_multi_line_comment,
    ACTIONS(232), 2,
      sym__raw_string,
      sym__bare_identifier,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym__escaped_string,
  [1222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__escaped_string,
    STATE(2), 1,
      sym_identifier,
    STATE(57), 1,
      sym_multi_line_comment,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [1239] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__escaped_string,
    STATE(58), 1,
      sym_multi_line_comment,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(234), 2,
      sym__raw_string,
      sym__bare_identifier,
  [1256] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym__escaped_string,
    STATE(59), 1,
      sym_multi_line_comment,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(234), 2,
      sym__raw_string,
      sym__bare_identifier,
  [1273] = 3,
    ACTIONS(238), 1,
      aux_sym__commented_block_token1,
    STATE(60), 1,
      sym_multi_line_comment,
    ACTIONS(236), 4,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1286] = 3,
    ACTIONS(242), 1,
      aux_sym__commented_block_token1,
    STATE(61), 1,
      sym_multi_line_comment,
    ACTIONS(240), 4,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      sym__newline,
    ACTIONS(246), 1,
      aux_sym_single_line_comment_token1,
    STATE(62), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
  [1313] = 5,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym__newline,
    ACTIONS(251), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_single_line_comment,
    STATE(63), 1,
      sym_multi_line_comment,
  [1329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      sym__escaped_string,
    STATE(64), 1,
      sym_multi_line_comment,
    ACTIONS(146), 2,
      sym__raw_string,
      sym__bare_identifier,
  [1343] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_multi_line_comment,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      sym__newline,
    ACTIONS(257), 1,
      aux_sym_single_line_comment_token1,
    STATE(62), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(66), 1,
      sym_multi_line_comment,
  [1371] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_multi_line_comment,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1383] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_multi_line_comment,
    ACTIONS(261), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1395] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(263), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(69), 1,
      sym_multi_line_comment,
  [1411] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_multi_line_comment,
    ACTIONS(66), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [1422] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_multi_line_comment,
    ACTIONS(265), 2,
      sym__newline,
      aux_sym_single_line_comment_token1,
  [1433] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      aux_sym_single_line_comment_token1,
    STATE(66), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(72), 1,
      sym_multi_line_comment,
  [1446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      aux_sym_single_line_comment_token1,
    STATE(69), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(73), 1,
      sym_multi_line_comment,
  [1459] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym_multi_line_comment,
  [1469] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_multi_line_comment,
  [1479] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_multi_line_comment,
  [1489] = 3,
    ACTIONS(102), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_multi_line_comment,
  [1499] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1503] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 32,
  [SMALL_STATE(12)] = 62,
  [SMALL_STATE(13)] = 89,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 197,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 291,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 395,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 486,
  [SMALL_STATE(27)] = 517,
  [SMALL_STATE(28)] = 546,
  [SMALL_STATE(29)] = 577,
  [SMALL_STATE(30)] = 608,
  [SMALL_STATE(31)] = 640,
  [SMALL_STATE(32)] = 660,
  [SMALL_STATE(33)] = 692,
  [SMALL_STATE(34)] = 722,
  [SMALL_STATE(35)] = 752,
  [SMALL_STATE(36)] = 780,
  [SMALL_STATE(37)] = 812,
  [SMALL_STATE(38)] = 844,
  [SMALL_STATE(39)] = 876,
  [SMALL_STATE(40)] = 895,
  [SMALL_STATE(41)] = 914,
  [SMALL_STATE(42)] = 933,
  [SMALL_STATE(43)] = 952,
  [SMALL_STATE(44)] = 971,
  [SMALL_STATE(45)] = 990,
  [SMALL_STATE(46)] = 1009,
  [SMALL_STATE(47)] = 1028,
  [SMALL_STATE(48)] = 1046,
  [SMALL_STATE(49)] = 1066,
  [SMALL_STATE(50)] = 1086,
  [SMALL_STATE(51)] = 1106,
  [SMALL_STATE(52)] = 1126,
  [SMALL_STATE(53)] = 1146,
  [SMALL_STATE(54)] = 1166,
  [SMALL_STATE(55)] = 1186,
  [SMALL_STATE(56)] = 1206,
  [SMALL_STATE(57)] = 1222,
  [SMALL_STATE(58)] = 1239,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1286,
  [SMALL_STATE(62)] = 1299,
  [SMALL_STATE(63)] = 1313,
  [SMALL_STATE(64)] = 1329,
  [SMALL_STATE(65)] = 1343,
  [SMALL_STATE(66)] = 1355,
  [SMALL_STATE(67)] = 1371,
  [SMALL_STATE(68)] = 1383,
  [SMALL_STATE(69)] = 1395,
  [SMALL_STATE(70)] = 1411,
  [SMALL_STATE(71)] = 1422,
  [SMALL_STATE(72)] = 1433,
  [SMALL_STATE(73)] = 1446,
  [SMALL_STATE(74)] = 1459,
  [SMALL_STATE(75)] = 1469,
  [SMALL_STATE(76)] = 1479,
  [SMALL_STATE(77)] = 1489,
  [SMALL_STATE(78)] = 1499,
  [SMALL_STATE(79)] = 1503,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(70),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(58),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(15),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(18),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(59),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(18),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(18),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(59),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_terminator, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_terminator, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__linespace, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__linespace, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commented_block, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commented_block, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(71),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_kdl_external_scanner_create(void);
void tree_sitter_kdl_external_scanner_destroy(void *);
bool tree_sitter_kdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_kdl_external_scanner_serialize(void *, char *);
void tree_sitter_kdl_external_scanner_deserialize(void *, const char *, unsigned);

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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__bare_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_kdl_external_scanner_create,
      tree_sitter_kdl_external_scanner_destroy,
      tree_sitter_kdl_external_scanner_scan,
      tree_sitter_kdl_external_scanner_serialize,
      tree_sitter_kdl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
