#include <iostream>
#include <string>

int main()
{
	int x = 10;
	std::string s = "<xml>"
"<heading>Reminder</heading>"
"<body>"
"<text>Lorem ipsum dolor sit amet</text>"
"</body>"
"</xml>";

	if (x<50) {
		s = std::string("<xml>"
"<heading>Reminder</heading>"
"<body>"
"<text>Lorem ipsum dolor sit amet</text>"
"</body>"
"</xml>");

		s = somefunc(2000, "<xml>"
"<heading>Reminder</heading>"
"<body>"
"<text>Lorem ipsum dolor sit amet</text>"
"</body>"
"</xml>");

		s = "<xml>"
"<data Parent=\"%d\" Name=\"%s\">"
"<Child Id=\"%d\"/>"
"</data>"
"</xml>";

	}

	std::cout << "s is " << s << '\n';

	return 0;
}

