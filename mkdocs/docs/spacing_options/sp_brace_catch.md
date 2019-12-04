# sp_brace_catch

Add or remove space between '}' and 'catch' if on the same line.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

#Examples
#add
Code before:
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
}catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

Code after:
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```
# remove
Code before:
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

Code after:
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
}catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

#See also
* [sp_catch_brace](sp_catch_brace.md) - Add or remove space before the `{` of a `catch` statement, if the `{` and  `catch` are on the same line, as in `catch (decl) <here> {`.
* _sp_oc_catch_brace_ - (OC) Add or remove space before the '{' of a '@catch' statement, if the '{' and '@catch' are on the same line, as in '@catch (decl) <here> {'. If set to ignore, sp_catch_brace is used.
