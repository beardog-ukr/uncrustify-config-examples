# sp_try_brace

Add or remove space between `try` and `{` if on the same line.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

#Examples

## add
Before:
```
try{
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

After:
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

## remove
Before:
```
try  {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

After:
```
try{
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

#See also
* [sp_catch_brace](sp_catch_brace.md) - Add or remove space before the `{` of a `catch` statement, if the `{` and `catch` are on the same line, as in `catch (decl) <here> {`.
* [sp_finally_brace](sp_finally_brace.md) - Add or remove space between `finally` and `{` if on the same line.
* [sp_brace_finally](sp_brace_finally.md) - Add or remove space between `{` and `finally` if on the same line.
