#include "./AMateria.hpp"

AMateria::AMateria(): _type("")
{
	// std::cout << "AMaterias is created with NULL type" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	// std::cout << "AMaterias is created with type " << type << std::endl;
	return ;
}

AMateria::~AMateria()
{
	// std::cout << "AMaterias is destroyed " << _type << std::endl;
	return ;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
