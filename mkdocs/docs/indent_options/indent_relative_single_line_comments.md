# indent_relative_single_line_comments

Whether to indent trailing single line ('//') comments relative to the code instead of trying to keep the same absolute column.

Possible values are _true_ and _false_, default _false_.

Does not work with _Uncrustify_d-0.70.1_f_ (provides same result).

# See also

* [nl_if_brace](../newline_options/nl_if_brace.md): Add or remove newline between 'if' and '{'.
* [indent_braces](indent_braces.md): Whether braces are indented to the body level.
* [indent_braces_no_func](indent_braces_no_func.md): Whether to disable indenting function braces if `indent_braces=true`.
* [indent_braces_no_struct](indent_braces_no_struct.md): Whether to disable indenting struct braces if `indent_braces=true`.
