#include <iostream>

int main()
{
	int x = 10;
	int y = 20;

	//Note, changing following line is controlled by nl_if_leave_one_liners too
	//It will not be cahnged in this example because nl_if_leave_one_liners = true
	if (x<15) y=30;

	// Single if
	if (x<5)
	{
		std::cout << "x is less than 5" << '\n';
	}

	// if with else
	if (x<y)
	{
		std::cout << "Also x is less than " << y << '\n';
	}
	else {
		std::cout << "Also x is more (or equal) than " << y << '\n';
	}

}
