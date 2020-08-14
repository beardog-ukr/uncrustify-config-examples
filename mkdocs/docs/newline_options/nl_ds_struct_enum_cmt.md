#nl_ds_struct_enum_cmt

Official description: _Whether to double-space commented-entries in 'struct'/'union'/'enum'._

It seems official description cited above is incorrect. Instead `nl_ds_struct_enum_cmt` adds newline before commented member of 'struct'/'union'/'enum'.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
typedef struct {
	int hour;
	int min;
//	int gee;
	int sec;
} counter_t;
```

After
```cpp
typedef struct {
	int hour;
	int min;

//	int gee;
	int sec;
} counter_t;
```

##false
Example remains unchanged.

# See also
* [nl_squeeze_ifdef](nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_case](nl_after_case.md): Whether to add a newline after a `case` statement.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
