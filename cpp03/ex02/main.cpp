/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:15:53 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 14:31:38 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int main()
{
	FragTrap a("Lilien"); 
	FragTrap b("Yvann");
	FragTrap c(b);
	FragTrap d = a;
	ClapTrap *test = new FragTrap("Chris");
	a.highFivesGuys();
	b.highFivesGuys();
	a.attack("Yvann");
	b.takeDamage(30);
	a.beRepaired(20);
	test->beRepaired(5);
	delete test;
	return 0;
}
