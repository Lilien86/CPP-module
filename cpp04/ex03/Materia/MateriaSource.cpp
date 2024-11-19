#include "./MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource is created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
	this->_count = 0;
	return ;
}


MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource is destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
	this->_count = 0;
	return ;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count < 4)
	{
		this->_source[this->_count] = m->clone();
		this->_count++;
	}
}

AMateria	*Materia_source::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_count; i++)
		if (this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	return NULL;
}