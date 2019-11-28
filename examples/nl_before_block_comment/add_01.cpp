#include <iostream>
/* Some comment
 * (this is multiline comment)
 */

int gg = 10;
int gl = 3; /*multiline
             * starts on same line
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

	if (x<y) {
		c = a;
	}

	std::cout << "Finally c is " << c << '\n';
}

