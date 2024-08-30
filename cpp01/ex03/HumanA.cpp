/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:52:55 by lauger            #+#    #+#             */
/*   Updated: 2024/08/30 14:05:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weap) : _name(name), _weap(weap) {
    // Constructor body, if needed
}

HumanA::~HumanA() {
    // Destructor body, if needed
}

void HumanA::setName(std::string Name) {
    _name = Name;
}

std::string HumanA::getName() const {
    return _name;
}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weap.getType() << std::endl;
}