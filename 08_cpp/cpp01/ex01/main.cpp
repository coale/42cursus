/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:45:35 by aconta            #+#    #+#             */
/*   Updated: 2023/08/21 11:50:02 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    size_t zombieNum;
    std::cout << "So, how many zombies do you want? Enter the number: " << "\n";
    std::cin >> zombieNum;
    Zombie* Horde = zombieHorde(zombieNum, "Potato");
    for (size_t i = 0; i < zombieNum; i++)
    {
        std::cout << i << ":" << "\n";
        Horde[i].announce();
    }
    delete[] Horde;
    return (0);
}
