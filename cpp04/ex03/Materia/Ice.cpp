#include "./Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	// std::cout << "Ice material is created" << std::endl;
	return ;
}

Ice::Ice(const Ice &cpy)
{
	// std::cout << "Ice material is created" << std::endl;
	*this = cpy;
	return ;
}

Ice::~Ice()
{
	// std::cout << "Ice material is destroyed" << std::endl;
	return ;
}

Ice &Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice assignement operator is called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}