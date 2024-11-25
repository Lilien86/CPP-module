#ifndef  IMATERIASOURCE_HPP
#define  IMATERIASOURCE_HPP
#include "Materia.hpp"


class IMateriaSource
{
	public:
		// IMateriaSource();
		// IMateriaSource(const IMateriaSource &cpy);
		// IMateriaSource &operator=(const IMateriaSource &rhs);
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif