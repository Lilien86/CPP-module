/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:15:53 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 15:27:15 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int main()
{
	ClapTrap a("Lilien"); 
	FragTrap b("Yvann");
	ScavTrap c("Chris");
	ClapTrap *test = new FragTrap("Chris");

	a.attack("Yvann");
	b.attack("Chris");
	c.attack("Lilen");

	b.highFivesGuys();

	b.takeDamage(30);
	a.beRepaired(20);
	test->beRepaired(5);
	delete test;
	return 0;
}
