/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:10:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 11:40:50 by lauger           ###   ########.fr       */
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
        ScavTrap(const ScavTrap &rhs);
        ScavTrap &operator=(const ScavTrap &rhs);
        ~ScavTrap();
        void guardGate();

};

#endif
