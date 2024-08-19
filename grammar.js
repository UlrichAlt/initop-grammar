module.exports = grammar({
  name: "IniFileTopSolid",

  rules: {
    source_file: ($) => repeat($._section),

    _section: ($) => seq("[", $.section_name, "]", repeat($._line)),

    section_name: ($) => /[A-Z\,\s_0-9]+/,

    _line: ($) =>
      choice($._bloc_line, $._jump_line, $._format_line, $.param_line),

    comment: ($) => /\/\/.*/,

    param_line: ($) => seq("#", $.parameter_name, "=", $.parameter_value),

    parameter_name: ($) => /[a-zA-Z_0-9 ]+/,
    parameter_value: ($) => /[a-zA-Z0-9\,_ \.\#\=]*/,

    _bloc_line: ($) => seq("#bloc", "=", $.bloc_keyword, ",", $._cell_list),
    _jump_line: ($) =>
      seq(
        "#bloc",
        "=",
        $.jump_keyword,
        ",",
        "[",
        $.section_name,
        "]",
        seq(repeat($.condition_cell), /\n/),
      ),

    condition_cell: ($) =>
      seq("[", choice($.simple_condition_cell, $.question_mark_cell), "]"),
    simple_condition_cell: ($) => seq(/[#!]+/, $.word),
    question_mark_cell: ($) => seq("?", $.word, "=", $.assignment_value),

    _cell_list: ($) => seq(repeat1($.cell), optional(";"), /\n/),

    bloc_keyword: ($) =>
      choice("YES", "NO", "ADR", "INI", "VAL", "OLD", "CLS", "IF", "NOT"),

    jump_keyword: ($) => choice("MSG", "MSGNOT", "SUB", "SUBNOT"),

    cell: ($) =>
      seq(
        "[",
        $._annotation_characters,
        choice($._word_cell, $._dollar_text, $.assignment_cell),
        "]",
      ),

    _word_cell: ($) => seq(optional(/[A-Z_]+\./), $.word),

    assignment_cell: ($) => seq($.word, "=", $.assignment_value),

    assignment_value: ($) =>
      choice($._number, $._assignment_text, $._dollar_text),

    _dollar_text: ($) => /\$[A-Za-z0-9.%_,=*()\-]+/,

    _number: ($) => /[0-9]+/,

    _annotation_characters: ($) => /[#@!?]*/,

    word: ($) => /[A-Z_][A-Z_0-9]*/,
    _assignment_text: ($) => /[A-Z_][A-Z_0-9=]*/,

    _format_line: ($) => seq("#format", "=", $.parameter_value),
  },
});
