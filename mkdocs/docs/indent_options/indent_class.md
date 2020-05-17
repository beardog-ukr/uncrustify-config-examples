# indent_class

Whether the '`class`' body is indented.

Possible values are _true_ or _false_, default _false_.

By default class members are not indented.

#Examples
## true
Code before:
```
class Barrel {
public:

Barrel();
virtual ~Barrel();

int getWidth() const;

protected:
int width;
};
```
Code after:
```
class Barrel {
public:

	Barrel();
	virtual ~Barrel();

	int getWidth() const;

protected:
	int width;
};
```

#See also
* [indent_columns](indent_columns.md) - The number of columns to indent per level.
* [indent_with_tabs](indent_with_tabs.md) - How to use tabs when indenting code.
