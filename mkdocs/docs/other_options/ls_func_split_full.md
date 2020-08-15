# ls_func_split_full

Whether to fully split long function prototypes/calls at commas. The option [ls_code_width](ls_code_width.md) has priority over the option `ls_func_split_full`.

Possible values are _true_ and _false_, default _false_.

Works only with non-zero [code_width](code_width.md).

# Examples

##true
Config:
```
code_width = 80
ls_func_split_full = true
```

Before
```cpp
// following line shows code_width limit
// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name, int first_long_name_is_very_long, int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}
```

After
```cpp
// following line shows code_width limit
// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name,
        int first_long_name_is_very_long,
        int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}
```

##false
Config:
```
code_width = 80
ls_func_split_full = false
```

Before
```cpp
// following line shows code_width limit
// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name, int first_long_name_is_very_long, int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}
```

After
```cpp
// following line shows code_width limit
// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name, int first_long_name_is_very_long,
        int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}
```


# See also

* [code_width](code_width.md): Try to limit code width to N columns. Break line if it's too long.
* [ls_for_split_full](ls_func_split_full.md): Whether to fully split long `for` statements at semi-colons.
