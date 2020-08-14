#include <iostream>

int buf_size;

#if defined SMALL_SIZE
#if defined MEDIUM_SIZE
buf_size = 20;
#else
buf_size = 10;
#endif
#else
buf_size = 30;
#endif

#if defined SMALL_SIZE
buf_size = 10;
#else
buf_size = 100;
#endif

int main()
{
	std::cout << "Buffer will be " << buf_size << '\n';

#if defined SMALL_SIZE
	std::cout << "small size" << '\n';
#endif

	return 0;
}

