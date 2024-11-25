/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 09:19:47 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
	this->_brain = new Brain();
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	this->_brain = rhs._brain;
	this->type = rhs.getType();
	return (*this);
}

void    WrongCat::makeSound() const
{
	std::cout << " ~ MIAOUUUU ~" << std::endl;
}

Brain	*WrongCat::getBrain() const
{
	return this->_brain;
}