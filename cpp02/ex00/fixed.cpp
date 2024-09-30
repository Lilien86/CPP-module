/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e00.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:49 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 11:56:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	_fp_value = raw;
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
