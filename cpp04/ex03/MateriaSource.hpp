#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &rhs);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	
	private:
		AMateria	*_source[4];
		int			_count;

};

#endif