# sp_permit_cpp11_shift

Permit removal of the space between `>>` in `foo<bar<int> >`. Note that [sp_angle_shift](sp_angle_shift.md) cannot remove the space without this option.

Possible values are _false_ and _true_. Default is _false_ (so it disables _remove_ option for [sp_angle_shift](sp_angle_shift.md))

# Examples

# false
Config
```
sp_angle_shift = remove
sp_permit_cpp11_shift = false
```
Code before:
```
std::list<std::pair< int, int> > *lp = new std::list< std::pair<int, int>>(10);
std::list<std::pair<int, int>> *lp2 = new std::list< std::pair<int, int> >(20);
```

Code after:
```
std::list<std::pair< int, int> > *lp = new std::list< std::pair<int, int> >(10);
std::list<std::pair<int, int> > *lp2 = new std::list< std::pair<int, int> >(20);
```
Note, it adds spaces instead of removing.

#true
Config
```
sp_angle_shift = remove
sp_permit_cpp11_shift = true
```
Code before:
```
std::list<std::pair< int, int> > *lp = new std::list< std::pair<int, int>>(10);
std::list<std::pair<int, int>> *lp2 = new std::list< std::pair<int, int> >(20);
```

Code after:
```
std::list<std::pair< int, int>> *lp = new std::list< std::pair<int, int>>(10);
std::list<std::pair<int, int>> *lp2 = new std::list< std::pair<int, int>>(20);
```

#See also

* [sp_angle_shift](sp_angle_shift.md) - Add or remove space between `>` and `>` in `>>` (template stuff).
* [Bug #255](https://github.com/uncrustify/uncrustify/issues/255) Template in Java and sp_angle_shift (closed)
