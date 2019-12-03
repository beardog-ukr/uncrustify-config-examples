# indent_columns

The number of columns to indent per level. Usually 2, 3, 4, or 8.

Default is 8.

#Examples

Config:
```
indent_with_tabs = 1
indent_columns = 2
```

Before:
```
int main()
{
	int x = 10;
	int sum = 0;

	for (int i=0; i<x; i++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';
}
```

After:
```
int main()
{
  int x = 10;
  int sum = 0;

  for (int i=0; i<x; i++) {
    sum = sum+i;
  }

  std::cout << "sum is" << sum << '\n';
}
```

Code on html page may look the same, but it replaced each tab with two spaces (as [Google guide](../google_style.md) recommends).

#See also

* [indent_with_tabs](indent_with_tabs.md) - How to use tabs when indenting code.
* [input_tab_size](input_tab_size.md) - The original size of tabs in the input.
* [output_tab_size](output_tab_size.md) - The size of tabs in the output (only used if [align_with_tabs](align_with_tabs.md)=true).
