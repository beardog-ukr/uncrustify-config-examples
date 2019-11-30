#include <iostream>
#include <list>

int main()
{
	std::list<int> *lp = new std::list<int>(10);
	std::list<int> *lpe = new std::list<int> ();

	lpe->push_front(25);
	lpe->push_back(13);

	std::cout << "lp size is " << lp->size() << '\n';
	std::cout << "lpe size is " << lpe->size() << '\n';

	return 0;
}