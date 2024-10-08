#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  aux_sym_section_name_token1 = 3,
  sym_comment = 4,
  anon_sym_POUND = 5,
  anon_sym_EQ = 6,
  sym_parameter_name = 7,
  sym_parameter_value = 8,
  anon_sym_POUNDbloc = 9,
  anon_sym_COMMA = 10,
  aux_sym__jump_line_token1 = 11,
  aux_sym_simple_condition_cell_token1 = 12,
  anon_sym_QMARK = 13,
  anon_sym_SEMI = 14,
  anon_sym_YES = 15,
  anon_sym_NO = 16,
  anon_sym_ADR = 17,
  anon_sym_INI = 18,
  anon_sym_VAL = 19,
  anon_sym_OLD = 20,
  anon_sym_CLS = 21,
  anon_sym_IF = 22,
  anon_sym_NOT = 23,
  anon_sym_MSG = 24,
  anon_sym_MSGNOT = 25,
  anon_sym_SUB = 26,
  anon_sym_SUBNOT = 27,
  sym__inline_format = 28,
  sym__dollar_text = 29,
  sym__number = 30,
  sym__annotation_characters = 31,
  sym_word = 32,
  sym__assignment_text = 33,
  anon_sym_POUNDformat = 34,
  sym__quoted_address = 35,
  sym__unquoted_address = 36,
  sym_format_string = 37,
  sym_source_file = 38,
  sym_section = 39,
  sym_section_name = 40,
  sym_jump_target = 41,
  sym__line = 42,
  sym_param_line = 43,
  sym__bloc_line = 44,
  sym__jump_line = 45,
  sym_condition_cell = 46,
  sym_simple_condition_cell = 47,
  sym_question_mark_cell = 48,
  sym__cell_list = 49,
  sym_bloc_keyword = 50,
  sym_jump_keyword = 51,
  sym_cell = 52,
  sym__word_cell = 53,
  sym_assignment_cell = 54,
  sym_assignment_value = 55,
  sym__format_line = 56,
  sym_address = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_section_repeat1 = 59,
  aux_sym__jump_line_repeat1 = 60,
  aux_sym__cell_list_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_section_name_token1] = "section_name_token1",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_EQ] = "=",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [anon_sym_POUNDbloc] = "#bloc",
  [anon_sym_COMMA] = ",",
  [aux_sym__jump_line_token1] = "_jump_line_token1",
  [aux_sym_simple_condition_cell_token1] = "simple_condition_cell_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_SEMI] = ";",
  [anon_sym_YES] = "YES",
  [anon_sym_NO] = "NO",
  [anon_sym_ADR] = "ADR",
  [anon_sym_INI] = "INI",
  [anon_sym_VAL] = "VAL",
  [anon_sym_OLD] = "OLD",
  [anon_sym_CLS] = "CLS",
  [anon_sym_IF] = "IF",
  [anon_sym_NOT] = "NOT",
  [anon_sym_MSG] = "MSG",
  [anon_sym_MSGNOT] = "MSGNOT",
  [anon_sym_SUB] = "SUB",
  [anon_sym_SUBNOT] = "SUBNOT",
  [sym__inline_format] = "_inline_format",
  [sym__dollar_text] = "_dollar_text",
  [sym__number] = "_number",
  [sym__annotation_characters] = "_annotation_characters",
  [sym_word] = "word",
  [sym__assignment_text] = "_assignment_text",
  [anon_sym_POUNDformat] = "#format",
  [sym__quoted_address] = "_quoted_address",
  [sym__unquoted_address] = "_unquoted_address",
  [sym_format_string] = "format_string",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_jump_target] = "jump_target",
  [sym__line] = "_line",
  [sym_param_line] = "param_line",
  [sym__bloc_line] = "_bloc_line",
  [sym__jump_line] = "_jump_line",
  [sym_condition_cell] = "condition_cell",
  [sym_simple_condition_cell] = "simple_condition_cell",
  [sym_question_mark_cell] = "question_mark_cell",
  [sym__cell_list] = "_cell_list",
  [sym_bloc_keyword] = "bloc_keyword",
  [sym_jump_keyword] = "jump_keyword",
  [sym_cell] = "cell",
  [sym__word_cell] = "_word_cell",
  [sym_assignment_cell] = "assignment_cell",
  [sym_assignment_value] = "assignment_value",
  [sym__format_line] = "_format_line",
  [sym_address] = "address",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym__jump_line_repeat1] = "_jump_line_repeat1",
  [aux_sym__cell_list_repeat1] = "_cell_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [anon_sym_POUNDbloc] = anon_sym_POUNDbloc,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__jump_line_token1] = aux_sym__jump_line_token1,
  [aux_sym_simple_condition_cell_token1] = aux_sym_simple_condition_cell_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_YES] = anon_sym_YES,
  [anon_sym_NO] = anon_sym_NO,
  [anon_sym_ADR] = anon_sym_ADR,
  [anon_sym_INI] = anon_sym_INI,
  [anon_sym_VAL] = anon_sym_VAL,
  [anon_sym_OLD] = anon_sym_OLD,
  [anon_sym_CLS] = anon_sym_CLS,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_MSG] = anon_sym_MSG,
  [anon_sym_MSGNOT] = anon_sym_MSGNOT,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_SUBNOT] = anon_sym_SUBNOT,
  [sym__inline_format] = sym__inline_format,
  [sym__dollar_text] = sym__dollar_text,
  [sym__number] = sym__number,
  [sym__annotation_characters] = sym__annotation_characters,
  [sym_word] = sym_word,
  [sym__assignment_text] = sym__assignment_text,
  [anon_sym_POUNDformat] = anon_sym_POUNDformat,
  [sym__quoted_address] = sym__quoted_address,
  [sym__unquoted_address] = sym__unquoted_address,
  [sym_format_string] = sym_format_string,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_jump_target] = sym_jump_target,
  [sym__line] = sym__line,
  [sym_param_line] = sym_param_line,
  [sym__bloc_line] = sym__bloc_line,
  [sym__jump_line] = sym__jump_line,
  [sym_condition_cell] = sym_condition_cell,
  [sym_simple_condition_cell] = sym_simple_condition_cell,
  [sym_question_mark_cell] = sym_question_mark_cell,
  [sym__cell_list] = sym__cell_list,
  [sym_bloc_keyword] = sym_bloc_keyword,
  [sym_jump_keyword] = sym_jump_keyword,
  [sym_cell] = sym_cell,
  [sym__word_cell] = sym__word_cell,
  [sym_assignment_cell] = sym_assignment_cell,
  [sym_assignment_value] = sym_assignment_value,
  [sym__format_line] = sym__format_line,
  [sym_address] = sym_address,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym__jump_line_repeat1] = aux_sym__jump_line_repeat1,
  [aux_sym__cell_list_repeat1] = aux_sym__cell_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDbloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__jump_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_condition_cell_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MSG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MSGNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBNOT] = {
    .visible = true,
    .named = false,
  },
  [sym__inline_format] = {
    .visible = false,
    .named = true,
  },
  [sym__dollar_text] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation_characters] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDformat] = {
    .visible = true,
    .named = false,
  },
  [sym__quoted_address] = {
    .visible = false,
    .named = true,
  },
  [sym__unquoted_address] = {
    .visible = false,
    .named = true,
  },
  [sym_format_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_target] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_param_line] = {
    .visible = true,
    .named = true,
  },
  [sym__bloc_line] = {
    .visible = false,
    .named = true,
  },
  [sym__jump_line] = {
    .visible = false,
    .named = true,
  },
  [sym_condition_cell] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_condition_cell] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark_cell] = {
    .visible = true,
    .named = true,
  },
  [sym__cell_list] = {
    .visible = false,
    .named = true,
  },
  [sym_bloc_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_cell] = {
    .visible = true,
    .named = true,
  },
  [sym__word_cell] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_cell] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_value] = {
    .visible = true,
    .named = true,
  },
  [sym__format_line] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__jump_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cell_list_repeat1] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '"', 43,
        '#', 51,
        '$', 42,
        ',', 56,
        '/', 6,
        ';', 60,
        '=', 52,
        '?', 59,
        'A', 94,
        'C', 102,
        'I', 97,
        'M', 107,
        'N', 103,
        'O', 101,
        'S', 112,
        'V', 92,
        'Y', 96,
        '[', 46,
        ']', 47,
        '_', 114,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '[') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == ',') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '?', 59,
        'A', 10,
        'C', 18,
        'I', 13,
        'M', 23,
        'N', 19,
        'O', 17,
        'S', 28,
        'V', 8,
        'Y', 12,
        '!', 58,
        '#', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 37:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 40:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(53);
      END_STATE();
    case 41:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_parameter_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUNDbloc);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__jump_line_token1);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_simple_condition_cell_token1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_YES);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ADR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ADR);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_INI);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_INI);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_VAL);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_VAL);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_OLD);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_OLD);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CLS);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CLS);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_MSG);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_MSG);
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_MSGNOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_MSGNOT);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SUBNOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SUBNOT);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__inline_format);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__dollar_text);
      if (lookahead == ']') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__dollar_text);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__annotation_characters);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '?' ||
          lookahead == '@') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'G') ADVANCE(79);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__assignment_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_POUNDformat);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__quoted_address);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unquoted_address);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_format_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 41},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUNDbloc] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_YES] = ACTIONS(1),
    [anon_sym_NO] = ACTIONS(1),
    [anon_sym_ADR] = ACTIONS(1),
    [anon_sym_INI] = ACTIONS(1),
    [anon_sym_VAL] = ACTIONS(1),
    [anon_sym_OLD] = ACTIONS(1),
    [anon_sym_CLS] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_MSG] = ACTIONS(1),
    [anon_sym_MSGNOT] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_SUBNOT] = ACTIONS(1),
    [sym__inline_format] = ACTIONS(1),
    [sym__dollar_text] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_POUNDformat] = ACTIONS(1),
    [sym__quoted_address] = ACTIONS(1),
    [sym__unquoted_address] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_section] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_NO,
    STATE(47), 1,
      sym_jump_keyword,
    STATE(48), 1,
      sym_bloc_keyword,
    ACTIONS(11), 2,
      anon_sym_MSG,
      anon_sym_SUB,
    ACTIONS(13), 2,
      anon_sym_MSGNOT,
      anon_sym_SUBNOT,
    ACTIONS(7), 8,
      anon_sym_YES,
      anon_sym_ADR,
      anon_sym_INI,
      anon_sym_VAL,
      anon_sym_OLD,
      anon_sym_CLS,
      anon_sym_IF,
      anon_sym_NOT,
  [28] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_POUNDbloc,
    ACTIONS(21), 1,
      anon_sym_POUNDformat,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 6,
      sym__line,
      sym_param_line,
      sym__bloc_line,
      sym__jump_line,
      sym__format_line,
      aux_sym_section_repeat1,
  [50] = 5,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      anon_sym_POUNDbloc,
    ACTIONS(31), 1,
      anon_sym_POUNDformat,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 6,
      sym__line,
      sym_param_line,
      sym__bloc_line,
      sym__jump_line,
      sym__format_line,
      aux_sym_section_repeat1,
  [72] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_POUNDbloc,
    ACTIONS(21), 1,
      anon_sym_POUNDformat,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 6,
      sym__line,
      sym_param_line,
      sym__bloc_line,
      sym__jump_line,
      sym__format_line,
      aux_sym_section_repeat1,
  [94] = 3,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [107] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [120] = 2,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [130] = 2,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [140] = 4,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      aux_sym__jump_line_token1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    STATE(16), 2,
      sym_cell,
      aux_sym__cell_list_repeat1,
  [154] = 2,
    ACTIONS(64), 1,
      anon_sym_POUND,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [164] = 2,
    ACTIONS(68), 1,
      anon_sym_POUND,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [174] = 2,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [184] = 4,
    ACTIONS(74), 1,
      sym__inline_format,
    ACTIONS(76), 1,
      sym__dollar_text,
    ACTIONS(78), 1,
      sym_word,
    STATE(46), 2,
      sym__word_cell,
      sym_assignment_cell,
  [198] = 2,
    ACTIONS(82), 1,
      anon_sym_POUND,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [208] = 4,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      aux_sym__jump_line_token1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(16), 2,
      sym_cell,
      aux_sym__cell_list_repeat1,
  [222] = 2,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [232] = 2,
    ACTIONS(97), 1,
      anon_sym_POUND,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [242] = 2,
    STATE(58), 1,
      sym_assignment_value,
    ACTIONS(99), 3,
      sym__dollar_text,
      sym__number,
      sym__assignment_text,
  [251] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(20), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [262] = 3,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      aux_sym__jump_line_token1,
    STATE(28), 2,
      sym_condition_cell,
      aux_sym__jump_line_repeat1,
  [273] = 2,
    STATE(69), 1,
      sym_assignment_value,
    ACTIONS(99), 3,
      sym__dollar_text,
      sym__number,
      sym__assignment_text,
  [282] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      sym_address,
    ACTIONS(112), 2,
      sym__quoted_address,
      sym__unquoted_address,
  [293] = 2,
    STATE(64), 1,
      sym_assignment_value,
    ACTIONS(99), 3,
      sym__dollar_text,
      sym__number,
      sym__assignment_text,
  [302] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym__cell_list,
    STATE(10), 2,
      sym_cell,
      aux_sym__cell_list_repeat1,
  [313] = 3,
    ACTIONS(116), 1,
      aux_sym_simple_condition_cell_token1,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    STATE(61), 2,
      sym_simple_condition_cell,
      sym_question_mark_cell,
  [324] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [335] = 3,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      aux_sym__jump_line_token1,
    STATE(29), 2,
      sym_condition_cell,
      aux_sym__jump_line_repeat1,
  [346] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      aux_sym__jump_line_token1,
    STATE(29), 2,
      sym_condition_cell,
      aux_sym__jump_line_repeat1,
  [357] = 2,
    ACTIONS(131), 1,
      aux_sym__jump_line_token1,
    ACTIONS(129), 2,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [365] = 2,
    ACTIONS(133), 1,
      aux_sym_section_name_token1,
    STATE(36), 1,
      sym_jump_target,
  [372] = 2,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(137), 1,
      anon_sym_EQ,
  [379] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      aux_sym__jump_line_token1,
  [386] = 2,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    ACTIONS(145), 1,
      anon_sym_EQ,
  [393] = 2,
    ACTIONS(147), 1,
      aux_sym_section_name_token1,
    STATE(62), 1,
      sym_section_name,
  [400] = 1,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
  [404] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [408] = 1,
    ACTIONS(153), 1,
      anon_sym_COMMA,
  [412] = 1,
    ACTIONS(155), 1,
      aux_sym__jump_line_token1,
  [416] = 1,
    ACTIONS(157), 1,
      anon_sym_COMMA,
  [420] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
  [424] = 1,
    ACTIONS(161), 1,
      sym_word,
  [428] = 1,
    ACTIONS(163), 1,
      sym_word,
  [432] = 1,
    ACTIONS(165), 1,
      sym_format_string,
  [436] = 1,
    ACTIONS(167), 1,
      sym_word,
  [440] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
  [444] = 1,
    ACTIONS(171), 1,
      anon_sym_COMMA,
  [448] = 1,
    ACTIONS(173), 1,
      anon_sym_COMMA,
  [452] = 1,
    ACTIONS(175), 1,
      anon_sym_COMMA,
  [456] = 1,
    ACTIONS(177), 1,
      sym__annotation_characters,
  [460] = 1,
    ACTIONS(179), 1,
      anon_sym_COMMA,
  [464] = 1,
    ACTIONS(181), 1,
      sym_parameter_value,
  [468] = 1,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
  [472] = 1,
    ACTIONS(185), 1,
      anon_sym_EQ,
  [476] = 1,
    ACTIONS(187), 1,
      anon_sym_EQ,
  [480] = 1,
    ACTIONS(189), 1,
      sym_parameter_name,
  [484] = 1,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
  [488] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
  [492] = 1,
    ACTIONS(195), 1,
      sym_word,
  [496] = 1,
    ACTIONS(197), 1,
      sym_word,
  [500] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
  [504] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [508] = 1,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
  [512] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
  [516] = 1,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
  [520] = 1,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [524] = 1,
    ACTIONS(211), 1,
      sym_format_string,
  [528] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [532] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 335,
  [SMALL_STATE(29)] = 346,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 365,
  [SMALL_STATE(32)] = 372,
  [SMALL_STATE(33)] = 379,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 393,
  [SMALL_STATE(36)] = 400,
  [SMALL_STATE(37)] = 404,
  [SMALL_STATE(38)] = 408,
  [SMALL_STATE(39)] = 412,
  [SMALL_STATE(40)] = 416,
  [SMALL_STATE(41)] = 420,
  [SMALL_STATE(42)] = 424,
  [SMALL_STATE(43)] = 428,
  [SMALL_STATE(44)] = 432,
  [SMALL_STATE(45)] = 436,
  [SMALL_STATE(46)] = 440,
  [SMALL_STATE(47)] = 444,
  [SMALL_STATE(48)] = 448,
  [SMALL_STATE(49)] = 452,
  [SMALL_STATE(50)] = 456,
  [SMALL_STATE(51)] = 460,
  [SMALL_STATE(52)] = 464,
  [SMALL_STATE(53)] = 468,
  [SMALL_STATE(54)] = 472,
  [SMALL_STATE(55)] = 476,
  [SMALL_STATE(56)] = 480,
  [SMALL_STATE(57)] = 484,
  [SMALL_STATE(58)] = 488,
  [SMALL_STATE(59)] = 492,
  [SMALL_STATE(60)] = 496,
  [SMALL_STATE(61)] = 500,
  [SMALL_STATE(62)] = 504,
  [SMALL_STATE(63)] = 508,
  [SMALL_STATE(64)] = 512,
  [SMALL_STATE(65)] = 516,
  [SMALL_STATE(66)] = 520,
  [SMALL_STATE(67)] = 524,
  [SMALL_STATE(68)] = 528,
  [SMALL_STATE(69)] = 532,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_line, 4, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_line, 4, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_line, 5, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_line, 5, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_line, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_line, 6, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cell_list, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cell_list, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jump_line, 9, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jump_line, 9, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jump_line, 8, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jump_line, 8, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_line, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_line, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cell_list, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cell_list, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cell_list_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cell_list_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cell_list_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bloc_line, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bloc_line, 5, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_line, 7, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_line, 7, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__jump_line_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__jump_line_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_cell, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_cell, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_cell, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_cell, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_target, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_keyword, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bloc_keyword, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_cell, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_cell, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition_cell, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_question_mark_cell, 4, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_ini_top(void) {
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
