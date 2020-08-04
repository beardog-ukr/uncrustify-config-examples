# indent_func_ctor_var_param

Same as [indent_func_call_param](indent_func_call_param.md), but for class variable constructors.

Possible values are _true_ and _false_, default _false_.

# Examples

## true
Before:
```cpp
class Barrel {
Barrel(int x,
	int y);
	...
};

Barrel::Barrel(int x,
	int y) {
	width =5;
}
```

code after:
```cpp
class Barrel {
Barrel(int x,
       int y);
...
};

Barrel::Barrel(int x,
               int y) {
	width =5;
}
```

## false
Before:
```cpp
class Barrel {
Barrel(int x,
	int y);
...
};

Barrel::Barrel(int x,
	int y) {
	width =5;
}
```

code after:
```cpp
class Barrel {
Barrel(int x,
       int y);
};

Barrel::Barrel(int x,
               int y) {
	width =5;
}
```

# See also

* [indent_func_call_param](indent_func_call_param.md): Whether to indent continued function call parameters one indent level, rather than aligning parameters under the open parenthesis.
* [indent_func_def_param](indent_func_def_param.md): Same as [indent_func_def_param](indent_func_def_param.md) but for function definitions.
* [indent_func_proto_param](indent_func_proto_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for function prototypes.
* [indent_func_class_param](indent_func_class_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for class declarations.
* [indent_template_param](indent_template_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for template parameter lists.
