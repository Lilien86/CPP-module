/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:52:44 by lauger            #+#    #+#             */
/*   Updated: 2024/08/29 11:23:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon& arm);
    ~HumanA();

    void setName(std::string name);
    std::string getName() const;

    //void setWeapon(std::string weap);

    void attack();

private:
    std::string _name;
    Weapon& _weap;
};

#endif