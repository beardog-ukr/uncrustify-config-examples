# indent_xml_string

The number of spaces to indent multi-line XML strings.

Requires `indent_align_string=true`.

#Example
Config:
```
indent_align_string = true
indent_xml_string = 2
```

Before:
```
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
```

After:
```
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
```

Some results are not correct (tested with Uncrustify-0.69.0_f).

# See also
* [indent_align_string](indent_align_string.md) - Indenting multiline strings
* [Example](https://github.com/uncrustify/uncrustify/blob/master/tests/input/c/xml.c) and [expected result](https://github.com/uncrustify/uncrustify/blob/master/tests/expected/c/02200-xml.c)
