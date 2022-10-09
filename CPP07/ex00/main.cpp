/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:32:34 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/09 14:56:29 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "watever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
	
	std::cout << "swap(a, b)" << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;

	std::cout << "----------------------------" << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;
	
	std::cout << "swap(c, d)" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;

	std::cout << "----------------------------" << std::endl << std::endl;

	float floatA = 3.5;
	float floatB = 2.9;

	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "\tmin<float>(floatA, floatB): " << ::min<float>(floatA, floatB) << std::endl;
	std::cout << "\tmax<float>(floatA, floatB): " << ::max<float>(floatA, floatB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "\tmin(floatA, floatB): " << ::min(floatA, floatB) << std::endl;
	std::cout << "\tmax(floatA, floatB): " << ::max(floatA, floatB) << std::endl << std::endl;

	std::cout << "swap(floatA, floatB)" << std::endl;
	::swap(floatA, floatB);
	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl << std::endl;

	std::cout << "----------------------------" << std::endl << std::endl;

	double doubleA = 420.69;
	double doubleB = -111.11;

	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "\tmin<double>(doubleA, doubleB): " << ::min<double>(doubleA, doubleB) << std::endl;
	std::cout << "\tmax<double>(doubleA, doubleB): " << ::max<double>(doubleA, doubleB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "\tmin(doubleA, doubleB): " << ::min(doubleA, doubleB) << std::endl;
	std::cout << "\tmax(doubleA, doubleB): " << ::max(doubleA, doubleB) << std::endl << std::endl;

	std::cout << "swap(doubleA, doubleB)" << std::endl;
	::swap(doubleA, doubleB);
	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;
}