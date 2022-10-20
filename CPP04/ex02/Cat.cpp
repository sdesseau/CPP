/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:19:21 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 18:16:35 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	// std::cout << "Default Cat constructor called..." << std::endl << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	// std::cout << "Default Cat destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, Cat const & src)
{
	ostream << "Type: " << src.getType();
	return (ostream);
}

Cat& Cat::operator=(Cat const& src)
{
    // std::cout << "Assignation Cat operator called" << std::endl << std::endl;
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
    this->_type = src.getType();
    return(*this);
}

Cat::Cat(Cat const& src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
    // std::cout << "Cat copy constructor called" << std::endl << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou miaou *nique le canape avec ses griffes*..." << std::endl << std::endl;
}

Brain* Cat::getBrain() const { return (this->_brain); }