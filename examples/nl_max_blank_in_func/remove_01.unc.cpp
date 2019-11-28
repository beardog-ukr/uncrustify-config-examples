#include <iostream>


int getTwo()
{
	return 1;
}

int main()
{
	int a = 20;
	int c = getTwo();
	if (a<100) {
		c = a;
	}
	std::cout << "Finally c is " << c << '\n';
}