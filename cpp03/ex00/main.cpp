/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:45:31 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 11:52:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Lilien");
	ClapTrap b("Yvann");
	a.attack("Yvann");
	b.takeDamage(5);
	b.beRepaired(5);
	ClapTrap c;
	c = b;
	ClapTrap d(a);
	return 0;
}