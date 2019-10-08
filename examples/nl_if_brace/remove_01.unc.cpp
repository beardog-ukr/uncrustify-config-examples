#include <iostream>

int main()
{
	int x = 10;
	int y = 20;

	//Note, following line is not changed by Uncrustify-0.69.0_f
	if (x<15)
		y=30;

	// Single if
	if (x<5) {
		std::cout << "x is less than 5" << '\n';
	}

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	else
	{
		std::cout << "Also x is more (or equal) than " << y << '\n';
	}

}
