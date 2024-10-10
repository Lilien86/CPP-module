/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:29:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 11:47:36 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		~Animal();
		std::string getType() const;
		virtual void makeSound() const;
		static void operator delete(void * p);
		
};

#endif