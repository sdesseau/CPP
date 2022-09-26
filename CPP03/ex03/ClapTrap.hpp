/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:49:57 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/26 20:32:11 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		int Hit;
		int EnergyPoints;
		int AttackDamage;

	public:
		ClapTrap();
		ClapTrap(ClapTrap const& clapTrap);
		~ClapTrap();
		ClapTrap(const std::string _name);
		const ClapTrap &operator=(ClapTrap const &a);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};