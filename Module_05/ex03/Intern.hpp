#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
private:
	Form* makeShrubberyCreationForm(std::string const& target);
	Form* makePresidentialPardonForm(std::string const& target);
	Form* makeRobotomyRequestForm(std::string const& target);
public:
	class BadFormException: public std::exception {
	public:
		virtual const char* what() const throw();
	};

	Intern();
	Intern(Intern const& src);
	~Intern();
	Intern& operator=(Intern const& rhs);

	static const std::string formNames[3];
	Form* makeForm(std::string const& name, std::string const& target);

};

#endif