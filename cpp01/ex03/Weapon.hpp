/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:01:54 by lauger            #+#    #+#             */
/*   Updated: 2024/08/30 14:33:18 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
#include <iostream>
# ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
    public:
        
        Weapon(std::string weap);
        ~Weapon();
        
        void setType(const std::string &type);
        const std::string& getType() const;

    private:
        std::string _type;
};

#endif