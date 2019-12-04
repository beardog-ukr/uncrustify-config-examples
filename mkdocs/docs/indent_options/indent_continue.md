# indent_continue

The continuation indent. If non-zero, this overrides the indent of '(', '[' and '=' continuation indents. Negative values are OK; negative value is absolute and not increased for each '(' or '[' level.

For FreeBSD, this is set to 4.

Default 0.

#Examples
## zero (disabled)
Config (use spaces, 2 per line, _indent_continue_ disabled):
```
indent_columns = 2
indent_with_tabs = 0
indent_continue = 0
```
Code before:
```
int x = 10 + 5 + 5
        + 3;

int arr[10];
arr[1 +
    x - sum] = 20;

for (int i=0;
     i<x;
     i++) {
  sum = sum+i;
}
```
Code after:
```
int x = 10 + 5 + 5
        + 3;

int arr[10];
arr[1 +
    x - sum] = 20;

for (int i=0;
     i<x;
     i++) {
  sum = sum+i;
}
```
Note second part of broken line appears on same level as `=`, `[` or `(`.

## some value
Config (use spaces to indent, 2 per line, _indent_continue_ set to 3):
```
indent_columns = 2
indent_with_tabs = 0
indent_continue = 3
```
Code before:
```
int x = 10 + 5 + 5
        + 3;

int arr[10];
arr[1 +
    x - sum] = 20;

for (int i=0;
     i<x;
     i++) {
  sum = sum+i;
}
```
Code after:
```
int x = 10 + 5 + 5
   + 3;

int arr[10];
arr[1 +
   x - sum] = 20;

for (int i=0;
   i<x;
   i++) {
  sum = sum+i;
}
```
Now second part of broken line starts at level "three spaces since current indent level".

#See also
* [indent_columns](indent_columns.md) - The number of columns to indent per level.
* [indent_with_tabs](indent_with_tabs.md) - How to use tabs when indenting code.
