#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("form", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm is created" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): AForm("form", 145, 137), _target("")
{
	*this = cpy;
	std::cout << "ShrubberyCreationForm has been copied" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm is destroyed" << std::endl;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_target = rhs._target;
	return(*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		throw std::runtime_error("Form is not signed!");
	if (executor.getGrade() > this->getExecRequirement())
		throw Bureaucrat::GradeTooLowException();

	std::ofstream ofs((_target + "_shrubbery").c_str());
	if (!ofs.is_open())
		throw std::ios_base::failure("Failed to create file");

	ofs << "     ^^^\n";
	ofs << "    ^^^^^\n";
	ofs << "   ^^^^^^^\n";
	ofs << "     |||\n";
	ofs.close();

	std::cout << executor.getName() <<  " executed " << this->getName() << std::endl;
	std::cout << "file created at " << _target + "_shrubbery" << std::endl;
	return;
}