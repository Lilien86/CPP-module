/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:11:37 by lauger            #+#    #+#             */
/*   Updated: 2024/10/23 09:01:56 by lauger           ###   ########.fr       */
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

int PhoneBook::addContact(void)
{
	std::string argv1, argv2, argv3, argv4, argv5;

	while (1)
	{
		std::cout << "first name :";
		if (!std::getline(std::cin, argv1))
		{
			std::cout << std::endl;
			return (-1);
		}
		if (argv1[0])
			break ;
	}
	while (1)
	{
		std::cout << "last name :";
		if (!std::getline(std::cin, argv2))
		{
			std::cout << std::endl;
			return (-1);
		}
		if (argv2[0])
			break;
	}
	while (1)
	{
		std::cout << "nick name :";
		if (!std::getline(std::cin, argv3))
		{
			std::cout << std::endl;
			return (-1);
		}
		if (argv3[0])
			break ;
	}
	while (1)
	{
		std::cout << "phone number :";
		if (!std::getline(std::cin, argv4))
		{
			std::cout << std::endl;
			return (-1);
		}
		if (argv4[0])
			break ;
	}
	while (1)
	{
		std::cout << "darkest secret :";
		if (!std::getline(std::cin, argv5))
		{
			std::cout << std::endl;
			return (-1);
		}
		if (argv5[0])
			break;
	}

	Contact newContact;
	newContact.set_values_contact(argv1, argv2, argv3, argv4, argv5);

	cont[nextIndex] = newContact;
	nextIndex = (nextIndex + 1) % 8;
	return (0);
}

int PhoneBook::searchContacts(void)
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
	int index = 0;
	std::string	s_index;
	while (1)
	{
		std::cout << "Enter index to view details: ";
		if (!std::getline(std::cin, s_index))
		{
			return (-1);
		}
		if (s_index.length() > 1)
		{
			return (-1);
		}
		if (s_index[0] >= '0' && s_index[0] <= '9')
		{
			break;
		}
	}
	index = (int)s_index[0] - 48;
	if (index < 0 || index > 8 || cont[index].get_values_contact(0).empty()){
		std::cout << "Invalid index or empty entry." << std::endl;
	} else {
		std::cout << "First Name: " << cont[index].get_values_contact(0) << std::endl;
		std::cout << "Last Name: " << cont[index].get_values_contact(1) << std::endl;
		std::cout << "Nickname: " << cont[index].get_values_contact(2) << std::endl;
		std::cout << "Phone Number: " << cont[index].get_values_contact(3) << std::endl;
		std::cout << "Darkest Secret: " << cont[index].get_values_contact(4) << std::endl;
	}
	return (0);
}
