/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:43:19 by lauger            #+#    #+#             */
/*   Updated: 2024/11/13 12:38:23 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animal[10];

	for (int i = 0; i < 5	; i++)
		animal[i] = new Dog();
	std::cout << std::endl << std::endl;
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();
	std::cout << std::endl << std::endl;

	for (int i = 0; i < 10; i++)
		animal[i]->makeSound();
	std::cout << std::endl << std::endl;

	WrongCat wrongCat;
	wrongCat.getBrain()->setIdeas(0, "~~ Hey, eeeh is it Lilien ?");
	wrongCat.getBrain()->setIdeas(1, "~~ Yes, I thinks guy");
	wrongCat.getBrain()->setIdeas(2, "~~ I love apple pen");
	wrongCat.getBrain()->setIdeas(3, "~~ Hoooo miam miam miaouuu");
	wrongCat.getBrain()->setIdeas(99, "~~ Stop it please");
	std::cout << "\x1B[32m" << wrongCat.getBrain()->getIdeas(0) << "\x1B[0m" << std::endl << std::endl;
	std::cout << "\x1B[32m" << wrongCat.getBrain()->getIdeas(1) << "\x1B[0m" << std::endl << std::endl;
	std::cout << "\x1B[32m" << wrongCat.getBrain()->getIdeas(2) << "\x1B[0m" << std::endl << std::endl;
	std::cout << "\x1B[32m" << wrongCat.getBrain()->getIdeas(3) << "\x1B[0m" << std::endl << std::endl;
	std::cout << "\x1B[32m" << wrongCat.getBrain()->getIdeas(99) << "\x1B[0m" << std::endl << std::endl;

	for (int i = 0; i < 10; i++)
		delete animal[i];
	return 0;
}