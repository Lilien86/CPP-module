/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:28:26 by lauger            #+#    #+#             */
/*   Updated: 2024/08/29 13:14:51 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
    // Constructor body, if needed
}

HumanB::~HumanB() {
    // Destructor body, if needed
}

void HumanB::setName(std::string Name) {
    _name = Name;
}

std::string HumanB::getName() const {
    return _name;
}

void HumanB::setWeapon(Weapon &weap) {
    _weap = &weap;
}

void HumanB::attack() {
    std::cout << _name << " attacks with their " << _weap->getType() << std::endl;
}