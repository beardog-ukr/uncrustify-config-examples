# nl_if_brace

Add or remove newline between 'if' and '{'.

Possible values are _ignore_, _add_, _remove_ and _force_.

Note:

* one-line expression gets edited by default; there is [nl_if_leave_one_liners](nl_if_leave_one_liners.md) option to change this behavior
* the _else_ part is not affected; there is similar option [nl_else_brace](nl_else_brace.md) to control this

# Examples

## Add
Before:
```
// One-line if
if (x<15) y=30;

// Single if
if (x<5) {
	std::cout << "x is less than 5" << '\n';
}

// if with else
if (x<y) {
	std::cout << "Also x is less than " << y << '\n';
}
else
{
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```
After
```
// One-line if
if (x<15)
	y=30;

// Single if
if (x<5)
{
	std::cout << "x is less than 5" << '\n';
}

// if with else
if (x<y)
{
	std::cout << "Also x is less than " << y << '\n';
}
else
{
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

## Remove
Before
```
if (x<5)
{
	std::cout << "x is less than 5" << '\n';
}
```

After
```
if (x<y) {
	std::cout << "Also x is less than " << y << '\n';
}
```

# See also

* [nl_else_brace](nl_else_brace.md) - similar option but for _else_
* [nl_if_leave_one_liners](nl_if_leave_one_liners.md) - if one-line _if_ statements should be changed
* [nl_multi_line_cond](nl_multi_line_cond.md) - Overrides _nl_for_brace_, _nl_if_brace_, _nl_switch_brace_, _nl_while_switch_ and
 _nl_catch_brace_
* [mod_full_brace_if](mod_full_brace_if.md) - Add or remove braces on a single-line 'if' statement. Braces will not be
 removed if the braced statement contains an 'else'.
