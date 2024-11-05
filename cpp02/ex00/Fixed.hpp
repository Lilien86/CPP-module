/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:31:13 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 14:08:52 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed ();
		Fixed (const Fixed &a);
		~Fixed ();
		Fixed &operator=(const Fixed &a);
		int   getRawBits(void) const;
		void   setRawBits(int const raw);
	
	private:
		static const int	_bit = 8;
		int					_intValue;
};

#endif