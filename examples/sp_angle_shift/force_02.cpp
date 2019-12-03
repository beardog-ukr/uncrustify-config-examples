#include <iostream>
#include <list>
#include <utility> // for std::pair

int main()
{
	std::list<std::pair<int, int>> *lp = new std::list<std::pair<int, int>>(10);

	std::cout << "lp size is " << lp->size() << '\n';

	delete lp;

	return 0;
}