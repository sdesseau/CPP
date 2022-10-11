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
    randomChump("StackZombie");
    
    // How to stock a var in the HEAP
    Zombie *heapZombie = newZombie("heapZombie");

    delete heapZombie;
    return (0);
}