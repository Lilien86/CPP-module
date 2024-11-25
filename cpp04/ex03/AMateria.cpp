#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	// std::cout << "AMaterias is created with type " << type << std::endl;
	return ;
}

AMateria::AMateria()
{
	// std::cout << "AMaterias is created " << _type << std::endl;
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

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}
