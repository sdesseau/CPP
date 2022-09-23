/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:24:50 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/23 21:32:36 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(floatValue * (1 << this->_bit));
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = value << this->_bit;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &a)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->_fixedValue = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->_fixedValue / (1 << this->_bit));
}

int Fixed::toInt() const
{
	return((int)this->_fixedValue >> this->_bit);
}

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src)
{
	ostream << src.toFloat();
	return (ostream);
}