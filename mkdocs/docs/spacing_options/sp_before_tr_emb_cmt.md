# sp_before_tr_emb_cmt

Add or remove space before a trailing or embedded comment.

Possible values are _ignore_, _add_, _remove_ and _force_, default _ignore_.

If [sp_num_before_tr_emb_cmt](sp_num_before_tr_emb_cmt.md) is not specified then _add_ and _force_ will add 1 space, else they will add [sp_num_before_tr_emb_cmt](sp_num_before_tr_emb_cmt.md) spaces.

# Examples

## Add
Before:
```cpp
int x = 10;      // this is trailing comment
int sum  =  0;// another trailing comment
```
After
```cpp
int x = 10;      // this is trailing comment
int sum  =  0; // another trailing comment
```

## Remove
Before
```cpp
int x = 10;      // this is trailing comment
int sum  =  0;   // another trailing comment
```

After
```cpp
int x = 10;// this is trailing comment
int sum  =  0;// another trailing comment
```

# See also

* [sp_num_before_tr_emb_cmt](sp_num_before_tr_emb_cmt.md): Number of spaces before a trailing or embedded comment.
* [sp_angle_paren](../spacing_options/sp_angle_paren.md): Add or remove space between `>` and `(` as found in `new List<byte>(foo);`.
