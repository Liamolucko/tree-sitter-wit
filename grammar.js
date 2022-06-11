/// <reference types="tree-sitter-cli/dsl" />

// For whatever reason, this contains some surrogates, so doesn't work.
// const lowercase = require("@unicode/unicode-14.0.0/General_Category/Lowercase_Letter/regex.js");
const lowercase = /[a-z0-9]/;

/// Creates a rule which parses the passed rule separated by commas, allowing for trailing commas.
function commaSeparated(rule) {
    return optional(seq(rule, repeat(seq(",", rule)), optional(",")));
}

module.exports = grammar({
    name: "wit",

    word: $ => $.id,

    extras: $ => [$._whitespace, $.comment],

    rules: {
        file: $ => repeat($.item),

        _whitespace: $ => /[ \n\r\t]/,
        comment:  $ => choice(/\/\/.*?\n/, /\/\*.*?\*\//),

        // TODO: support unicode and % form of idents
        id: $ => new RegExp(`(${lowercase.source})+(-(${lowercase.source})+)*`),

        ty: $ =>
            choice(
                "u8",
                "u16",
                "u32",
                "u64",
                "s8",
                "s16",
                "s32",
                "s64",
                "float32",
                "float64",
                "char",
                "bool",
                "string",
                "unit",
                $.option,
                $.expected,
                $.tuple,
                $.list,
                $.stream,
                seq("handle", $.id),
                $.id,
            ),

        item: $ =>
            choice(
                $.use,
                $.alias,
                $.record,
                $.flags,
                $.variant,
                $.enum,
                $.union,
                $.func,
                $.resource,
            ),

        option: $ => seq("option", "<", $.ty, ">"),
        expected: $ => seq("expected", "<", $.ty, ",", $.ty, ">"),
        tuple: $ => seq("tuple", "<", commaSeparated($.ty), ">"),
        list: $ => seq("list", "<", $.ty, ">"),
        stream: $ => seq("stream", "<", $.ty, ",", $.ty, ">"),

        use: $ => seq("use", $._useNames, "from", $.id),
        _useNames: $ =>
            choice(
                "*",
                seq("{", $._useNameList, "}"),
            ),
        _useNameList: $ => seq($._useName, repeat(seq(",", $._useName))),
        _useName: $ => choice($.id, seq($.id, "as", $.id)),

        alias: $ => seq("type", $.id, "=", $.ty),

        record: $ => seq("record", $.id, "{", commaSeparated($._field), "}"),
        _field: $ => seq($.id, ":", $.ty),

        flags: $ => seq("flags", $.id, "{", commaSeparated($.id), "}"),

        variant: $ => seq("variant", $.id, "{", commaSeparated($._case), "}"),
        _case: $ => seq($.id, optional(seq("(", $.ty, ")"))),

        enum: $ => seq("enum", $.id, "{", commaSeparated($.id), "}"),

        union: $ => seq("union", $.id, "{", commaSeparated($.ty), "}"),

        func: $ =>
            seq($.id, ":", optional("async"), "func", "(", commaSeparated($._arg), ")", optional(seq("->", $.ty))),
        _arg: $ => seq($.id, ":", $.ty),

        resource: $ => seq("resource", $.id, optional(seq("{", repeat($._resource_item), "}"))),
        _resource_item: $ => seq(optional("static"), $.func),
    },
});
