#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  sym_section_name = 3,
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
  aux_sym__word_cell_token1 = 28,
  sym__dollar_text = 29,
  sym__number = 30,
  sym__annotation_characters = 31,
  sym_word = 32,
  sym__assignment_text = 33,
  anon_sym_POUNDformat = 34,
  sym_source_file = 35,
  sym__section = 36,
  sym__line = 37,
  sym_param_line = 38,
  sym__bloc_line = 39,
  sym__jump_line = 40,
  sym_condition_cell = 41,
  sym_simple_condition_cell = 42,
  sym_question_mark_cell = 43,
  sym__cell_list = 44,
  sym_bloc_keyword = 45,
  sym_jump_keyword = 46,
  sym_cell = 47,
  sym__word_cell = 48,
  sym_assignment_cell = 49,
  sym_assignment_value = 50,
  sym__format_line = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym__section_repeat1 = 53,
  aux_sym__jump_line_repeat1 = 54,
  aux_sym__cell_list_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_section_name] = "section_name",
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
  [aux_sym__word_cell_token1] = "_word_cell_token1",
  [sym__dollar_text] = "_dollar_text",
  [sym__number] = "_number",
  [sym__annotation_characters] = "_annotation_characters",
  [sym_word] = "word",
  [sym__assignment_text] = "_assignment_text",
  [anon_sym_POUNDformat] = "#format",
  [sym_source_file] = "source_file",
  [sym__section] = "_section",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__section_repeat1] = "_section_repeat1",
  [aux_sym__jump_line_repeat1] = "_jump_line_repeat1",
  [aux_sym__cell_list_repeat1] = "_cell_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_section_name] = sym_section_name,
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
  [aux_sym__word_cell_token1] = aux_sym__word_cell_token1,
  [sym__dollar_text] = sym__dollar_text,
  [sym__number] = sym__number,
  [sym__annotation_characters] = sym__annotation_characters,
  [sym_word] = sym_word,
  [sym__assignment_text] = sym__assignment_text,
  [anon_sym_POUNDformat] = anon_sym_POUNDformat,
  [sym_source_file] = sym_source_file,
  [sym__section] = sym__section,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__section_repeat1] = aux_sym__section_repeat1,
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
  [sym_section_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym__word_cell_token1] = {
    .visible = false,
    .named = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__section] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__section_repeat1] = {
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
};

