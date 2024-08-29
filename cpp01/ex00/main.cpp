/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:53:53 by marvin            #+#    #+#             */
/*   Updated: 2024/08/27 08:53:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // Test 1: Create a Zombie on the stack and announce
    Zombie stackZombie("Stack Zombie");
    stackZombie.announce();  // Should output: Stack Zombie: BraiiiiiiinnnzzzZ...

    // Test 2: Use randomChump to create and announce a temporary Zombie
    stackZombie.randomChump("Random Chump");  // Should output: Random Chump: BraiiiiiiinnnzzzZ...

    // Test 3: Use newZombie to create a Zombie on the heap and announce
    Zombie* heapZombie = stackZombie.newZombie("Heap Zombie");
    heapZombie->announce();  // Should output: Heap Zombie: BraiiiiiiinnnzzzZ...

    // Test 4: Clean up heap Zombie
    delete heapZombie;  // Should output: Heap Zombie is destroyed!

    return 0;
}