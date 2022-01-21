#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), target("Default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string given_target) : Form("RobotomyRequest", 72, 45){
	target = given_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form("RobotomyRequest", 72, 45){
	target = copy.target;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->target = rhs.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::cout << "* DRIILLLL noises * LESSS GOOOO!" << std::endl;

	srand(time(NULL));
	int chance = rand() %100;

	if ((chance) > 50)
		std::cout << target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomization of " << target << " has failed" << std::endl;
}