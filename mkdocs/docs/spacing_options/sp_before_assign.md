# sp_before_assign

Add or remove space before assignment operator `=`, `+=`, etc.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

Overrides [sp_assign](sp_assign.md).

#Examples

#add
Code before:
```
int x= 10;
int sum  = 0;

if(x<20) sum= 30;

for(int i=0; i<x; i++) {
  sum= sum+i;
}
```

Code after:
```
int x = 10;
int sum  = 0;

if(x<20) sum = 30;

for(int i =0; i<x; i++) {
  sum = sum+i;
}
```

#remove
Code before:
```cpp
int x = 10;
int sum  = 0;

if (x<20) sum = 30;

for  (int i=0; i<x; i++) {
  sum = sum+i;
}
```

Code after:
```
int x= 10;
int sum= 0;

if (x<20) sum= 30;

for  (int i=0; i<x; i++) {
  sum= sum+i;
}
```

#force
Works like `add` but makes exactly one space.


#See also
* [sp_before_sparen](sp_before_sparen.md): Add or remove space before `(` of control statements (`if`, `for`, `switch`, `while` etc.).
* [sp_assign](sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
