/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:52:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 12:49:44 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string &ref = str;

	std::cout << "String: " << &(str) << std::endl;
	std::cout << "Pointer: " << &(*ptr) << std::endl;
	std::cout << "Reference: " << &(ref) << std::endl;

	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;
	return 0;
}