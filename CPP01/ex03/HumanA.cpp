/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:41 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 19:31:12 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    _name = name;
}

HumanA::~HumanA()
{
    std::cout << _name << " died" << std::endl;
}