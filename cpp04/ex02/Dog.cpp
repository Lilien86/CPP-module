/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 11:35:53 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	// std::cout << "-- Dog is created" << std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &rhs)
{
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "-- Dog Destructor" << std::endl;
	delete(_brain);
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->_brain = rhs._brain;
	return (*this);
}

void    Dog::makeSound() const
{
	std::cout << this->_type << " ~ waouffff ~" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return this->_brain;
}

// void	Dog::setBrain(std::string &idea, int i)
// {
// 	this->_brain[i] = idea;
// 	return ;
// }