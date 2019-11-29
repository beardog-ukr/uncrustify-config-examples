#include <iostream>

int main()
{
	int y = 20;

	if (y<5) {
		std::cout << "y is less than 5" << '\n';
	}

	if (y<15) {
		std::cout << "y is less than 5";
		std::cout << '\n';
	}

	std::cout << "done." << '\n';
}
