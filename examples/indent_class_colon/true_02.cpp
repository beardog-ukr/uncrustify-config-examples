#include <iostream>

class Wooden {
public:
Wooden(int w);
int value;
};

Wooden::Wooden(int w) {
	value = w;
}

class Round {
public:
Round(int r);
int radius;
};

Round::Round(int r) {
	radius = r;
}

class Barrel : Wooden,
	Round {
public:

Barrel();
virtual ~Barrel();

int getWidth() const;

protected:
int width;

};

Barrel::Barrel() : Wooden(3),
	Round(7)
{
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
