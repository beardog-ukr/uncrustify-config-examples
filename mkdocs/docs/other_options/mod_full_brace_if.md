# mod_full_brace_if

Add or remove braces on a single-line `if` statement. Braces will not be removed if the braced statement contains an `else`.

Possible values are _ignore_, _add_, _remove_ and _force_, default is _ignore_.

# Examples

## add

Following
```
if (x<15) y=3;
```
will be translated to
```
if (x<15) {y=3;}
```

Note, no newlines will be added by default. Probably it will be better to use with [nl_if_brace](../newline_options/nl_if_brace.md) option, like
```
nl_if_brace = add
mod_full_brace_if = add
```
Transforms
```
if (x<15) y=3;
```
into
```
if (x<15)
{
  y=3;
}
```

## remove
With `remove` value following
```
if (y<5) {
  std::cout << "y is less than 5" << '\n';
}
```
will be translated into
```
if (y<5)
  std::cout << "y is less than 5" << '\n';
```


# See also

* [nl_if_brace](../newline_options/nl_if_brace.md) - Add or remove newline between 'if' and '{'.
