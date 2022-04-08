#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
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
  sym_string = 13,
  sym__newline = 14,
  anon_sym_BSLASH = 15,
  anon_sym_SLASH_SLASH = 16,
  aux_sym_single_line_comment_token1 = 17,
  anon_sym_SLASH_STAR = 18,
  anon_sym_STAR_SLASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  aux_sym__commented_block_token1 = 22,
  sym_document = 23,
  sym_node = 24,
  sym__node_prop_or_arg = 25,
  sym__node_children = 26,
  sym__node_terminator = 27,
  sym_prop = 28,
  sym_value = 29,
  sym_number = 30,
  sym_boolean = 31,
  sym__linespace = 32,
  sym__escline = 33,
  sym_single_line_comment = 34,
  sym_multi_line_comment = 35,
  sym__commented_block = 36,
  aux_sym_document_repeat1 = 37,
  aux_sym_document_repeat2 = 38,
  aux_sym_node_repeat1 = 39,
  aux_sym__node_children_repeat1 = 40,
  aux_sym_single_line_comment_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [sym_string] = "string",
  [sym__newline] = "_newline",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym__commented_block_token1] = "_commented_block_token1",
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
  [sym_identifier] = sym_identifier,
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
  [sym_string] = sym_string,
  [sym__newline] = sym__newline,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__commented_block_token1] = aux_sym__commented_block_token1,
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
  [sym_identifier] = {
    .visible = true,
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

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= 31)
      : (c <= '"' || (c >= '(' && c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < ';'
        ? (c >= '0' && c <= '9')
        : c <= '>')
      : (c <= ']' || c == '{'))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static inline bool sym_identifier_character_set_4(int32_t c) {
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '(' || ',' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(84);
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
      if (lookahead == '{') ADVANCE(32);
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
          lookahead == ' ') SKIP(22)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 28:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(100);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 29:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(93);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 30:
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 33:
      if (eof) ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '(' || ',' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(72);
      END_STATE();
    case 34:
      if (eof) ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) SKIP(36)
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(85);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(52);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(50);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(53);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(72);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(62);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(64);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_null);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(93);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(87);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(96);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(72);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(95);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__commented_block_token1);
      if (aux_sym__commented_block_token1_character_set_1(lookahead)) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(101);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {(TSStateId)(-1)},
  [61] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_multi_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_string] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(59),
    [sym_node] = STATE(21),
    [sym__linespace] = STATE(41),
    [sym_single_line_comment] = STATE(31),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_document_repeat2] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(14),
    [sym__node_children] = STATE(28),
    [sym__node_terminator] = STATE(27),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym__escline] = STATE(5),
    [sym_single_line_comment] = STATE(33),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym__binary] = ACTIONS(19),
    [sym__octal] = ACTIONS(19),
    [sym__hex] = ACTIONS(19),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym__newline] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(14),
    [sym__node_children] = STATE(34),
    [sym__node_terminator] = STATE(32),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_single_line_comment] = STATE(33),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym__binary] = ACTIONS(19),
    [sym__octal] = ACTIONS(19),
    [sym__hex] = ACTIONS(19),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym__newline] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(14),
    [sym__node_children] = STATE(29),
    [sym__node_terminator] = STATE(35),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_single_line_comment] = STATE(33),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym__binary] = ACTIONS(19),
    [sym__octal] = ACTIONS(19),
    [sym__hex] = ACTIONS(19),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym__newline] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(14),
    [sym__node_children] = STATE(29),
    [sym__node_terminator] = STATE(35),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_single_line_comment] = STATE(33),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym__binary] = ACTIONS(19),
    [sym__octal] = ACTIONS(19),
    [sym__hex] = ACTIONS(19),
    [sym__decimal] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym__newline] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(14), 1,
      sym__node_prop_or_arg,
    ACTIONS(35), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(38), 2,
      sym_null,
      sym_string,
    STATE(6), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(7), 2,
      sym_prop,
      sym_value,
    STATE(8), 2,
      sym_number,
      sym_boolean,
    ACTIONS(30), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 4,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
  [42] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_multi_line_comment,
    STATE(12), 1,
      sym__escline,
    ACTIONS(41), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [70] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_multi_line_comment,
    ACTIONS(43), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [93] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_multi_line_comment,
    ACTIONS(45), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [116] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_multi_line_comment,
    ACTIONS(47), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [139] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_multi_line_comment,
    ACTIONS(49), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_BSLASH,
      anon_sym_SLASH_SLASH,
  [162] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_multi_line_comment,
    ACTIONS(51), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [184] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_multi_line_comment,
    ACTIONS(53), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [206] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_multi_line_comment,
    ACTIONS(55), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [228] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_multi_line_comment,
    ACTIONS(57), 13,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym__binary,
      sym__octal,
      sym__hex,
      sym__decimal,
      anon_sym_false,
      anon_sym_true,
      sym_null,
      sym_string,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [250] = 8,
    ACTIONS(19), 1,
      sym__decimal,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_value,
    STATE(16), 1,
      sym_multi_line_comment,
    ACTIONS(61), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(63), 2,
      sym_null,
      sym_string,
    STATE(8), 2,
      sym_number,
      sym_boolean,
    ACTIONS(59), 3,
      sym__binary,
      sym__octal,
      sym__hex,
  [280] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_multi_line_comment,
    STATE(19), 1,
      aux_sym_document_repeat1,
    STATE(21), 1,
      sym_node,
    STATE(31), 1,
      sym_single_line_comment,
    STATE(37), 1,
      aux_sym_document_repeat2,
    STATE(41), 1,
      sym__linespace,
  [314] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_multi_line_comment,
    STATE(22), 1,
      sym_node,
    STATE(31), 1,
      sym_single_line_comment,
    STATE(39), 1,
      sym__linespace,
    STATE(40), 1,
      aux_sym__node_children_repeat1,
  [345] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      sym__newline,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_single_line_comment,
    STATE(41), 1,
      sym__linespace,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(19), 2,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
  [369] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      aux_sym_document_repeat1,
    STATE(20), 1,
      sym_multi_line_comment,
    STATE(31), 1,
      sym_single_line_comment,
    STATE(41), 1,
      sym__linespace,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [395] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      aux_sym_document_repeat1,
    STATE(21), 1,
      sym_multi_line_comment,
    STATE(31), 1,
      sym_single_line_comment,
    STATE(41), 1,
      sym__linespace,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [421] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_multi_line_comment,
    STATE(31), 1,
      sym_single_line_comment,
    STATE(54), 1,
      sym__linespace,
  [446] = 6,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(93), 1,
      aux_sym__commented_block_token1,
    STATE(23), 1,
      sym_multi_line_comment,
    STATE(60), 1,
      sym__commented_block,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [466] = 6,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(99), 1,
      aux_sym__commented_block_token1,
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(42), 1,
      sym__commented_block,
    ACTIONS(97), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_multi_line_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [502] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_multi_line_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(57), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_multi_line_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [534] = 6,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_multi_line_comment,
    STATE(33), 1,
      sym_single_line_comment,
    STATE(35), 1,
      sym__node_terminator,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      sym__newline,
  [554] = 6,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_multi_line_comment,
    STATE(32), 1,
      sym__node_terminator,
    STATE(33), 1,
      sym_single_line_comment,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      sym__newline,
  [574] = 6,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      aux_sym__commented_block_token1,
    ACTIONS(115), 1,
      anon_sym_STAR_SLASH,
    STATE(30), 1,
      sym_multi_line_comment,
    STATE(44), 1,
      sym__commented_block,
    ACTIONS(97), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_multi_line_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_multi_line_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [626] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_multi_line_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(127), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [642] = 6,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym__node_terminator,
    STATE(33), 1,
      sym_single_line_comment,
    STATE(34), 1,
      sym_multi_line_comment,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      sym__newline,
  [662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_multi_line_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(131), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [678] = 6,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym__commented_block_token1,
    ACTIONS(133), 1,
      anon_sym_STAR_SLASH,
    STATE(36), 1,
      sym_multi_line_comment,
    STATE(61), 1,
      sym__commented_block,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [698] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_node,
    STATE(37), 1,
      sym_multi_line_comment,
    STATE(43), 1,
      aux_sym_document_repeat2,
  [717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_node,
    STATE(38), 2,
      sym_multi_line_comment,
      aux_sym__node_children_repeat1,
  [734] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_node,
    STATE(39), 1,
      sym_multi_line_comment,
    STATE(46), 1,
      aux_sym__node_children_repeat1,
  [753] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_node,
    STATE(38), 1,
      aux_sym__node_children_repeat1,
    STATE(40), 1,
      sym_multi_line_comment,
  [772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_multi_line_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(146), 2,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [787] = 3,
    ACTIONS(150), 1,
      aux_sym__commented_block_token1,
    STATE(42), 1,
      sym_multi_line_comment,
    ACTIONS(148), 4,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [800] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(21), 1,
      sym_node,
    STATE(43), 2,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
  [817] = 3,
    ACTIONS(157), 1,
      aux_sym__commented_block_token1,
    STATE(44), 1,
      sym_multi_line_comment,
    ACTIONS(155), 4,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [830] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_node,
    STATE(43), 1,
      aux_sym_document_repeat2,
    STATE(45), 1,
      sym_multi_line_comment,
  [849] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_node,
    STATE(38), 1,
      aux_sym__node_children_repeat1,
    STATE(46), 1,
      sym_multi_line_comment,
  [868] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(163), 1,
      aux_sym_single_line_comment_token1,
    STATE(47), 1,
      sym_multi_line_comment,
    STATE(52), 1,
      aux_sym_single_line_comment_repeat1,
  [884] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_multi_line_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [896] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      sym__newline,
    ACTIONS(169), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_single_line_comment,
    STATE(49), 1,
      sym_multi_line_comment,
  [912] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_multi_line_comment,
    ACTIONS(171), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [924] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_multi_line_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [936] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym_single_line_comment_token1,
    STATE(52), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
  [950] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(180), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(53), 1,
      sym_multi_line_comment,
  [966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(54), 1,
      sym_multi_line_comment,
  [979] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_multi_line_comment,
    ACTIONS(184), 2,
      sym__newline,
      aux_sym_single_line_comment_token1,
  [990] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_single_line_comment_token1,
    STATE(47), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(56), 1,
      sym_multi_line_comment,
  [1003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      aux_sym_single_line_comment_token1,
    STATE(53), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(57), 1,
      sym_multi_line_comment,
  [1016] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_multi_line_comment,
  [1026] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_multi_line_comment,
  [1036] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [1040] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 369,
  [SMALL_STATE(21)] = 395,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 446,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 502,
  [SMALL_STATE(27)] = 518,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 554,
  [SMALL_STATE(30)] = 574,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 642,
  [SMALL_STATE(35)] = 662,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 698,
  [SMALL_STATE(38)] = 717,
  [SMALL_STATE(39)] = 734,
  [SMALL_STATE(40)] = 753,
  [SMALL_STATE(41)] = 772,
  [SMALL_STATE(42)] = 787,
  [SMALL_STATE(43)] = 800,
  [SMALL_STATE(44)] = 817,
  [SMALL_STATE(45)] = 830,
  [SMALL_STATE(46)] = 849,
  [SMALL_STATE(47)] = 868,
  [SMALL_STATE(48)] = 884,
  [SMALL_STATE(49)] = 896,
  [SMALL_STATE(50)] = 912,
  [SMALL_STATE(51)] = 924,
  [SMALL_STATE(52)] = 936,
  [SMALL_STATE(53)] = 950,
  [SMALL_STATE(54)] = 966,
  [SMALL_STATE(55)] = 979,
  [SMALL_STATE(56)] = 990,
  [SMALL_STATE(57)] = 1003,
  [SMALL_STATE(58)] = 1016,
  [SMALL_STATE(59)] = 1026,
  [SMALL_STATE(60)] = 1036,
  [SMALL_STATE(61)] = 1040,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(58),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__linespace, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__linespace, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_terminator, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_terminator, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commented_block, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commented_block, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(55),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
