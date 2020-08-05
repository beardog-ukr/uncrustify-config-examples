#include <iostream>

int booFunct(int fp,    int sp, int tp);
int booFunct2(int fp,   int sp, int tp);

int main()
{
	int aa, x = 10;
	int y = 20;

	booFunct(100, y, 5);
	booFunct(x,     100,    y);

	return 0;
}

