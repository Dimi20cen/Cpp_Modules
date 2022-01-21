#include "iter.hpp"
#include <stdio.h>

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, printTab );
	iter( tab2, 5, printTab );

	return 0;
}

// int	main(void){
// 	int intTab[3] = {1, 2, 3};
// 	char charTab[3] = {'a', 'b', 'c'};
// 	double doubleTab[3] = {42.1, 42.2, 42.3};

// 	std::cout << "---------- INT ----------\n";
// 	iter(intTab, 3, printTab);
// 	std::cout << std::endl;

// 	iter(intTab, 3, increaseTab);
// 	iter(intTab, 3, printTab);

// 	std::cout << "---------- CHAR ---------\n";
// 	iter(charTab, 3, printTab);
// 	std::cout << std::endl;

// 	iter(charTab, 3, increaseTab);
// 	iter(charTab, 3, printTab);

// 	std::cout << "-------- DOUBLE --------\n";
// 	iter(doubleTab, 3, printTab);
// 	std::cout << std::endl;

// 	iter(doubleTab, 3, increaseTab);
// 	iter(doubleTab, 3, printTab);

// 	return (0);
// }