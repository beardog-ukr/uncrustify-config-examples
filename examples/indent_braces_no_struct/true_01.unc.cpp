#include <iostream>

struct Barrel
{
	int width;
	int height;
	int radius;
};

int boo()
	{
	Barrel b;
	b.width = 15;
	std::cout << "Width is " << b.width << '\n';
	return 0;
	}

int main()
	{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
		}
	else {
		std::cout << "Also x is more (or equal) than " << y << '\n';
		}

	boo();

	return 0;
	}

