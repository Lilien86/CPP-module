/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:52:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:44:32 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int hordeSize = 5;
	Zombie* horde = Zombie::zombieHorde(hordeSize, "Zombie");

	for (int i = 0; i < hordeSize; i++) {
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}