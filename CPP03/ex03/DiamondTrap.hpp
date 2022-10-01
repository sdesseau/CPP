/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:01:10 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 13:15:58 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

		DiamondTrap();
        DiamondTrap(DiamondTrap const& other);
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap const& src);

		void whoAmI();
        using FragTrap::Hit; //100 hp ok
		using FragTrap::AttackDamage; //30 ok
		using ScavTrap::EnergyPoints; //50 ep ok
		using ScavTrap::attack; // ScavTrap attack ok
		std::string getName() const;
		int getHit() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
		
	private:
		std::string _name;
};

std::ostream&	operator<<(std::ostream & ostream, DiamondTrap const & src);