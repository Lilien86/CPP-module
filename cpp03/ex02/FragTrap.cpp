/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:42:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 11:46:46 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "";
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap name Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
    *this = rhs;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Hello world, can we do high five together, please" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    *this = rhs;
    return (*this);
}