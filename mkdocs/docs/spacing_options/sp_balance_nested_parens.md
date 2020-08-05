# sp_balance_nested_parens

Whether to balance spaces inside nested parentheses.

Possible values are _true_ and _false_, default _false_.

#Examples

## true
Code before:
```cpp
int main()
{
	int x = 10*( 11 + (12-5));
	x = 10*(11 + (12-5));
	connect(server, foo(10+x), this, bar(5*ok(20)));

	cout << x << '\n';
	return 0;
}
```

Code after:
```cpp
int main()
{
	int x = 10*( 11 + (12-5) );
	x = 10*( 11 + (12-5) );
	connect( server, foo(10+x), this, bar( 5*ok(20) ) );

	cout << x << '\n';
	return 0;
}
```

## false

Does not change example above.

#See also
* [sp_before_sparen](sp_before_sparen.md): Add or remove space before `(` of control statements (`if`, `for`, `switch`, `while` etc.).
* [sp_assign](sp_assign.md): Add or remove space around assignment operator '=', '+=', etc.
