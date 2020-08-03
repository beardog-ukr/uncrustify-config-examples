# indent_braces_no_func

Whether to disable indenting function braces if `indent_braces=true`.

Possible values are _true_ and _false_, default _false_.

Works only if [indent_braces](indent_braces.md) is _true_.

#Examples
Config:
```
indent_braces = true
indent_braces_no_func = true
```

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
Note the "main" braces were not indented.

# See also

* [nl_if_brace](../newline_options/nl_if_brace.md): Add or remove newline between 'if' and '{'.
* [indent_braces](indent_braces.md): Whether braces are indented to the body level.
* [indent_braces_no_class](indent_braces_no_class.md): Whether to disable indenting class braces if `indent_braces=true`.
* [indent_braces_no_struct](indent_braces_no_struct.md): Whether to disable indenting struct braces if `indent_braces=true`.
