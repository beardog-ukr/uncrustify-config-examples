# indent_else_if

Whether to indent `if` following `else` as a new block under the `else`.

If false, `else\nif` is treated as `else if` for indenting purposes.

Possible values are _true_ and _false_, default _false_.

#Examples

## true
Before:
```cpp
if (x<y) {
  std::cout << "x is less than " << y << '\n';
}
else
if (x < 5) {
  std::cout << "Also x is than five" << y << '\n';
}
```

code after:
```cpp
if (x<y) {
  std::cout << "x is less than " << y << '\n';
}
else
  if (x < 5) {
    std::cout << "Also x is than five" << y << '\n';
  }
```

## false
Code in above example will not be changed for `false`.

# See also

* [nl_if_brace](../newline_options/nl_if_brace.md): Add or remove newline between 'if' and '{'.
* [indent_braces](indent_braces.md): Whether braces are indented to the body level.
