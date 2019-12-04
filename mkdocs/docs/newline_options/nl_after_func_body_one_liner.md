# nl_after_func_body_one_liner

The number of newlines after '}' of a single line function body. Also affects class constructors/destructors.

Value is unsigned number. Note there is always one newline after function end, so really values mean:

* 0: option is not applied
* 1: no empty lines at all after this function
* N: there will be _N-1_ empty lines after function

Overrides [nl_after_func_body](nl_after_func_body.md).

Conflicts with default value of  [nl_func_leave_one_liners](nl_func_leave_one_liners.md).

#Example
Config:
```
nl_func_leave_one_liners = true
nl_after_func_body = 2
nl_after_func_body_one_liner            = 3
```
Code before:
```
int olf(const int ip) { return ip + 10;}

int tf(const int ip) {
	return ip + 10;
}
int main()
{
```
Code after:
```
int olf(const int ip) { return ip + 10;}


int tf(const int ip) {
	return ip + 10;
}

int main()
{
```

# See also

* [nl_after_func_body](nl_after_func_body.md) - The number of newlines after '}' of a multi-line function body.
* [nl_func_leave_one_liners](nl_func_leave_one_liners.md) - Don't split one-line function definitions, as in `int foo() { return 0; }`.
