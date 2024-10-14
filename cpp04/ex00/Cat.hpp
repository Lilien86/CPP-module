/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:35:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 11:57:34 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    private:

    public:
        Cat();
        Cat(const Cat &rhs);
        ~Cat();
        Cat &operator=(const Cat &rhs);
        void makeSound() const;
};

#endif