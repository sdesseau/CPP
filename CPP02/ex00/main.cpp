/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:33:37 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/16 17:00:09 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
  	
	std::cout << a.getRawBits() << std::endl;
  	std::cout << b.getRawBits() << std::endl;
  	std::cout << c.getRawBits() << std::endl;

	a.setRawBits(19);
	std::cout << a.getRawBits() << std::endl;
	
	b = a;
	std::cout << b.getRawBits() << std::endl;
	return (0);
}