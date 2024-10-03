/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:49 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 14:25:29 by lauger           ###   ########.fr       */
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
	*this = a;
	std::cout << "Copy constructor called" << std::endl;
}

//#############################################################
//#############################################################
//###############################################(Fixed &a, Fixed &b)##############

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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._intValue > b._intValue)
		return (b);
	else
		return (a);
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
	if (a._intValue > b._intValue)
		return (b);
	else
		return (a);
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
	++this->_intValue;
	return (this->_intValue);
}

int	Fixed::operator++(int)
{
	Fixed const tmp(*this);
	++(*this)._intValue;
	return (tmp._intValue);
}

int	&Fixed::operator--()
{
	--this->_intValue;
	return (this->_intValue);
}

int	Fixed::operator--(int)
{
	Fixed const tmp(*this);
	--(*this)._intValue;
	return (tmp._intValue);
}

//#############################################################
//#############################################################
//#############################################################

std::ostream	&operator<<(std::ostream &os, Fixed const &a)
{
	os << a.toFloat();
	return os;
}

	int	operator<(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (0);
	else
		return (1);
}

int	operator>(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (0);
	else
		return (1);
}

int	operator<=(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (0);
	else
		return (1);
}

int	operator>=(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (0);
	else
		return (1);
}

int	operator==(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() == b.getRawBits())
		return (0);
	else
		return (1);
}

int	operator!=(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() != b.getRawBits())
		return (0);
	else
		return (1);
}

int	operator+(Fixed const &a, Fixed const &b)
{
	int	res = 0;
	res = a.getRawBits() + b.getRawBits();
	return (res);
}

int	operator-(Fixed const &a, Fixed const &b)
{
	int	res = 0;
	res = a.getRawBits() - b.getRawBits();
	return (res);
}

int	operator*(Fixed const &a, Fixed const &b)
{
	int	res = 0;
	res = a.getRawBits() * b.getRawBits();
	return (res);
}

int	operator/(Fixed const &a, Fixed const &b)
{
	int	res = 0;
	res = a.getRawBits() / b.getRawBits();
	return (res);
}