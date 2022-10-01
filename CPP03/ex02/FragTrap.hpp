/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:44:17 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 13:14:38 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
        FragTrap(FragTrap const& other);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& src);

        void highFivesGuys(void);
        void attack(std::string const& target);
		std::string getName() const;
		int getHit() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
};

std::ostream&	operator<<(std::ostream & ostream, FragTrap const & src);