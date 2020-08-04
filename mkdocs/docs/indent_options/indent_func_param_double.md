# indent_func_param_double
Double the indent for indent_func_xxx_param options. Use both values of the options [indent_columns](indent_columns.md) and [indent_param](indent_param.md).

Possible values are _true_ and _false_, default _false_.

Probably ignores [indent_with_tabs](indent_with_tabs.md).

# Examples

## true

Config:
```
indent_func_param_double            = true

indent_func_proto_param = true
indent_param = 2
indent_with_tabs = 2
```

Before:
```cpp
int booFunct(int fp,
	int sp);
```

code after:
```cpp
int booFunct(int fp,
	  int sp);
```

## false

Config:
```
indent_func_param_double            = false

indent_func_proto_param = true
indent_param = 2
indent_with_tabs = 2
```

Before:
```cpp
int booFunct(int fp,
	int sp);
```

code after:
```cpp
int booFunct(int fp,
  int sp);
```

# See also

* [indent_columns](indent_columns.md): The number of columns to indent per level.
* [indent_with_tabs](indent_with_tabs.md): How to use tabs when indenting code.
* [indent_func_call_param](indent_func_call_param.md): Whether to indent continued function call parameters one indent level, rather than aligning parameters under the open parenthesis.
* [indent_func_proto_param](indent_func_proto_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for function prototypes.
