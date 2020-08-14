#include <iostream>

int sum(int x, int y)
{
	return x+y;
}

int sum20(int x,
          int y)
{
	return x+y+20;
}

int sum40(int x,
          int y)
{
	int base = x+y;
	return base+40;
}

int main()
{
	int a = 10;
	int b = 550;

	std::cout << "sum is" << sum(a,b) << '\n';
	std::cout << "sum20 is" << sum20(a,b) << '\n';
	std::cout << "sum40 is" << sum40(a,b) << '\n';

	return 0;
}

