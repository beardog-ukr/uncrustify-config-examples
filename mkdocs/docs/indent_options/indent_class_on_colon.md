# indent_class_on_colon

Whether to indent based on a class colon instead of the stuff after the colon. Requires `indent_class_colon=true`.

Possible values are _true_ or _false_, default _false_.

There is almost no difference from [indent_constr_colon](indent_constr_colon.md).

#Examples

Both "true" and "false" examples change line with "Round", but there is a small difference.

## true
Config is
```
indent_class_colon = true
indent_class_on_colon = true
```

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

## false

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

#See also
* [indent_class](indent_class.md): Whether the '`class`' body is indented.
* [indent_class_colon](indent_class_colon.md): Whether to indent the stuff after a leading base class colon.
* [indent_constr_colon](indent_constr_colon.md): Whether to indent the stuff after a leading class initializer colon.
