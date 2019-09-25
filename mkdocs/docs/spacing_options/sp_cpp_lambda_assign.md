# sp_cpp_lambda_assign

Add or remove space around '=' in C++11 lambda capture specifications.

Overrides [sp_assign](../sp_assign.md).

# Values
Possible values are 

* ignore - option is not used
* add - spaces are added (only if there are no one)
* remove - spaces are removed
* force - sets exactly one space around `=`

# Examples

## Add 
Before:
```
	auto func1 = [=](int i) {
			     std::cout << i+x << ' ';
		     };
```
After
```
	auto func1 = [ = ](int i) {
			     std::cout << i+x << ' ';
		     };
```

## Force
Before
```
	auto func1 = [  =](int i) {
			     std::cout << i+x << ' ';
		     };
```

After
```
	auto func1 = [ = ](int i) {
			     std::cout << i+x << ' ';
		     };
```


