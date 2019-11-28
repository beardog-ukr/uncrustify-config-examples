#include <iostream>

int getTwo()
{
	return 2;
}

int main()
{
	int a = 200;
	int c = getTwo();

	if (a<100) {
		c = a;
	}

	std::cout << "Finally c is " << c << '\n';
}