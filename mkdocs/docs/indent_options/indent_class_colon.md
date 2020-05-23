# indent_class_colon

Whether to indent the stuff after a leading base class colon.

Possible values are _true_ or _false_, default _false_.

It seems it only affects class declaration and nothing more.

#Examples
## true
Code before:
```
class Barrel : Wooden,
	Round {
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
class Barrel : Wooden,
	       Round {
public:

Barrel();
virtual ~Barrel();

int getWidth() const;

protected:
int width;

};
```
Note here the word "Round" is aligned.

#See also
* [indent_class](indent_class.md): Whether the '`class`' body is indented.
* [indent_constr_colon](indent_constr_colon.md): Whether to indent the stuff after a leading class initializer colon.
