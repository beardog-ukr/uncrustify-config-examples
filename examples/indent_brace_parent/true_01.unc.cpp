#include <iostream>

int main()
{
	int x = 10;
	int y = 20;

	x = 20 * x;
	if (x<y)
	   {
	   std::cout << "Also x is less than " << y << '\n';
	   }

	return 0;
}

