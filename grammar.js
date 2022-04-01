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
		document: $ => seq(optional($._linespace), repeat(seq($.node, optional($._linespace)))),

//    identifier  _node_props_args_children_repeat1  _node_prop_or_arg  _node_props_args_children_repeat1  _node_prop_or_arg  •  '﻿'  …
//
//1:  identifier  _node_props_args_children_repeat1  _node_prop_or_arg  (_node_props_args_children  _node_props_args_children_repeat1  _node_prop_or_arg  •  _node_props_args_children  _node_props_args_children_repeat1)
//2:  identifier  _node_props_args_children_repeat1  _node_prop_or_arg  (_node_props_args_children  _node_props_args_children_repeat1  _node_prop_or_arg  •  _node_props_args_children)
//3:  identifier  _node_props_args_children_repeat1  _node_prop_or_arg  (_node_props_args_children  _node_props_args_children_repeat1  _node_prop_or_arg  •  _node_props_args_children_repeat1)
//4:  identifier  _node_props_args_children_repeat1  _node_prop_or_arg  (_node_props_args_children  _node_props_args_children_repeat1  _node_prop_or_arg)  •  '﻿'  …

		node: $ => seq($.identifier, $._node_props_args_children, $._node_terminator),
		// Repeatedly parse props or args, until encountering a '{' or some token not valid in a
		// node declaration. In the former case, parse the children. Either way, stop afterwards.
		_node_props_args_children: $ => seq(
			repeat1($._node_space),
			choice(
				$._node_children,
				seq($._node_prop_or_arg, optional($._node_props_args_children)),
			),
			repeat($._node_space),
		),
		_node_prop_or_arg: $ => choice($.prop, $.value),
		_node_children: $ => seq("{", optional($._linespace), repeat(seq($.node, optional($._linespace))), "}"),
		//_node_space: $ => choice(seq(repeat($._ws), repeat1(seq($._escline, repeat($._ws)))), repeat1($._ws)),
		_node_space: $ => choice($._ws, $._escline),
		_node_terminator: $ => choice(";", $.single_line_comment, $._newline), // TODO: eof

		prop: $ => seq($.identifier, "=", $.value),

		identifier: $ => repeat1(/[a-z]/), //seq(/[a-z]/, repeat(/[a-z0-9]/)), // TODO

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
		_linespace: $ => choice($._newline, $._ws, $.single_line_comment),
		_newline: $ => "\n", // TODO: Whole newline table
		_ws: $ => choice("\uFEFF" /* BOM */, $._unicode_space), // TODO: , $._multi_line_comment),
		_unicode_space: $ => " ", // TODO: Whole space table

		_escline: $ => seq("\\", repeat($._ws), choice($.single_line_comment, $._newline)),

		single_line_comment: $ => seq("//", repeat1(/[^\n]/), $._newline), // TODO: Should allow EOF, should be $._newline, not \n
	}
});
