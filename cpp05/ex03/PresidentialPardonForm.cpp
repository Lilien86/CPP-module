#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("form", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm is created" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): AForm("form", 25, 5), _target("")
{
	*this = cpy;
	std::cout << "PresidentialPardonForm has been copied" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm is destroyed" << std::endl;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_target = rhs._target;
	return(*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		throw std::runtime_error("Form is not signed!");
	if (executor.getGrade() > this->getExecRequirement())
		throw Bureaucrat::GradeTooLowException();

	std::cout << executor.getName() <<  " executed " << this->getName() << std::endl;
	std::cout << C_YELLOW << this->_target << " has been pardoned by Zaphod Beeblebrox" << C_WHITE << std::endl;
	return;
}