# List of options

# Spacing
* [sp_angle_paren](spacing_options/sp_angle_paren.md)
* [sp_angle_paren_empty](spacing_options/sp_angle_paren_empty.md)
* [sp_angle_shift](spacing_options/sp_angle_shift.md)
* [sp_angle_word](spacing_options/sp_angle_word.md)
* [sp_assign](spacing_options/sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
* [sp_after_assign](spacing_options/sp_after_assign.md): Add or remove space after assignment operator '=', '+=', etc.
* [sp_before_assign](spacing_options/sp_before_assign.md): Add or remove space before assignment operator '=', '+=', etc.
* [sp_before_sparen](spacing_options/sp_before_sparen.md): Add or remove space before `(` of control statements (`if`, `for`, `switch`, `while` etc.).
* [sp_brace_catch](spacing_options/sp_brace_catch.md): Add or remove space between '}' and 'catch' if on the same line.
* [sp_brace_else](spacing_options/sp_brace_else.md): Add or remove space between `}` and `else` if on the same line
* [sp_catch_brace](spacing_options/sp_catch_brace.md): Add or remove space before the `{` of a `catch` statement, if the `{` and  `catch` are on the same line, as in `catch (decl) <here> {`.
* [sp_catch_paren](spacing_options/sp_catch_paren.md): Add or remove space between `catch` and `(` in `catch (something) { }`. If set to ignore, [sp_before_sparen](spacing_options/sp_before_sparen.md) is used.
* [sp_cpp_lambda_assign](spacing_options/sp_cpp_lambda_assign.md)
* [sp_cpp_lambda_paren](spacing_options/sp_cpp_lambda_paren.md)
* [sp_else_brace](spacing_options/sp_else_brace.md)
* [sp_inside_angle](spacing_options/sp_inside_angle.md)
* [sp_inside_fparens](spacing_options/sp_inside_fparens.md)
* [sp_not](spacing_options/sp_not.md)
* [sp_permit_cpp11_shift](spacing_options/sp_permit_cpp11_shift.md)
* [sp_try_brace](spacing_options/sp_try_brace.md): Add or remove space between `try` and `{` if on the same line.

#Indent
* [align_left_shift](indent_options/align_left_shift.md): Whether to align lines that start with '<<' with previous '<<'.
* [indent_align_string](indent_options/indent_align_string.md): Whether to indent strings broken by '\' so that they line up.
* [indent_class](indent_options/indent_class.md): Whether the '`class`' body is indented.
* [indent_class_colon](indent_options/indent_class_colon.md): Whether to indent the stuff after a leading base class colon.
* [indent_class_on_colon](indent_options/indent_class_on_colon.md): Whether to indent based on a class colon instead of the stuff after the colon.
* [indent_columns](indent_options/indent_columns.md): The number of columns to indent per level.
* [indent_continue](indent_options/indent_continue.md): The continuation indent. If non-zero, this overrides the indent of '(', '[' and '=' continuation indents.
* [indent_constr_colon](indent_options/indent_constr_colon.md): Whether to indent the stuff after a leading class initializer colon.
* [indent_namespace](indent_options/indent_namespace.md): Whether to indent the body of a 'namespace'.
* [indent_shift](indent_options/indent_shift.md): Whether to indent continued shift expressions ('<<' and '>>') instead of aligning.
* [indent_sing_line_comments](indent_options/indent_sing_line_comments.md): Spaces to indent single line (`//`) comments on lines before code.
* [indent_with_tabs](indent_options/indent_with_tabs.md): How to use tabs when indenting code.
* [indent_xml_string](indent_options/indent_xml_string.md): The number of spaces to indent multi-line XML strings.

#Newline
* [nl_after_func_body](newline_options/nl_after_func_body.md): The number of newlines after '}' of a multi-line function body.
* [nl_after_func_body_one_liner](newline_options/nl_after_func_body_one_liner.md): The number of newlines after '}' of a single line function body.
* [nl_after_if](newline_options/nl_after_if.md): Add or remove blank line after 'if' statement.
* [nl_after_switch](newline_options/nl_after_switch.md): Add or remove blank line after `switch` statement.
* [nl_brace_else](newline_options/nl_brace_else.md)
* [nl_before_block_comment](newline_options/nl_before_block_comment.md)
* [nl_before_if](newline_options/nl_before_if.md): Add or remove blank line before 'if'.
* [nl_before_switch](newline_options/nl_before_switch.md): Add or remove blank line before `switch` statement.
* [nl_catch_brace](newline_options/nl_catch_brace.md)
* [nl_else_brace](newline_options/nl_else_brace.md)
* [nl_elseif_brace](newline_options/nl_elseif_brace.md)
* [nl_fdef_brace](newline_options/nl_fdef_brace.md): Add or remove newline between function signature and `{`.
* [nl_for_brace](newline_options/nl_for_brace.md): Add or remove newline between 'for' and '{'.
* [nl_if_brace](newline_options/nl_if_brace.md)
* [nl_if_leave_one_liners](newline_options/nl_if_leave_one_liners.md)
* [nl_max](newline_options/nl_max.md)
* [nl_max_blank_in_func](newline_options/nl_max_blank_in_func.md)
* [nl_multi_line_cond](newline_options/nl_multi_line_cond.md)
* [nl_switch_brace](newline_options/nl_switch_brace.md): Add or remove newline between 'switch' and '{'.

#Other
* [cmt_width](other_options/cmt_width.md)
* [code_width](other_options/code_width.md)
* [disable_processing_cmt](other_options/disable_processing_cmt.md): Specify the marker used in comments to disable processing of part of the file
* [enable_processing_cmt](other_options/enable_processing_cmt.md): Specify the marker used in comments to (re)enable processing in a file
* [mod_full_brace_if](other_options/mod_full_brace_if.md)
* [mod_full_brace_for](other_options/mod_full_brace_for.md)
