# mod_full_paren_if_bool

Documentation says:

> Whether to fully parenthesize Boolean expressions in 'while' and 'if' statement, as in 'if (a && b > c)' => 'if (a && (b > c))'.

Really in _Uncrustify_d-0.70.1_f_ this option works with `if` only.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
if (isOdd(x) && x<y) {
  std::cout << "x is odd and less than " << y << '\n';
}

while(isOdd(x) && x>0) {
  x=x-3;
}
```

After:
```cpp
if (isOdd(x) && (x<y)) {
  std::cout << "x is odd and less than " << y << '\n';
}

while(isOdd(x) && x>0) {
  x=x-3;
}
```
Note, `while` remains unchanged.

##false
Example remains unchanged.

# See also

* [nl_if_brace](../newline_options/nl_if_brace.md): Add or remove newline between 'if' and '{'.
