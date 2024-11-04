/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:15:53 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 12:14:50 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main()
{
	ScavTrap ogi("Originel");
	ScavTrap a("Lilien");
	ogi = a;
	ScavTrap b("Yvann");
	a.attack("Yvann");
	b.takeDamage(10);
	b.beRepaired(5);
	a.guardGate();
	b.guardGate();
	a.attack("Yvann");
	return 0;
}