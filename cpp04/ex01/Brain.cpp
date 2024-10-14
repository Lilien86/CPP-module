/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:39:09 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 16:24:36 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is create" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_knowledge[i] = "";
	}
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
