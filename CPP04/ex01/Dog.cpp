/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:20:02 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 17:04:10 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Default Dog constructor called..." << std::endl << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Default Dog destructor called..." << std::endl;
};

std::ostream&	operator<<(std::ostream & ostream, Dog const & src)
{
	ostream << "Type: " << src.getType();
	return (ostream);
}

Dog& Dog::operator=(Dog const& src)
{
    std::cout << "Assignation Dog operator called" << std::endl << std::endl;
    this->_type = src.getType();
    return(*this);
}

Dog::Dog(Dog const& src)
{
    std::cout << "Dog copy constructor called" << std::endl << std::endl;
	this->_type = src.getType();
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf wouaf *pisse sur le tapis*..." << std::endl << std::endl;
}