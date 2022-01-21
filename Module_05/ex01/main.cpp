#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try{
		Form leform = Form("le Form", 100, 101);
		Form leform1 = Form("le Form1", 1, 1);
		Bureaucrat Sam = Bureaucrat("Sam", 6);
		Bureaucrat Alex = Bureaucrat("Alex", 4);
		Bureaucrat Glover = Bureaucrat("Glover", 3);
		std::cout << leform << std::endl;
		
		leform.beSigned(Sam);
		leform.beSigned(Alex);
		leform1.beSigned(Sam);
		std::cout << leform << std::endl;

		std::cout << Alex.getGrade() << std::endl;
		Alex.increment();
		std::cout << Alex.getGrade() << std::endl;
		Alex.decrement();
		std::cout << Alex.getGrade() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "caught one!" << std::endl;
	}
	return (0);
}