# align_var_def_star_style

How to consider (or treat) the '&ast;' in the alignment of variable definitions.

Integer value, default 0.

* 0: Part of the type     `void *   foo;` (default)
* 1: Part of the variable `void     *foo;`
* 2: Dangling             `void    *foo;`. Dangling: the '&ast;' will not be taken into account when aligning.

The [align_var_def_span](align_var_def_span.md) must be set to 1 or more for this option work.

# Examples
Base Example:
```cpp
int main()
{
	int *base = 9;
	int * booOne;
	int *roo;
	unsigned char* oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

Base config:
```
align_var_def_span = 1
align_var_def_star_style = 0 # this value gets changed for every example
```

## value 0
After:
```cpp
int main()
{
	int *          base = 9;
	int *          booOne;
	int *          roo;
	unsigned char* oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

## value 1
After:
```cpp
int main()
{
	int          *base = 9;
	int          * booOne;
	int          *roo;
	unsigned char* oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

## value 2
After:
```cpp
int main()
{
	int           *base = 9;
	int          * booOne;
	int           *roo;
	unsigned char* oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

#See also
* [align_var_def_span](align_var_def_span.md): The span for aligning variable definitions.
* [align_var_def_amp_style](align_var_def_amp_style.md): How to consider (or treat) the '&' in the alignment of variable definitions.
* [align_same_func_call_params](align_same_func_call_params.md): Whether to align parameters in single-line functions that have the same name.
* [align_keep_tabs](align_keep_tabs.md): Whether to keep non-indenting tabs.
