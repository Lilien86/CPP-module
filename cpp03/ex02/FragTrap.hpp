/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:42:57 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 12:03:15 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
# include "./ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap &rhs);
		~FragTrap();

		FragTrap &operator=(const FragTrap &rhs);

		void highFivesGuys(void);
};

#endif