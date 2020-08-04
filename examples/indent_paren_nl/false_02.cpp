#include <iostream>
#include <string>

int main()
{
	int x = 10;
	int y = 20;

	for (
		int i = 0;
		i< 3; 
		i++
		) {
		std::cout << "count: " << i << '\n';
	}

	if (
		x<y
	) {
		std::cout << "Also x is less than " << y << '\n';
	}

	return 0;
}




