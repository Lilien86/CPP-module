/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:31:39 by lauger            #+#    #+#             */
/*   Updated: 2024/08/28 14:41:47 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int main (int argc, char* argv[])
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return 0;
	}
	std::locale loc;
	int j;
	int i;
	for (j = 1; j < argc; j++){
		for (i = 0; argv[j][i]; i++){
			std::cout << std::toupper(argv[j][i], loc);
		}
	}
	std::cout << std::endl;
 	return 0;
}
