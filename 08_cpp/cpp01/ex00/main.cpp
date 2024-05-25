/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:42:20 by aconta            #+#    #+#             */
/*   Updated: 2023/08/21 11:45:02 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *heap_zombie = newZombie("Heap Patato");
    randomChump("Stack Potato");

    heap_zombie->announce();
    delete heap_zombie;
}

