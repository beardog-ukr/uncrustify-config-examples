#include <iostream>
#include <memory> //shared_ptr
#include <vector> // vector

using namespace std;

int main()
{
	// Create a vector containing integers
	vector<int>v = {7, 5, 16, 8};

	// Add two more integers to vector
	v.push_back(25);
	v.push_back(13);

	shared_ptr<int>isp =make_shared<int>();
	*isp = 5000;
	v.push_back(*isp);

	// Iterate and print values of vector
	for(int n : v) {
		cout << n << '\n';
	}
}