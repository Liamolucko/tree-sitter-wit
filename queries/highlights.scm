(func
    name: (id) @function)
(arg
    name: (id) @variable.parameter)

(resource
    (func
        name: (id) @function.method))

(field
    name: (id) @property)
(flags
    flag: (id) @property)

; TODO: is `@property` the right classification here?
(case
    name: (id) @property)
(enum
    case: (id) @property)

; Outside of the cases declared above,
; identifiers always refer to types.
(id) @type

(comment) @comment

"," @punctuation.delimiter

[
    "("
    ")"
    "{"
    "}"
    "<"
    ">"
] @punctuation.bracket

[
    "u8" "u16" "u32" "u64"
    "s8" "s16" "s32" "s64"
    "float32" "float64"
    "char"
    "bool"
    "option"
    "string"
    "unit"
] @type.builtin

[
    "handle"
    "expected"
    "tuple"
    "list"
    "stream"
    "use"
    "as"
    "from"
    "type"
    "record"
    "flags"
    "variant"
    "enum"
    "union"
    "static"
    "async"
    "func"
    "resource"
] @keyword
