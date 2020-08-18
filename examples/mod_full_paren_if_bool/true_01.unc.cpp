#include <iostream>

bool isOdd(int x) {
	return true;
}

int main()
{
	int x = 10;
	int y = 20;

	if (isOdd(x) && (x<y)) {
		std::cout << "x is odd and less than " << y << '\n';
	}

	while(isOdd(x) && x>0) {
		x=x-3;
	}

	std::cout << "transformed x is " << x << '\n';

	return 0;
}

