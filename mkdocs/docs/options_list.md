# List of options

# Align
_Note: only few of "align_&ast;" options really work, all other are bugged_

* [align_keep_tabs](align_options/align_keep_tabs.md): Whether to keep non-indenting tabs.
* [align_right_cmt_at_col](align_options/align_right_cmt_at_col.md): Minimum column at which to align trailing comments.
* [align_right_cmt_gap](align_options/align_right_cmt_gap.md): Minimum number of columns between preceding text and a trailing comment in order for the comment to qualify for being aligned.
* [align_right_cmt_span](align_options/align_right_cmt_span.md): The span for aligning comments that end lines.
* [align_same_func_call_params](align_options/align_same_func_call_params.md): Whether to align parameters in single-line functions that have the same name.
* [align_same_func_call_params_span](align_options/align_same_func_call_params_span.md): The span for aligning function-call parameters for single line functions.
* [align_var_def_amp_style](align_options/align_var_def_amp_style.md): How to consider (or treat) the '&' in the alignment of variable definitions.
* [align_var_def_colon](align_options/align_var_def_colon.md): Whether to align the colon in struct bit fields.
* [align_var_def_inline](align_options/align_var_def_inline.md): Whether to align inline struct/enum/union variable definitions.
* [align_var_def_span](align_options/align_var_def_span.md): The span for aligning variable definitions.
* [align_var_def_star_style](align_options/align_var_def_star_style.md): How to consider (or treat) the '&ast;' in the alignment of variable definitions.

