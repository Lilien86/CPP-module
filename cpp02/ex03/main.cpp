/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:10:30 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 09:10:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "Point.hpp"

void    printPoint2(Point const &p)
{
    std::cout << "x = " << p.getX() << std::endl;
    std::cout << "y = " << p.getY() << std::endl;
}

int main()
{
    Point	a(0, 0);
	Point	b( 5, 0);
	Point	c( 2.5,  5);
    Point   point(5, 4);
    printPoint2(b);
    if (bsp(a,b,c,point))
        std::cout <<"Inside" << std::endl;
    else
        std::cout <<"Not Inside" << std::endl;
    return (0);
}