static TSCharacterRange sym_parameter_value_character_set_1[] = {
  {' ', ' '}, {'#', '#'}, {',', ','}, {'.', '.'}, {'0', '9'}, {'=', '='}, {'A', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '!', 54,
        '#', 45,
        '$', 36,
        ',', 52,
        '/', 5,
        ';', 56,
        '=', 46,
        '?', 55,
        'A', 89,
        'C', 97,
        'I', 92,
        'M', 102,
        'N', 98,
        'O', 96,
        'S', 107,
        'V', 87,
        'Y', 91,
        '[', 39,
        ']', 40,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '[') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'G') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 35:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 36:
      if ((set_contains(sym_parameter_value_character_set_1, 9, lookahead) ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '-') &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(84);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '#', 44,
        'A', 8,
        'C', 16,
        'I', 11,
        'M', 21,
        'N', 17,
        'O', 15,
        'S', 26,
        'V', 6,
        'Y', 10,
        '[', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_section_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_section_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_parameter_value);
      if (lookahead == ' ') ADVANCE(49);
      if (set_contains(sym_parameter_value_character_set_1, 9, lookahead)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_parameter_value);
      if (set_contains(sym_parameter_value_character_set_1, 9, lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUNDbloc);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__jump_line_token1);
      if (lookahead == '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_simple_condition_cell_token1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_YES);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ADR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ADR);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_INI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_INI);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_VAL);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_VAL);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_OLD);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_OLD);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_CLS);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CLS);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_MSG);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_MSG);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_MSGNOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_MSGNOT);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SUBNOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SUBNOT);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__word_cell_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__dollar_text);
      if ((set_contains(sym_parameter_value_character_set_1, 9, lookahead) ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '-') &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__annotation_characters);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '?' ||
          lookahead == '@') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'E') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__assignment_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_POUNDformat);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
    [aux_sym_simple_condition_cell_token1] = ACTIONS(1),
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
    [aux_sym__word_cell_token1] = ACTIONS(1),
    [sym__dollar_text] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_POUNDformat] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__section] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_NO,
    STATE(44), 1,
      sym_jump_keyword,
    STATE(51), 1,
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
    STATE(4), 6,
      sym__line,
      sym_param_line,
      sym__bloc_line,
      sym__jump_line,
      sym__format_line,
      aux_sym__section_repeat1,
  [50] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_POUNDbloc,
    ACTIONS(21), 1,
      anon_sym_POUNDformat,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 6,
      sym__line,
      sym_param_line,
      sym__bloc_line,
      sym__jump_line,
      sym__format_line,
      aux_sym__section_repeat1,
  [72] = 5,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(30), 1,
      anon_sym_POUNDbloc,
    ACTIONS(33), 1,
      anon_sym_POUNDformat,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 6,
      sym__line,
      sym_param_line,
      sym__bloc_line,
      sym__jump_line,
      sym__format_line,
      aux_sym__section_repeat1,
  [94] = 4,
    ACTIONS(36), 1,
      aux_sym__word_cell_token1,
    ACTIONS(38), 1,
      sym__dollar_text,
    ACTIONS(40), 1,
      sym_word,
    STATE(36), 2,
      sym__word_cell,
      sym_assignment_cell,
  [108] = 2,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [118] = 2,
    ACTIONS(48), 1,
      anon_sym_POUND,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [128] = 2,
    ACTIONS(52), 1,
      anon_sym_POUND,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [138] = 4,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      aux_sym__jump_line_token1,
    ACTIONS(59), 1,
      anon_sym_SEMI,
    STATE(10), 2,
      sym_cell,
      aux_sym__cell_list_repeat1,
  [152] = 2,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [162] = 2,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [172] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      aux_sym__jump_line_token1,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    STATE(10), 2,
      sym_cell,
      aux_sym__cell_list_repeat1,
  [186] = 2,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [196] = 2,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_POUNDbloc,
      anon_sym_POUNDformat,
  [206] = 3,
    ACTIONS(83), 1,
      aux_sym_simple_condition_cell_token1,
    ACTIONS(85), 1,
      anon_sym_QMARK,
    STATE(49), 2,
      sym_simple_condition_cell,
      sym_question_mark_cell,
  [217] = 2,
    STATE(46), 1,
      sym_assignment_value,
    ACTIONS(87), 3,
      sym__dollar_text,
      sym__number,
      sym__assignment_text,
  [226] = 2,
    STATE(56), 1,
      sym_assignment_value,
    ACTIONS(87), 3,
      sym__dollar_text,
      sym__number,
      sym__assignment_text,
  [235] = 3,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      aux_sym__jump_line_token1,
    STATE(19), 2,
      sym_condition_cell,
      aux_sym__jump_line_repeat1,
  [246] = 3,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      aux_sym__jump_line_token1,
    STATE(19), 2,
      sym_condition_cell,
      aux_sym__jump_line_repeat1,
  [257] = 3,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym__section,
      aux_sym_source_file_repeat1,
  [268] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym__cell_list,
    STATE(13), 2,
      sym_cell,
      aux_sym__cell_list_repeat1,
  [279] = 3,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      aux_sym__jump_line_token1,
    STATE(20), 2,
      sym_condition_cell,
      aux_sym__jump_line_repeat1,
  [290] = 3,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym__section,
      aux_sym_source_file_repeat1,
  [301] = 2,
    ACTIONS(111), 1,
      aux_sym__jump_line_token1,
    ACTIONS(109), 2,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [309] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym__jump_line_token1,
  [316] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      anon_sym_EQ,
  [323] = 1,
    ACTIONS(121), 1,
      anon_sym_EQ,
  [327] = 1,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
  [331] = 1,
    ACTIONS(125), 1,
      sym_section_name,
  [335] = 1,
    ACTIONS(127), 1,
      sym_section_name,
  [339] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [343] = 1,
    ACTIONS(131), 1,
      anon_sym_EQ,
  [347] = 1,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
  [351] = 1,
    ACTIONS(135), 1,
      sym_word,
  [355] = 1,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
  [359] = 1,
    ACTIONS(139), 1,
      sym_parameter_value,
  [363] = 1,
    ACTIONS(141), 1,
      sym_parameter_value,
  [367] = 1,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
  [371] = 1,
    ACTIONS(145), 1,
      sym__annotation_characters,
  [375] = 1,
    ACTIONS(147), 1,
      sym_parameter_name,
  [379] = 1,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
  [383] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [387] = 1,
    ACTIONS(153), 1,
      anon_sym_COMMA,
  [391] = 1,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
  [395] = 1,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
  [399] = 1,
    ACTIONS(159), 1,
      sym_word,
  [403] = 1,
    ACTIONS(161), 1,
      sym_word,
  [407] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
  [411] = 1,
    ACTIONS(165), 1,
      aux_sym__jump_line_token1,
  [415] = 1,
    ACTIONS(167), 1,
      anon_sym_COMMA,
  [419] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
  [423] = 1,
    ACTIONS(171), 1,
      anon_sym_EQ,
  [427] = 1,
    ACTIONS(173), 1,
      anon_sym_COMMA,
  [431] = 1,
    ACTIONS(175), 1,
      anon_sym_COMMA,
  [435] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 226,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 257,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 316,
  [SMALL_STATE(28)] = 323,
  [SMALL_STATE(29)] = 327,
  [SMALL_STATE(30)] = 331,
  [SMALL_STATE(31)] = 335,
  [SMALL_STATE(32)] = 339,
  [SMALL_STATE(33)] = 343,
  [SMALL_STATE(34)] = 347,
  [SMALL_STATE(35)] = 351,
  [SMALL_STATE(36)] = 355,
  [SMALL_STATE(37)] = 359,
  [SMALL_STATE(38)] = 363,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 371,
  [SMALL_STATE(41)] = 375,
  [SMALL_STATE(42)] = 379,
  [SMALL_STATE(43)] = 383,
  [SMALL_STATE(44)] = 387,
  [SMALL_STATE(45)] = 391,
  [SMALL_STATE(46)] = 395,
  [SMALL_STATE(47)] = 399,
  [SMALL_STATE(48)] = 403,
  [SMALL_STATE(49)] = 407,
  [SMALL_STATE(50)] = 411,
  [SMALL_STATE(51)] = 415,
  [SMALL_STATE(52)] = 419,
  [SMALL_STATE(53)] = 423,
  [SMALL_STATE(54)] = 427,
  [SMALL_STATE(55)] = 431,
  [SMALL_STATE(56)] = 435,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section, 4, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_line, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_line, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jump_line, 8, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jump_line, 8, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cell_list, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cell_list, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__cell_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cell_list_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cell_list_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cell_list, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cell_list, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jump_line, 9, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jump_line, 9, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bloc_line, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bloc_line, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_line, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_line, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__jump_line_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__jump_line_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_cell, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_cell, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_cell, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_cell, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_value, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_cell, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition_cell, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_keyword, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bloc_keyword, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_question_mark_cell, 4, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_IniFileTopSolid(void) {
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
