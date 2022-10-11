/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:45 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 20:09:34 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _weapon(&weapon)
{
    _name = name;
}

HumanB::HumanB(std::string name) : _name(name){
    std::cout << _name << " constructor" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << _name << " died" << std::endl;
}

void HumanB::attack()
{
    if (!_weapon)
    {
        std::cout << _name << " cannot attack because no weapon..." << std::endl;
        return ;
    }
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl; 
}