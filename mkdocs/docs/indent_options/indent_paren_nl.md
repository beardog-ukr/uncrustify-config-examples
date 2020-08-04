# indent_paren_nl

If an open parenthesis is followed by a newline, whether to indent the next line so that it lines up after the open parenthesis (not recommended).

Possible values are _true_ and _false_, default _false_.

# Examples

## true
Before:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	for (int i = 0;
		i< 3;
		i++
		) {
		std::cout << "count: " << i << '\n';
	}

	if (
		x<y
	) {
		std::cout << "Also x is less than " << y << '\n';
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

	for (int i = 0;
	     i< 3;
	     i++
	     ) {
		std::cout << "count: " << i << '\n';
	}

	if (
	    x<y
	    ) {
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}
```

## false
Does not change example above.

# See also
* [indent_paren_close](indent_paren_close.md): How to indent a close parenthesis after a newline.
* [indent_func_def_param](indent_func_def_param.md): Same as [indent_func_def_param](indent_func_def_param.md) but for function definitions.
