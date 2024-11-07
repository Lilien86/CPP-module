/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 10:39:18 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

void    Dog::makeSound() const
{
	std::cout << " ~ waouffff ~" << std::endl;
	return ;
}