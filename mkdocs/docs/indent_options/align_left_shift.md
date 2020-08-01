# align_left_shift

Whether to align lines that start with '<<' with previous '<<'.

Possible values are _true_ or _false_, default _true_.

#Examples
## true
Code before:
```cpp
int main()
{
	int X = 25;
	std::cout << "X is: " << '\n'
	<< "    :" << X
	<< '\n';

	return 0;
}
```
Code after:
```cpp
int main()
{
	int X = 25;
	std::cout << "X is: " << '\n'
	          << "    :" << X
	          << '\n';

	return 0;
}
```

## false

With example above _false_ setting does not apply changes and "after" is the same as "before".

#See also
* [indent_class](indent_class.md): Whether the '`class`' body is indented.
* [indent_shift](indent_shift.md): Whether to indent continued shift expressions ('<<' and '>>') instead of aligning.
