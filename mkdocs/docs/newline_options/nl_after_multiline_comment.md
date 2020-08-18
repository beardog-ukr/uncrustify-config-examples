#nl_after_multiline_comment

Whether to force a newline after a multi-line comment.

Possible values are _true_ and  _false_, default _false_.

# Examples

##true
Before
```cpp
/* Multiline comment first line
   and second line
 */int zoo_var = 20;
```

After
```cpp
/* Multiline comment first line
   and second line
 */
int zoo_var = 20;
```
##false
Example above remains unchanged


# See also

* [nl_multi_line_define](nl_multi_line_define.md): Force a newline in a define after the macro name for multi-line defines.
* [nl_else_brace](nl_else_brace.md) - similar option but for _else_ without  _if_
* [nl_if_brace](nl_if_brace.md) - similar option but for `if`
