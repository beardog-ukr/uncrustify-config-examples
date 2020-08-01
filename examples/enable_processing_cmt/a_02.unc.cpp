#include <iostream>
#include <string>

#define _ 0x20,
#define X 0x2B,

unsigned char labyrinth_a[] = {
	_ _ X X _ X _ '\n',
	X _ X _ _ X _ '\n',
	X _ _ _ _ _ _ '\n',
	X X _ X X _ _ '\n',
	X _ _ _ X X _ '\n',
	X _ X _ X _ _ 0x00 };

#undef _
#undef X

//-DISABLE-UNCRUSTIFY-
#define _ 0x20,
#define X 0x2C,

unsigned char labyrinth_b[] = {
_ _ X X X _ _ '\n',
X _ X _ _ X _ '\n',
X _ X X X _ _ '\n',
_ _ X _ _ X _ '\n',
X _ X _ _ X _ '\n',
X _ X X X _ _  0x00 };

#undef _
#undef X
//-ENABLE-UNCRUSTIFY-

int main()
{
	std::string ssa((char*)labyrinth_a);
	std::string ssb((char*)labyrinth_b);

	std::cout << "labyrinth map A is: " << '\n';
	std::cout << ssa << '\n';

	std::cout << '\n';

	std::cout << "labyrinth map B is: " << '\n';
	std::cout << ssb << '\n';

	return 0;
}




