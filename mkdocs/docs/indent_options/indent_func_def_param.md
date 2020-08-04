# indent_func_def_param

Same as [indent_func_call_param](indent_func_call_param.md), but for function definitions.

Possible values are _true_ and _false_, default _false_.

# Examples

## true
Before:
```cpp
int booFunct(int fp,
		int sp)
```

code after:
```cpp
int booFunct(int fp,
	int sp)
{
```

## false
Before:
```cpp
int booFunct(int fp,
		int sp)
{
```

code after:
```cpp
int booFunct(int fp,
             int sp)
{
```

# See also

* [indent_func_call_param](indent_func_call_param.md): Whether to indent continued function call parameters one indent level, rather than aligning parameters under the open parenthesis.
* [indent_func_proto_param](indent_func_proto_param.md): Same as `indent_func_call_param`, but for function prototypes.
* [indent_func_class_param](indent_func_class_param.md): Same as `indent_func_call_param`, but for class declarations.
* [indent_func_ctor_var_param](indent_func_ctor_var_param.md): Same as `indent_func_call_param`, but for class variable constructors.
* [indent_template_param](indent_template_param.md): Same as `indent_func_call_param`, but for template parameter lists.
