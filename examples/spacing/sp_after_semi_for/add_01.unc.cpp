#include <iostream>

int main()
{
	int x = 10;
	int sum = 0;

	for (int i=0; i<x; i++)
	{
		sum = sum+i;
	}
	std::cout << "sum is " << sum << '\n';

	return 0;
}

