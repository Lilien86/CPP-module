/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:27:07 by lauger            #+#    #+#             */
/*   Updated: 2024/08/29 11:40:19 by lauger           ###   ########.fr       */
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

void Weapon::setType(std::string type){
    _type = type;
    return ;
}

std::string Weapon::getType() const{
    return _type;
}