/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:29:00 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 10:23:50 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &rhs);
		virtual ~Animal();
		Animal &operator=(const Animal &rhs);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif