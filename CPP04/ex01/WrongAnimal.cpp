/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:03:52 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 14:04:54 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called..." << std::endl << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called..." << std::endl;
};

std::ostream&	operator<<(std::ostream & ostream, WrongAnimal const & src)
{
	ostream << "Type: " << src.getType();
	return (ostream);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& src)
{
    std::cout << "Assignation WrongAnimal operator called" << std::endl << std::endl;
	this->_type = src.getType();
    return(*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl << std::endl;
	this->_type = src.getType();
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Unknow WrongAnimal sounds..." << std::endl << std::endl;
}

std::string WrongAnimal::getType() const { return (this->_type); }