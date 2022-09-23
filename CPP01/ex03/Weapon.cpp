/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:53 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 20:06:21 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include "Weapon.hpp"

void Weapon::setType(std::string newType)
{
    _type = newType;
}

std::string Weapon::getType() const
{
    return _type;
}

Weapon::Weapon(std::string name)
{
    _type = name;
}

Weapon::~Weapon()
{
}