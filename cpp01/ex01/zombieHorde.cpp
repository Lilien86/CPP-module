/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:52:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 09:50:17 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string intToString(int value) {
	std::ostringstream oss;
	oss << value;
	return oss.str();
}

Zombie* Zombie::zombieHorde(int n, std::string name)
{
	if (n <= 0) {
		throw std::invalid_argument("Number of zombies must be positive");
	}
	Zombie* horde = new Zombie[n];
	if (!horde) {
		throw std::bad_alloc();
	}
	for (int i = 0; i < n; i++) {
		std::string _name = name + intToString(i);
		horde[i] = Zombie(_name);
	}
	return horde;
}