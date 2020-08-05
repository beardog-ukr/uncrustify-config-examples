# sp_num_before_tr_emb_cmt

Number of spaces before a trailing or embedded comment.

Should be used with [sp_before_tr_emb_cmt](sp_before_tr_emb_cmt.md) set to _force_ or _add_.

Integer number, default 0.

# Examples
Base example:
```cpp
int x = 10;      // this is trailing comment
int sum  =  0;   // another trailing comment
```

## value is 2
Config:
```
sp_before_tr_emb_cmt     = force
sp_num_before_tr_emb_cmt = 2
```
After:
```cpp
int x = 10;  // this is trailing comment
int sum  =  0;  // another trailing comment
```

## value is 0
Config:
```
sp_before_tr_emb_cmt     = force
```
Here `sp_num_before_tr_emb_cmt` is not specified (so it's 0 by default).

After:
```cpp
int x = 10; // this is trailing comment
int sum  =  0; // another trailing comment
```
Note, one space distance was set.


# See also

* [sp_before_tr_emb_cmt](sp_before_tr_emb_cmt.md): Add or remove space before a trailing or embedded comment.
* [sp_angle_paren](../spacing_options/sp_angle_paren.md): Add or remove space between `>` and `(` as found in `new List<byte>(foo);`.
