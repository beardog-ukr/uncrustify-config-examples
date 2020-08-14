# ls_for_split_full

Whether to fully split long 'for' statements at semi-colons.

Possible values are _true_ and _false_, default _false_.

Works only with non-zero [code_width](code_width.md).

# Examples

##true
Config:
```
code_width = 80
ls_for_split_full = true
```

Before
```cpp
int main()
{
	// following line shows code_width limit
	// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0; very_long_name_is_long<x; very_long_name_is_long++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';
	return 0;
}
```
After
```cpp
int main()
{
	// following line shows code_width limit
	// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0;
	     very_long_name_is_long<x;
	     very_long_name_is_long++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';
	return 0;
}
```

##false
Config:
```
code_width = 80
ls_for_split_full = true
```

Before
```cpp
int main()
{
	// following line shows code_width limit
	// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0; very_long_name_is_long<x; very_long_name_is_long++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';
	return 0;
}
```

After
```cpp
int main()
{
	// following line shows code_width limit
	// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0; very_long_name_is_long<x;
	     very_long_name_is_long++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';
	return 0;
}
```

# See also

* [code_width](code_width.md): Try to limit code width to N columns. Break line if it's too long.
* Special line breaking cases: [ls_for_split_full](ls_for_split_full.md), [ls_func_split_full](ls_func_split_full.md) and [ls_code_width](ls_code_width.md)
