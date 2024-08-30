/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:01:54 by lauger            #+#    #+#             */
/*   Updated: 2024/08/29 13:14:05 by lauger           ###   ########.fr       */
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
        
        void setType(std::string type);
        std::string getType() const;

    private:
        std::string *_type;
};

#endif