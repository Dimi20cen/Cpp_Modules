#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:
std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string given_target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	void	execute (Bureaucrat const & executor) const;
};

#endif