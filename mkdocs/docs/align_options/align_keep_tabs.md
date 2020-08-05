# align_keep_tabs

Whether to keep non-indenting tabs.

Possible values are _true_ and _false_, default _false_.

#Examples

Base example:
```cpp
int main()
{
	int x = 25;
	std::cout << "X is: "	<< x	<< '\n';
	std::cout << "X2 is: "	<< x+2	<< '\n';

	return 0;
}
```
Here there are some tabs in `std::cout` lines to align `<<`.

## true
Changes were not applied to base example

## false
Code after:
```cpp
int main()
{
	int x = 25;
	std::cout << "X is: "   << x    << '\n';
	std::cout << "X2 is: "  << x+2  << '\n';

	return 0;
}
```
Looks like base example, but tabs in `std::cout` lines were replaced with spaces.

#See also
* [indent_with_tabs](../indent_options/indent_with_tabs.md): How to use tabs when indenting code.
* [sp_balance_nested_parens](../spacing_options/sp_balance_nested_parens.md): Whether to balance spaces inside nested parentheses.
