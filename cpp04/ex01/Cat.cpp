/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 14:58:08 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->_type = "Cat";
	this->_brain->newBrain();
}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_brain->_knowledge[i] =	rhs._brain->_knowledge[i];
	}
	return (*this);
}

void    Cat::makeSound() const
{
	std::cout << this->_type << " ~ miaouuuu ~" << std::endl;
}