#include "Intern.hpp"

Intern::Intern(const std::string &target)
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
	return(*this);
}