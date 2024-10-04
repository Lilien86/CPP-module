/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:31:13 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 12:59:36 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		static const int _bit = 8;
		int				_intValue;
	public:
		Fixed ();
		Fixed (const Fixed &a);
		Fixed (const int int_value);
		Fixed (const float float_value);
		~Fixed ();

		Fixed &operator=(const Fixed &a);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		int &operator++();
		int operator++(int);
		int &operator--();
		int operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &a);

int	operator<(Fixed const &a, Fixed const &b);
int	operator>(Fixed const &a, Fixed const &b);
int	operator<=(Fixed const &a, Fixed const &b);
int	operator>=(Fixed const &a, Fixed const &b);
int	operator==(Fixed const &a, Fixed const &b);
int	operator!=(Fixed const &a, Fixed const &b);

int	operator+(Fixed const &a, Fixed const &b);
int	operator-(Fixed const &a, Fixed const &b);
int	operator/(Fixed const &a, Fixed const &b);
int	operator*(Fixed const &a, Fixed const &b);

#endif