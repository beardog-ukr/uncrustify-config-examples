#include <iostream>

int main()
{
	int x = 10;
	int sum = 0;

	// following line shows code_width limit
	// a a a a a a a a  a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0;
	     very_long_name_is_long<x;
	     very_long_name_is_long++) {
		sum = sum+i;
	}

	std::cout << "sum is" << sum << '\n';

	return 0;
}

