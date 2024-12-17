#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("form", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm is created" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): AForm("form", 72, 45), _target("")
{
	*this = cpy;
	std::cout << "RobotomyRequestForm has been copied" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm is destroyed" << std::endl;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_target = rhs._target;
	return(*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		throw std::runtime_error("Form is not signed!");
	if (executor.getGrade() > this->getExecRequirement())
		throw Bureaucrat::GradeTooLowException();

	static bool isSeeded = false;
	if (!isSeeded) {
		srand(static_cast<unsigned>(time(NULL)));
		isSeeded = true;
	}

	std::cout << executor.getName() <<  " executed " << this->getName() << std::endl;

	int a = rand() % 2;
	if (a)
		std::cout << C_GREEN << this->_target << " has been robotomized" << C_WHITE << std::endl;
	else
		std::cout << C_RED << this->_target << " robotomy failed" << C_WHITE << std::endl;
	return;
}