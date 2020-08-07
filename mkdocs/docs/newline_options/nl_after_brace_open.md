#nl_after_brace_open

Whether to add a newline after '{'. This also adds a newline before the matching '}'.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
int main()
{
	int x = 1;
	int y = 2;

	//just braces
	{       int z = x + y;
		std::cout << "z value processed" << '\n';}

	return 0;
}
```

After
```cpp
int main()
{
	int x = 1;
	int y = 2;

	//just braces
	{
		int z = x + y;
		std::cout << "z value processed" << '\n';
	}

	return 0;
}
```

##false
Example remains unchanged.

# See also
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
* [nl_before_switch](nl_before_switch.md): Add or remove blank line before `switch` statement.
* [nl_for_brace](nl_for_brace.md): similar but for `for` statement
* [nl_if_brace](nl_if_brace.md): similar but for `if`
