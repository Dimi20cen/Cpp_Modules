#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	name;
	bool	 			is_signed;
	int const			grade_to_sign;
	int const			grade_to_exe;
public:
	Form();
	Form(std::string given_name, int g_grade_to_sign, int g_grade_to_exe);
	Form(const Form &given);
	~Form();
	Form &operator=(Form const &rhs);

	class GradeTooHighException : public std::exception
	{};
	class GradeTooLowException : public std::exception
	{};

	std::string getName(void) const;
	bool getSigned(void) const;
	int getGrade_to_sign(void) const;
	int getGrade_to_exe(void) const;

	void beSigned(Bureaucrat &burea);
};

std::ostream &operator << (std::ostream &left_op, Form &right_op);

#endif