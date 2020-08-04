# indent_param

The continuation indent for [func_*_param](indent_func_call_param.md) if they are true. If non-zero, this overrides the indent.

Integer value, default 0.

Probably ignores [indent_with_tabs](indent_with_tabs.md).

# Examples

Config:
```
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
};
```

# See also

* [indent_with_tabs](indent_with_tabs.md): How to use tabs when indenting code.
* [indent_func_call_param](indent_func_call_param.md): Whether to indent continued function call parameters one indent level, rather than aligning parameters under the open parenthesis.
* [indent_func_proto_param](indent_func_proto_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for function prototypes.
