#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH_DASH = 1,
  aux_sym_shelf_token1 = 2,
  sym__name = 3,
  anon_sym_EQ = 4,
  aux_sym_command_token1 = 5,
  sym_before = 6,
  sym_after = 7,
  anon_sym_PIPE = 8,
  sym_comment = 9,
  sym_dag = 10,
  sym_shelf = 11,
  sym_node_name = 12,
  sym_before_name = 13,
  sym_after_name = 14,
  sym__node = 15,
  sym_command = 16,
  sym_before_nodes = 17,
  sym_after_nodes = 18,
  aux_sym_dag_repeat1 = 19,
  aux_sym_dag_repeat2 = 20,
  aux_sym__node_repeat1 = 21,
  aux_sym_command_repeat1 = 22,
  aux_sym_before_nodes_repeat1 = 23,
  aux_sym_after_nodes_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_shelf_token1] = "shelf_token1",
  [sym__name] = "_name",
  [anon_sym_EQ] = "=",
  [aux_sym_command_token1] = "command_token1",
  [sym_before] = "before",
  [sym_after] = "after",
  [anon_sym_PIPE] = "|",
  [sym_comment] = "comment",
  [sym_dag] = "dag",
  [sym_shelf] = "shelf",
  [sym_node_name] = "node_name",
  [sym_before_name] = "before_name",
  [sym_after_name] = "after_name",
  [sym__node] = "_node",
  [sym_command] = "command",
  [sym_before_nodes] = "before_nodes",
  [sym_after_nodes] = "after_nodes",
  [aux_sym_dag_repeat1] = "dag_repeat1",
  [aux_sym_dag_repeat2] = "dag_repeat2",
  [aux_sym__node_repeat1] = "_node_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_before_nodes_repeat1] = "before_nodes_repeat1",
  [aux_sym_after_nodes_repeat1] = "after_nodes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_shelf_token1] = aux_sym_shelf_token1,
  [sym__name] = sym__name,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [sym_before] = sym_before,
  [sym_after] = sym_after,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_comment] = sym_comment,
  [sym_dag] = sym_dag,
  [sym_shelf] = sym_shelf,
  [sym_node_name] = sym_node_name,
  [sym_before_name] = sym_before_name,
  [sym_after_name] = sym_after_name,
  [sym__node] = sym__node,
  [sym_command] = sym_command,
  [sym_before_nodes] = sym_before_nodes,
  [sym_after_nodes] = sym_after_nodes,
  [aux_sym_dag_repeat1] = aux_sym_dag_repeat1,
  [aux_sym_dag_repeat2] = aux_sym_dag_repeat2,
  [aux_sym__node_repeat1] = aux_sym__node_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_before_nodes_repeat1] = aux_sym_before_nodes_repeat1,
  [aux_sym_after_nodes_repeat1] = aux_sym_after_nodes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shelf_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_before] = {
    .visible = true,
    .named = true,
  },
  [sym_after] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_dag] = {
    .visible = true,
    .named = true,
  },
  [sym_shelf] = {
    .visible = true,
    .named = true,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [sym_before_name] = {
    .visible = true,
    .named = true,
  },
  [sym_after_name] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_before_nodes] = {
    .visible = true,
    .named = true,
  },
  [sym_after_nodes] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dag_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_before_nodes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_after_nodes_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == ' ') SKIP(0);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_shelf_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_command_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_before);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_after);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(23);
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
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [aux_sym_shelf_token1] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_before] = ACTIONS(1),
    [sym_after] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_dag] = STATE(37),
    [sym_node_name] = STATE(2),
    [sym__node] = STATE(15),
    [aux_sym_dag_repeat1] = STATE(15),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_shelf_token1,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(13), 1,
      sym_before,
    ACTIONS(15), 1,
      sym_after,
    ACTIONS(7), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
    STATE(4), 3,
      sym_before_nodes,
      sym_after_nodes,
      aux_sym__node_repeat1,
  [26] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_before,
    ACTIONS(22), 1,
      sym_after,
    STATE(3), 3,
      sym_before_nodes,
      sym_after_nodes,
      aux_sym__node_repeat1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
  [48] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_before,
    ACTIONS(15), 1,
      sym_after,
    ACTIONS(27), 1,
      aux_sym_shelf_token1,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
    STATE(3), 3,
      sym_before_nodes,
      sym_after_nodes,
      aux_sym__node_repeat1,
  [74] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_after_nodes_repeat1,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [93] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_after_nodes_repeat1,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      aux_sym_before_nodes_repeat1,
    ACTIONS(40), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      aux_sym_before_nodes_repeat1,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    STATE(5), 1,
      aux_sym_after_nodes_repeat1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    STATE(7), 1,
      aux_sym_before_nodes_repeat1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
      anon_sym_PIPE,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
      anon_sym_PIPE,
  [216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
      anon_sym_PIPE,
  [230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 8,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
      anon_sym_PIPE,
  [244] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__name,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    STATE(2), 1,
      sym_node_name,
    STATE(21), 1,
      sym_shelf,
    STATE(22), 1,
      aux_sym_dag_repeat2,
    STATE(17), 2,
      sym__node,
      aux_sym_dag_repeat1,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
      anon_sym_EQ,
      sym_before,
      sym_after,
  [283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__name,
    STATE(2), 1,
      sym_node_name,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
    STATE(17), 2,
      sym__node,
      aux_sym_dag_repeat1,
  [301] = 5,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_command_token1,
    ACTIONS(74), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_command_repeat1,
    ACTIONS(70), 3,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
  [319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__name,
    STATE(2), 1,
      sym_node_name,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
    STATE(17), 2,
      sym__node,
      aux_sym_dag_repeat1,
  [337] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym_command_token1,
    STATE(20), 1,
      aux_sym_command_repeat1,
    ACTIONS(80), 3,
      anon_sym_DASH_DASH_DASH_DASH,
      aux_sym_shelf_token1,
      sym__name,
  [355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__name,
    STATE(2), 1,
      sym_node_name,
    STATE(19), 2,
      sym__node,
      aux_sym_dag_repeat1,
  [369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_shelf,
    STATE(25), 1,
      aux_sym_dag_repeat2,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_shelf_token1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_shelf_token1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
  [409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    STATE(21), 1,
      sym_shelf,
    STATE(25), 1,
      aux_sym_dag_repeat2,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
  [434] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_command_token1,
    STATE(18), 1,
      aux_sym_command_repeat1,
    STATE(24), 1,
      sym_command,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
  [456] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_command_token1,
    STATE(18), 1,
      aux_sym_command_repeat1,
    STATE(23), 1,
      sym_command,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH_DASH,
      sym__name,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__name,
    STATE(14), 1,
      sym_before_name,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym__name,
    STATE(11), 1,
      sym_after_name,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym__name,
    STATE(9), 1,
      sym_after_name,
  [517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__name,
    STATE(10), 1,
      sym_before_name,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym__name,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_shelf_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 337,
  [SMALL_STATE(21)] = 355,
  [SMALL_STATE(22)] = 369,
  [SMALL_STATE(23)] = 385,
  [SMALL_STATE(24)] = 397,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 425,
  [SMALL_STATE(27)] = 434,
  [SMALL_STATE(28)] = 447,
  [SMALL_STATE(29)] = 456,
  [SMALL_STATE(30)] = 469,
  [SMALL_STATE(31)] = 478,
  [SMALL_STATE(32)] = 487,
  [SMALL_STATE(33)] = 497,
  [SMALL_STATE(34)] = 507,
  [SMALL_STATE(35)] = 517,
  [SMALL_STATE(36)] = 527,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 541,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__node_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__node_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_after_nodes, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_after_nodes_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_after_nodes_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_before_nodes, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_before_nodes_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_before_nodes_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_after_nodes, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_before_nodes, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_before_name, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_after_name, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dag, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dag_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dag_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dag_repeat2, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dag, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dag_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shelf, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_deml(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
