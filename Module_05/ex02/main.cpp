#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){
	try{
		ShrubberyCreationForm sf = ShrubberyCreationForm("treeTime");
		RobotomyRequestForm rf = RobotomyRequestForm("testSubject");
		PresidentialPardonForm pf = PresidentialPardonForm("Terry");

		Bureaucrat Mari = Bureaucrat("Mari", 1);
		Bureaucrat Alex = Bureaucrat("Alex", 7);
		Bureaucrat Glover = Bureaucrat("Glover", 130);

		std::cout << "\n";
		rf.beSigned(Mari);
		Mari.executeForm(rf);
		std::cout << "\n";

		sf.beSigned(Alex);
		Alex.executeForm(sf);
		std::cout << "\n";

		pf.beSigned(Glover);
		Glover.executeForm(pf);
		std::cout << "\n";
	}
	catch (std::exception & e) {
		std::cout << "got one!" << std::endl;
	}
	return (0);
}