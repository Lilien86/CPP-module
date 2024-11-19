#ifndef ICE_HPP
#define ICE_HPP
#include "./AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &cpy);
		~Ice();

		Ice &operator=(const Ice &rhs);

		virtual AMateria* clone() const;
		// virtual AMateria* use(ICharacter& target);
	
	private:
};

#endif