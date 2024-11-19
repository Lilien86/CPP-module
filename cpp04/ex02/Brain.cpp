/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:39:09 by lauger            #+#    #+#             */
/*   Updated: 2024/11/13 11:37:34 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	// std::cout << "--- Brain is created" << std::endl;
	return ;
}

Brain::Brain(const Brain &rhs)
{
	*this = rhs;
	return ;
}

Brain::~Brain()
{
	std::cout << "---Brain is flattened" << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(int i, const std::string &ideas)
{
	this->_ideas[i] = ideas;
	return ;
}

std::string Brain::getIdeas(int i) const
{
	if (i < 0 || i > 100)
		return "I'm sorry I've not idea";
	return this->_ideas[i] ;
}