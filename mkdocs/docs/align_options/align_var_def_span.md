# align_var_def_span

The span for aligning variable definitions.

A '_span_' is the maximum number of lines that a aligning feature will be considered.  This is done to limit the scope of the aligning. So, if a span is set to 3 and more than 3 lines do not contain the item that is to be aligned, then the aligning set is closed.

Integer value, default 0.

Non-zero value is required for [align_var_def_amp_style](align_var_def_amp_style.md) [align_var_def_star_style](align_var_def_star_style.md) options work.

# Examples
Base Example:
```cpp
int main()
{
	int base = 9;
	int & booOne;
	int &roo;
	unsigned char& oochoo;

	int fase = 100;
	char & fooOne;


	std::cout << sizeof(base) << '\n';
	return 0;
}
```

Base config:
```
align_var_def_span = 0 # this value gets changed for each of the examples
align_var_def_amp_style = 1 # triggers some changes
```

## value 0
Base example remains unchanged

## value 1
After:
```cpp
int main()
{
	int          base = 9;
	int          & booOne;
	int          &roo;
	unsigned char& oochoo;

	int  fase = 100;
	char & fooOne;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```
Here second variables block has different alignment than first one.

## value 3
After:
```cpp
int main()
{
	int          base = 9;
	int          & booOne;
	int          &roo;
	unsigned char& oochoo;

	int          fase = 100;
	char         & fooOne;

	std::cout << sizeof(base) << '\n';
	return 0;
}
```
Here two blocks of variables have same alignment.

#See also
* [align_var_def_amp_style](align_options/align_var_def_amp_style.md): How to consider (or treat) the '&' in the alignment of variable definitions.
* [align_var_def_star_style](align_var_def_star_style.md): How to consider (or treat) the '&ast;' in the alignment of variable definitions.
