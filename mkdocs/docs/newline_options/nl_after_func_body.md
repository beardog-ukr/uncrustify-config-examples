# nl_after_func_body

The number of newlines after '}' of a multi-line function body.

Value is unsigned number. Note there is always one newline after function end, so really values mean:

* 0: option is not applied
* 1: no empty lines at all after this function
* N: there will be _N-1_ empty lines after function

Also there are two options that override this one: [nl_after_func_body_class](nl_after_func_body_class.md) and [nl_after_func_body_one_liner](nl_after_func_body_one_liner.md).

#Examples

Config `nl_after_func_body = 3` and code before:
```
int tf(const int ip)
{
	return ip + 10;
}

int tf2(const int ip)
{
	return ip + 10;
}






int main()
{
```
code after:
```
int tf(const int ip)
{
	return ip + 10;
}


int tf2(const int ip)
{
	return ip + 10;
}


int main()
{
```

# See also

* [nl_after_func_body_class](nl_after_func_body_class.md) - The number of newlines after '}' of a multi-line function body in a class declaration. Also affects class constructors/destructors.
* [nl_after_func_body_one_liner](nl_after_func_body_one_liner.md) - The number of newlines after '}' of a single line function body. Also affects class constructors/destructors.
