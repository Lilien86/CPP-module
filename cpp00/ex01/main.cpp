/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:20:56 by lauger            #+#    #+#             */
/*   Updated: 2024/10/23 08:39:09 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command)) {
			std::cout << std::endl;
			break;
		}

		if (command == "ADD")
		{
			if (phoneBook.addContact() == -1)
				return 0;
		} else if (command == "SEARCH") {
			if (phoneBook.searchContacts() == -1)
				return 0;
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command." << std::endl;
		}
	}
   (void)phoneBook;

	return 0;
}