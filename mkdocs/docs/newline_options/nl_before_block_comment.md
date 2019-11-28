# nl_before_block_comment

The minimum number of newlines before a multi-line comment. Doesn't apply if after a brace open or another multi-line comment.

Values is integer value. Default is 0 as "no new newlines added".

Note:

* actual number of empty lines will be "`nl_before_block_comment-1`". Setting `nl_before_block_comment = 1` does not make sense because there is already one newline before multiline comment.
* this option conflicts with [nl_max](nl_max.md)

# Examples

If config is `nl_before_block_comment = 2` only one empty line will be added:
```
#include <iostream>
/* Some comment
 * (this is multiline comment)
 */

int main()
{
	int x = 10;
	int y = 20;
	/* Another variables
	 * (this is multiline comment)
	 */
	int a = 20;
	int b = 10;
	int c = b;
```
transformed to
```
#include <iostream>

/* Some comment
 * (this is multiline comment)
 */

int main()
{
	int x = 10;
	int y = 20;

	/* Another variables
	 * (this is multiline comment)
	 */
	int a = 20;
	int b = 10;
	int c = b;
```

# See also

* [nl_max](nl_max.md) - The maximum number of consecutive newlines
