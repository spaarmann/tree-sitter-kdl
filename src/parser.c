#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_identifier_token1 = 2,
  sym__newline = 3,
  anon_sym_ = 4,
  sym__unicode_space = 5,
  sym_document = 6,
  sym_node = 7,
  aux_sym__node_space = 8,
  sym__node_terminator = 9,
  sym_identifier = 10,
  sym__linespace = 11,
  sym__ws = 12,
  aux_sym_document_repeat1 = 13,
  aux_sym_document_repeat2 = 14,
  aux_sym_identifier_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__newline] = "_newline",
  [anon_sym_] = "﻿",
  [sym__unicode_space] = "_unicode_space",
  [sym_document] = "document",
  [sym_node] = "node",
  [aux_sym__node_space] = "_node_space",
  [sym__node_terminator] = "_node_terminator",
  [sym_identifier] = "identifier",
  [sym__linespace] = "_linespace",
  [sym__ws] = "_ws",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__newline] = sym__newline,
  [anon_sym_] = anon_sym_,
  [sym__unicode_space] = sym__unicode_space,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [aux_sym__node_space] = aux_sym__node_space,
  [sym__node_terminator] = sym__node_terminator,
  [sym_identifier] = sym_identifier,
  [sym__linespace] = sym__linespace,
  [sym__ws] = sym__ws,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__unicode_space] = {
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
  [aux_sym__node_space] = {
    .visible = false,
    .named = false,
  },
  [sym__node_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__linespace] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
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
  [aux_sym_identifier_repeat1] = {
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
      if (eof) ADVANCE(1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == 65279) ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__unicode_space] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(17),
    [sym_node] = STATE(5),
    [sym_identifier] = STATE(10),
    [sym__linespace] = STATE(4),
    [sym__ws] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_document_repeat2] = STATE(2),
    [aux_sym_identifier_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [sym__unicode_space] = ACTIONS(7),
  },
  [2] = {
    [sym_node] = STATE(5),
    [sym_identifier] = STATE(10),
    [sym__linespace] = STATE(4),
    [sym__ws] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_document_repeat2] = STATE(3),
    [aux_sym_identifier_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [sym__unicode_space] = ACTIONS(7),
  },
  [3] = {
    [sym_node] = STATE(5),
    [sym_identifier] = STATE(10),
    [sym__linespace] = STATE(4),
    [sym__ws] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_document_repeat2] = STATE(3),
    [aux_sym_identifier_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [sym__newline] = ACTIONS(16),
    [anon_sym_] = ACTIONS(16),
    [sym__unicode_space] = ACTIONS(16),
  },
  [4] = {
    [sym_node] = STATE(7),
    [sym_identifier] = STATE(10),
    [sym__linespace] = STATE(8),
    [sym__ws] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_identifier_repeat1] = STATE(12),
    [aux_sym_identifier_token1] = ACTIONS(5),
    [sym__newline] = ACTIONS(19),
    [anon_sym_] = ACTIONS(19),
    [sym__unicode_space] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
    ACTIONS(23), 3,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
    STATE(6), 3,
      sym__linespace,
      sym__ws,
      aux_sym_document_repeat1,
  [15] = 2,
    STATE(8), 3,
      sym__linespace,
      sym__ws,
      aux_sym_document_repeat1,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
  [28] = 3,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
    ACTIONS(26), 3,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
    STATE(9), 3,
      sym__linespace,
      sym__ws,
      aux_sym_document_repeat1,
  [43] = 3,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
    ACTIONS(31), 3,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
    STATE(8), 3,
      sym__linespace,
      sym__ws,
      aux_sym_document_repeat1,
  [58] = 2,
    STATE(8), 3,
      sym__linespace,
      sym__ws,
      aux_sym_document_repeat1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
  [71] = 4,
    STATE(15), 1,
      sym__node_terminator,
    ACTIONS(36), 2,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(38), 2,
      anon_sym_,
      sym__unicode_space,
    STATE(11), 2,
      aux_sym__node_space,
      sym__ws,
  [87] = 4,
    STATE(16), 1,
      sym__node_terminator,
    ACTIONS(40), 2,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(42), 2,
      anon_sym_,
      sym__unicode_space,
    STATE(14), 2,
      aux_sym__node_space,
      sym__ws,
  [103] = 3,
    ACTIONS(46), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(44), 4,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
  [116] = 3,
    ACTIONS(50), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(48), 4,
      anon_sym_SEMI,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
  [129] = 3,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(55), 2,
      anon_sym_,
      sym__unicode_space,
    STATE(14), 2,
      aux_sym__node_space,
      sym__ws,
  [142] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
  [150] = 1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
      sym__newline,
      anon_sym_,
      sym__unicode_space,
  [158] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 71,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(12),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_space, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_space, 2), SHIFT_REPEAT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
