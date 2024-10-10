/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 09:59:50 by lauger           ###   ########.fr       */
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
		~Dog();
		void makeSound() const;
};

#endif