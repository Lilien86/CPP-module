/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:33:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 13:21:40 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	*this = rhs;
	return (*this);
}

std::string Animal::getType() const
{
	return this->_type;
}

void    Animal::makeSound() const
{
	std::cout << "Animal" << " ~ brrrrrrr ~" << std::endl;
}


void operator delete(void * p)
{
	(void)p;
	return ;
}
