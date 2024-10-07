/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:55:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/04 08:55:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <cmath>
#include "./fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    
    public:
        Point ();
        Point (float const x, float const y);
        ~Point();
        Point(Point const &src);

        Point &operator=(const Point &a);

        Fixed getX() const;
        Fixed getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif