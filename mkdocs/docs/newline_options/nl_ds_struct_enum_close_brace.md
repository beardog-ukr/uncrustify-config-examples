#nl_ds_struct_enum_close_brace

Whether to force a newline before '}' of a 'struct'/'union'/'enum'. (Lower priority than [eat_blanks_before_close_brace](eat_blanks_before_close_brace.md).)

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
typedef struct {
	int hour;
	int min;
	int sec;
} counter_t;

struct v {
	union {
		int zoo;
		float mee;
	};
	int m;
} v1;
```

After
```cpp
typedef struct {
	int hour;
	int min;
	int sec;

} counter_t;

struct v {
	union {
		int zoo;
		float mee;

	};
	int m;

} v1;
```

##false
Example remains unchanged.

# See also
* [eat_blanks_before_close_brace](eat_blanks_before_close_brace.md): Whether to remove blank lines before '}'.
* [nl_squeeze_ifdef](nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_case](nl_after_case.md): Whether to add a newline after a `case` statement.
