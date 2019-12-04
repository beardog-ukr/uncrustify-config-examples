# sp_before_sparen

Add or remove space before `(` of control statements (`if`, `for`, `switch`, `while` etc.).

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

Note, there are some special cases for this option: [sp_catch_paren](sp_catch_paren.md), _sp_version_paren_ and _sp_scope_paren_.

#Examples

#add
Code before:
```
if(x<20) sum = 30;

for(int i=0; i<x; i++) {
  sum = sum+i;
}
```

Code after:
```
if (x<20) sum = 30;

for (int i=0; i<x; i++) {
  sum = sum+i;
}
```

#remove
Code before:
```cpp
if (x<20) sum = 30;

for  (int i=0; i<x; i++) {
  sum = sum+i;
}
```

Code after:
```
if(x<20) sum = 30;

for(int i=0; i<x; i++) {
  sum = sum+i;
}
```

#See also
* [sp_catch_paren](sp_catch_paren.md): Add or remove space between `catch` and `(` in `catch (something) { }`.
* [sp_catch_brace](sp_catch_brace.md) - Add or remove space before the `{` of a `catch` statement, if the `{` and `catch` are on the same line, as in `catch (decl) <here> {`.
* _sp_version_paren_ (D) Add or remove space between 'version' and '(' in 'version (something) { }'. If set to ignore, sp_before_sparen is used.
* _sp_scope_paren_ - (D) Add or remove space between 'scope' and '(' in 'scope (something) { }'. If set to ignore, sp_before_sparen is used.
