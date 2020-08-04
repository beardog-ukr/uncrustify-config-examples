# indent_access_spec_body

Whether to indent the code after an access specifier by one level.

If _true_, this option forces '[indent_access_spec](indent_access_spec.md)=0'.

Possible values are _true_ and _false_, default _false_.

#Examples

## true

Code before:
```cpp
class Barrel {
int width;

public:
Barrel();
virtual ~Barrel();

int getWidth() const;
};
```
Code after:
```cpp
class Barrel {
int width;

public:
	Barrel();
	virtual ~Barrel();

	int getWidth() const;
};
```

#See also
* [indent_access_spec](indent_access_spec.md): Same as [indent_label](indent_label.md), but for access specifiers that are followed by a colon.
* [indent_columns](indent_columns.md): The number of columns to indent per level.
* [indent_with_tabs](indent_with_tabs.md): How to use tabs when indenting code.
