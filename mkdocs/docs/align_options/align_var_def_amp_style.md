# align_var_def_amp_style

How to consider (or treat) the '&' in the alignment of variable definitions.

* 0: Part of the type `long &   foo;'` (default)
* 1: Part of the variable `long     &foo;`
* 2: Dangling `long    &foo;`, the '&' will not be taken into account when aligning. This part does not work with _Uncrustify_d-0.70.1_f_

The [align_var_def_span](align_var_def_span.md) must be set to 1 or more for this option work.

# Examples
Base Example:
```cpp
int main()
{
	int base = 9;
	int & booOne;
	int &roo;
	unsigned char& oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

Base config:
```
align_var_def_span = 1
align_var_def_amp_style = 0 # this value gets changed for every example
```

## value 0
After:
```cpp
int main()
{
	int            base = 9;
	int &          booOne;
	int &          roo;
	unsigned char& oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

## value 1
After:
```cpp
int main()
{
	int          base = 9;
	int          & booOne;
	int          &roo;
	unsigned char& oochoo;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```

## value 2
Works as value 1 for some reason.

#See also
* [align_var_def_span](align_var_def_span.md): The span for aligning variable definitions.
* [indent_with_tabs](../indent_options/indent_with_tabs.md): How to use tabs when indenting code.
* [align_same_func_call_params](align_same_func_call_params.md): Whether to align parameters in single-line functions that have the same name.
* [align_keep_tabs](align_keep_tabs.md): Whether to keep non-indenting tabs.
