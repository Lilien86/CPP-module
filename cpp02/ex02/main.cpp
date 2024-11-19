/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:10:50 by lauger            #+#    #+#             */
/*   Updated: 2024/11/04 10:48:51 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "Bonus Print" << std::endl;
	std::cout << "a is equals = " << a << std::endl;
	std::cout << "a + 5 = " << (a + 5) << std::endl;
	std::cout << "a + 2 * 5 = " << (a + 2 * 5) << std::endl;
	std::cout << "a * 10000 / 2 = " << (a * 10000 / 2) << std::endl;
	return 0;
}