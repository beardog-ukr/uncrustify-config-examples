# indent_shift

Whether to indent continued shift expressions ('<<' and '>>') instead of aligning. Set _[align_left_shift](align_left_shift.md)=false_ when enabling this.

Possible values are _true_ or _false_, default _false_.

#Examples
## true
Config:
```
indent_shift = true
align_left_shift = false #mandatory if indent_shift == true
```

Code before:
```cpp
int main()
{
	int X = 25;
	std::cout << "X is: " << '\n'
	<< "    :" << X
	<< '\n';

	int Y = 25;
	std::cout << "Y is: " << '\n'
	  << "    :" << Y
	  << '\n';

	return 0;
}
```

After:
```cpp
int main()
{
	int X = 25;
	std::cout << "X is: " << '\n'
	<< "    :" << X
	<< '\n';

	int Y = 25;
	std::cout << "Y is: " << '\n'
	<< "    :" << Y
	<< '\n';

	return 0;
}
```

Note, the "Y" code was moved to first indent position (one tab).

## false

False example works exactly like [align_left_shift](align_left_shift.md).

#See also
* [indent_class](indent_class.md): Whether the '`class`' body is indented.
* [align_left_shift](align_left_shift.md): Whether to align lines that start with '<<' with previous '<<'.
