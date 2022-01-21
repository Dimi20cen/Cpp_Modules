#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("Default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string given_target) : Form("PresidentialPardonForm", 25, 5){
	target = given_target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form("PresidentialPardonForm", 25, 5){
	target = copy.target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->target = rhs.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::cout << target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}