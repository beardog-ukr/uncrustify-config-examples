# indent_namespace

Whether to indent the body of a 'namespace'.

Possible values are _true_ and _false_, default _false_.

#Examples
# true
Code before:
```
namespace mmm
{
const double v1 = 100;
double value() {
	return 2*v1;
}
}
```
Code after:
```
namespace mmm
{
	const double v1 = 100;
	double value() {
		return 2*v1;
	}
}
```

#See also
* [indent_namespace_single_indent](indent_namespace_single_indent.md) - Whether to indent only the first namespace, and not any nested namespaces. Requires `indent_namespace=true`.
* [indent_namespace_level](indent_namespace_level.md) - The number of spaces to indent a namespace block. (overrides [indent_columns](indent_columns.md))
* [indent_namespace_limit](indent_namespace_limit.md) - If the body of the namespace is longer than this number, it won't be indented. Requires `indent_namespace=true`.
