#include "./MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource is created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
	this->_count = 0;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	// std::cout << "MateriaSource is created" << std::endl;
	*this = cpy;
	return ;
}


MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource is destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != NULL)
		{
			delete _source[i];
			this->_source[i] = NULL;
		}
	}
	this->_count = 0;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = rhs._source[i];
	this->_count = rhs._count;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count < 4)
	{
		this->_source[this->_count] = m->clone();
		this->_count++;
	}
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_count; i++)
		if (this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	return NULL;
}