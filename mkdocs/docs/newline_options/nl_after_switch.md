# nl_after_switch

Add or remove blank line after `switch` statement.

Possible values are _ignore_, _add_, _remove_ and _force_, default _ignore_.

#Examples
#add
Before:
```
switch(z) {

case 1:
	std::cout << "One" << '\n';
	break;

case 3:
	std::cout << "Three" << '\n';
	break;

default:
	std::cout << "Something else" << '\n';
}
std::cout << "z value processed" << '\n';
```
code after:
```
switch(z) {

case 1:
	std::cout << "One" << '\n';
	break;

case 3:
	std::cout << "Three" << '\n';
	break;

default:
	std::cout << "Something else" << '\n';
}

std::cout << "z value processed" << '\n';
```

#remove
Before:
```
switch(z)
{

case 1:
	std::cout << "One" << '\n';
	break;

case 3:
	std::cout << "Three" << '\n';
	break;

default:
	std::cout << "Something else" << '\n';
}

std::cout << "Switching over z done" << '\n';
```
code after:
```
switch(z)
{

case 1:
	std::cout << "One" << '\n';
	break;

case 3:
	std::cout << "Three" << '\n';
	break;

default:
	std::cout << "Something else" << '\n';
}
std::cout << "Switching over z done" << '\n';
```

# See also

* [nl_before_switch](nl_before_switch.md) - Add or remove blank line before 'switch'.
* [nl_after_func_body_class](nl_after_func_body_class.md) - The number of newlines after '}' of a multi-line function body in a class declaration.
