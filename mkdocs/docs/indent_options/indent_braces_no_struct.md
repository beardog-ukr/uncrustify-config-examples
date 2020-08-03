# indent_braces_no_struct

Whether to disable indenting struct braces if indent_braces=true.

Possible values are _true_ and _false_, default _false_.

Works only if [indent_braces](indent_braces.md) is _true_.

#Examples
Config:
```
indent_braces = true
#indent_braces_no_struct = false # this is default
```

Before:
```cpp
struct Barrel
{
	int width;
	int height;
	int radius;
};

int boo()
{
	Barrel b;
	b.width = 15;
	std::cout << "Width is " << b.width << '\n';
	return 0;
}
```

code after:
```cpp
struct Barrel
	{
	int width;
	int height;
	int radius;
	};

int boo()
	{
	Barrel b;
	b.width = 15;
	std::cout << "Width is " << b.width << '\n';
	return 0;
	}
```

# See also

* [nl_if_brace](../newline_options/nl_if_brace.md): Add or remove newline between 'if' and '{'.
* [indent_braces](indent_braces.md): Whether braces are indented to the body level.
* [indent_braces_no_class](indent_braces_no_class.md): Whether to disable indenting class braces if `indent_braces=true`.
* [indent_braces_no_func](indent_braces_no_func.md): Whether to disable indenting function braces if `indent_braces=true`.
