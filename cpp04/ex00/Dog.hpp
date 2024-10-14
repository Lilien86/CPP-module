/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 12:00:28 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &rhs);
		~Dog();
		Dog &operator=(const Dog &rhs);
		void makeSound() const;
};

#endif