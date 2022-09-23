/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:21:16 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/23 18:45:00 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &a);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixedValue;
	static const int _bit = 8;
};