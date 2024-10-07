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

int main()
{
    float const one = 5.5f;
    float const two = 1.5f;

    Point const   a;
    Point const   b(one, two);
    Point const   c(a);
    Point const   point(one, two);
    bsp(a,b,c,point);

    return (0);
}