# nl_brace_else

Add or remove newline between '}' and 'else'.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add
Before:
```
if (x<y) {
	std::cout << "Also x is less than " << y << '\n';
} else {
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```
After
```
if (x<y) {
	std::cout << "Also x is less than " << y << '\n';
}
else {
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

## Remove
Before
```
if (x<y)
{
	std::cout << "Also x is less than " << y << '\n';
}
else
{
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

After
```
if (x<y)
{
	std::cout << "Also x is less than " << y << '\n';
}else
{
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

# See also

* [nl_if_brace](nl_if_brace.md) - similar option but for `if`
* [sp_brace_else](../spacing_options/sp_else_brace.md) - Add or remove space between `}` and `else` if on the same line
* [nl_else_brace](nl_else_brace.md)
