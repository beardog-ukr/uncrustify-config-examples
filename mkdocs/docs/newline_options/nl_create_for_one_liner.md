#nl_create_for_one_liner

Whether to remove a newline in simple unbraced for statements, turning them into one-liners, as in `for (...)\n stmt;` => `for (...) stmt;`.


Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
for (int i=0; i<x; i++)
	sum = sum+i;
```

After
```cpp
for (int i=0; i<x; i++) sum = sum+i;
```

##false
Example remains unchanged.

# See also
* [nl_create_if_one_liner](nl_create_if_one_liner.md): Whether to remove a newline in simple unbraced if statements,
* [nl_squeeze_ifdef](nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
