#include "./Character.hpp"

Character::Character()
{
	// std::cout << "Character is created" << std::endl;
	return ;
}

Character::Character(const std::string &name) : ICharacter(name)
{
	// std::cout << "Character is created" << std::endl;
	return ;
}

Character::~Character()
{
	// std::cout << "Character is destroyed" << std::endl;
	return ;
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;

	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Materia equipped in slot " << i << std::endl;
			return;
		}
	}
	

}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	if (_inventory[idx] != NULL)
	{
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Invalid inventory index or empty slot." << std::endl;
		return;
	}

	std::string const &targetName = target.getName();
	if (dynamic_cast<Ice*>(_inventory[idx]))
	{
		std::cout << "* shoots an ice bolt at " << targetName << " *" << std::endl;
	}
	else if (dynamic_cast<Cure*>(_inventory[idx]))
	{
		std::cout << "* heals " << targetName << "'s wounds *" << std::endl;
	}
	return ;
}


std::string const &Character::getName() const
{
	return (this->_name);
}