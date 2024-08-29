/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:24:58 by marvin            #+#    #+#             */
/*   Updated: 2024/08/27 11:24:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        getType();
        setType(std::string newType);
    private:
        std::string type;

}

#endif