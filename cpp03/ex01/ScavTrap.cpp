/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:14:09 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 12:11:37 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor with name: " << name << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_name = rhs._name;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_name = rhs._name;
	std::cout << "= Operator is called" << std::endl;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->_name << " inherited from ClapTrap is now in Gate keeper mode" << std::endl;
	return ;
}