#ifndef AMETERIA_HPP
#define AMETERIA_HPP
#include <iostream>
#include <string.h>

class AMateria
{
	public:

		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);

		virtual AMateria &operator=(const AMateria &rhs);

	protected:

		std::string _type;
	
};

#endif