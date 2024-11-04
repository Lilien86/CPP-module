/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 11:15:12 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed (const Fixed &a)
{
	*this = a;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fp_value = raw;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fp_value;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_fp_value = rhs.getRawBits();
	return *this;
}
