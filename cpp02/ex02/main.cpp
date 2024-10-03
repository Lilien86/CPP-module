/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:10:50 by lauger            #+#    #+#             */
/*   Updated: 2024/10/03 13:14:03 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fixed.hpp"

int main( void )
{
	Fixed a;
	std::cout << (Fixed( 5.05f ) * Fixed( 2 )) << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << b.toFloat() << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max( (Fixed)a, (Fixed)b ) << std::endl;
	return 0;
}