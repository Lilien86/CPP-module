/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:14:09 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 11:42:12 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Constructor with name: " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
    *this = rhs;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    *this = rhs;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << this->_name << " inherited from ClapTrap is now in Gate keeper mode" << std::endl;
}