#include <iostream>
#include <memory> //shared_ptr
#include <vector> // vector

using namespace std;

int main()
{
	// Create a vector containing integers
	vector<int>v ={7, 5, 16, 8};

	shared_ptr<int>isp=make_shared<int>();
	*isp = 5000;
	v.push_back(*isp);

	int x=4, y=5;
	int z= x+y;

	v.push_back(z);
	v.push_back(13);


	// Iterate and print values of vector
	for(int n : v) {
		cout << n << '\n';
	}
}