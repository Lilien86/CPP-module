#ifndef MATERIA_HPP
#define MATERIA_HPP
#include "AMateria.hpp"

class Materia: public AMateria
{
	public:

		Materia();
		Materia(const Materia &cpy);
		Materia(const std::string &type);
		~Materia();

		virtual Materia *operator=(const Materia *rhs);
		
};

#endif