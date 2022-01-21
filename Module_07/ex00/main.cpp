#include "whatever.hpp"

// my test
int	main(void){
	int x = 42;
	int y = 24;
	char a = 'a';
	char b = 'b';
	double i = 42.42;
	double j = 21.21;

	std::cout << "--------------------- INT ---------------------\n";

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "Smaller: " << min(x, y) << std::endl;
	std::cout << "Bigger: " << max(x, y) << std::endl;

	std::cout << "---swap-time---\n";
	swap(x, y);
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	std::cout << "--------------------- CHAR ---------------------\n";

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Smaller: " << min(a, b) << std::endl;
	std::cout << "Bigger: " << max(a, b) << std::endl;

	std::cout << "---swap-time---\n";
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "------------------- DOUBLE -------------------\n";

	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "Smaller: " << min(i, j) << std::endl;
	std::cout << "Bigger: " << max(i, j) << std::endl;

	std::cout << "---swap-time---\n";
	swap(i, j);
	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;

	return 0;
}

//default test
// int main(void)
// {
// 	int a = 2;
// 	int b = 3;

// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// 	return 0;
// }