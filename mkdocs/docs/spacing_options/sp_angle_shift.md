# sp_angle_shift

Add or remove space between '>' and '>' in '>>' (template stuff).

Possible values are _ignore_, _add_, _remove_ and _force_. Default: _add_.

Note, if you want to _remove_ spaces in C++ files, option `sp_permit_cpp11_shift = true` also needed.

#Examples

##remove
Before
```
std::list<std::pair< int, int> > *lp = new std::list< std::pair<int, int>>(10);
std::list<std::pair<int, int>> *lp2 = new std::list< std::pair<int, int> >(20);
```

After
```
std::list<std::pair< int, int>> *lp = new std::list< std::pair<int, int>>(10);
std::list<std::pair<int, int>> *lp2 = new std::list< std::pair<int, int>>(20);
```

Note, config here has two lines:
```
sp_angle_shift = remove
sp_permit_cpp11_shift = true
```

#See also

* [sp_permit_cpp11_shift](sp_permit_cpp11_shift.md) - Permit removal of the space between `>>` in `foo<bar<int> >`. Note that _sp_angle_shift_ cannot remove the space without this option.

* [Bug #255](https://github.com/uncrustify/uncrustify/issues/255) Template in Java and sp_angle_shift (closed)
