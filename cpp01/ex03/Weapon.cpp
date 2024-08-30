/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:27:07 by lauger            #+#    #+#             */
/*   Updated: 2024/08/30 14:32:59 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string weap){
    std::cout << "weapon created" << std::endl;
    setType(weap);
    return ;
}

Weapon::~Weapon(){
    std::cout << "weapon deleted" << std::endl;
    return ;
}

const std::string& Weapon::getType() const{
    return _type;
}

void Weapon::setType(const std::string &type){
    this->_type = type;
}
