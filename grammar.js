module.exports = grammar({
    name: 'neon',
    // TODO: add multiline strings
    externals: $ => [
        $.indent,
        $.dedent,
        $.newline,
    ],
    rules: {
        document: $ => repeat($.property),

        property: $ => prec.left(2, choice(
            $.comment,
            seq(
                $.lvalue,
                ':',
                choice(
                    $.rvalue,
                    seq(
                        $.indent,
                        repeat1($.property),
                        $.dedent,
                    )
                ),
                optional($.comment),
            ),
        )),

        lvalue: $ => choice(
            $.identifier,
            $.string,
        ),

        rvalue: $ => choice(
            $.string,
            $.identifier,
            // $.unquoted_string,
            $.number,
            $.boolean,
            $.entity,
            $.array,
            $.list,
        ),

        entity: $ => seq(
            $.identifier,
            '(',
            optional($.param_list),
            ')'
        ),

        param_list: $ => seq(
            $.property,
            repeat(
                seq(
                    ',',
                    $.parameter
                )
            ),
            optional(','),
        ),

        parameter: $ => seq(
            $.identifier,
            ':',
            $.rvalue
        ),

        array: $ => seq(
            '[',
            optional(seq($.rvalue, repeat(seq(',', $.rvalue)))),
            ']'
        ),

        list: $ => prec.left(2,
            seq(
                $.indent,
                repeat1(
                    seq($.list_item)
                ),
                $.dedent,
            )
        ),

        list_item: $ => seq(
            '-',
            $.rvalue,
        ),

        identifier: () => /[a-zA-Z_][\w\.]*/,
        string: () => /"([^"\\]|\\.)*"|'([^'\\]|\\.)*'/,
        octal_number: () => /0o[0-7]+/,
        hex_number: () => /0x[0-9a-f]+/,
        exponential_number: () => /[+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?/,
        number: $ => choice(/\d+(\.\d+)?/, $.octal_number, $.hex_number, $.exponential_number),
        boolean: () => choice("true", "false"),
        comment: $ => seq(
            '#',
            $.unquoted_string,
        ),
        unquoted_string: () => /[^\n]+/,
    }
});
