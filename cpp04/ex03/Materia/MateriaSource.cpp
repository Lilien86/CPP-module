#include "./MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource is created" << std::endl;
	return ;
}


MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource is destroyed" << std::endl;
	return ;
}

void	MateriaSource::learnMateria(AMateria *m)
{f
	std::cout << "learnMateria" 3r<< std::endl;
	for(int i; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = new Materia(m);
	}
	return ;
}
3r
AMateria*	MateriaSource::createMateria(std::string const & type)
{
	std::cout << "createMateria" << std::endl;
	return (new Materia(type));
}