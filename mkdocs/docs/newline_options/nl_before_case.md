#nl_before_case

Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
switch(z) {
case 1:
  std::cout << "One" << '\n';
  break;
case 3:
  std::cout << "Three" << '\n';
  break;

default:
  std::cout << "Something else" << '\n';
}
```
After
```cpp
switch(z) {
case 1:
  std::cout << "One" << '\n';
  break;

case 3:
  std::cout << "Three" << '\n';
  break;

default:
  std::cout << "Something else" << '\n';
}
```

##false
Example remains unchanged.

# See also
* [nl_before_switch](nl_before_switch.md): Add or remove blank line before `switch` statement.
* [nl_for_brace](nl_for_brace.md) - similar but for `for` statement
* [nl_if_brace](nl_if_brace.md) - similar but for `if`
