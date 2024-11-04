/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:31:13 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 11:29:05 by lauger           ###   ########.fr       */
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
		Fixed &operator=(const Fixed &a);
		~Fixed ();

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool	operator<(Fixed const &a);
		bool	operator>(Fixed const &a);
		bool	operator<=(Fixed const &a);
		bool	operator>=(Fixed const &a);
		bool	operator==(Fixed const &a);
		bool	operator!=(Fixed const &a);

		Fixed	operator+(Fixed const &a);
		Fixed	operator-(Fixed const &a);
		Fixed	operator/(Fixed const &a);
		Fixed	operator*(Fixed const &a);
};

std::ostream &operator<<(std::ostream &os, Fixed const &a);



#endif