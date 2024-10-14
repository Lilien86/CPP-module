/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 16:33:13 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor" << std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &rhs)
{
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete(_brain);
}

Dog &Dog::operator=(const Dog &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_brain->_knowledge[i] =	rhs._brain->_knowledge[i];
	}
	return (*this);
}

void    Dog::makeSound() const
{
	std::cout << this->_type << " ~ waouffff ~" << std::endl;
}