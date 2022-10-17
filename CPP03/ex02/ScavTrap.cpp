/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:19:14 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/17 14:41:49 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl << std::endl;
    this->Hit = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other): ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl << std::endl;
    this->Name = other.Name;
    this->Hit = other.Hit;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl << std::endl;
    this->Hit = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& src)
{
    std::cout << "Assignation ScavTrap operator called" << std::endl << std::endl;
    this->Name = src.Name;
    this->Hit = src.Hit;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have entered in Gate Keeper Mode" << std::endl << std::endl;
}

void ScavTrap::attack(std::string const & target) 
{
    if (this->EnergyPoints != 0)
    {
	    std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "ScavTrap " << this->Name << " is out of energy! He cannot attack..." << std::endl << std::endl;
}

std::string ScavTrap::getName() const { return (this->Name); }
int ScavTrap::getHit() const { return  (this->Hit); }
int ScavTrap::getEnergyPoints() const { return (this->EnergyPoints); }
int ScavTrap::getAttackDamage() const { return (this->AttackDamage); }

std::ostream&	operator<<(std::ostream & ostream, ScavTrap const & src)
{
	ostream << "Hp: " << src.getHit() << " Ep: " << src.getEnergyPoints() << " Ad: " << src.getAttackDamage();
	return (ostream);
}