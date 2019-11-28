# sp_assign

Add or remove space around assignment operator `=`, `+=`, etc.

Possible values are _ignore_, _add_, _remove_ and _force_, default is _ignore_.

# Examples

## Add
Before:
```
vector<int>v ={7, 5, 16, 8};

shared_ptr<int>isp=make_shared<int>();
*isp = 5000;

int x=4, y=5;
int z= x+y;
```
After
```
vector<int>v = {7, 5, 16, 8};

shared_ptr<int>isp = make_shared<int>();
*isp = 5000;

int x = 4, y = 5;
int z = x+y;
```

## Remove
Before
```
vector<int>v =  {7, 5, 16, 8};
shared_ptr<int>isp  =make_shared<int>();
*isp = 5000;
int x=4, y = 5;
int z= x+y;
```

After
```
vector<int>v={7, 5, 16, 8};
shared_ptr<int>isp=make_shared<int>();
*isp=5000;
int x=4, y=5;
int z=x+y;
```

# See also

* [sp_angle_paren](../spacing_options/sp_angle_paren.md) - Add or remove space between `>` and `(` as found in `new List<byte>(foo);`.
