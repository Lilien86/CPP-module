#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Ice.hpp"
#include "Cure.hpp"

class Character: public ICharacter
{
	public:

		Character();
		Character(const Character &cpy);
		Character(const std::string &name);
		~Character();
		Character &operator=(const Character &rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria* _inventory[4];
		AMateria* _floor[4];
};

#endif