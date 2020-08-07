#include <iostream>

int foofunc(int x)
{
	if (x<10)
		return 20;
	x = x+40;
	return x;
}

int main()
{
	int xvar = 1;
	int y = foofunc(xvar);
	std::cout << "x value processed" << '\n';
	return 0;
}

