/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:49:56 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/17 14:36:24 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), Hit(0), EnergyPoints(0), AttackDamage(0)
{
	std::cout << "Default constructor called..." << std::endl << std::endl;
}

ClapTrap::ClapTrap(const std::string _name)
{
	this->Name = _name;
	this->Hit = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "Constructor called for " << _name << "..." << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& claptrap)
{
	*this = claptrap;
	std::cout << "Copy constructor called..." << std::endl << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called..." << std::endl;
}

const ClapTrap &ClapTrap::operator=(ClapTrap const &a)
{
	this->Name = a.Name;
	this->Hit = a.Hit;
	this->EnergyPoints = a.EnergyPoints;
	this->AttackDamage = a.AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints != 0)
    {
	    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is out of energy! He cannot attack..." << std::endl << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " take " << amount << " amount of damage!" << std::endl;
	this->Hit -= amount;
	if (this->Hit < 0)
		this->Hit = 0;
	std::cout << "Life Points down to " << this->Hit << "..." << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints != 0)
    {
	    std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points!" << std::endl;
    	this->Hit += amount;
    	std::cout << "Life Points up to " << this->Hit << "!!" << std::endl << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is out of energy! He cannot be repaired..." << std::endl << std::endl;
}

std::string ClapTrap::getName() const { return (this->Name); }
int ClapTrap::getHit() const { return  (this->Hit); }
int ClapTrap::getEnergyPoints() const { return (this->EnergyPoints); }
int ClapTrap::getAttackDamage() const { return (this->AttackDamage); }

std::ostream&	operator<<(std::ostream & ostream, ClapTrap const & src)
{
	ostream << "Hp: " << src.getHit() << " Ep: " << src.getEnergyPoints() << " Ad: " << src.getAttackDamage();
	return (ostream);
}