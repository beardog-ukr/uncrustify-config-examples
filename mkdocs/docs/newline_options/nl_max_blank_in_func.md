# nl_max_blank_in_func

The maximum number of consecutive newlines in a function.

It's same as [nl_max](nl_max) but works only inside functions

# Examples

If config is `nl_max_blank_in_func = 1` all the empty lines (only inside functions) will be removed:
```
int getTwo()
{
	return 1;

}
```
transformed to
```
int getTwo()
{
	return 1;
}
```

# See also

* [nl_before_block_comment](nl_before_block_comment.md) - The minimum number of newlines before a multi-line comment.
* [nl_max](nl_max.md) - The maximum number of consecutive newlines.
