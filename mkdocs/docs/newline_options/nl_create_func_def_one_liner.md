#nl_create_func_def_one_liner

Official description: _Whether to collapse a function definition whose body (not counting braces) is only one line so that the entire definition (prototype, braces, body) is a single line._

Really it seems to remove newline between `){` braces, see examples below.

Possible values are _true_ and _false_, default _false_.

# Examples

##true
Before:
```cpp
int sum(int x, int y)
{
	return x+y;
}

int sum20(int x,
          int y)
{
	return x+y+20;
}

int sum40(int x,
          int y)
{
	int base = x+y;
	return base+40;
}
```

After
```cpp
int sum(int x, int y){
	return x+y;
}

int sum20(int x,
          int y){
	return x+y+20;
}

int sum40(int x,
          int y)
{
	int base = x+y;
	return base+40;
}
```

##false
Example remains unchanged.

# See also
* [nl_create_for_one_liner](nl_create_for_one_liner.md): Whether to remove a newline in simple unbraced `for` statements
* [nl_create_if_one_liner](nl_create_if_one_liner.md): Whether to remove a newline in simple unbraced `if` statements,
* [nl_squeeze_ifdef](nl_squeeze_ifdef.md): Whether to remove blanks after `#ifxx` and `#elxx`, or before `#elxx` and `#endif`.
* [nl_after_if](nl_after_if.md): Add or remove blank line after `if` statement.
* [nl_before_case](nl_before_case.md): Whether to add a newline before `case`, and a blank line before a `case` statement that follows a `;` or `}`.
