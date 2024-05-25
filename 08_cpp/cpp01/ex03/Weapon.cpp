/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:01:15 by aconta            #+#    #+#             */
/*   Updated: 2023/08/21 14:01:16 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(std::string type) 
{
    this->setType(type);
}

Weapon::~Weapon() {}

const  std::string& Weapon::getType( void ) 
{
    return this->type;
}

void Weapon::setType(std::string newType) 
{
    this->type = newType;
}