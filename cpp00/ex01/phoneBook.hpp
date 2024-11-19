/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:38:51 by lauger            #+#    #+#             */
/*   Updated: 2024/10/22 14:16:34 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#endif
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact cont[8];
		int nextIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int addContact(void);
		int searchContacts();
};