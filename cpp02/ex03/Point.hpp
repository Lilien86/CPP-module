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
        Fixed const x;
        Fixed const y;
    
    public:
        point ();
        point (Fixed const &a, Fixed const &b);
        point(Point const &a);

        Point &operator=(const Point &a);

        int getX(void) const;
        int getY(void) const;
		void set(int const x, int const y);

}



#endif