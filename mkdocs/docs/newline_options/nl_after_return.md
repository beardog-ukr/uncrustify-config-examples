#nl_after_return

Whether to put a blank line after 'return' statements, unless followed by a close brace.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
int foofunc(int x)
{
	if (x<10)
		return 20;
	x = x+40;
	return x;
}
```

After
```cpp
int foofunc(int x)
{
	if (x<10)
		return 20;

	x = x+40;
	return x;
}
```

##false
Example remains unchanged.

# See also
* [nl_after_case](nl_after_case.md): Whether to add a newline after a `case` statement.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
