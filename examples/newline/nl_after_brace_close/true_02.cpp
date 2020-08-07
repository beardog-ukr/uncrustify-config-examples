#include <iostream>

int main()
{
	int x = 10;
	int sum = 0;

	{
		sum = sum+5;
	}
	std::cout << "sum is " << sum << '\n';

	{
		sum = sum+20;
	};
	std::cout << "double sum is " << sum << '\n';

	return 0;
}

