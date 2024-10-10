/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:39:09 by lauger            #+#    #+#             */
/*   Updated: 2024/10/10 10:41:55 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is create" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is flattened" << std::endl;
}

void	*Brain::operator new(size_t)
{
	Brain	*a;
	a = NULL;
	std::cout<< "Overloading new operator with size: " << 100 << std::endl;
	a->_knowledge = new char(100);
	return a;
}

void	Brain::operator delete(void * p)
{
	Brain	*b;

	b = (Brain *)p;
	std::cout<< "Overloading deleted operator" << std::endl;
	delete(&b->_knowledge);
}