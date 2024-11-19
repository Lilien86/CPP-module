/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:27:03 by lauger            #+#    #+#             */
/*   Updated: 2024/10/29 10:30:05 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

bool	getCommand(const std::string &input, const std::string &flag)
{
	if (input.size() != flag.size())
		return false;
	for (int i = 0; i < (int)input.size(); i++)
	{
		if (tolower(input[i]) != tolower(flag[i]))
			return false;
	}
	return true;
}

int	main(void)
{
	std::string command;
	Harl		harl;

	while (true)
	{
		std::cout << "Enter command (DEBUG, INFO, WARNING, ERROR): ";
		if (!std::getline(std::cin, command)) {
			std::cout << std::endl << "goodbye" << std::endl;
			break;
		}
		if (getCommand(command, "exit") == true) {
			std::cout << "Cheerio !" << std::endl;
			break;
		}
		else {
			harl.complain(command);
		}
	}
	return 0;
}