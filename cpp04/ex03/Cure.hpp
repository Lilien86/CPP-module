#ifndef Cure_HPP
#define Cure_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &cpy);
		~Cure();

		Cure &operator=(const Cure &rhs);

		virtual AMateria* clone() const;

	private:
};

#endif