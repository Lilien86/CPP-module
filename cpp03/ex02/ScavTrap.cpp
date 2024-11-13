/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:14:09 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 15:28:53 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "++ ScavTrap Constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "++ ScavTrap Constructor with name: " << name << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "++ ScavTrap Constructor Copy with name: " << rhs._name << std::endl;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "-- ScavTrap Destructor" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "GM- ScavTrap " << this->_name << " can't attack, because he is died" << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "GM- ScavTrap " << this->_name << " can't attack, because he doesn't have enough energy point" << std::endl;
		return ;
	}
	else
		std::cout << "GM- ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	
}

void ScavTrap::guardGate()
{
	std::cout << "GM- Scavtrap " << this->_name << " inherited from ClapTrap is now in Gate keeper mode" << std::endl;
	return ;
}