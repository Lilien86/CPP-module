/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:46:29 by lauger            #+#    #+#             */
/*   Updated: 2024/10/14 09:20:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public :
		Contact(void);
		~Contact(void);
		void set_values_contact(std::string argv1, std::string argv2, std::string argv3, std::string argv4, std::string argv5);
		std::string get_values_contact(int i) const;
};

