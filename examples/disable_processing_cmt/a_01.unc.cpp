#include <iostream>
#include <string>

#define _ 0x20,
#define X 0x2B,

unsigned char labyrinth[] = {
	_ _ X X _ X _ '\n',
	X _ X _ _ X _ '\n',
	X _ _ _ _ _ _ '\n',
	X X _ X X _ _ '\n',
	X _ _ _ X X _ '\n',
	X _ X _ X _ _  0x00 };

#undef _
#undef X

int main()
{
	std::string ss((char*)labyrinth);


	std::cout << "labyrinth map is: " << '\n';
	std::cout << ss << '\n';

	return 0;
}




