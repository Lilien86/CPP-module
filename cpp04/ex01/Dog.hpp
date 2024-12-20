/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 14:51:07 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &rhs);
		~Dog();

		virtual Dog &operator=(const Dog &rhs);

		void makeSound() const;

		Brain	*getBrain() const;
		void	setBrain(std::string &idea, int i);
};

#endif