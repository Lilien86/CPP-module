/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:51 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 09:30:43 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact cont[8];
		int nextIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void searchContacts();
};

#endif