#include <iostream>
#include <string>

std::string zz = "Lorem ipsum dolor sit amet, \
consectetur adipiscing elit. \
Cras fermentum id diam sit amet consequat.";

std::string z2 = "Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.";

int main()
{
	int x = 10;
	std::string s = std::string("booo (short)");

	if (x<50) {
		s = std::string("Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.");
		s = ssff(20, "Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.");
	}

	std::cout << "s is " << s << '\n';

	return 0;
}