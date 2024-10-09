/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:42:57 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 08:42:57 by marvin           ###   ########.fr       */
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
        ~FragTrap();
        void highFivesGuys(void);
};

#endif