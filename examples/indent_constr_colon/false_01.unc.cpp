#include <iostream>

class Position;

class Barrel {
public:

Barrel();
virtual ~Barrel();

int getWidth() const;

protected:
int width;
bool visible;
Position* pos;

};

Barrel::Barrel() : pos(nullptr),
	visible(false)
{
	width =5;
}

Barrel::~Barrel()
{
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
