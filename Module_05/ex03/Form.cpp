#include "Form.hpp"

Form::Form() : name("Default"), is_signed(false), grade_to_sign(150), grade_to_exe(150){}

Form::Form(std::string given_name, int g_grade_to_sign, int g_grade_to_exe) : name(given_name), grade_to_sign(g_grade_to_sign), grade_to_exe(g_grade_to_exe)
{
	is_signed = 0;

	if (g_grade_to_sign > 150)
		throw GradeTooLowException();
	else if (g_grade_to_sign < 1)
		throw GradeTooHighException();

	if (g_grade_to_exe > 150)
		throw GradeTooLowException();
	else if (g_grade_to_exe < 1)
		throw GradeTooHighException();

	std::cout << "Form created" << std::endl;
}

Form::Form(const Form &given) :  name(given.getName()), is_signed(given.getSigned()), grade_to_sign(given.getGrade_to_sign()), grade_to_exe(given.getGrade_to_exe())
{
	std::cout << "copy Form created" << std::endl;
}

Form::~Form()
{
	std::cout << "Form is burned" << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
	// this->name = rhs.getName();
	// this->grade_to_exe = rhs.getGrade_to_exe();
	// this->grade_to_sign = rhs.getGrade_to_sign();
	this->is_signed = rhs.getSigned();
	return *this;
}

std::string Form::getName(void) const
{
	return (name);
}

bool Form::getSigned(void) const
{
	return (is_signed);
}

int Form::getGrade_to_exe(void) const
{
	return (grade_to_exe);
}

int Form::getGrade_to_sign(void) const
{
	return (grade_to_sign);
}

void Form::beSigned(Bureaucrat &burea)
{
	if (burea.getGrade() <= grade_to_sign)
	{
		burea.signForm(*this);
		is_signed = 1;
	}
	else
		throw GradeTooLowException();
}

std::ostream &operator << (std::ostream &left_op, Form &right_op)
{
	left_op << "Name of form: " << right_op.getName() << ", is_signed: " << right_op.getSigned() << ", grade_to_sign: " << right_op.getGrade_to_sign() << ", grade to exec: " << right_op.getGrade_to_exe() << std::endl;
	return (left_op);
}
