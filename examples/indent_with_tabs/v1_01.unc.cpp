#include <iostream>
#include <list>
#include <utility> // for std::pair

int main()
{
	std::list<std::pair< int, int>  > *lp =
		new std::list< std::pair<int, int> >(10);

	std::list<int> *lp2 = new std::list<int>(20);

	std::cout << "lp size is " << lp->size() << '\n';
	std::cout << "lp2 size is "
	          << lp2->size() << '\n';

	delete lp;
	delete lp2;

	return 0;
}