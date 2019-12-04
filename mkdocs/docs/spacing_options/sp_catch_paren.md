# sp_catch_paren

Add or remove space between `catch` and `(` in `catch (something) { }`. If set to ignore, [sp_before_sparen](sp_before_sparen.md) is used.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

#Examples
##add
Before:
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch(int i) {
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

## ignore (with sp_before_sparen as remove)
Config:
```
sp_before_sparen = remove
sp_catch_paren = ignore
```

Before:
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
} catch(int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

##remove
Before:
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
} catch(int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

#See also
* [sp_before_sparen](sp_before_sparen.md) - More common rule, add or remove space before `(` of control statements (`if`, `for`, `switch`, `while` etc.).
* [sp_catch_brace](sp_catch_brace.md) - Add or remove space before the `{` of a `catch` statement, if the `{` and `catch` are on the same line, as in `catch (decl) <here> {`.
