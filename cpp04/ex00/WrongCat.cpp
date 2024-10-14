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
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	*this = rhs;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	*this = rhs;
	return (*this);
}

void    WrongCat::makeSound() const
{
	std::cout << this->_type << " ~ miaouuuu ~" << std::endl;
}