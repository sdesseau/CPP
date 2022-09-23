/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:42 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 15:36:17 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " :killed..." << std::endl;
}