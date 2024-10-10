/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 09:19:28 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << this->_type << " ~ waouffff ~" << std::endl;
}