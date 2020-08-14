#eat_blanks_before_close_brace

Whether to remove blank lines before '}'.

Possible values are _true_ and _false_, default _false_.

Conflicts with [nl_ds_struct_enum_close_brace](../newline_options/nl_ds_struct_enum_close_brace.md) (and has higher priority).

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

int main()
{
	counter_t cntr1 = {.hour = 101, .min = 3, .sec = 47};
	counter_t cntrTwo = {.hour = 10, .min = 30, .sec = 47};

	std::cout << "Counter: " << cntr1.hour  << '\n';
	return 0;


}
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

int main()
{
	counter_t cntr1 = {.hour = 101, .min = 3, .sec = 47};
	counter_t cntrTwo = {.hour = 10, .min = 30, .sec = 47};

	std::cout << "Counter: " << cntr1.hour  << '\n';
	return 0;
}
```

##false
Example remains unchanged.

# See also
* [nl_ds_struct_enum_close_brace](../newline_options/nl_ds_struct_enum_close_brace.md): Whether to force a newline before '}' of a 'struct'/'union'/'enum'.
* [nl_squeeze_ifdef](../newline_options/nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_case](../newline_options/nl_after_case.md): Whether to add a newline after a `case` statement.
