# indent_braces

Whether braces are indented to the body level.

Possible values are _true_ and _false_, default _false_.

#Examples
# true
Before:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	else {
		std::cout << "Also x is more (or equal) than " << y << '\n';
	}

	return 0;
}
```
code after:
```cpp
int main()
	{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
		}
	else {
		std::cout << "Also x is more (or equal) than " << y << '\n';
		}

	return 0;
	}
```

# See also

* [nl_else_brace](../newline_options/nl_else_brace.md) - similar option but for _else_ without  _if_
* [nl_if_brace](../newline_options/nl_if_brace.md) - similar option but for `if`
* [nl_before_switch](../newline_options/nl_before_switch.md) - Add or remove blank line before 'switch'.
* [indent_braces_no_class](indent_braces_no_class.md): Whether to disable indenting class braces if `indent_braces=true`.
* [indent_braces_no_func](indent_braces_no_func.md): Whether to disable indenting function braces if `indent_braces=true`.
* [indent_braces_no_struct](indent_braces_no_struct.md): Whether to disable indenting struct braces if `indent_braces=true`.
