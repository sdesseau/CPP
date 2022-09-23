/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:42 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/23 18:44:53 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << _name << ": "
			  << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	;
}

Zombie::~Zombie()
{
	std::cout << "Zombie killed..." << std::endl;
}