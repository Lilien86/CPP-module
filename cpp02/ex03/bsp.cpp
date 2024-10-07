/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:26:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 09:26:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "Point.hpp"

float   area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a.getX().getRawBits(), a.getY().getRawBits(), b.getX().getRawBits(), b.getY().getRawBits(),
                c.getX().getRawBits(), c.getY().getRawBits());
    std::cout << A << std::endl;

    float A1 = area(point.getX().getRawBits(), point.getY().getRawBits(), b.getX().getRawBits(), b.getY().getRawBits(),
                c.getX().getRawBits(), c.getY().getRawBits());
    std::cout << A1 << std::endl;

    float A2 = area(a.getX().getRawBits(), a.getY().getRawBits(), point.getX().getRawBits(), point.getY().getRawBits(),
                c.getX().getRawBits(), c.getY().getRawBits());
    std::cout << A2 << std::endl;

    float A3 = area(a.getX().getRawBits(), a.getY().getRawBits(), b.getX().getRawBits(), b.getY().getRawBits(),
                point.getX().getRawBits(), point.getY().getRawBits());
    std::cout << A3 << std::endl;

    return (A == A1 + A2 + A3);
}