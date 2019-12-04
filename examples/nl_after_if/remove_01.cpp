#include <iostream>

int main()
{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	else {
		std::cout << "Also x is more (or equal) than " << y << '\n';
	}

	x = 20 * x;

	if (x<2000) {
		std::cout << "Also x is less than " << 2000 << '\n';
	}

	std::cout << "message about y: " << y << '\n';

	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	// else
	return 0;
}

