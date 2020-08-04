#include <iostream>

class Barrel {
public:

Barrel();
virtual ~Barrel();

int getWidth(int x,
	int y) const;

protected:
int width;
};

int Barrel::getWidth(int x,
                     int y) const {
	return width;
}

Barrel::Barrel() {
	width =5;
}

Barrel::~Barrel() {
// nothing
}


int main()
{
	Barrel b;
	std::cout << "Width is " << b.getWidth(1,2) << '\n';
	return 0;
}
