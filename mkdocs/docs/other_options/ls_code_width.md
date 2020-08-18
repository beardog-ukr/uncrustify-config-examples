#ls_code_width

Whether to split lines as close to code_width as possible and ignore some groupings.

The option [ls_code_width](ls_code_width.md) has priority over the options [ls_for_split_full](ls_for_split_full.md) and [ls_func_split_full](ls_func_split_full.md).

Possible values are _true_ and _false_, default _false_.

Works only with non-zero [code_width](code_width.md).

# Examples
Base config:
```
code_width = 80
ls_for_split_full = true
ls_func_split_full = true

ls_code_width = <example value>
```

Base example:
```cpp
int sum(int short_name, int first_long_name_is_very_long, int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}

int main()
{
	int x = 10;
	int sm = 0;

	// following line shows code_width limit
	// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0; very_long_name_is_long<x; very_long_name_is_long++) {
		sm = sm+i;
	}

	std::cout << "sum is" << sum(10,20,45) << '\n';

	return 0;
}
```

##true
Uncrustified:
```cpp
// following line shows code_width limit
// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name, int first_long_name_is_very_long, int
        second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}

int main()
{
	int x = 10;
	int sm = 0;

	// following line shows code_width limit
	// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0; very_long_name_is_long<x;
	     very_long_name_is_long++) {
		sm = sm+i;
	}

	std::cout << "sum is" << sum(10,20,45) << '\n';

	return 0;
}
```

##false
Processed result:
```cpp
// following line shows code_width limit
// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name,
        int first_long_name_is_very_long,
        int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}

int main()
{
	int x = 10;
	int sm = 0;

	// following line shows code_width limit
	// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0;
	     very_long_name_is_long<x;
	     very_long_name_is_long++) {
		sm = sm+i;
	}

	std::cout << "sum is" << sum(10,20,45) << '\n';

	return 0;
}

```

# See also

* [code_width](code_width.md): Try to limit code width to N columns. Break line if it's too long.
* [ls_for_split_full](ls_func_split_full.md): Whether to fully split long `for` statements at semi-colons.
* [ls_func_split_full](ls_func_split_full.md): Whether to fully split long function prototypes/calls at commas.
