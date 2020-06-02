#include <iostream>

int main()
{
	int x = 1;
	int y = 2;
	int z = x + y;
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
}

