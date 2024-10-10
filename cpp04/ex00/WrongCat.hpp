/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 11:14:50 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
};

#endif