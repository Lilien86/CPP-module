/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 10:03:29 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor" << std::endl;
	this->_type = "Dog";
	_brain = new (Brain);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	//delete (_brain);
}

void    Dog::makeSound() const
{
	std::cout << this->_type << " ~ waouffff ~" << std::endl;
}