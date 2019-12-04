# indent_align_string

Whether to indent strings broken by '\' so that they line up.

Possible values are _true_ or _false_, default _false_.

It seems that description of this option is not correct, example below works in some other way.

# Examples

## true

Config:
```
indent_align_string = true
```

Before:
```
int main()
{
	if (x<50) {
		s = std::string("Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.");

		s = ssff(20, "Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.");

	}
}
```
After:
```
int main()
{
	if (x<50) {
		s = std::string("Lorem ipsum dolor sit amet,"
		                "consectetur adipiscing elit."
		                "Cras fermentum id diam sit amet consequat.");

		s = ssff(20, "Lorem ipsum dolor sit amet,"
		             "consectetur adipiscing elit."
		             "Cras fermentum id diam sit amet consequat.");

	}
}
```

## false

Config:
```
indent_align_string = false
```

Before:
```
int main()
{
	if (x<50) {
		s = std::string("Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.");

		s = ssff(20, "Lorem ipsum dolor sit amet,"
"consectetur adipiscing elit."
"Cras fermentum id diam sit amet consequat.");

	}
}
```
After:
```
int main()
{
	if (x<50) {
		s = std::string("Lorem ipsum dolor sit amet,"
		                "consectetur adipiscing elit."
		                "Cras fermentum id diam sit amet consequat.");
		s = ssff(20, "Lorem ipsum dolor sit amet,"
		         "consectetur adipiscing elit."
		         "Cras fermentum id diam sit amet consequat.");
	}
}
```

Note the only version from "true" version is that in second assignment lines are aligned at level of brace and not the level of function parameter.

# See also

* [indent_xml_string](indent_xml_string.md) - The number of spaces to indent multi-line XML strings. Requires `indent_align_string=true`.
* [Bug #248](https://github.com/uncrustify/uncrustify/issues/248) - indent_align_string and streams #248 (closed)
* [Issue #749](https://github.com/uncrustify/uncrustify/issues/749) - indent_with_tabs: allow alignment with either spaces or tabs
* [Test code](https://github.com/uncrustify/uncrustify/blob/master/tests/input/c/align-string.c) and [expected result](https://github.com/uncrustify/uncrustify/blob/master/tests/expected/c/02201-align-string.c)
