#include <iostream>

// following line shows code_width limit
// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a

int sum(int short_name,
        int first_long_name_is_very_long,
        int second_long_name_is_long_too)
{
	int result = first_long_name_is_very_long;
	result += second_long_name_is_long_too;
	return result;
}

int main()
{
	int x = 10;
	int sm = 0;

	// following line shows code_width limit
	// a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a a
	for (int very_long_name_is_long=0;
	     very_long_name_is_long<x;
	     very_long_name_is_long++) {
		sm = sm+i;
	}

	std::cout << "sum is" << sum(10,20,45) << '\n';

	return 0;
}

