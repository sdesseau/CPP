/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:49:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/26 20:51:15 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("Jo");
	ClapTrap b(a);
	ClapTrap c("Manon");
	ScavTrap d("Boss");
	FragTrap e("Frag");

	a.attack("Manon");
	c.takeDamage(0);
	
	b.attack("Frag");
	e.takeDamage(0);
	
	c.beRepaired(10);

	e.attack("Manon");
	c.takeDamage(30);

	a.attack("Boss");
	d.takeDamage(0);

	d.guardGate();

	e.beRepaired(50);
	e.highFivesGuys();
	return (0);
}