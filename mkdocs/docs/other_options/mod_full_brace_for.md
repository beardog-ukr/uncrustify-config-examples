# mod_full_brace_for

 Add or remove braces on a single-line 'for' statement.

 Possible values are _ignore_, _add_, _remove_ and _force_, default is _ignore_.

# Examples

## add
Before
```
for (int i=0; i<x; i++)
  sum = sum+i;

for (int i=x-1; i>0; i--) sum = sum-i;
```
after
```
for (int i=0; i<x; i++) {
  sum = sum+i;
}

for (int i=x-1; i>0; i--) {sum = sum-i;}
```
Note it does not add any newlines; there is [nl_for_brace](../newline_options/nl_for_brace.md) option to control this.

## remove
Before
```
for (int i=0; i<x; i++) {
  sum = sum+i;
}

for (int i=x-1; i>0; i--) {sum = sum-i;}
```
after
```
for (int i=0; i<x; i++)
  sum = sum+i;

for (int i=x-1; i>0; i--) sum = sum-i;
```

# See also

* [nl_for_brace](../newline_options/nl_for_brace.md) - Add or remove newline between 'for' and '{'.
* [mod_full_brace_if](mod_full_brace_if.md) - Add or remove braces on a single-line `if` statement.
