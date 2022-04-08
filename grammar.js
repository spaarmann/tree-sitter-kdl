module.exports = grammar({
	name: 'kdl',

	// See Whitespace table in spec; FEFF is explicitly allowed as whitespace in grammar
	extras: $ => ["\t", " ", "\u00A0", "\u1680", /[\u2000-\u200A]/, "\u202F", "\u205F", "\u3000", "\uFEFF", $.multi_line_comment],

	word: $ => $.identifier,

	// TODO: We currently require a trailing newline at the end because I haven't figured out a way
	// to allow a node to be ended by EOF in addition to newline.

	rules: {
		document: $ => seq(repeat($._linespace), repeat(seq($.node, repeat($._linespace)))),

		node: $ => seq($.identifier, optional($._escline), repeat($._node_prop_or_arg), optional($._node_children), $._node_terminator),

		_node_prop_or_arg: $ => seq(choice($.value, $.prop), optional($._escline)),
		_node_children: $ => seq("{", optional($._linespace), repeat(seq($.node, optional($._linespace))), "}"),
		_node_terminator: $ => choice(";", $.single_line_comment, $._newline), // TODO: eof

		prop: $ => seq($.identifier, token.immediate("="), $.value),

		identifier: $ => /([^+\-0-9\u0000-\u0020\\\/\(\)\{\}<>;\[\]=,"][^\u0000-\u0020\\\/\(\)\{\}<>;\[\]=,"]*)|([+\-]([^0-9\u0000-\u0020\\\/\(\)\{\}<>;\[\]=,"][^\u0000-\u0020\\\/\(\)\{\}<>;\[\]=,"]*)?)/,

		value: $ => choice($.number, $.boolean, $.null, $.string), // TODO

		number: $ => choice($._decimal, $._hex, $._octal, $._binary),
		_binary: $ => /[+-]?0b[01][01_]*/,
		_octal: $ => /[+-]?0o[0-7][0-7_]*/,
		_hex: $ => /[+-]?0x[0-9a-fA-F][0-9a-fA-F_]*/,
		_decimal: $ => /[+-]?[0-9][0-9_]*(\.[0-9][0-9_]*)?([eE][+-]?[0-9][0-9_]*)?/,

		boolean: $ => choice("false", "true"),
		null: $ => "null",

		string: $ => /"([^\\"]|\\([\\/bfnrt]|u\{[0-9a-fA-F]{1,6}\}))*"/, // TODO: raw strings

		_linespace: $ => choice($._newline, $.single_line_comment),
		_newline: $ => /\r\n|\r|\n|\u{0085}|\u{000C}|\u{2028}|\u{2029}/,

		_escline: $ => seq("\\", choice($.single_line_comment, $._newline)),

		single_line_comment: $ => seq("//", repeat1(/[^\n]/), $._newline), // TODO EOF
		multi_line_comment: $ => seq("/*", $._commented_block),
		_commented_block: $ => choice("*/", seq(choice($.multi_line_comment, '*', '/', /[^*/]+/), $._commented_block)),
	}
});
