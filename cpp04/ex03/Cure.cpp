#include "./Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	// std::cout << "Cure material is created" << std::endl;
	return ;
}

Cure::Cure(const Cure &cpy): AMateria("cure")
{
	// std::cout << "Cure material is created" << std::endl;
	*this = cpy;
	return ;
}

Cure::~Cure()
{
	// std::cout << "Cure material is destroyed" << std::endl;
	return ;
}

Cure &Cure::operator=(const Cure &rhs)
{
	// std::cout << "Cure assignement operator is called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}