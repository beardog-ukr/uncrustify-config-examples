# sp_after_semi

Add or remove space after `;`, except when followed by a comment.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _add_.

Some values may conflict with [mod_remove_extra_semicolon](../other_options/mod_remove_extra_semicolon.md).

#Examples

##add
Code before:
```cpp
int x=10;//following comment
int sum = 0;

x = 20*x;sum = sum + x;
```

Code after:
```cpp
int x=10;//following comment
int sum = 0;

x = 20*x; sum = sum + x;
```

##remove
Code before:
```cpp
int x=10;//following comment
int sum = 0;

x = 20*x;  sum = sum + x;
```

Code after:
```cpp
int x=10;//following comment
int sum = 0;

x = 20*x;sum = sum + x;
```

#See also
* [mod_remove_extra_semicolon](../other_options/mod_remove_extra_semicolon.md): Whether to remove superfluous semicolons.
* [sp_after_assign](sp_after_assign.md): Add or remove space after assignment operator `=`, `+=`, etc.
* [sp_before_assign](sp_before_assign.md): Add or remove space before assignment operator '=', '+=', etc.
* [sp_assign](sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
