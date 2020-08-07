#nl_after_brace_open_cmt

Whether to add a newline between the open brace and a trailing single-line  comment. Requires [nl_after_brace_open](nl_after_brace_open.md)=true.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Config:
```
nl_after_brace_open = true
nl_after_brace_open_cmt         = true
```

Before:
```cpp
int main()
{
	int x = 1;
	int y = 2;


	{ //just braces
		int z = x + y;
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


	{
		//just braces
		int z = x + y;
		std::cout << "z value processed" << '\n';
	}

	return 0;
}
```

##false
Config:
```
nl_after_brace_open = true
nl_after_brace_open_cmt = false
```

Before:
```cpp
int main()
{
	int x = 1;
	int y = 2;


	{ //just braces
		int z = x + y;
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


	{ //just braces
		int z = x + y;
		std::cout << "z value processed" << '\n';
	}

	return 0;
}
```

# See also
* [nl_after_brace_open](newline_options/nl_after_brace_open.md): Whether to add a newline after '{'. This also adds a newline before the matching '}'.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
* [nl_before_switch](nl_before_switch.md): Add or remove blank line before `switch` statement.
