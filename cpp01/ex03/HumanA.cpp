/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:52:55 by lauger            #+#    #+#             */
/*   Updated: 2024/10/29 13:01:15 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weap) : _name(name), _weap(weap) {
	std::cout << name << " HumanA is build" << std::endl; 
	return ;
}

HumanA::~HumanA() {
	std::cout << this->_name << " HumanA is destroy" << std::endl;
	return ;
}

void HumanA::setName(std::string Name) {
	_name = Name;
	return ;
}

std::string HumanA::getName() const {
	return _name;
}

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _weap.getType() << std::endl;
	return ;
}