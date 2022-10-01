/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:04:46 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 14:05:25 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor called..." << std::endl << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called..." << std::endl;
};

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

WrongCat::WrongCat(WrongCat const& src)
{
    std::cout << "WrongCat copy constructor called" << std::endl << std::endl;
	this->_type = src.getType();
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaou miaou *nique le canape avec ses griffes*..." << std::endl << std::endl;
}