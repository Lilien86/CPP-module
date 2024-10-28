/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:43:19 by lauger            #+#    #+#             */
/*   Updated: 2024/10/15 15:09:17 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *tab[20];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = new Dog();
	}
	std::cout << "--------" << std::endl;
	for (int j = 10; j < 20; j++)
	{
		tab[j] = new Cat();
	}
	std::cout << "***--------***" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();
	for (int i = 0; i < 10; i++)
	{
		delete tab[i];
	}
	std::cout << "--------" << std::endl;
	for (int j = 10; j < 20; j++)
	{
		delete tab[j];
	}
	delete i;
	delete j;
	return 0;
}