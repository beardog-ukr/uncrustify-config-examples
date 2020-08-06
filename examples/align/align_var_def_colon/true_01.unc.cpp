#include <iostream>
struct S {
	unsigned char b1 : 3;
	unsigned char : 0;
	unsigned char bTwo : 6;
	unsigned char b3 : 2;
};
int main()
{
	std::cout << sizeof(S) << '\n'; // usually prints 2
}