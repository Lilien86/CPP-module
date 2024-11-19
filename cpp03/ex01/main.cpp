/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:15:53 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 12:47:51 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main()
{
	ScavTrap ogi("Originel");
	ClapTrap *heap = new ScavTrap("heap");
	ScavTrap lilien("Lilien");
	ogi = lilien;
	ScavTrap yvann("Yvann");
	heap->attack("stack");
	lilien.attack("Yvann");
	yvann.takeDamage(10);
	yvann.beRepaired(5);
	lilien.guardGate();
	yvann.guardGate();
	lilien.attack("Yvann");
	delete heap;
	return 0;
}