#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string given_target) : Form("ShrubberyCreation", 145, 137){
	target = given_target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form("ShrubberyCreation", 145, 137){
	target = copy.target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::cout << target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}