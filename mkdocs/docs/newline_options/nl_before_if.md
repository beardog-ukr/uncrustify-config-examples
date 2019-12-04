# nl_before_if

Add or remove blank line before 'if'.

Possible values are _ignore_, _add_, _remove_ and _force_, default _ignore_.

#Examples

Note in both examples comment line is not a "newline".

#Add
Code before:
```
int x = 10;
int y = 20;

// if with else
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
else {
  std::cout << "Also x is more (or equal) than " << y << '\n';
}

x = 20 * x;
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
```
Code after:
```
int x = 10;
int y = 20;

// if with else
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
else {
  std::cout << "Also x is more (or equal) than " << y << '\n';
}

x = 20 * x;

if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
```

#remove
Code before:
```
int x = 10;
int y = 20;

// if with else
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
else {
  std::cout << "Also x is more (or equal) than " << y << '\n';
}

x = 20 * x;

if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}

```
Code after:
```
int x = 10;
int y = 20;
// if with else
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
else {
  std::cout << "Also x is more (or equal) than " << y << '\n';
}

x = 20 * x;
if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
```

# See also:

* [nl_before_do](nl_before_do.md) - Add or remove blank line before 'do'.
* [nl_before_for](nl_before_for.md) - Add or remove blank line before 'for'.
* [nl_before_while](nl_before_while.md) - Add or remove blank line before 'while'.
* _nl_before_synchronized_ - Add or remove blank line before 'synchronized'.
* [nl_before_switch](nl_before_switch.md) - Add or remove blank line before 'switch'.
