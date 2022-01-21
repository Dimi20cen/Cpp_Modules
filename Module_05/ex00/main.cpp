#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat pog = Bureaucrat("bling", 150);
		Bureaucrat pog1;
		std::cout << pog1;
		Bureaucrat pog2 = Bureaucrat("fling", 1);
		pog.decrement();
	}
	catch (std::exception &e){
		std::cout << "caught one !!!" << std::endl;
	}
	return (0);
}