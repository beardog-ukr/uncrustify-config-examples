# nl_max

The maximum number of consecutive newlines (3 = 2 blank lines).

Note:

* this option conflicts with [nl_before_block_comment](nl_before_block_comment.md)
* this option conflicts(overrides) other options like [nl_max_blank_in_func](nl_max_blank_in_func.md)

# Examples

## Removing empty lines

If config is `nl_max = 1` all the empty lines get removed emply line will be added:
```
#include <iostream>


int gg = 10;

int main()
{

	int a = 20;
	int b = 10;
	int c = b;



	if (a<100) {
		c = a;
	}

	std::cout << "Finally c is " << c << '\n';
}
```
transformed to
```
#include <iostream>
int gg = 10;
int main()
{
	int a = 20;
	int b = 10;
	int c = b;
	if (a<100) {
		c = a;
	}
	std::cout << "Finally c is " << c << '\n';
}
```
## With other options

`nl_max` overrides some other options, listed in "Blank line options" section of documentation.
For example, following config
```
# Uncrustify-0.69.0_f
nl_max            = 0
nl_max_blank_in_func = 1
```
removes empty lines inside `main` function, but leaves others.

Like
```
#include <iostream>


int gg = 10;

int main()
{

	int a = 20;
	int b = 10;
	int c = b;



	if (a<100) {
		c = a;
	}

	std::cout << "Finally c is " << c << '\n';
}
```
transformed to
```
#include <iostream>


int gg = 10;

int main()
{
	int a = 20;
	int b = 10;
	int c = b;
	if (a<100) {
		c = a;
	}
	std::cout << "Finally c is " << c << '\n';
}
```

# See also

* [nl_before_block_comment](nl_before_block_comment.md) - The minimum number of newlines before a multi-line comment.
* [nl_max_blank_in_func](nl_max_blank_in_func.md) - The maximum number of consecutive newlines in a function.
