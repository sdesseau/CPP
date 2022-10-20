/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:20:02 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 17:51:00 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog constructor called..." << std::endl << std::endl;
}

Dog::~Dog()
{
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

Dog::Dog(Dog const& src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf wouaf *pisse sur le tapis*..." << std::endl << std::endl;
}