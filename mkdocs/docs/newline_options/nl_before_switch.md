# nl_before_switch

Add or remove blank line before `switch` statement.

Possible values are _ignore_, _add_, _remove_ and _force_, default _ignore_.

#Examples
#add
Before:
```
int z = x + y;
switch(z) {
case 1:
```
code after:
```
int z = x + y;

switch(z) {
case 1:
```

#remove
Before:
```
int z = x + y;

switch(z)
{
case 1:
```
code after:
```
int z = x + y;
switch(z)
{
case 1:
```

# See also

* [nl_after_switch](nl_after_switch.md) - Add or remove blank line after `switch`.
* [nl_after_func_body_class](nl_after_func_body_class.md) - The number of newlines after '}' of a multi-line function body in a class declaration.
