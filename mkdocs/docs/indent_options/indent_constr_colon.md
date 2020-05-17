# indent_constr_colon

Whether to indent the stuff after a leading class initializer colon.

Possible values are _true_ or _false_, default _false_.

#Examples
## true
Code before:
```
Barrel::Barrel() : pos(nullptr),
	visible(false)
{
	width =5;
}
```
Code after (may appear incorrect because tab/spaces in html):
```
Barrel::Barrel() : pos(nullptr),
	           visible(false)
{
	width =5;
}
```
Note, this option works only if first initializer appears on the same line as constructor (after colon). Following code will not be changed:
```
Barrel::Barrel() :
  pos(nullptr),
	visible(false)
{
	width =5;
}
```

#See also
* [indent_columns](indent_columns.md) - The number of columns to indent per level.
* [indent_class](indent_class.md): Whether the 'class' body is indented.
* [indent_with_tabs](indent_with_tabs.md) - How to use tabs when indenting code.
