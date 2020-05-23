#include <iostream>

class Wooden {
public:
int value;
};

class Round {
public:
int radius;
};

class Barrel : Wooden,
	Round {
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


int main()
{
	Barrel b;
	std::cout << "Width is " << b.getWidth() << '\n';
	return 0;
}
