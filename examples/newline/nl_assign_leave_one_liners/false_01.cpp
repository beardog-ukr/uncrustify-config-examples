#include <iostream>

int main()
{
	int x = 10;
	int y = 20;

	struct XstrArr foo = {.roo = x, .moo = y};
	ZrecordItem zrec = { 1, 2};
	ZrecordItem zrec = { .mee = 1, .bee = 222 };

	foo_t f = { 1, 2 };

	// if with else
	if (x<y) {
		foo_t f = { 1, 2 };
		std::cout << "Also x is less than " << y << '\n';
	}
	else {

	}

}

