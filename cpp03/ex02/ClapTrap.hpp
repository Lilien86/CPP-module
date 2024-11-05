/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:03:33 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 12:22:07 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	protected:

		std::string	_name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;

	public:

		ClapTrap();
		ClapTrap(const ClapTrap &rhs);
		ClapTrap(const std::string& name);
		~ClapTrap();

		virtual ClapTrap &operator=(const ClapTrap &rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif