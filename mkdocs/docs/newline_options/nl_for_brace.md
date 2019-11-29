# nl_for_brace

Add or remove newline between 'for' and '{'.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add
Before:
```
for (int i=0; i<x; i++) {
  sum = sum+i;
}
```
After
```
for (int i=0; i<x; i++)
{
  sum = sum+i;
}
```

## Remove
Before
```
for (int i=0; i<x; i++)
{
  sum = sum+i;
}
```

After
```
for (int i=0; i<x; i++) {
  sum = sum+i;
}
```

# See also

* [nl_if_leave_one_liners](nl_if_leave_one_liners.md) - if one-line _if_ statements should be changed
* [nl_multi_line_cond](nl_multi_line_cond.md) - Overrides _nl_for_brace_, _nl_if_brace_, _nl_switch_brace_, _nl_while_switch_ and
 _nl_catch_brace_
* [mod_full_brace_for](../other_options/mod_full_brace_for.md) - Add or remove braces on a single-line 'for' statement.
