/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:33:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 10:39:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return this->type;
}

void    Animal::makeSound() const
{
	std::cout << " ~ brrrrrrr ~" << std::endl;
	return ;
}
