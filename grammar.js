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

//Unresolved conflict for symbol sequence:
//
//  identifier  _escline  •  '﻿'  …
//
//Possible interpretations:
//
//  1:  identifier  (_node_space  _escline  •  _node_space_repeat1)
//  2:  identifier  (_node_space  _escline)  •  '﻿'  …
//
//Possible resolutions:
//
//  1:  Specify a left or right associativity in `_node_space`
//  2:  Add a conflict for these rules: `_node_space`

		node: $ => seq($.identifier, repeat(seq($._node_space, $._node_prop_or_arg)),
			optional($._node_space), $._node_terminator),
		_node_prop_or_arg: $ => choice($.prop, $.value),
		_node_space: $ => choice(seq(repeat($._ws), repeat1(seq($._escline, repeat($._ws)))), repeat1($._ws)),
		_node_terminator: $ => choice(";", $._newline),

		prop: $ => seq($.identifier, "=", $.value),

		identifier: $ => repeat1(/[a-z]/), // TODO

		value: $ => choice($.number, $.boolean, $.null), // TODO

		number: $ => choice($._decimal, $._hex, $._octal, $._binary),
		_decimal: $ => seq(optional($._sign), $._integer, optional(seq(".", $._integer)), optional($._exponent)),
		_exponent: $ => seq(choice('e', 'E'), optional($._sign), $._integer),
		_integer: $ => seq($._digit, repeat(choice($._digit, "_"))),
		_digit: $ => /[0-9]/,
		_sign: $ => choice("+", "-"),

		_hex: $ => seq(optional($._sign), "0x", $._hex_digit, repeat(choice($._hex_digit, "_"))),
		_hex_digit: $ => /[0-9a-fA-F]/,
		_octal: $ => seq(optional($._sign), "0o", /[0-7]/, repeat(/[0-7_]/)),
		_binary: $ => seq(optional($._sign), "0b", choice("0", "1"), repeat(choice("0", "1", "_"))),

		boolean: $ => choice("false", "true"),
		null: $ => "null",

		// The different kinds of whitespace defined by KDL
		_linespace: $ => choice($._newline, $._ws), // TODO: , $._single_line_comment),
		_newline: $ => "\n", // TODO: Whole newline table
		_ws: $ => choice("\uFEFF" /* BOM */, $._unicode_space), // TODO: , $._multi_line_comment),
		_unicode_space: $ => " ", // TODO: Wholte space table

		_escline: $ => seq("\\", repeat($._ws), $._newline), // TODO: Should allow a comment too
	}
});
