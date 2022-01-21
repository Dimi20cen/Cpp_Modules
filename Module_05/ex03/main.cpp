#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){

	Intern	cluelessRandomIntern;
	Intern	ezRandomIntern;
	Intern	sigmaRandomIntern;	
	Form	*rf = cluelessRandomIntern.makeForm("robotomy request", "Fender");
	Form	*pf = ezRandomIntern.makeForm("presidential pardon", "terry2");
	Form	*sf = sigmaRandomIntern.makeForm("shrubbery creation", "treeing");

	Bureaucrat	Joe = Bureaucrat("Joe", 2);

	rf->beSigned(Joe);
	pf->beSigned(Joe);
	sf->beSigned(Joe);
	// Joe.executeForm(*rf);
	Joe.executeForm(*pf);
	// Joe.executeForm(*sf);

	delete rf;
	delete pf;
	delete sf;
	
	return (0);
}