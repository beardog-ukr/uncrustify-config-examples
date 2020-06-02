# nl_after_if

Add or remove blank line after 'if' statement. Add/Force work only if the next token is not a closing brace.

Possible values are _ignore_, _add_, _remove_ and _force_, default _ignore_.

#Examples

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

if (x<2000) {
  std::cout << "Also x is less than " << 2000 << '\n';
}
std::cout << "message about y: " << y << '\n';

if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
// else
return 0;
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

if (x<2000) {
  std::cout << "Also x is less than " << 2000 << '\n';
}

std::cout << "message about y: " << y << '\n';

if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}

// else
return 0;
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

if (x<2000) {
  std::cout << "Also x is less than " << 2000 << '\n';
}

std::cout << "message about y: " << y << '\n';

if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
// else
return 0;
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

if (x<2000) {
  std::cout << "Also x is less than " << 2000 << '\n';
}
std::cout << "message about y: " << y << '\n';

if (x<y) {
  std::cout << "Also x is less than " << y << '\n';
}
// else
return 0;
```

* [nl_after_switch](nl_after_switch.md) - Add or remove blank line after 'switch' statement.
* [nl_after_for](nl_after_for.md) - Add or remove blank line after 'for' statement.
* [nl_after_while](nl_after_while.md) - Add or remove blank line after 'while' statement.
