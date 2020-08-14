#nl_squeeze_ifdef_top_level

Makes the [nl_squeeze_ifdef](nl_squeeze_ifdef.md) option affect the top-level `#ifdefs` as well.

Here "top-level ifdefs" probably means something defined at global scope (outside brackets).

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Config:
```
nl_squeeze_ifdef = true
nl_squeeze_ifdef_top_level = true
```

Before:
```cpp
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

##false
Example remains unchanged.

# See also
* [nl_squeeze_ifdef](nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_case](nl_after_case.md): Whether to add a newline after a `case` statement.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
