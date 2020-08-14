#include <iostream>

int main()
{
	int x = 50;
	int sum = 20;

	while (sum<x) sum = sum+sum;

	std::cout << "sum is" << sum << '\n';

	return 0;
}

