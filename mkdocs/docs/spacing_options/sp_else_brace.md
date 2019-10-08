# sp_else_brace

Add or remove space between 'else' and '{' if on the same line.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add
Before:
```
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}else{
  std::cout << "Also x is more (or equal) than " << y << '\n';
}
```
After
```
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}else {
  std::cout << "Also x is more (or equal) than " << y << '\n';
}
```
Here space is added to the right of `else`; the [sp_brace_else](sp_brace_else.md) may add space to the left

## Remove
Before
```
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
else      {
  std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

After
```
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
else{
  std::cout << "Also x is more (or equal) than " << y << '\n';
}
```

# See also

* [nl_brace_else](../newline_options/nl_brace_else.md) - Add or remove newline between `}` and `else`.
* [nl_elseif_brace](../newline_options/nl_elseif_brace.md) - Add or remove newline between `else if` and `{`.
