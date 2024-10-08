/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:08:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 09:08:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap name Constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack, because he is died" << std::endl;
    else if (this->_energyPoint == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack, because he doesn't have enough energy point" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint--;
    
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->_name << " can't take damage, because he is already died" << std::endl;
    this->_hitPoint =  this->_hitPoint - amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired, because he is already died" << std::endl;
    else if (this->_energyPoint == 0)
        std::cout << "ClapTrap " << this->_name << " can't be repaired, because he doesn't have enough energy point" << std::endl;
    this->_hitPoint = this->_hitPoint + amount;
}