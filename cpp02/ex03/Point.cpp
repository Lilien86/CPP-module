/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:58:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/04 08:58:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Point::Point()
{
    std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(Fixed const &a, Fixed const &b)
{
    x.setRawBits(a.getRawBits());
}

Point::Point(Point const &a)
{
    *this = a;
    std::cout << "Copy Point constructor called" << std::endl;
}

int     Point::getX()
{
    return x.getRawBits();
}

int     Point::getY()
{
    return y.getRawBits();
}

void    Point::set(int const x, int const y)
{
    this->x.setRawBits(x);
    this->y.setRawBits(y);
}

//#############################################################
//#############OOOOOOOOOOOOOOOOPERATOR#########################
//#############################################################

Point   Point::&operator=(const Point &a)
{
    this->x = a.getX();
    this->y = a.getY();
}