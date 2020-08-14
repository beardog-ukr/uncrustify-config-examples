#include <iostream>

typedef struct {
	int hour;
	int min;
	int sec;

} counter_t;

struct v {
	union {
		int zoo;
		float mee;

	};
	int m;

} v1;

int main()
{
	counter_t cntr1 = {.hour = 101, .min = 3, .sec = 47};
	counter_t cntrTwo = {.hour = 10, .min = 30, .sec = 47};

	std::cout << "Counter: " << cntr1.hour  << '\n';
	return 0;
}