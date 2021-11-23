#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
protected:
	std::string name;
	int			grade;
public:
	Bureaucrat(std::string given_name, int given_grade);
	Bureaucrat(const Bureaucrat &given);
	~Bureaucrat();

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