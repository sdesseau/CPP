/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:35 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/12 16:51:20 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie zombie;
    Zombie *Horde;

    Horde = zombie.zombieHorde(N, "Membre de la Horde");
    for (int i = 0; i < N; i++)
        Horde[i].announce();
        
    delete[] Horde;
    return (0);
}