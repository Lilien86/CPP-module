/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 12:41:44 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "-- Cat is created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "-- Cat Destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void    Cat::makeSound() const
{
	std::cout << this->_type << " ~ miaouuuu ~" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return this->_brain;
}
