# nl_else_brace

Add or remove newline between 'else' and '{', similar to [nl_if_brace](nl_if_brace.md)

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add
Before:
```
if (x<y) {
	std::cout << "Also x is less than " << y << '\n';
}
else {
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```
After
```
if (x<y) {
	std::cout << "Also x is less than " << y << '\n';
}
else
{
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
}
else{
	std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

# See also

* [nl_if_brace](nl_if_brace.md) - similar option but for `if`
* [sp_else_brace](../spacing_options/sp_else_brace.md) - for space between `else` and `{`
* [nl_brace_else](nl_brace_else.md) - for removing newline after `}` (and before `else`)
