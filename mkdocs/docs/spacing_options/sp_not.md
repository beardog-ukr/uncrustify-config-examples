# sp_not

Add or remove space after the '!' (not) unary operator.

Possible values are _ignore_, _add_, _remove_ and _force_, default is _remove_.

# Examples

## Both _add_ and _force_
Before:
```
	int x = 10;
	if (!x) {
		std::cout << "As true\n";
	}
```
After
```
	if (! x) {
		std::cout << "As true\n";
	}
```


