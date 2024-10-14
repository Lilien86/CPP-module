/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:35:43 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 14:39:34 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
#include <iostream>
#include <stdlib.h>

class Brain
{
	public:
		std::string	_knowledge[100];
		Brain();
		Brain(const Brain &rhs);
		~Brain();
		Brain &operator=(const Brain &rhs);
		void newBrain();
};

#endif