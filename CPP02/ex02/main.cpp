/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:33:37 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/16 17:10:36 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
	
    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
	
    std::cout << "b = " << b << std::endl;
	
	Fixed c(26.45f);
	
    std::cout << Fixed::max(c, b) << std::endl;
    std::cout << Fixed::min(c, b) << std::endl;
	std::cout << "c / b = " << (c / b) << std::endl;
	std::cout << "c * b = " << (c * b) << std::endl;
	std::cout << "c + b = " << (c + b) << std::endl;
	std::cout << "c <= b = " << (c <= b) << std::endl;
	std::cout << "c < b = " << (c  <b) << std::endl;
	std::cout << "c >= b = " << (c >= b) << std::endl;
	std::cout << "c > b = " << (c > b) << std::endl;
	std::cout << "c != b = " << (c != b) << std::endl;
	std::cout << "c == b = " << (c == b) << std::endl;
	
    return 0;
}