#include <iostream>

class Barrel {
public:

Barrel(int x,
       int y);
virtual ~Barrel();

int getWidth(int x, int y) const;

protected:
int width;
};

int Barrel::getWidth(int x, int y) const {
	return width;
}

Barrel::Barrel(int x,
               int y) {
	width =5;
}

Barrel::~Barrel() {
// nothing
}


int main()
{
	Barrel barr(11,
	            22);
	std::cout << "Width is " << barr.getWidth(1,2) << '\n';
	return 0;
}
