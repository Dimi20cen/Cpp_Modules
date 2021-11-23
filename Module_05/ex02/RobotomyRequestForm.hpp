#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <algorithm>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
std::string	target;
public:
	RobotomyRequestForm(std::string given_target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();
	void	execute (Bureaucrat const & executor) const;
};



#endif