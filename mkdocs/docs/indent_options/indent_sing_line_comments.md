# indent_sing_line_comments

Spaces to indent single line (`//`) comments on lines before code.

Value is unsigned number, default 0.

#Examples
Config is `indent_sing_line_comments = 3`, code before is
```
int main()
{
	int x = 20; // side comment

	// one comment
	std::cout << "x: " << x << '\n';

// another comment
	std::cout << "x+ :" << x+10 << '\n';

	return 0;
}
```
code after is
```
int main()
{
	int x = 20; // side comment

	   // one comment
	std::cout << "x: " << x << '\n';

// another comment
	std::cout << "x+ :" << x+10 << '\n';

	return 0;
}
```
Here "one comment" was intended by three spaces.

#See also

* [indent_relative_single_line_comments](indent_relative_single_line_comments.md) - Whether to indent trailing single line ('//') comments relative to the code instead of trying to keep the same absolute column.
* [cmt_width](../other_options/cmt_width.md) - Limit for comments length
