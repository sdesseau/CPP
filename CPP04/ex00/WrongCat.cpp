/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:04:46 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 17:54:24 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called..." << std::endl << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, WrongCat const & src)
{
	ostream << "Type: " << src.getType();
	return (ostream);
}

WrongCat& WrongCat::operator=(WrongCat const& src)
{
    std::cout << "Assignation WrongCat operator called" << std::endl << std::endl;
    this->_type = src.getType();
    return(*this);
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou miaou *nique le canape avec ses griffes*..." << std::endl << std::endl;
}