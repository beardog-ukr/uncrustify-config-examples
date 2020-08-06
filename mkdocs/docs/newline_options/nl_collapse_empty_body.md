# nl_collapse_empty_body

Whether to collapse empty blocks between '{' and '}'.

Possible values are _true_ and  _false_, default _false_.

# Examples

## true
Code before
```cpp
int main()
{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	else {

	}

}
```

After
```cpp
int main()
{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	else {}

}
```

## false
The example above remains unchanged.

# See also

* [nl_if_brace](nl_if_brace.md) - Add or remove newline between `if` and `{`.
* [sp_brace_else](../spacing_options/sp_brace_else.md) - Add or remove space between `}` and `else` if on the same line
