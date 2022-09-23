/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:35 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 15:37:01 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    // How to stock a var in the STACK
    Zombie parent("Zombie parent");
    
    // How to stock a var in the HEAP
    Zombie *child = parent.newZombie("child");

    delete child;
    return (0);
}