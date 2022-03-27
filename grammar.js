module.exports = grammar({
	name: 'kdl',

	// Tree-sitter by default allows whitespace between every token, this is definitely not allowed
	// for KDL.
	// For example, no spaces are allowed in front or after the '=' in properties, i.e.
	// 'foo=bar' is valid but 'foo = bar' is not.
	// Additionally, the KDL specification is very explicit about exactly constitutes different sets
	// of allowed whitespace, so to ensure an exact match, we specify it explicitly too.
	extras: $ => [],

	// TODO: We currently require a trailing newline at the end because I haven't figured out a way
	// to allow a node to be ended by EOF in addition to newline.

	rules: {
		document: $ => repeat(seq(repeat($._linespace), $.node, prec.left(repeat($._linespace)))),

		node: $ => seq($.identifier, optional($._node_space), $._node_terminator),
		_node_space: $ => repeat1($._ws),
		_node_terminator: $ => choice(";", $._newline),

		identifier: $ => repeat1(/[a-z]/), // TODO

		// The different kinds of whitespace defined by KDL
		_linespace: $ => choice($._newline, $._ws), // TODO: , $._single_line_comment),
		_newline: $ => "\n", // TODO: Whole newline table
		_ws: $ => choice("\uFEFF" /* BOM */, $._unicode_space), // TODO: , $._multi_line_comment),
		_unicode_space: $ => " ", // TODO: Wholte space table
	}
});
