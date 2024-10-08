/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:10:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 11:10:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ScavTrap_HPP
# define ScavTrap_HPP
#include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap //child class
{
    private:

    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ~ScavTrap();
        void guardGate();

};

#endif
