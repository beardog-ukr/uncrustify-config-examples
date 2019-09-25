# sp_cpp_lambda_paren

Add or remove space after the capture specification in [C++11 lambda](https://en.cppreference.com/w/cpp/language/lambda).

Possible values are _ignore_, _add_, _remove_ and _force_.

# Examples

## Add 
Before:
```
	std::for_each(c.begin(), c.end(), [](int i){
		std::cout << i << ' ';
	});
	std::cout << '\n';

	auto func1 = [x](int i) {
			     std::cout << i+x << ' ';
		     };
```
After
```
	std::for_each(c.begin(), c.end(), [] (int i){
		std::cout << i << ' ';
	});
	std::cout << '\n';

	auto func1 = [x] (int i) {
			     std::cout << i+x << ' ';
		     };
```

## Force
Before
```
	std::for_each(c.begin(), c.end(), [](int i){
		std::cout << i << ' ';
	});
	std::cout << '\n';

	auto func1 = [x]  (int i) {
			     std::cout << i+x << ' ';
		     };
```

After (note lines 1 and 6)
```
	std::for_each(c.begin(), c.end(), [] (int i){
		std::cout << i << ' ';
	});
	std::cout << '\n';

	auto func1 = [x] (int i) {
			     std::cout << i+x << ' ';
		     };
```

