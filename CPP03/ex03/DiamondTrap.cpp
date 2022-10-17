/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:01:09 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/17 14:57:46 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap default constructor" << std::endl << std::endl;
	this->_name = "";
    this->Hit = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl << std::endl;
    this->_name = other._name;
    this->Hit = other.Hit;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name + "_clap_name"), ScavTrap(name) {
    std::cout << "DiamondTrap constructor called" << std::endl << std::endl;
    this->_name = name;
	this->Hit = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src) {
    std::cout << "Assignation DiamondTrap operator called" << std::endl << std::endl;
    this->_name = src.Name;
    this->Hit = src.Hit;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return(*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << this->_name << " and a ClapTrap named " << this->ClapTrap::Name << std::endl << std::endl;
}

std::string DiamondTrap::getName() const { return (this->Name); }
int DiamondTrap::getHit() const { return  (this->Hit); }
int DiamondTrap::getEnergyPoints() const { return (this->EnergyPoints); }
int DiamondTrap::getAttackDamage() const { return (this->AttackDamage); }

std::ostream&	operator<<(std::ostream & ostream, DiamondTrap const & src)
{
	ostream << "Hp: " << src.getHit() << " Ep: " << src.getEnergyPoints() << " Ad: " << src.getAttackDamage();
	return (ostream);
}