# Spacing
* [sp_angle_paren](spacing_options/sp_angle_paren.md)
* [sp_angle_paren_empty](spacing_options/sp_angle_paren_empty.md)
* [sp_angle_shift](spacing_options/sp_angle_shift.md)
* [sp_angle_word](spacing_options/sp_angle_word.md)
* [sp_assign](spacing_options/sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
* [sp_after_assign](spacing_options/sp_after_assign.md): Add or remove space after assignment operator '=', '+=', etc.
* [sp_balance_nested_parens](spacing_options/sp_balance_nested_parens.md): Whether to balance spaces inside nested parentheses.
* [sp_before_assign](spacing_options/sp_before_assign.md): Add or remove space before assignment operator '=', '+=', etc.
* [sp_before_sparen](spacing_options/sp_before_sparen.md): Add or remove space before `(` of control statements (`if`, `for`, `switch`, `while` etc.).
* [sp_before_tr_emb_cmt](spacing_options/sp_before_tr_emb_cmt.md): Add or remove space before a trailing or embedded comment.
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
* [sp_num_before_tr_emb_cmt](spacing_options/sp_num_before_tr_emb_cmt.md): Number of spaces before a trailing or embedded comment.
* [sp_permit_cpp11_shift](spacing_options/sp_permit_cpp11_shift.md)
* [sp_try_brace](spacing_options/sp_try_brace.md): Add or remove space between `try` and `{` if on the same line.

#Indent
* [align_left_shift](indent_options/align_left_shift.md): Whether to align lines that start with '<<' with previous '<<'.
* [indent_access_spec](indent_options/indent_access_spec.md): Same as [indent_label](indent_options/indent_label.md), but for access specifiers that are followed by a colon.
* [indent_access_spec_body](indent_options/indent_access_spec_body.md): Whether to indent the code after an access specifier by one level.
* [indent_align_assign](indent_options/indent_align_assign.md): Whether to align continued statements at the '='. If false or if the '=' is followed by a newline, the next line is indent one tab.
* [indent_align_string](indent_options/indent_align_string.md): Whether to indent strings broken by '\' so that they line up.
* [indent_brace_parent](indent_options/indent_brace_parent.md): Whether to indent based on the size of the brace parent.
* [indent_braces](indent_options/indent_braces.md): Whether braces are indented to the body level.
* [indent_braces_no_func](indent_options/indent_braces_no_func.md): Whether to disable indenting function braces if `indent_braces=true`.
* [indent_braces_no_class](indent_options/indent_braces_no_class.md): Whether to disable indenting class braces if `indent_braces=true`.
* [indent_braces_no_struct](indent_options/indent_braces_no_struct.md): Whether to disable indenting struct braces if `indent_braces=true`.
* [indent_class](indent_options/indent_class.md): Whether the '`class`' body is indented.
* [indent_class_colon](indent_options/indent_class_colon.md): Whether to indent the stuff after a leading base class colon.
* [indent_class_on_colon](indent_options/indent_class_on_colon.md): Whether to indent based on a class colon instead of the stuff after the colon.
* [indent_col1_comment](indent_options/indent_col1_comment.md): Whether to indent comments found in first column.
* [indent_columns](indent_options/indent_columns.md): The number of columns to indent per level.
* [indent_continue](indent_options/indent_continue.md): The continuation indent. If non-zero, this overrides the indent of '(', '[' and '=' continuation indents.
* [indent_constr_colon](indent_options/indent_constr_colon.md): Whether to indent the stuff after a leading class initializer colon.
* [indent_comma_paren](indent_options/indent_comma_paren.md): Whether to indent a comma when inside a parenthesis. If true, aligns under the open parenthesis.
* [indent_ctor_init_leading](indent_options/indent_ctor_init_leading.md): Virtual indent from the ':' for member initializers.
* [indent_else_if](indent_options/indent_else_if.md): Whether to indent `if` following `else` as a new block under the `else`.
* [indent_extern](indent_options/indent_extern.md): Whether the `extern "C"` body is indented.
* [indent_first_for_expr](indent_options/indent_first_for_expr.md): Whether to align the first expression to following ones if [indent_semicolon_for_paren](indent_semicolon_for_paren.md)=true.
* [indent_func_call_param](indent_options/indent_func_call_param.md): Whether to indent continued function call parameters one indent level, rather than aligning parameters under the open parenthesis.
* [indent_func_class_param](indent_func_class_param.md): Same as [indent_func_def_param](indent_options/indent_func_def_param.md), but for class declarations.
* [indent_func_ctor_var_param](indent_options/indent_func_ctor_var_param.md): Same as [indent_func_def_param](indent_options/indent_func_def_param.md), but for class variable constructors.
* [indent_func_def_param](indent_options/indent_func_def_param.md): Same as [indent_func_call_param](indent_options/indent_func_call_param.md), but for function definitions.
* [indent_func_param_double](indent_options/indent_func_param_double.md): Double the indent for indent_func_xxx_param options. Use both values of the options [indent_columns](indent_options/indent_columns.md) and [indent_param](indent_options/indent_param.md)
* [indent_func_proto_param](indent_options/indent_func_proto_param.md): Same as [indent_func_call_param](indent_options/indent_func_call_param.md), but for function prototypes.
* [indent_namespace](indent_options/indent_namespace.md): Whether to indent the body of a 'namespace'.
* [indent_param](indent_options/indent_param.md): The continuation indent for [func_*_param](indent_options/indent_func_call_param.md) if they are true. If non-zero, this overrides the indent.
* [indent_paren_close](indent_options/indent_paren_close.md): How to indent a close parenthesis after a newline.
* [indent_paren_nl](indent_options/indent_paren_nl.md): If an open parenthesis is followed by a newline, whether to indent the next line so that it lines up after the open parenthesis.
* [indent_relative_single_line_comments](indent_options/indent_relative_single_line_comments.md): Whether to indent trailing single line ('//') comments relative to the code instead of trying to keep the same absolute column.
* [indent_semicolon_for_paren](indent_semicolon_for_paren.md): Whether to indent a semicolon when inside a for parenthesis.
* [indent_shift](indent_options/indent_shift.md): Whether to indent continued shift expressions ('<<' and '>>') instead of aligning.
* [indent_sing_line_comments](indent_options/indent_sing_line_comments.md): Spaces to indent single line (`//`) comments on lines before code.
* [indent_square_nl](indent_options/indent_square_nl.md): If an open square is followed by a newline, whether to indent the next line so that it lines up after the open square (not recommended).
* [indent_template_param](indent_options/indent_template_param.md): Same as [indent_func_def_param](indent_options/indent_func_def_param.md), but for template parameter lists.
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

#Bugged options
Some options do not work (or are too sophisticated to understand how they work):

* [align_right_cmt_at_col](align_options/align_right_cmt_at_col.md)
* [align_same_func_call_params_span](align_options/align_same_func_call_params_span.md)
* [align_var_def_amp_style](align_options/align_var_def_amp_style.md)
* [align_var_def_inline](align_options/align_var_def_inline.md)
* [align_var_def_colon](align_options/align_var_def_colon.md)
* [indent_align_assign](indent_options/indent_align_assign.md)
* [indent_braces_no_class](indent_options/indent_braces_no_class.md)
* [indent_ctor_init_leading](indent_options/indent_ctor_init_leading.md)
* [indent_first_for_expr](indent_options/indent_first_for_expr.md)
* [indent_relative_single_line_comments](indent_options/indent_relative_single_line_comments.md)
* [indent_semicolon_for_paren](indent_options/indent_semicolon_for_paren.md)
* [indent_template_param](indent_options/indent_template_param.md)
