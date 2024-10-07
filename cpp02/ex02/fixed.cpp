/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:49 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 14:30:46 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _intValue(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int int_value)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_intValue = int_value<<this->_bit;
}

Fixed::Fixed (const float float_value)
{
	//std::cout << "float constructor called" << std::endl;
	this->_intValue = roundf(float_value * (1<<this->_bit));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed &a)
{
	*this = a;
	//std::cout << "Copy constructor called" << std::endl;
}

//#############################################################
//#############################################################
//###############################################(Fixed &a, Fixed &b)##############

void	Fixed::setRawBits(int const raw)
{
	this->_intValue = raw;
}

int		Fixed::getRawBits(void) const
{
	return this->_intValue;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_intValue / (float)(1<<this->_bit));
}

int	Fixed::toInt(void) const
{
	return this->_intValue >> this->_bit;
}


Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._intValue < b._intValue)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a._intValue > b._intValue)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._intValue < b._intValue)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._intValue > b._intValue)
		return (a);
	else
		return (b);
}

int	&Fixed::operator++()
{
	this->_intValue++;
	return (this->_intValue);
}

int	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_intValue++;
	return (tmp._intValue);
}

int	&Fixed::operator--()
{
	this->_intValue--;
	return (this->_intValue);
}

int	Fixed::operator--(int)
{
	Fixed const tmp(*this);
	this->_intValue--;
	return (tmp._intValue);
}

//#############################################################
//#############################################################
//#############################################################

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_intValue = rhs.getRawBits();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &a)
{
	os << a.toFloat();
	return os;
}

bool	Fixed::operator<(Fixed const &a)
{
	return (this->_intValue < a.getRawBits());
}

bool	Fixed::operator>(Fixed const &a)
{
	return (this->_intValue > a.getRawBits());
}

bool	Fixed::operator<=(Fixed const &a)
{
	return (this->_intValue <= a.getRawBits());
}

bool	Fixed::operator>=(Fixed const &a)
{
	return (this->_intValue >= a.getRawBits());
}

bool	Fixed::operator==(Fixed const &a)
{
	return (this->_intValue == a.getRawBits());
}

bool	Fixed::operator!=(Fixed const &a)
{
	return (this->_intValue != a.getRawBits());
}

//####################

Fixed	Fixed::operator+(Fixed const &a)
{
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed	Fixed::operator-(Fixed const &a)
{
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed	Fixed::operator*(Fixed const &a)
{
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed	Fixed::operator/(Fixed const &a)
{
	return Fixed(this->toFloat() / a.toFloat());
}