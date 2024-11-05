/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:42:52 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 12:33:19 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "++ FragTrap constructor is called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "++ FragTrap Name constructor is called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "++ FragTrap Copy constructor is called" << std::endl;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
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
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_name = rhs._name;
	return (*this);
}