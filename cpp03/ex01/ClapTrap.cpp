/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:08:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 11:59:22 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "++ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "++ ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "++ ClapTrap Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap()
{
	std::cout << "-- " << this->_name << " ClapTrap is destructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Operator overloading is called with " << rhs._name << std::endl;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_name = rhs._name;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "GM- ClapTrap " << this->_name << " can't attack, because he is died" << std::endl;
		return ;
	}
	else if (this->_energyPoint == 0)
	{
		std::cout << "GM- ClapTrap " << this->_name << " can't attack, because he doesn't have enough energy point" << std::endl;
		return ;
	}
	else
		std::cout << "GM- ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoint--;
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "GM- ClapTrap " << this->_name << " can't take damage, because he is already died" << std::endl;
		return ;
	}
	std::cout << "GM- ClapTrap " << this->_name << " take damage of " << amount << std::endl;
	this->_hitPoint =  this->_hitPoint - amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "GM- ClapTrap " << this->_name << " can't be repaired, because he is already died" << std::endl;
		return ;
	}
	else if (this->_energyPoint == 0)
	{
		std::cout << "GM- ClapTrap " << this->_name << " can't be repaired, because he doesn't have enough energy point" << std::endl;
		return ;
	}
	std::cout << "GM- ClapTrap " << this->_name << " be repaired of " << amount << std::endl;
	this->_hitPoint = this->_hitPoint + amount;
}