# nl_elseif_brace

Add or remove newline between `else if` and `{`. If set to _ignore_, [nl_if_brace](nl_if_brace.md) is used instead.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

# Examples

# add
Before
```
if (x<y) {
  std::cout << "x is less than " << y << '\n';
}
else if (x < 5) {
  std::cout << "Also x is than five" << y << '\n';
}
```
After
```
if (x<y) {
  std::cout << "x is less than " << y << '\n';
}
else if (x < 5)
{
  std::cout << "Also x is than five" << y << '\n';
}
```
# ignore

Configuration:
```
nl_if_brace = force
nl_elseif_brace            = ignore
```
Before
```
if (x<y) {
  std::cout << "x is less than " << y << '\n';
}
else if (x < 5) {
  std::cout << "Also x is than five" << y << '\n';
}
```
After
```
if (x<y)
{
  std::cout << "x is less than " << y << '\n';
}
else if (x < 5)
{
  std::cout << "Also x is than five" << y << '\n';
}
```
Here both newlines were added because of `nl_if_brace` setting.

# See also

* [nl_else_brace](nl_else_brace.md) - similar option but for _else_ without  _if_
* [nl_if_brace](nl_if_brace.md) - similar option but for `if`
