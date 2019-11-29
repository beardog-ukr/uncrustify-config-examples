# nl_catch_brace

Add or remove newline before the '{' of a 'catch' statement, as in `catch (decl) <here> {`.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

# add
Before
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```
After
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i)
{
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

## remove
Before
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i)
{
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```
After
```
try {
  std::cout << "Throwing an integer exception...\n";
  throw 42;
} catch (int i) {
  std::cout << " the integer exception was caught, with value: " << i << '\n';
}
```

# See also

* _nl_oc_catch_brace_ -- (OC) Add or remove newline before the `{` of a `@catch` statement, as in `@catch (decl) <here> {`'.
* _nl_oc_brace_catch_ -- (OC) Add or remove newline between `}` and `@catch`.
