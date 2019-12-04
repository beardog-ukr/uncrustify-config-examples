#include <iostream>

namespace nnn
{
int value()    {
	return 5;
}
}
namespace mmm
{
const double v1 = 100;
double value() {
	return 2*v1;
}
}

int main()
{
	std::cout << nnn::value() << '\n';

	std::cout << mmm::value() << '\n';

	std::cout << mmm::v1 << '\n';

	return 0;
}
