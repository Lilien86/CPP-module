/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:20:56 by lauger            #+#    #+#             */
/*   Updated: 2024/08/26 10:00:05 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

Contact::Contact(void)
{
    //std::cout << "Contact created" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    //std::cout << "Contact deleted" << std::endl;
    return ;
}

std::string truncate(const std::string& str, std::size_t width)
{
    if (str.length() > width) {
        return str.substr(0, width - 1) + '.';
    }
    return str;
}

void Contact::set_values_contact(std::string argv1, std::string argv2, std::string argv3, std::string argv4, std::string argv5)
{
    firstName = argv1;
    lastName = argv2;
    nickName = argv3;
    phoneNumber = argv4;
    darkestSecret = argv5;
    
}

std::string Contact::get_values_contact(int i) const
{
    switch(i) {
        case 0: return firstName;
        case 1: return lastName;
        case 2: return nickName;
        case 3: return phoneNumber;
        case 4: return darkestSecret;
        default: return "";
    }
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

displayAccountsInfos
int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)) {
            std::cout << std::endl;
            break;
        }

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
            //break;
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }
   (void)phoneBook;

    return 0;
}