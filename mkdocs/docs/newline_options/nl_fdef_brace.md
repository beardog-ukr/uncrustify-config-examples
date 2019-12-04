# nl_fdef_brace

Add or remove newline between function signature and `{`.

Possible values are _ignore_, _add_, _remove_ and _force_. Default _ignore_.

Note [nl_fdef_brace_cond](nl_fdef_brace_cond.md) overrides this setting.

#Examples
## add
Code before
```
int tf(const int ip) {
	return ip + 10;
}
```
Code after:
```
int tf(const int ip)
{
	return ip + 10;
}
```

## remove
Code before
```
int tf(const int ip)
{
	return ip + 10;
}
```
Code after:
```
int tf(const int ip){
	return ip + 10;
}
```

#See also

* [nl_fdef_brace_cond](nl_fdef_brace_cond.md) Add or remove newline between function signature and '{', if signature ends with ')'.
* [nl_for_brace](nl_for_brace.md) - similar but for `for` statement
* [nl_if_brace](nl_if_brace.md) - similar but for `if`
