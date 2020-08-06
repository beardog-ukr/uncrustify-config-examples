#include <iostream>

typedef struct {
	int hour;
	int min;
	int sec;
} counter_t;

struct v {
	union { // anonymous union
		struct { int i, j; }; // anonymous structure
		struct { long k, l; } w;
	};
	int m;
} v1;

struct s { int n; double d[]; }; // s.d is a flexible array member

struct s t1111 = { 0 };         // OK, d is as if double d[1], but UB to access
struct s t2 = { 1 };


int main()
{
	counter_t cntr1 = {.hour = 101, .min = 3, .sec = 47};
	counter_t cntrTwo = {.hour = 10, .min = 30, .sec = 47};

	std::cout << "Counter: " << cntr1.hour  << '\n';
	return 0;
}