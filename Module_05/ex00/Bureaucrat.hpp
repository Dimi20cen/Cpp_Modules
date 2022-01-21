#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
protected:
	std::string const name;
	int			grade;
public:
	Bureaucrat();
	Bureaucrat(std::string given_name, int given_grade);
	Bureaucrat(const Bureaucrat &given);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName(void) const;
	int getGrade(void) const;

	class GradeTooHighException : public std::exception
	{};
	class GradeTooLowException : public std::exception
	{};

	void increment(void);
	void decrement(void);
};

std::ostream &operator << (std::ostream &left_op, Bureaucrat &right_op);

#endif