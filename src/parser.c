#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 35
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
  aux_sym_document_repeat2 = 31,
  aux_sym_node_repeat1 = 32,
  aux_sym__node_children_repeat1 = 33,
  aux_sym_single_line_comment_repeat1 = 34,
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
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym__node_children_repeat1] = "_node_children_repeat1",
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
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
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
    : (c <= '9' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__newline_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(68);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(80);
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
      if (lookahead == '{') ADVANCE(31);
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
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 27:
      if (sym__newline_character_set_1(lookahead)) SKIP(27)
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 28:
      if (sym__newline_character_set_1(lookahead)) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 29:
      if (sym__newline_character_set_1(lookahead)) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(68);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(68);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '\n' ||
          lookahead == '\f') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(68);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(68);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(81);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(45);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(68);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(58);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(60);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_null);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(68);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (sym__newline_character_set_1(lookahead)) ADVANCE(88);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (sym__newline_character_set_1(lookahead)) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
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
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
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
    [sym_document] = STATE(48),
    [sym_node] = STATE(18),
    [sym__linespace] = STATE(16),
    [sym_single_line_comment] = STATE(16),
    [aux_sym_document_repeat1] = STATE(16),
    [aux_sym_document_repeat2] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(3),
    [sym__node_children] = STATE(25),
    [sym__node_terminator] = STATE(24),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym__escline] = STATE(5),
    [sym_single_line_comment] = STATE(24),
    [aux_sym_node_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym__newline] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym__node_children] = STATE(28),
    [sym__node_terminator] = STATE(26),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_single_line_comment] = STATE(26),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym__newline] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym__node_children] = STATE(22),
    [sym__node_terminator] = STATE(27),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_single_line_comment] = STATE(27),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym__newline] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(4),
    [sym__node_children] = STATE(28),
    [sym__node_terminator] = STATE(26),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym_single_line_comment] = STATE(26),
    [aux_sym_node_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_identifier] = ACTIONS(15),
    [sym__binary] = ACTIONS(17),
    [sym__octal] = ACTIONS(17),
    [sym__hex] = ACTIONS(17),
    [sym__decimal] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym__newline] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(6),
    [sym_prop] = STATE(7),
    [sym_value] = STATE(7),
    [sym_number] = STATE(10),
    [sym_boolean] = STATE(10),
    [aux_sym_node_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [sym__binary] = ACTIONS(34),
    [sym__octal] = ACTIONS(34),
    [sym__hex] = ACTIONS(34),
    [sym__decimal] = ACTIONS(34),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_null] = ACTIONS(40),
    [sym_string] = ACTIONS(40),
    [sym__newline] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      sym__escline,
    ACTIONS(43), 13,
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
  [22] = 1,
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
  [39] = 1,
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
  [56] = 1,
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
  [73] = 1,
    ACTIONS(51), 14,
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
  [90] = 1,
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
  [106] = 1,
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
  [122] = 1,
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
  [138] = 6,
    ACTIONS(17), 1,
      sym__decimal,
    STATE(11), 1,
      sym_value,
    ACTIONS(61), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(63), 2,
      sym_null,
      sym_string,
    STATE(10), 2,
      sym_number,
      sym_boolean,
    ACTIONS(59), 3,
      sym__binary,
      sym__octal,
      sym__hex,
  [162] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym__newline,
    STATE(18), 1,
      sym_node,
    STATE(31), 1,
      aux_sym_document_repeat2,
    STATE(20), 3,
      sym__linespace,
      sym_single_line_comment,
      aux_sym_document_repeat1,
  [186] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym__newline,
    STATE(21), 1,
      sym_node,
    STATE(33), 1,
      aux_sym__node_children_repeat1,
    STATE(32), 2,
      sym__linespace,
      sym_single_line_comment,
  [209] = 4,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(19), 3,
      sym__linespace,
      sym_single_line_comment,
      aux_sym_document_repeat1,
  [225] = 4,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(20), 3,
      sym__linespace,
      sym_single_line_comment,
      aux_sym_document_repeat1,
  [241] = 4,
    ACTIONS(81), 1,
      sym__newline,
    ACTIONS(84), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(20), 3,
      sym__linespace,
      sym_single_line_comment,
      aux_sym_document_repeat1,
  [257] = 5,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      sym__newline,
    STATE(44), 2,
      sym__linespace,
      sym_single_line_comment,
  [274] = 3,
    ACTIONS(95), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(23), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [286] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(99), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [296] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [306] = 3,
    ACTIONS(95), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(26), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [318] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [328] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [338] = 3,
    ACTIONS(95), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 2,
      anon_sym_SEMI,
      sym__newline,
    STATE(27), 2,
      sym__node_terminator,
      sym_single_line_comment,
  [350] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [360] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(18), 1,
      sym_node,
    STATE(30), 1,
      aux_sym_document_repeat2,
  [373] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_node,
    STATE(30), 1,
      aux_sym_document_repeat2,
  [386] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_node,
    STATE(36), 1,
      aux_sym__node_children_repeat1,
  [399] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_node,
    STATE(34), 1,
      aux_sym__node_children_repeat1,
  [412] = 4,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(21), 1,
      sym_node,
    STATE(34), 1,
      aux_sym__node_children_repeat1,
  [425] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_node,
    STATE(30), 1,
      aux_sym_document_repeat2,
  [438] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_node,
    STATE(34), 1,
      aux_sym__node_children_repeat1,
  [451] = 1,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [457] = 1,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [463] = 3,
    ACTIONS(137), 1,
      sym__newline,
    ACTIONS(139), 1,
      aux_sym_single_line_comment_token1,
    STATE(39), 1,
      aux_sym_single_line_comment_repeat1,
  [473] = 3,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 1,
      aux_sym_single_line_comment_token1,
    STATE(39), 1,
      aux_sym_single_line_comment_repeat1,
  [483] = 3,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(148), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_single_line_comment,
  [493] = 1,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_SLASH_SLASH,
  [499] = 3,
    ACTIONS(144), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(152), 1,
      sym__newline,
    STATE(39), 1,
      aux_sym_single_line_comment_repeat1,
  [509] = 2,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      sym_identifier,
  [516] = 2,
    ACTIONS(156), 1,
      aux_sym_single_line_comment_token1,
    STATE(40), 1,
      aux_sym_single_line_comment_repeat1,
  [523] = 2,
    ACTIONS(158), 1,
      aux_sym_single_line_comment_token1,
    STATE(43), 1,
      aux_sym_single_line_comment_repeat1,
  [530] = 1,
    ACTIONS(160), 1,
      anon_sym_EQ,
  [534] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 22,
  [SMALL_STATE(9)] = 39,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 209,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 257,
  [SMALL_STATE(22)] = 274,
  [SMALL_STATE(23)] = 286,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 318,
  [SMALL_STATE(27)] = 328,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 373,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 399,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 438,
  [SMALL_STATE(37)] = 451,
  [SMALL_STATE(38)] = 457,
  [SMALL_STATE(39)] = 463,
  [SMALL_STATE(40)] = 473,
  [SMALL_STATE(41)] = 483,
  [SMALL_STATE(42)] = 493,
  [SMALL_STATE(43)] = 499,
  [SMALL_STATE(44)] = 509,
  [SMALL_STATE(45)] = 516,
  [SMALL_STATE(46)] = 523,
  [SMALL_STATE(47)] = 530,
  [SMALL_STATE(48)] = 534,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(47),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2), SHIFT_REPEAT(2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(39),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_children, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_children_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
