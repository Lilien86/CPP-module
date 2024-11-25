#include "./Character.hpp"

Character::Character()
{
	// std::cout << "Character is created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(const Character &cpy)
{
	// std::cout << "Character is created" << std::endl;
	*this = cpy;
	return ;
}

Character::Character(const std::string &name) : _name(name)
{
	// std::cout << "Character is created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::~Character()
{
	// std::cout << "Character is destroyed" << std::endl;
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (_floor[i] != NULL)
	// 	{
	// 		delete _floor[i];
	// 		_floor[i] = NULL;
	// 	}
	// }
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
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
			// std::cout << "Materia equipped in slot " << i << std::endl;
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
		_floor[idx] = _inventory[idx];
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

Character &Character::operator=(const Character &rhs)
{
	(void)rhs;
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}