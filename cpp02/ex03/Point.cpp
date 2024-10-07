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

Point::Point() : _x(0), _y(0)
{
    std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
    std::cout << "Cpy value Point constructor called" << std::endl;
}

Point::Point(Point const &a)
{
    *this = a;
    std::cout << "Copy Point constructor called" << std::endl;
}

Point::~Point()
{
    std::cout << "Destructor Point constructor called" << std::endl;
}

Fixed     Point::getX() const
{
    return this->_x;
}

Fixed     Point::getY() const
{
    return this->_y;
}

//#############################################################
//#############OOOOOOOOOOOOOOOOPERATOR#########################
//#############################################################

Point   &Point::operator=(const Point &a)
{
    (Fixed)this->_x = a.getX();
    (Fixed)this->_y = a.getY();
    return *this;
}