/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:44:15 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 13:15:06 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl << std::endl;
    this->Hit = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other): ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl << std::endl;
    this->Name = other.Name;
    this->Hit = other.Hit;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl << std::endl;
    this->Hit = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap& FragTrap::operator=(FragTrap const& src)
{
    std::cout << "Assignation FragTrap operator called" << std::endl << std::endl;
    this->Name = src.Name;
    this->Hit = src.Hit;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return(*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "Can we get an HighFive guys ?? :))" << std::endl << std::endl;
}

void FragTrap::attack(std::string const & target) 
{
    std::cout << "FragTrap " << this->Name << " attack " << target << ", causing an insane amount of " << this->AttackDamage << "!!" << std::endl << std::endl;
}

std::string FragTrap::getName() const { return (this->Name); }
int FragTrap::getHit() const { return  (this->Hit); }
int FragTrap::getEnergyPoints() const { return (this->EnergyPoints); }
int FragTrap::getAttackDamage() const { return (this->AttackDamage); }

std::ostream&	operator<<(std::ostream & ostream, FragTrap const & src)
{
	ostream << "Hp: " << src.getHit() << " Ep: " << src.getEnergyPoints() << " Ad: " << src.getAttackDamage();
	return (ostream);
}