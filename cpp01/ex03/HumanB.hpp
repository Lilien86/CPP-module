/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:27:39 by lauger            #+#    #+#             */
/*   Updated: 2024/08/29 13:14:12 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();

    void setName(std::string name);
    std::string getName() const;

    void setWeapon(Weapon &weap);

    void attack();

private:
    std::string _name;
    Weapon *_weap;
};

#endif