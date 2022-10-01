/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:18:49 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 13:56:17 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default Animal constructor called..." << std::endl << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called..." << std::endl;
};

std::ostream&	operator<<(std::ostream & ostream, Animal const & src)
{
	ostream << "Type: " << src.getType();
	return (ostream);
}

Animal& Animal::operator=(Animal const& src)
{
    std::cout << "Assignation Animal operator called" << std::endl << std::endl;
	this->_type = src.getType();
    return(*this);
}

Animal::Animal(Animal const& src)
{
    std::cout << "Animal copy constructor called" << std::endl << std::endl;
	this->_type = src.getType();
}

void	Animal::makeSound() const
{
	std::cout << "Unknow animal sounds..." << std::endl << std::endl;
}

std::string Animal::getType() const { return (this->_type); }