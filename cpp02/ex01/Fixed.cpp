/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 11:27:08 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _intValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int int_value)
{
	std::cout << "Int constructor called" << std::endl;
	_intValue = int_value<<this->_bit;
}

Fixed::Fixed (const float float_value)
{
	std::cout << "float constructor called" << std::endl;
	_intValue = roundf(float_value * (1<<this->_bit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed &a)
{
	this->_intValue = a._intValue;
	std::cout << "Copy constructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	_intValue = raw;
}

int		Fixed::getRawBits(void) const
{
	return _intValue;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_intValue / (1<<this->_bit));
}

int	Fixed::toInt(void) const
{
	return (round(this->_intValue / (1<<this->_bit)));
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_intValue = rhs.getRawBits();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &a)
{
	os << a.toFloat();
	return os;
}