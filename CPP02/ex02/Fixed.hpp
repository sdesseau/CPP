/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:21:16 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/23 21:30:44 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const float floatValue);
	Fixed(const int value);
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &a);
	Fixed &operator-(Fixed const &a);
	Fixed &operator+(Fixed const &a);
	Fixed &operator*(Fixed const &a);
	Fixed &operator/(Fixed const &a);
	~Fixed();
	int		toInt(void) const;
	float 	toFloat() const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixedValue;
	static const int _bit = 8;
};

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src);