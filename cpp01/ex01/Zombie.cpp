/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:32:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 10:59:01 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("") {
	std::cout << _name << " is alive!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << " is alive!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " is destroyed!" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
