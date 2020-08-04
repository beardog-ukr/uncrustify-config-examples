# indent_template_param

Same as [indent_func_call_param](indent_func_call_param.md), but for template parameter lists.

Possible values are _true_ and _false_, default _false_.

Does not work with _Uncrustify_d-0.70.1_f_ (applies same changes for both _true_ and _false_).

# Examples

## true
Before:
```cpp
int main () {
...
	k=GetMax<int>(i,
		j);
	n=GetMax<long>(l,
			m);
...
}
```

code after:
```cpp
int main () {
...
	k=GetMax<int>(i,
	              j);
	n=GetMax<long>(l,
	               m);
...
}
```

## false

Same as _true_.

# See also

* [indent_func_def_param](indent_func_def_param.md): Same as [indent_func_def_param](indent_func_def_param.md) but for function definitions.
* [indent_func_proto_param](indent_func_proto_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for function prototypes.
* [indent_func_class_param](indent_func_class_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for class declarations.
* [indent_func_ctor_var_param](indent_func_ctor_var_param.md): Same as [indent_func_def_param](indent_func_def_param.md), but for class variable constructors.
