#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string given_name, int given_grade)
{
	name = given_name;
	if (given_grade > 150)
		throw GradeTooLowException();
	else if (given_grade < 1)
		throw GradeTooHighException();
	else
		grade = given_grade;
	std::cout << "baby Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &given)
{
	*this = given;
	std::cout << "copy Bureaucrat created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "grandpa Bureaucrat died" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::increment(void)
{
	if (grade - 1 < 0)
		throw GradeTooHighException();
	else
		grade = grade - 1;
}

void Bureaucrat::decrement(void)
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade = grade + 1;
}

std::ostream &operator << (std::ostream &left_op, Bureaucrat &right_op)
{
	left_op << right_op.getName() << ", bureaucrat grade " << right_op.getGrade() << std::endl;
	return (left_op);
}
