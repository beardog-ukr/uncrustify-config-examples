#include <iostream>

int booFunc(int fp,
	int sp)
{
	std::cout << "Pair: " << fp << " : " << sp << '\n';
	return fp+sp;
}

int main()
{
	int x = 10;
	int y = 20;

	booFunc(x,y);

	return 0;
}

