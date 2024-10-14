/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:53:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 09:40:23 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie stackZombie("Stack Zombie");
	stackZombie.announce();

	stackZombie.randomChump("Random Chump");

	Zombie* heapZombie = stackZombie.newZombie("Heap Zombie");
	heapZombie->announce();

	delete heapZombie;
	return 0;
}