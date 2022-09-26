/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:01:09 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/26 21:15:53 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap default constructor" << std::endl;
    this->Hit = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->Hit = other.Hit;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name + "_clap_name"), ScavTrap(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->Hit = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src) {
    std::cout << "Assignation DiamondTrap operator called" << std::endl;
    this->_name = src.Name;
    this->Hit = src.Hit;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return(*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap and ClapTrap named " << this->ClapTrap::Name << std::endl;
}