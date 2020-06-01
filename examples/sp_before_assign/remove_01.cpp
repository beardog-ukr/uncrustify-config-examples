#include <iostream>

int main()
{
	int x = 10;
	int sum  = 0;

	if (x<20) sum = 30;

	for  (int i=0; i<x; i++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';
}

