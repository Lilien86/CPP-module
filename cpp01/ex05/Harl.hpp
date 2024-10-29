/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:34:56 by lauger            #+#    #+#             */
/*   Updated: 2024/10/29 09:37:28 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <string.h>

class	Harl
{
	public:
		Harl(void);
		Harl(const Harl &obj);
		~Harl(void);
		Harl &operator=(const Harl &obj);

		void complain( std::string level );

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

# endif