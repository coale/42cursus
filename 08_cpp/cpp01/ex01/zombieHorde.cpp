/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:45:52 by aconta            #+#    #+#             */
/*   Updated: 2023/08/21 11:45:53 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) 
{
    Zombie* zombie_horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombie_horde[i].addName(name);
    }
    return zombie_horde;
}