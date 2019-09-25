#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector<int> c = {1, 2, 3, 4, 5, 6, 7};
	int x = 10;

	std::cout << "x before capture is " << x << '\n';

	std::cout << "c: ";
	std::for_each(c.begin(), c.end(), [](int i){
		std::cout << i << ' ';
	});
	std::cout << '\n';

	auto func1 = [x]  (int i) {
			     std::cout << i+x << ' ';
		     };

	x=20;
	std::cout << "x after capture is " << x << '\n';

	std::cout << "c elements and x: ";
	std::for_each(c.begin(), c.end(), func1);
	std::cout << '\n';
}

