#include <iostream>

class Barrel {
public:

Barrel();
virtual ~Barrel();

int getWidth() const;

protected:
int height;
int radius;
int weight;
};

Barrel::Barrel() : radius(10),
	height(40) {
	weight =5;
}

Barrel::~Barrel() {
// nothing
}

int Barrel::getWidth() const {
	return radius*2;
}


int main()
{
	Barrel b;
	std::cout << "Width is " << b.getWidth() << '\n';
	return 0;
}
