/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:40:07 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/12 16:51:14 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    Zombie::zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    
    Zombie* horde = new Zombie[N];
    if (horde == NULL)
        return NULL;
    for (int i = 0; i < N; i++)
        horde[i]._name = name;
    return (horde);
}