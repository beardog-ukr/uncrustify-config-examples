# nl_multi_line_cond

Add a newline between `)` and `{` if the `)` is on a different line than the `if`/`for`/etc.

Overrides [nl_for_brace](nl_for_brace.md), [nl_if_brace](nl_if_brace.md), [nl_switch_brace](nl_switch_brace.md), [nl_while_switch](nl_while_switch.md) and [nl_catch_brace](nl_catch_brace.md).

Possible values are _false_/_true_. Default is _false_ (don't override).

# Examples

Following configuration removes newlines (because `nl_if_brace = remove`) but leaves one for large `if` statement
```
nl_if_brace        = remove
nl_multi_line_cond = true
```

Here first `if` statement gets edited and second is not:
```
if ((x<5 )&&(y<10))
{
  std::cout << "case #1" << '\n';
}

if ((x<5 )&&
    (y<10))
{
  std::cout << "Also case #2" << y << '\n';
}
```
transformed to
```
if ((x<5 )&&(y<10)) {
  std::cout << "case #1" << '\n';
}

if ((x<5 )&&
    (y<10))
{
  std::cout << "Also case #2" << y << '\n';
}
```

# See also

* [nl_for_brace](nl_for_brace.md)
* [nl_if_brace](nl_if_brace.md)
* [nl_switch_brace](nl_switch_brace.md)
* [nl_while_switch](nl_while_switch.md)
* [nl_catch_brace](nl_catch_brace.md)
