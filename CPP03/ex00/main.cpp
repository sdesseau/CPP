/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:49:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/26 20:15:18 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Jo");
	ClapTrap b(a);
	ClapTrap c("Manon");

	a.attack("Manon");
	c.takeDamage(0);
	b.attack("Jo");
	a.takeDamage(0);
	c.beRepaired(10);
	c.takeDamage(50);
	return (0);
}