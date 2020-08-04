# indent_paren_close

How to indent a close parenthesis after a newline.

Possible values are integer:

* 0: Indent to body level (default)
* 1: Align under the open parenthesis
* 2: Indent to the brace level

# Examples
Base example:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	for (int i = 0;
		i< 3;
		i++
		) {
		std::cout << "count: " << i << '\n';
	}

	if (
		x<y
	) {
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}
```

## 0
After:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	for (int i = 0;
	     i< 3;
	     i++
	     ) {
		std::cout << "count: " << i << '\n';
	}

	if (
	    x<y
	    ) {
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}
```

## 1
After:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	for (int i = 0;
	     i< 3;
	     i++
	    ) {
		std::cout << "count: " << i << '\n';
	}

	if (
	    x<y
	   ) {
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}
```

## 2
After:
```cpp
int main()
{
	int x = 10;
	int y = 20;

	for (int i = 0;
	     i< 3;
	     i++
	) {
		std::cout << "count: " << i << '\n';
	}

	if (
	    x<y
	) {
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}
```



# See also
* [indent_paren_nl](indent_paren_nl): If an open parenthesis is followed by a newline, whether to indent the next line so that it lines up after the open parenthesis.
* [indent_func_def_param](indent_func_def_param.md): Same as [indent_func_def_param](indent_func_def_param.md) but for function definitions.
