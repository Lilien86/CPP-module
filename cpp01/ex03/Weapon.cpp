/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:30:46 by marvin            #+#    #+#             */
/*   Updated: 2024/08/27 11:30:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){};

Weapon::~Weapon() {};

Weapon::getType() {
    return (this->type);
};

Weapon::setType(std::string newType) {
    this->type = newType;
};