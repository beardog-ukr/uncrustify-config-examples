#include <iostream>


int gg = 10;

int main()
{

	int a = 20;
	int b = 10;
	int c = b;



	if (a<100) {
		c = a;
	}

	std::cout << "Finally c is " << c << '\n';
}