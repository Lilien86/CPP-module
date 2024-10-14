/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:39:09 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 15:35:28 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is create" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	*this = rhs;
}

Brain::~Brain()
{
	std::cout << "Brain is flattened" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_knowledge[i] = rhs._knowledge[i];
	}
	return (*this);
}

void    Brain::newBrain()
{
	std::cout << "here" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		this->_knowledge[i] = "\0";
	}
}