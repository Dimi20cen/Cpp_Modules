#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat pog = Bureaucrat("bling", 150);
		Bureaucrat pog1 = pog;
		std::cout << pog1;
		Bureaucrat pog2 = Bureaucrat("fling", -11);
	}
	catch (std::exception &e){
		std::cout << "caught one !!!" << std::endl;
	}
	return (0);
}