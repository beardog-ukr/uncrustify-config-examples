# sp_after_semi_for

Add or remove space after `;` in non-empty `for` statements.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _force_.

#Examples

##add
Code before:
```cpp
for (int i=0;i<x;i++)
{
  sum = sum+i;
}
```

Code after:
```cpp
for (int i=0; i<x; i++)
{
  sum = sum+i;
}
```

##remove
Code before:
```cpp
for (int i=0; i<x;  i++)
{
  sum = sum+i;
}
```

Code after:
```cpp
for (int i=0;i<x;i++)
{
  sum = sum+i;
}
```

#See also
* [sp_after_semi](sp_after_semi.md): Add or remove space after ';', except when followed by a comment.
* [sp_after_assign](sp_after_assign.md): Add or remove space after assignment operator `=`, `+=`, etc.
* [sp_before_assign](sp_before_assign.md): Add or remove space before assignment operator '=', '+=', etc.
* [sp_assign](sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
