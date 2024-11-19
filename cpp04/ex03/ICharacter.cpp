#include "./ICharacter.hpp"

ICharacter::ICharacter(): _name("")
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	// std::cout << "ICharacter is created" << std::endl;
	return ;
}

ICharacter::ICharacter(const std::string &name): _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	// std::cout << "ICharacter is created" << std::endl;
	return ;
}

ICharacter::~ICharacter()
{
	// std::cout << "ICharacter is destroyed" << std::endl;
	return ;
}
