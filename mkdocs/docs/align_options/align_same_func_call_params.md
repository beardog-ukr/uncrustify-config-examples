# align_same_func_call_params

Whether to align parameters in single-line functions that have the same name. The function names must already be aligned with each other.

Possible values are _true_ and _false_, default _false_.

#Examples

Base example:
```cpp
int main()
{
	int aa, x = 10;
	int y = 20;

	booFunct(100, y, 5);
	booFunct(x,     100,    y);

	return 0;
}
```

## true
Code after:
```cpp
int main()
{
	int aa, x = 10;
	int y = 20;

	booFunct(100, y,   5);
	booFunct(  x, 100, y);

	return 0;
}
```

## false
Changes were not applied to base example

#See also
* [indent_with_tabs](../indent_options/indent_with_tabs.md): How to use tabs when indenting code.
* [sp_balance_nested_parens](../spacing_options/sp_balance_nested_parens.md): Whether to balance spaces inside nested parentheses.
* [align_keep_tabs](align_keep_tabs.md): Whether to keep non-indenting tabs.
