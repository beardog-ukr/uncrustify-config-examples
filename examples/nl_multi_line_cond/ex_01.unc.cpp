#include <iostream>

int main()
{
	int x = 10;
	int y = 20;

	if ((x<5 )&&(y<10)) {
		std::cout << "case #1" << '\n';
	}

	if ((x<5 )&&
	    (y<10))
	{
		std::cout << "Also case #2" << y << '\n';
	}
}
