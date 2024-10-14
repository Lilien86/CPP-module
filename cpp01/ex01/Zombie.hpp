/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:41:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 09:43:17 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void announce();
		static Zombie* zombieHorde(int n, std::string name);
};

#endif

