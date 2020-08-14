#nl_create_if_one_liner

Whether to remove a newline in simple unbraced if statements, turning them
into one-liners, as in `if(b)\n i++;` => `if(b) i++;`.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
if (y>3)
{
	std::cout << "y too large" << '\n';
}

if (y<3)
	std::cout << "y is small" << '\n';
```

After
```cpp
if (y>3)
{
	std::cout << "y too large" << '\n';
}

if (y<3) std::cout << "y is small" << '\n';
```
Note, only second statement was changed.

##false
Example remains unchanged.

# See also
* [nl_squeeze_ifdef](nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_case](nl_after_case.md): Whether to add a newline after a `case` statement.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
