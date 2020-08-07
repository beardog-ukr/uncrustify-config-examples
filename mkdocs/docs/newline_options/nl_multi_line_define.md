#nl_multi_line_define

Force a newline in a define after the macro name for multi-line defines.


Possible values are _true_ and  _false_, default _false_.

# Examples

##true
Before
```
#define MY_MACRO    printf( \
		"I like %d types of cheese\n", \
		5 \
		)
```

After
```
#define MY_MACRO \
	printf( \
		"I like %d types of cheese\n", \
		5 \
		)
```
##false
Example above remains unchanged


# See also

* [nl_else_brace](nl_else_brace.md) - similar option but for _else_ without  _if_
* [nl_if_brace](nl_if_brace.md) - similar option but for `if`
