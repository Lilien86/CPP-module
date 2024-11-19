#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "./Materia/Ice.hpp"
#include "./Materia/Cure.hpp"
#include "./ICharacter.hpp"

class Character: public ICharacter
{
	public:

		Character();
		// Character(const Character &cpy);
		Character(const std::string &name);
		~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif