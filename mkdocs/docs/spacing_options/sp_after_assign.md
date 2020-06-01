# sp_after_assign

Add or remove space after assignment operator `=`, `+=`, etc.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

Overrides [sp_assign](sp_assign.md).

#Examples

#add
Code before:
```
int x=10;
int sum =  0;

if(x<20) sum=30;

for(int i=0; i<x; i++) {
  sum=sum+i;
}
```

Code after:
```
int x= 10;
int sum =  0;

if(x<20) sum= 30;

for(int i= 0; i<x; i++) {
  sum= sum+i;
}
```

#remove
Code before:
```
int x = 10;
int sum  =  0;

if (x<20) sum = 30;

for  (int i=0; i<x; i++) {
  sum = sum+i;
}
```

Code after:
```
int x =10;
int sum  =0;

if (x<20) sum =30;

for  (int i=0; i<x; i++) {
  sum =sum+i;
}
```

#See also
* [sp_before_assign](sp_before_assign.md): Add or remove space before assignment operator '=', '+=', etc.
* [sp_assign](sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
