/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:42:52 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 15:09:38 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "++ FragTrap constructor is called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "++ FragTrap Name constructor is called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "++ FragTrap Copy constructor is called" << std::endl;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "-- FragTrap destructor is called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "GM- Hello world, can we do high five together, please" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "Operator overloading is called with " << rhs._name << std::endl;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return (*this);
}