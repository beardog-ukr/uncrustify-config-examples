# nl_if_leave_one_liners

Don't split one-line if/else statements, as in 'if(...) b++;'.

This option works only with [nl_if_brace](nl_if_brace.md) set to _add_/_force_

Possible values are _true_ and  _false_.

# Examples

## true
Following configuration breaks `if` statements but leaves one-lines:
```
nl_if_brace            = force
nl_if_leave_one_liners = true
```
Like
```
if (a<100) c = a;

if (c>5) {
  std::cout << "c is larger than 5" << '\n';
}
```
After
```
if (a<100) c = a;

if (c>5)
{
  std::cout << "c is larger than 5" << '\n';
}
```

# See also

* [nl_if_brace](nl_if_brace.md) - Add or remove newline between `if` and `{`.
* [sp_brace_else](../spacing_options/sp_brace_else.md) - Add or remove space between `}` and `else` if on the same line
