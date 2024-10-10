/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:39:09 by lauger            #+#    #+#             */
/*   Updated: 2024/10/10 11:33:09 by lauger           ###   ########.fr       */
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
	a = (Brain*)malloc(1);
	a->_knowledge = new std::string[100];
	return a;
}

void	Brain::operator delete(void * p)
{
	Brain	*a;

	a = (Brain *)p;
	std::cout<< "Overloading deleted operator" << std::endl;
	delete(&a->_knowledge);
	free(a);
}