# sp_angle_word

Add or remove space between `>` and a word as in `List<byte> m;` or `template <typename T> static ...`.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add
Before:
```
vector<int>v = {7, 5, 16, 8};
shared_ptr<int>isp=make_shared<int>();
```
After
```
vector<int> v = {7, 5, 16, 8};
shared_ptr<int> isp=make_shared<int>();
```

## Remove
Before
```
vector<int> v = {7, 5, 16, 8};
shared_ptr<int>   isp =make_shared<int>();
```

After
```
vector<int>v = {7, 5, 16, 8};
shared_ptr<int>isp =make_shared<int>();
```

# See also

* [sp_angle_paren](../spacing_options/sp_angle_paren.md) - Add or remove space between `>` and `(` as found in `new List<byte>(foo);`.
