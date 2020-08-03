# indent_extern

Whether the `extern "C"` body is indented.

Possible values are _true_ and _false_, default _false_.

It seems it *removes any indentation* if set to _false_.

#Examples

## true
Before:
```cpp
extern "C" {
    int value(const char *pathname, int flags); // C function declaration
}

int main()
{
	std::cout << value() << '\n';
	return 0;
}
```

code after:
```cpp
extern "C" {
	int value(const char *pathname, int flags); // C function declaration
}

int main()
{
	std::cout << value() << '\n';
	return 0;
}
```
Here the function declaration was indented (maybe later this formatting was broken during html generation).

## false
Before:
```cpp
extern "C" {
    int value(const char *pathname, int flags); // C function declaration
}

int main()
{
	std::cout << value() << '\n';
	return 0;
}
```

code after:
```cpp
extern "C" {
int value(const char *pathname, int flags);     // C function declaration
}

int main()
{
	std::cout << value() << '\n';
	return 0;
}
```


# See also

* [indent_namespace](indent_namespace.md): Whether to indent the body of a 'namespace'.
* [indent_braces](indent_braces.md): Whether braces are indented to the body level.
