/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:38:24 by lauger            #+#    #+#             */
/*   Updated: 2024/10/29 10:30:14 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::Harl(const Harl &obj)
{
	*this = obj;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

Harl	&Harl::operator=(const Harl &obj)
{
	(void)obj;
	std::cout << "overload operator" << std::endl;
	return *this;
}


void	Harl::debug(void)
{
	std::cout << "---- I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "--- I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "-- I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "- This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	bool	find = false;
	void	(Harl::*functionPointers[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4 && !find; i++) {
		if ((find = !str[i].compare(level))) {
			(this->*functionPointers[i])();
			while (++i < 4)
				(this->*functionPointers[i])();
		}
	}
	if (!find)
		std::cout << "I'm sorry I didn't understand your request" << std::endl;
	return ;
}
