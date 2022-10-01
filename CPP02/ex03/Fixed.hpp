/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:21:16 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/26 18:13:36 by sdesseau         ###   ########.fr       */
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
	~Fixed();
	const Fixed &operator=(Fixed const &a);
	
	bool operator>(Fixed const &a);
	bool operator<(Fixed const &a);
	bool operator<=(Fixed const &a);
	bool operator>=(Fixed const &a);
	bool operator==(Fixed const &a);
	bool operator!=(Fixed const &a);
	
	Fixed operator-(Fixed const &a);
	Fixed operator+(Fixed const &a);
	Fixed operator*(Fixed const &a);
	Fixed operator/(Fixed const &a);
	
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	
	int		toInt(void) const;
	float 	toFloat() const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	static Fixed const& min(Fixed const &a, Fixed const &b);
	static Fixed const& max(Fixed const &a, Fixed const &b);
	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);

private:
	int _fixedValue;
	static const int _bit = 8;
};

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src);