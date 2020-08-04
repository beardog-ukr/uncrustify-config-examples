# indent_comma_paren

Whether to indent a comma when inside a parenthesis. If true, aligns under the open parenthesis.

Possible values are _true_ and _false_, default _false_.

# Examples
Base example:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	many_param_func(x
		,y
		,33
		,44
	);

	return 0;
}
```

It's hard to spot difference, but there is one space in below results.

## true
After:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	many_param_func(x
	               ,y
	               ,33
	               ,44
	                );

	return 0;
}
```

## false
After:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	many_param_func(x
	                ,y
	                ,33
	                ,44
	                );

	return 0;
}
```

# See also
* [indent_paren_nl](indent_paren_nl): If an open parenthesis is followed by a newline, whether to indent the next line so that it lines up after the open parenthesis.
* [indent_func_def_param](indent_func_def_param.md): Same as [indent_func_def_param](indent_func_def_param.md) but for function definitions.
