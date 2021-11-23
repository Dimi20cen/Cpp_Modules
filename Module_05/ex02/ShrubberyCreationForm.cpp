#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string given_target) : Form("ShrubberyCreation", 25, 5){
	target = given_target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form("ShrubberyCreation", 25, 5){
	target = copy.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::ofstream	file(target+"_shrubbery");
	if (!file)
		return ;
	file << "                                  # ####					" << std::endl;
    file << "                            ### //#|### |/###					" << std::endl;
    file << "                           ##/#/ ||/##/_/##/_#					" << std::endl;
    file << "                         ###  \\/###|/ /// # ###					" << std::endl;
    file << "                       ##_\\_#\\_\\## | #/###_/_####					" << std::endl;
    file << "                      ## #### # \\ #| /  #### ##/##					" << std::endl;
    file << "                       __#_--###`  |{,###---###-~					" << std::endl;
    file << "                                 \\ }{					" << std::endl;
    file << "                                  }}{*)_()					" << std::endl;
    file << "                                  }}{					" << std::endl;
    file << "                            	 {{}						"<< std::endl;
    file << "                            , -=-~{ .-*_)&)()					" << std::endl;
    file << "                                  `}"							<< std::endl;
	file << "                       			{		" << std::endl;
}
