/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:35:43 by lauger            #+#    #+#             */
/*   Updated: 2024/10/10 11:28:57 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
#include <iostream>
#include <stdlib.h>

class Brain
{
	private:
		std::string	*_knowledge;
	public:
		Brain();
		~Brain();
		static void *operator new(size_t);
		static void operator delete(void * p);
};

#endif