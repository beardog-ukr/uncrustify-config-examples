# sp_inside_angle

Add or remove space inside `<` and `>`.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

# Examples

## force and add

Both `add` and `force` work in same way, add spaces inside angle braces.

Before
```
std::list<int> *lp = new std::list<int>(10);
std::list<int> *lpe = new std::list<int>();
```
After
```
std::list< int > *lp = new std::list< int >(10);
std::list< int > *lpe = new std::list< int >();
```
## remove

`remove` removes all spaces between angle braces.
```
std::list<int > *lp = new std::list<int> (10);
std::list<int> *lpe = new std::list< int>();
```
to
```
std::list<int> *lp = new std::list<int> (10);
std::list<int> *lpe = new std::list<int>();
```

# See also

[sp_angle_paren](sp_angle_paren.md) - Add or remove space between `>` and `(` as found in `new List<byte>(foo);`.
