# cmt_width

Try to limit comments width to N columns. Break comment line if it's too long.

Possible values are 0 for no limits or integer value for some. Also another integer configuration value (like `code_width`) may be used.

Default configuration value is 0 (unlimited).

# Examples

## Limit 80 characters
Before
```
	// The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog.
	std::cout << "x is " << x << '\n';
```
After
```
	// The quick brown fox jumps over the lazy dog. The quick brown fox
	// jumps over the lazy dog.
	std::cout << "x is " << x << '\n';
```

## Limit by `code_width`
Config example:
```
# Uncrustify-0.69.0_f
code_width             = 80
cmt_width             = code_width
```

Before
```
	int x = 10 + 10 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25;

	// The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog.
	std::cout << "x is " << x << '\n';
```
After
```
	int x = 10 + 10 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20 + 21 + 22 +
	        23 + 24 + 25;

	// The quick brown fox jumps over the lazy dog. The quick brown fox
	// jumps over the lazy dog.
	std::cout << "x is " << x << '\n';
```
Note, here both lines got broken.

# See also

* [code_width](code_width.md) - similar option but for code lines
* Special line breaking cases: [ls_for_split_full](ls_for_split_full.md), [ls_func_split_full](ls_func_split_full.md) and [ls_code_width](ls_code_width.md)
