/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:49:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/26 20:41:31 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Jo");
	ClapTrap b(a);
	ClapTrap c("Manon");
	ScavTrap d("Boss");

	a.attack("Manon");
	c.takeDamage(0);
	
	b.attack("Jo");
	a.takeDamage(0);
	
	c.beRepaired(10);

	d.attack("Manon");
	c.takeDamage(20);

	a.attack("Boss");
	d.takeDamage(0);
	return (0);
}