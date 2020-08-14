#include <iostream>

#define BOO 25
#define MY_MACRO    printf( \
		"I like %d types of cheese\n", \
		5 \
		)
int main()
{
	int x = 10;
	int sum = 0;

	for (int i=0; i<x; i++) { sum = sum+i; }
	std::cout << "sum is " << sum << '\n';

	return 0;
}

