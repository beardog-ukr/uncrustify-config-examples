# nl_switch_brace

Add or remove newline between 'switch' and '{'.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add
Before:
```
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
```
switch(z)
{

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

## Remove
Before
```
switch(z)
{

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
```
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

# See also

* [nl_for_brace](nl_for_brace.md) - similar but for `for` statement
* [nl_if_brace](nl_if_brace.md) - similar but for `if`
