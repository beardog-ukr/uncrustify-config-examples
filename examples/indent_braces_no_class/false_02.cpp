#include <iostream>

class Barrel 
{
public:

Barrel();
virtual ~Barrel();

int getWidth() const;

protected:
int width;

};

Barrel::Barrel() {
	width =5;
}

Barrel::~Barrel() {
// nothing
}

int Barrel::getWidth() const {
	return width;
}


int boo()
{
	Barrel b;
	std::cout << "Width is " << b.getWidth() << '\n';
	return 0;
}

int main()
{
	int x = 10;
	int y = 20;

	// if with else
	if (x<y) {
		std::cout << "Also x is less than " << y << '\n';
	}
	else {
		std::cout << "Also x is more (or equal) than " << y << '\n';
	}

	boo();

	return 0;
}

