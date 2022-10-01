/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:19:12 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 13:12:58 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
        ScavTrap(ScavTrap const& other);
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap const& src);

        void guardGate();
        void attack(std::string const& target);
		std::string getName() const;
		int getHit() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};

std::ostream&	operator<<(std::ostream & ostream, ScavTrap const & src);