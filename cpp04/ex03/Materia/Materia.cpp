#include "./Materia.hpp"

Materia::Materia()
{
	// std::cout << "Materia is created with NULL type" << std::endl;
	return ;
}

Materia::Materia(const std::string &type)
{
	// std::cout << "Materia is created with NULL type" << std::endl;
	this->_type = type;
	return ;
}

Materia::~Materia()
{
	// std::cout << "Materia is destroyed " << _type << std::endl;
	return ;
}

Materia *Materia::operator=(const Materia *rhs)
{
	if (!rhs)
		return NULL;
	this->_type = rhs->_type;
	return (this);
}
