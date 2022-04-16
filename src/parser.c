#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__bare_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_EQ = 5,
  sym__binary = 6,
  sym__octal = 7,
  sym__hex = 8,
  sym__decimal = 9,
  anon_sym_false = 10,
  anon_sym_true = 11,
  sym_null = 12,
  sym__escaped_string = 13,
  sym__newline = 14,
  anon_sym_BSLASH = 15,
  anon_sym_SLASH_SLASH = 16,
  aux_sym_single_line_comment_token1 = 17,
  anon_sym_SLASH_STAR = 18,
  anon_sym_STAR_SLASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  aux_sym__commented_block_token1 = 22,
  sym__raw_string = 23,
  sym_document = 24,
  sym_node = 25,
  sym__node_prop_or_arg = 26,
  sym__node_children = 27,
  sym__node_terminator = 28,
  sym_prop = 29,
  sym_identifier = 30,
  sym_value = 31,
  sym_number = 32,
  sym_boolean = 33,
  sym_string = 34,
  sym__linespace = 35,
  sym__escline = 36,
  sym_single_line_comment = 37,
  sym_multi_line_comment = 38,
  sym__commented_block = 39,
  aux_sym_document_repeat1 = 40,
  aux_sym_document_repeat2 = 41,
  aux_sym_node_repeat1 = 42,
  aux_sym__node_children_repeat1 = 43,
  aux_sym_single_line_comment_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__bare_identifier] = "_bare_identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
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
          lookahead == '\f') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(90);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '(' || ',' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(85);
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
          lookahead == '\f') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(90);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '(' &&
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
          lookahead == '\f') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(90);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 29:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(101);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 30:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(94);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 31:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(95);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          lookahead == '\f') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(90);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '(' || ',' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(73);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
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
          lookahead != '(' &&
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
          lookahead == 8233) ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) SKIP(37)
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
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
      if (lookahead == '*') ADVANCE(99);
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
      if (lookahead == '0') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
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
      if (lookahead == 'e') ADVANCE(84);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__bare_identifier);
      if (lookahead == 'l') ADVANCE(86);
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
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_null);
      if (!sym__bare_identifier_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__escaped_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(94);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(88);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(95);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(97);
      if (!sym__bare_identifier_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__commented_block_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(102);
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
  [20] = {.lex_state = 35, .external_lex_state = 1},
  [21] = {.lex_state = 35, .external_lex_state = 1},
  [22] = {.lex_state = 35, .external_lex_state = 1},
  [23] = {.lex_state = 35, .external_lex_state = 1},
  [24] = {.lex_state = 35, .external_lex_state = 1},
  [25] = {.lex_state = 35, .external_lex_state = 1},
  [26] = {.lex_state = 35, .external_lex_state = 1},
  [27] = {.lex_state = 35, .external_lex_state = 1},
  [28] = {.lex_state = 35, .external_lex_state = 1},
  [29] = {.lex_state = 35, .external_lex_state = 1},
  [30] = {.lex_state = 35, .external_lex_state = 1},
  [31] = {.lex_state = 35, .external_lex_state = 1},
  [32] = {.lex_state = 35, .external_lex_state = 1},
  [33] = {.lex_state = 35, .external_lex_state = 1},
  [34] = {.lex_state = 35, .external_lex_state = 1},
  [35] = {.lex_state = 35, .external_lex_state = 1},
  [36] = {.lex_state = 35, .external_lex_state = 1},
  [37] = {.lex_state = 35, .external_lex_state = 1},
  [38] = {.lex_state = 35, .external_lex_state = 1},
  [39] = {.lex_state = 35, .external_lex_state = 1},
  [40] = {.lex_state = 35, .external_lex_state = 1},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 35, .external_lex_state = 1},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {(TSStateId)(-1)},
  [65] = {(TSStateId)(-1)},
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
    [sym_document] = STATE(61),
    [sym_node] = STATE(24),
    [sym_identifier] = STATE(2),
    [sym__linespace] = STATE(40),
    [sym_single_line_comment] = STATE(28),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(20),
    [aux_sym_document_repeat2] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__bare_identifier] = ACTIONS(7),
    [sym__escaped_string] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(7),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(18),
    [sym__node_children] = STATE(45),
    [sym__node_terminator] = STATE(30),
    [sym_prop] = STATE(8),
    [sym_identifier] = STATE(62),
    [sym_value] = STATE(8),
    [sym_number] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(12),
    [sym__escline] = STATE(3),
    [sym_single_line_comment] = STATE(37),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(5),
    [sym__bare_identifier] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym__binary] = ACTIONS(21),
    [sym__octal] = ACTIONS(21),
    [sym__hex] = ACTIONS(21),
    [sym__decimal] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [sym_null] = ACTIONS(25),
    [sym__escaped_string] = ACTIONS(27),
    [sym__newline] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(31),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(18),
    [sym__node_children] = STATE(41),
    [sym__node_terminator] = STATE(27),
    [sym_prop] = STATE(8),
    [sym_identifier] = STATE(62),
    [sym_value] = STATE(8),
    [sym_number] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(12),
    [sym_single_line_comment] = STATE(37),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(4),
    [sym__bare_identifier] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym__binary] = ACTIONS(21),
    [sym__octal] = ACTIONS(21),
    [sym__hex] = ACTIONS(21),
    [sym__decimal] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [sym_null] = ACTIONS(25),
    [sym__escaped_string] = ACTIONS(27),
    [sym__newline] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(31),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(18),
    [sym__node_children] = STATE(47),
    [sym__node_terminator] = STATE(31),
    [sym_prop] = STATE(8),
    [sym_identifier] = STATE(62),
    [sym_value] = STATE(8),
    [sym_number] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(12),
    [sym_single_line_comment] = STATE(37),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(6),
    [sym__bare_identifier] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym__binary] = ACTIONS(21),
    [sym__octal] = ACTIONS(21),
    [sym__hex] = ACTIONS(21),
    [sym__decimal] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [sym_null] = ACTIONS(25),
    [sym__escaped_string] = ACTIONS(27),
    [sym__newline] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(31),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(18),
    [sym__node_children] = STATE(41),
    [sym__node_terminator] = STATE(27),
    [sym_prop] = STATE(8),
    [sym_identifier] = STATE(62),
    [sym_value] = STATE(8),
    [sym_number] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(12),
    [sym_single_line_comment] = STATE(37),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(6),
    [sym__bare_identifier] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym__binary] = ACTIONS(21),
    [sym__octal] = ACTIONS(21),
    [sym__hex] = ACTIONS(21),
    [sym__decimal] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [sym_null] = ACTIONS(25),
    [sym__escaped_string] = ACTIONS(27),
    [sym__newline] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(31),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(18),
    [sym_prop] = STATE(8),
    [sym_identifier] = STATE(62),
    [sym_value] = STATE(8),
    [sym_number] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_string] = STATE(12),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(6),
    [sym__bare_identifier] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(36),
    [sym__binary] = ACTIONS(38),
    [sym__octal] = ACTIONS(38),
    [sym__hex] = ACTIONS(38),
    [sym__decimal] = ACTIONS(38),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [sym_null] = ACTIONS(44),
    [sym__escaped_string] = ACTIONS(47),
    [sym__newline] = ACTIONS(36),
    [anon_sym_SLASH_SLASH] = ACTIONS(36),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      sym__raw_string,
    STATE(7), 1,
      sym_multi_line_comment,
    ACTIONS(53), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [29] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      sym__raw_string,
    STATE(8), 1,
      sym_multi_line_comment,
    STATE(15), 1,
      sym__escline,
    ACTIONS(59), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [60] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      sym__raw_string,
    STATE(9), 1,
      sym_multi_line_comment,
    ACTIONS(63), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [86] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym__raw_string,
    STATE(10), 1,
      sym_multi_line_comment,
    ACTIONS(65), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [112] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      sym__raw_string,
    STATE(11), 1,
      sym_multi_line_comment,
    ACTIONS(53), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [138] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      sym__raw_string,
    STATE(12), 1,
      sym_multi_line_comment,
    ACTIONS(69), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [164] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym__raw_string,
    STATE(13), 1,
      sym_multi_line_comment,
    ACTIONS(73), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [190] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      sym__raw_string,
    STATE(14), 1,
      sym_multi_line_comment,
    ACTIONS(77), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [216] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      sym__raw_string,
    STATE(15), 1,
      sym_multi_line_comment,
    ACTIONS(81), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      sym__raw_string,
    STATE(16), 1,
      sym_multi_line_comment,
    ACTIONS(85), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      sym__raw_string,
    STATE(17), 1,
      sym_multi_line_comment,
    ACTIONS(89), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      sym__raw_string,
    STATE(18), 1,
      sym_multi_line_comment,
    ACTIONS(93), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__bare_identifier,
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
  [316] = 9,
    ACTIONS(21), 1,
      sym__decimal,
    ACTIONS(101), 1,
      sym_null,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_value,
    STATE(19), 1,
      sym_multi_line_comment,
    ACTIONS(99), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(103), 2,
      sym__raw_string,
      sym__escaped_string,
    ACTIONS(97), 3,
      sym__binary,
      sym__octal,
      sym__hex,
    STATE(12), 3,
      sym_number,
      sym_boolean,
      sym_string,
  [350] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(20), 1,
      sym_multi_line_comment,
    STATE(23), 1,
      aux_sym_document_repeat1,
    STATE(24), 1,
      sym_node,
    STATE(26), 1,
      aux_sym_document_repeat2,
    STATE(28), 1,
      sym_single_line_comment,
    STATE(40), 1,
      sym__linespace,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [391] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(21), 1,
      sym_multi_line_comment,
    STATE(25), 1,
      sym_node,
    STATE(28), 1,
      sym_single_line_comment,
    STATE(38), 1,
      sym__linespace,
    STATE(39), 1,
      aux_sym__node_children_repeat1,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [429] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      sym__escaped_string,
    STATE(22), 1,
      sym_multi_line_comment,
    STATE(23), 1,
      aux_sym_document_repeat1,
    STATE(28), 1,
      sym_single_line_comment,
    STATE(40), 1,
      sym__linespace,
    ACTIONS(111), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
  [459] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      sym__escaped_string,
    ACTIONS(119), 1,
      sym__newline,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_single_line_comment,
    STATE(40), 1,
      sym__linespace,
    STATE(23), 2,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(115), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
  [487] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      sym__escaped_string,
    STATE(22), 1,
      aux_sym_document_repeat1,
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(28), 1,
      sym_single_line_comment,
    STATE(40), 1,
      sym__linespace,
    ACTIONS(125), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
  [517] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_multi_line_comment,
    STATE(28), 1,
      sym_single_line_comment,
    STATE(48), 1,
      sym__linespace,
    ACTIONS(129), 2,
      sym__raw_string,
      sym__bare_identifier,
    ACTIONS(131), 2,
      anon_sym_RBRACE,
      sym__escaped_string,
  [544] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(24), 1,
      sym_node,
    STATE(26), 1,
      sym_multi_line_comment,
    STATE(33), 1,
      aux_sym_document_repeat2,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [570] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_multi_line_comment,
    ACTIONS(135), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(137), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [588] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_multi_line_comment,
    ACTIONS(139), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(141), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_multi_line_comment,
    ACTIONS(143), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(145), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [624] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_multi_line_comment,
    ACTIONS(147), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(149), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_multi_line_comment,
    ACTIONS(151), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [660] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym__escaped_string,
    STATE(2), 1,
      sym_identifier,
    STATE(25), 1,
      sym_node,
    ACTIONS(155), 2,
      sym__raw_string,
      sym__bare_identifier,
    STATE(32), 2,
      sym_multi_line_comment,
      aux_sym__node_children_repeat1,
  [684] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym__escaped_string,
    STATE(2), 1,
      sym_identifier,
    STATE(24), 1,
      sym_node,
    ACTIONS(163), 2,
      sym__raw_string,
      sym__bare_identifier,
    STATE(33), 2,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
  [708] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(25), 1,
      sym_node,
    STATE(32), 1,
      aux_sym__node_children_repeat1,
    STATE(34), 1,
      sym_multi_line_comment,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_multi_line_comment,
    ACTIONS(87), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(85), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [752] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(24), 1,
      sym_node,
    STATE(33), 1,
      aux_sym_document_repeat2,
    STATE(36), 1,
      sym_multi_line_comment,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_multi_line_comment,
    ACTIONS(171), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [796] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(25), 1,
      sym_node,
    STATE(34), 1,
      aux_sym__node_children_repeat1,
    STATE(38), 1,
      sym_multi_line_comment,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [822] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__escaped_string,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(25), 1,
      sym_node,
    STATE(32), 1,
      aux_sym__node_children_repeat1,
    STATE(39), 1,
      sym_multi_line_comment,
    ACTIONS(7), 2,
      sym__raw_string,
      sym__bare_identifier,
  [848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_multi_line_comment,
    ACTIONS(177), 3,
      sym__raw_string,
      ts_builtin_sym_end,
      sym__bare_identifier,
    ACTIONS(179), 3,
      sym__escaped_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [865] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym__node_terminator,
    STATE(37), 1,
      sym_single_line_comment,
    STATE(41), 1,
      sym_multi_line_comment,
    ACTIONS(181), 2,
      anon_sym_SEMI,
      sym__newline,
  [885] = 6,
    ACTIONS(185), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(191), 1,
      aux_sym__commented_block_token1,
    STATE(42), 1,
      sym_multi_line_comment,
    STATE(65), 1,
      sym__commented_block,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [905] = 6,
    ACTIONS(185), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(197), 1,
      aux_sym__commented_block_token1,
    STATE(43), 1,
      sym_multi_line_comment,
    STATE(49), 1,
      sym__commented_block,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [925] = 6,
    ACTIONS(185), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym__commented_block_token1,
    ACTIONS(199), 1,
      anon_sym_STAR_SLASH,
    STATE(44), 1,
      sym_multi_line_comment,
    STATE(64), 1,
      sym__commented_block,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [945] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym__node_terminator,
    STATE(37), 1,
      sym_single_line_comment,
    STATE(45), 1,
      sym_multi_line_comment,
    ACTIONS(181), 2,
      anon_sym_SEMI,
      sym__newline,
  [965] = 6,
    ACTIONS(185), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      aux_sym__commented_block_token1,
    ACTIONS(201), 1,
      anon_sym_STAR_SLASH,
    STATE(46), 1,
      sym_multi_line_comment,
    STATE(50), 1,
      sym__commented_block,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [985] = 6,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym__node_terminator,
    STATE(37), 1,
      sym_single_line_comment,
    STATE(47), 1,
      sym_multi_line_comment,
    ACTIONS(181), 2,
      anon_sym_SEMI,
      sym__newline,
  [1005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_multi_line_comment,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      sym__escaped_string,
    ACTIONS(203), 2,
      sym__raw_string,
      sym__bare_identifier,
  [1020] = 3,
    ACTIONS(207), 1,
      aux_sym__commented_block_token1,
    STATE(49), 1,
      sym_multi_line_comment,
    ACTIONS(205), 4,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1033] = 3,
    ACTIONS(211), 1,
      aux_sym__commented_block_token1,
    STATE(50), 1,
      sym_multi_line_comment,
    ACTIONS(209), 4,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1046] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_multi_line_comment,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      sym__newline,
    ACTIONS(217), 1,
      aux_sym_single_line_comment_token1,
    STATE(52), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
  [1072] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_multi_line_comment,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1084] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_multi_line_comment,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [1096] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_single_line_comment_token1,
    STATE(52), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(55), 1,
      sym_multi_line_comment,
  [1112] = 5,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      sym__newline,
    ACTIONS(230), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_single_line_comment,
    STATE(56), 1,
      sym_multi_line_comment,
  [1128] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(232), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(57), 1,
      sym_multi_line_comment,
  [1144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 1,
      aux_sym_single_line_comment_token1,
    STATE(55), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(58), 1,
      sym_multi_line_comment,
  [1157] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_multi_line_comment,
    ACTIONS(234), 2,
      sym__newline,
      aux_sym_single_line_comment_token1,
  [1168] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 1,
      aux_sym_single_line_comment_token1,
    STATE(57), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(60), 1,
      sym_multi_line_comment,
  [1181] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_multi_line_comment,
  [1191] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_EQ,
    STATE(62), 1,
      sym_multi_line_comment,
  [1201] = 3,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_multi_line_comment,
  [1211] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [1215] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 459,
  [SMALL_STATE(24)] = 487,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 544,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 588,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 642,
  [SMALL_STATE(32)] = 660,
  [SMALL_STATE(33)] = 684,
  [SMALL_STATE(34)] = 708,
  [SMALL_STATE(35)] = 734,
  [SMALL_STATE(36)] = 752,
  [SMALL_STATE(37)] = 778,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 822,
  [SMALL_STATE(40)] = 848,
  [SMALL_STATE(41)] = 865,
  [SMALL_STATE(42)] = 885,
  [SMALL_STATE(43)] = 905,
  [SMALL_STATE(44)] = 925,
  [SMALL_STATE(45)] = 945,
  [SMALL_STATE(46)] = 965,
  [SMALL_STATE(47)] = 985,
  [SMALL_STATE(48)] = 1005,
  [SMALL_STATE(49)] = 1020,
  [SMALL_STATE(50)] = 1033,
  [SMALL_STATE(51)] = 1046,
  [SMALL_STATE(52)] = 1058,
  [SMALL_STATE(53)] = 1072,
  [SMALL_STATE(54)] = 1084,
  [SMALL_STATE(55)] = 1096,
  [SMALL_STATE(56)] = 1112,
  [SMALL_STATE(57)] = 1128,
  [SMALL_STATE(58)] = 1144,
  [SMALL_STATE(59)] = 1157,
  [SMALL_STATE(60)] = 1168,
  [SMALL_STATE(61)] = 1181,
  [SMALL_STATE(62)] = 1191,
  [SMALL_STATE(63)] = 1201,
  [SMALL_STATE(64)] = 1211,
  [SMALL_STATE(65)] = 1215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(63),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(14),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__linespace, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__linespace, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(9),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(9),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_terminator, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_terminator, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commented_block, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commented_block, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
