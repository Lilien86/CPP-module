/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:33:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 09:19:38 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void    Animal::makeSound() const
{
    std::cout << "Animal" << " ~ brrrrrrr ~" << std::endl;
}
