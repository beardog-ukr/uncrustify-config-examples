#include <iostream>

int main()
{
	int a = 200;
	int c = 10;

	if (a<100) c = a;

	if (c>5) {
		std::cout << "c is larger than 5" << '\n';
	}

	std::cout << "Finally c is " << c << '\n';
}