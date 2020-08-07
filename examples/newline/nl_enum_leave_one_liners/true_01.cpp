#include <iostream>

enum FooNum { FOO_1 = 1, FOO_2 = 2};

int main()
{
	int x = FOO_2;
	enum BooNum { BOO_1 = 1, BOO_2 = 2};

	if (x< BOO_1) {
		std::cout << "Also x is less than " << BOO_1 << '\n';
	}

	return 0;
}

