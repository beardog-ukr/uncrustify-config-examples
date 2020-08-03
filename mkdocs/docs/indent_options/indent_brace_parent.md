# indent_brace_parent

Whether to indent based on the size of the brace parent, i.e. `if` => 3 spaces, `for` => 4 spaces, etc.

Possible values are _true_ and _false_, default _false_.

#Examples

## true
Before:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	x = 20 * x;
	if (x<y)
	{
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}
```

code after:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	x = 20 * x;
	if (x<y)
	   {
	   std::cout << "Also x is less than " << y << '\n';
	   }

	return 0;
}
```

## false

Code in above example will not be changed for `false`.

# See also

* [nl_if_brace](../newline_options/nl_if_brace.md): Add or remove newline between 'if' and '{'.
* [indent_braces](indent_braces.md): Whether braces are indented to the body level.
