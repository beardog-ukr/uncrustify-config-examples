#include <iostream>

int tf(const int ip){
	return ip + 10;
}

int main(){
	int x = 10;
	int sum = 0;

	for (int i=0; i<x; i++) {
		sum = sum+tf(i);
	}

	std::cout << "sum is" << sum << '\n';
}

