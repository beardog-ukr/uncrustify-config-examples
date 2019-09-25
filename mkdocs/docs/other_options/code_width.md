# code_width

Try to limit code width to N columns. Break line if it's too long.

Possible values are 0 for no limits or integer value for some. Default configuration value is 0 (unlimited).

# Examples

## Limit 80 characters
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

	// The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog.
	std::cout << "x is " << x << '\n';
```
Note, the comment line is not broken, because comment lines are controlled with 
[cmt_width](cmt_width.md) option.

# See also

* [cmt_width](cmt_width.md) - similar option but for comments
* Special line breaking cases: [ls_for_split_full](ls_for_split_full.md), [ls_func_split_full](ls_for_split_full.md) and [ls_code_width](ls_for_split_full.md)
