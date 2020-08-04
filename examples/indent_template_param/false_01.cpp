#include <iostream>
using namespace std;

template <class T1, class T2>
T1 GetMax (T1 a,
		T2 b) {
	T1 result;
	result = (a>b) ? a : b;
	return (result);
}

int main () {
	int i=5, j=6, k;
	long l=10, m=5, n;
	k = GetMax<int, long>(i,
		l);
	n = GetMax<int, long>(j,
			m);
	cout << k << endl;
	cout << n << endl;
	return 0;
}