#include <iostream>

int main()
{
	int x = 1;
	int y = x + 2;

	if (y>3)
	{
		std::cout << "y too large" << '\n';
	}

	if (y<3) std::cout << "y is small" << '\n';

	return 0;
}

