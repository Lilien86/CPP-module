/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 10:39:10 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

void    Cat::makeSound() const
{
	std::cout << " ~ miaouuuu ~" << std::endl;
	return ;
}