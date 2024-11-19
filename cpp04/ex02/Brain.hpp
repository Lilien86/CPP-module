/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:35:43 by lauger            #+#    #+#             */
/*   Updated: 2024/11/13 10:42:14 by lauger           ###   ########.fr       */
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
		Brain();
		Brain(const Brain &rhs);
		~Brain();
		
		Brain &operator=(const Brain &rhs);

		void setIdeas(int i, const std::string &ideas);
		std::string getIdeas(int i) const;
	
	private:
		std::string _ideas[100];
};

#endif