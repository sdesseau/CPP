/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:49:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 12:36:57 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ClapTrap a("Jo");
	// ClapTrap b(a);
	// ClapTrap c("Manon");
	ScavTrap d("Boss");
	// FragTrap e("Frag");
	DiamondTrap f("Diamond");
	DiamondTrap g(f);
	DiamondTrap h("Fake Diamond");

	g = h;
	f.whoAmI();
	g.whoAmI();
	h.whoAmI();
	
	// a.attack("Manon");
	// c.takeDamage(0);
	
	// b.attack("Frag");
	// e.takeDamage(0);
	
	// c.beRepaired(10);

	// e.attack("Manon");
	// c.takeDamage(30);

	// a.attack("Boss");
	// d.takeDamage(0);

	d.guardGate();
	g.attack("Diamond");

	// e.beRepaired(50);
	// e.highFivesGuys();
	return (0);
}