#include <iostream>

extern "C" {
	int value(const char *pathname, int flags); // C function declaration
}

int main()
{
	std::cout << value() << '\n';
	return 0;
}
