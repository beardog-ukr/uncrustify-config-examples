#include <iostream>

/* Multiline comment first line
   and second line
 */
int zoo_var = 20;


int add10(int x)
{
	return x+zoo_var;
}


int main()
{
/* Multiline comment first line
   second line
 */
	int x = 1;
	int y = 2;
	int z = add10(x) + y;
	std::cout << "z value processed " << z << '\n';
	return 0;
}

