# sp_angle_paren_empty

Add or remove space between `>` and `(` as found in `new List<byte>();`.

Possible values are _ignore_, _add_, _remove_ and _force_.

Note, this option works only if constructor has no parameters; that's a special case for [sp_angle_paren](sp_angle_paren.md).

# Examples

In both examples only second line gets modified. Second is not changed because some parameter is provided to constructor.

## Add
Before:
```
std::list<int> *lp = new std::list<int>(10);
std::list<int> *lpe = new std::list<int>()
```
After
```
std::list<int> *lp = new std::list<int>(10);
std::list<int> *lpe = new std::list<int>()
```

## Remove
Before
```
std::list<int> *lp = new std::list<int> (10);
std::list<int> *lpe = new std::list<int> ()
```

After
```
std::list<int> *lp = new std::list<int> (10);
std::list<int> *lpe = new std::list<int>()
```

# See also

* [sp_angle_word](../spacing_options/sp_angle_word.md) - Add or remove space between `>` and a word as in `List<byte> m;` or `template <typename T> static ...`.
* [sp_angle_paren](sp_angle_paren.md) - Add or remove space between `>` and `(` as found in `new List<byte>(foo);`.
