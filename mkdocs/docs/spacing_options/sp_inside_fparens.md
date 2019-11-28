# sp_inside_fparens

Add or remove space inside function '(' and ')'.

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## force

`force` adds one space between  braces

```
int getTwo()
{
	return 2;
}

int main()
{
	int a = 200;
	int c = getTwo();
```
transformed to
```
int getTwo( )
{
	return 2;
}

int main( )
{
	int a = 200;
	int c = getTwo( );

```
## remove

`remove` removes all spaces between braces.
```
int getTwo( )
{
	return 2;
}
```

to
```
int getTwo()
{
	return 2;
}
```

# See also
