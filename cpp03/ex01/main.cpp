/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:15:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 11:15:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main()
{
    ScavTrap a("Lilien");
    ScavTrap b("Yvann");
    a.guardGate();
    b.guardGate();
    a.attack("Yvann");
    return 0;
}