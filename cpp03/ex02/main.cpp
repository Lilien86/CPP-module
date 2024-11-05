/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:15:53 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 12:23:20 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int main()
{
	FragTrap a("Lilien"); 
	FragTrap b("Yvann");
	FragTrap c(b);
	FragTrap d = a;
	a.highFivesGuys();
	b.highFivesGuys();
	a.attack("Yvann");
	b.takeDamage(30);
	a.beRepaired(20);
	return 0;
}