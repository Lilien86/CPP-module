/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:28:26 by lauger            #+#    #+#             */
/*   Updated: 2024/10/29 13:01:06 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << name << " HumanB is build" << std::endl; 
	return ;
}

HumanB::~HumanB() {
	std::cout << this->_name << " HumanB is destroy" << std::endl;
	return ;
}

void HumanB::setName(std::string Name) {
	_name = Name;
	return ;
}

std::string HumanB::getName() const {
	return _name;
}

void HumanB::setWeapon(Weapon &weap) {
	_weap = &weap;
	return ;
}

void HumanB::attack()
{
	if (_weap) {
			std::cout << _name << " attacks with their " << _weap->getType() << std::endl;
		} else {
			std::cout << _name << " has no weapon to attack with!" << std::endl;
		}
	return ;
}