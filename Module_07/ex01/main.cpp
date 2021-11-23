#include "iter.hpp"

int	main(void){
	int intTab[3] = {1, 2, 3};
	char charTab[3] = {'a', 'b', 'c'};
	double doubleTab[3] = {42.1, 42.2, 42.3};

	std::cout << "---------- INT ----------\n";
	iter(intTab, 3, printTab);
	std::cout << std::endl;

	iter(intTab, 3, increaseTab);
	iter(intTab, 3, printTab);

	std::cout << "---------- CHAR ---------\n";
	iter(charTab, 3, printTab);
	std::cout << std::endl;

	iter(charTab, 3, increaseTab);
	iter(charTab, 3, printTab);

	std::cout << "-------- DOUBLE --------\n";
	iter(doubleTab, 3, printTab);
	std::cout << std::endl;

	iter(doubleTab, 3, increaseTab);
	iter(doubleTab, 3, printTab);

	return (0);
}