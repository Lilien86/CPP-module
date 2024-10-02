/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:49 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 13:42:04 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _intValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int int_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_intValue = int_value * (1<<this->_bit);
}

Fixed::Fixed (const float float_value)
{
	std::cout << "float constructor called" << std::endl;
	this->_intValue = float_value * (1<<this->_bit);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed &a)
{
	*this = a;
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
	float fValue = (float)this->_intValue / (1<<this->_bit);
	return (fValue);
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
	os << a.getRawBits();
	return os;
}