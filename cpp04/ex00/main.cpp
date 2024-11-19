/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:54:25 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 10:40:20 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "BONUS~~~~~~~~" << std::endl;
	
	WrongAnimal *stranger = new WrongCat();
	std::cout << stranger->getType() << " " << std::endl;
	stranger->makeSound();

	delete meta;
	delete i;
	delete j;
	delete stranger;

	return 0;
}