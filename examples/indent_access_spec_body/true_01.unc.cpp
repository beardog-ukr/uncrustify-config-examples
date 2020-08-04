#include <iostream>

class Barrel {
int width;

public:
	Barrel();
	virtual ~Barrel();

	int getWidth() const;
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
