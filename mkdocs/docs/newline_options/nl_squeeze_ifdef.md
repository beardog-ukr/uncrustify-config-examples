#nl_squeeze_ifdef

Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and
`#endif`. Does not affect top-level `#ifdefs`.

Here "top-level ifdefs" probably means something defined at global scope (outside brackets). Also there is option [nl_squeeze_ifdef_top_level](nl_squeeze_ifdef_top_level.md) to cancel this behavior.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
int buf_size;

#if defined SMALL_SIZE

buf_size = 10;

#else

buf_size = 100;

#endif

int main()
{
	std::cout << "Buffer will be " << buf_size << '\n';

#if defined SMALL_SIZE

	std::cout << "small size" << '\n';

#endif

	return 0;
}

```

After
```cpp
int buf_size;

#if defined SMALL_SIZE

buf_size = 10;

#else

buf_size = 100;

#endif

int main()
{
	std::cout << "Buffer will be " << buf_size << '\n';

#if defined SMALL_SIZE
	std::cout << "small size" << '\n';
#endif

	return 0;
}
```
Note only `#if` inside `main` was affected.

##false
Example remains unchanged.

# See also
* [nl_squeeze_ifdef_top_level](nl_squeeze_ifdef_top_level.md): Makes the `nl_squeeze_ifdef` option affect the top-level `#ifdefs` as well.
* [nl_after_case](nl_after_case.md): Whether to add a newline after a `case` statement.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
