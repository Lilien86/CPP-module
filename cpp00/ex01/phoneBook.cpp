/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:11:37 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 09:17:14 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

std::string truncate(const std::string& str, std::size_t width)
{
	if (str.length() > width) {
		return str.substr(0, width - 1) + '.';
	}
	return str;
}

PhoneBook::PhoneBook(void) : nextIndex(0)
{
	//std::cout << "PhoneBook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhobeBook deleted" << std::endl;
	return ;
}

void PhoneBook::addContact(void)
{
	std::string argv1, argv2, argv3, argv4, argv5;

	std::cout << "first name :";
	std::getline(std::cin, argv1);

	std::cout << "last name :";
	std::getline(std::cin, argv2);

	std::cout << "nick name :";
	std::getline(std::cin, argv3);

	std::cout << "phone number :";
	std::getline(std::cin, argv4);

	std::cout << "darkest secret :";
	std::getline(std::cin, argv5);

	Contact newContact;
	newContact.set_values_contact(argv1, argv2, argv3, argv4, argv5);

	cont[nextIndex] = newContact;
	nextIndex = (nextIndex + 1) % 8;
}

void PhoneBook::searchContacts(void)
{
	std::cout << std::setw(10) << std::right << "Index"
		<< '|' << std::setw(10) << std::right << "First Name"
		<< '|' << std::setw(10) << std::right << "Last Name"
		<< '|' << std::setw(10) << std::right << "Nickname"
		<< std::endl;

	for (int i = 0; i < 8; ++i) 
	{
		if (cont[i].get_values_contact(0).empty())
			continue; // Skip empty entries
	
		std::cout << std::setw(10) << std::right << i
				  << '|' << std::setw(10) << std::right << truncate(cont[i].get_values_contact(0), 10)
				  << '|' << std::setw(10) << std::right << truncate(cont[i].get_values_contact(1), 10)
				  << '|' << std::setw(10) << std::right << truncate(cont[i].get_values_contact(2), 10)
				  << std::endl;
	}
	int index;
	std::cout << "Enter index to view details: ";
	std::cin >> index;
	std::cin.ignore();
	
	if (index < 0 || index > 8 || cont[index].get_values_contact(0).empty()){
		std::cout << "Invalid index or empty entry." << std::endl;
	} else {
		std::cout << "First Name: " << cont[index].get_values_contact(0) << std::endl;
		std::cout << "Last Name: " << cont[index].get_values_contact(1) << std::endl;
		std::cout << "Nickname: " << cont[index].get_values_contact(2) << std::endl;
		std::cout << "Phone Number: " << cont[index].get_values_contact(3) << std::endl;
		std::cout << "Darkest Secret: " << cont[index].get_values_contact(4) << std::endl;
	}
}
