# indent_access_spec

Same as [indent_label](indent_label.md), but for access specifiers that are followed by a colon.

Possible values are integer:

* `>0`: Absolute column where 1 is the leftmost column
* `<=0`: Subtract from brace indent

#Examples

Config:
```
indent_access_spec = 2
```

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

Barrel::Barrel() {
	width =5;
}
```

#See also
* [indent_access_spec_body](indent_access_spec_body.md): Whether to indent the code after an access specifier by one level.
* [indent_columns](indent_columns.md): The number of columns to indent per level.
* [indent_with_tabs](indent_with_tabs.md): How to use tabs when indenting code.
