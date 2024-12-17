#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern is created" << std::endl;
	return ;
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
	std::cout << "Intern has been copied" << std::endl;
	return ;
}

Intern::~Intern()
{
	std::cout << "Intern is destroyed" << std::endl;
	return ;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return(*this);
}

AForm	*Intern::makeForm(const std::string formName, const std::string target)
{
	std::string	requests[] = { "shrubbery request", "robotomy request", "presidential request"};
	AForm	*forms[] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	AForm	*_return = 0;
	for (int i = 0; i < 3; i++)
		if (formName == requests[i])
			_return = forms[i];
		else
			delete forms[i];
	
	if (_return)
		std::cout << C_GREEN << "Intern creates " << formName << "for " << target << C_WHITE <<  std::endl;
	else
		std::cout	<< C_RED << "Intern can't create a " << formName << C_WHITE << std::endl;

	return _return;
}