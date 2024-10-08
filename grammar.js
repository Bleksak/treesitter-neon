/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: "neon",
	externals: ($) => [$.indent, $.dedent, $.newline],
	rules: {
		document: ($) => repeat($.property),

		property: ($) =>
			prec.left(
				2,
				choice(
					$.comment,
					seq(
						$.lvalue,
						":",
						choice(
							$.newline,
							seq($.indent, repeat1($.property), $.dedent),
							$.rvalue,
						),
						optional($.comment),
					),
				),
			),

		lvalue: ($) => choice($.identifier_lvalue, $.number, $.string),

		rvalue: ($) =>
			choice(
				$.identifier,
				$.string,
				$.number,
				$.boolean,
				$.entity,
				$.array,
				$.list,
			),

		entity: ($) => seq($.identifier, "(", optional($.param_list), ")"),

		param_list: ($) =>
			seq($.property, repeat(seq(",", $.parameter)), optional(",")),

		parameter: ($) => choice($.rvalue, seq($.identifier, ":", $.rvalue)),

		array: ($) =>
			seq("[", optional(seq($.rvalue, repeat(seq(",", $.rvalue)))), "]"),

		list: ($) =>
			prec.left(2, seq($.indent, repeat1(seq($.list_item)), $.dedent)),

		list_item: ($) => seq("-", $.rvalue, optional($.comment)),

		identifier: () => /[a-zA-Z_\d\*\\\.\%\/][\/ \w\.\*\\\:\%]*/,
		// same as identifier, but allow numbers even at the beginning
		identifier_lvalue: () => /[a-zA-Z_\d\*\\][\w\.\*\\]*/,
		string: ($) =>
			prec.left(
				2,
				choice(
					seq(
						$.multiline_string_double_quotes,
						/([^"]*?)/,
						$.multiline_string_double_quotes,
					),
					seq(
						$.multiline_string_single_quotes,
						/([^']*?)/,
						$.multiline_string_single_quotes,
					),
					seq(
						$.normal_string_double_quotes,
						/([^"\\]*(\\.[^"\\]*)*)/,
						$.normal_string_double_quotes,
					),
					seq(
						$.normal_string_single_quotes,
						/([^'\\]*(\\.[^'\\]*)*)/,
						$.normal_string_single_quotes,
					),
				),
			),

		multiline_string_double_quotes: () => /\"\"\"/,
		multiline_string_single_quotes: () => /\'\'\'/,
		normal_string_double_quotes: () => /\"/,
		normal_string_single_quotes: () => /\'/,

		octal_number: () => /0o[0-7]+/,
		hex_number: () => /0x[0-9a-f]+/,
		exponential_number: () =>
			/[+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?/,
		number: ($) =>
			choice(/\d+(\.\d+)?/, $.octal_number, $.hex_number, $.exponential_number),
		boolean: () => choice("true", "false"),
		comment: ($) => seq("#", $.unquoted_string),
		unquoted_string: () => /[^\n]+/,
	},
});
