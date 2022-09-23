/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ramdomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:39 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 15:09:34 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::randomChump(std::string name)
{
    Zombie Zombie(name);
    Zombie.announce();
}