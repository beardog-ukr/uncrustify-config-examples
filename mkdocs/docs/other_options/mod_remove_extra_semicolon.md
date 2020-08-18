#mod_remove_extra_semicolon



Possible values are _true_ and _false_, default _false_.

Conflicts with [sp_after_semi](../spacing_options/sp_after_semi.md).

Works a bit incorrectly with _Uncrustify_d-0.70.1_f_.


# Examples
Base config:
```
sp_after_semi = ignore
mod_remove_extra_semicolon = <example value>
```

Base example:
```cpp
int x = 10;;
int y = 20;

if (x<15) y=3;;;;
```

##true
Result:
```cpp
int x = 10;
int y = 20;

if (x<15) y=3;;
```
Note one additional semicolon remains in last line.

##false
Base example remains unchanged.

# See also
* [nl_ds_struct_enum_close_brace](../newline_options/nl_ds_struct_enum_close_brace.md): Whether to force a newline before '}' of a 'struct'/'union'/'enum'.
* [nl_inside_namespace](../newline_options/nl_inside_namespace.md):  The number of newlines after `{` of a namespace.
* [eat_blanks_before_close_brace](eat_blanks_before_close_brace.md): Whether to remove blank lines before '}'.
* [nl_squeeze_ifdef](../newline_options/nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
