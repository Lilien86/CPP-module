/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:10:44 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 09:16:53 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

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