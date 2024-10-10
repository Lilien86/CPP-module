/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 11:34:32 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->_type = "Cat";
	_brain = new (Brain);
	//_brain = NULL;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete(_brain);
}

void    Cat::makeSound() const
{
	std::cout << this->_type << " ~ miaouuuu ~" << std::endl;
}