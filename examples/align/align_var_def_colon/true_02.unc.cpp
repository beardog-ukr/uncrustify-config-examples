#include <iostream>
struct S {
	unsigned char b1 : 3, : 2, b2 : 6, b3 : 2;
};
int main()
{
	std::cout << sizeof(S) << '\n'; // usually prints 2
}