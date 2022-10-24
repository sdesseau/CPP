/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 15:26:09 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat test;
	Bureaucrat originel("Wsh", 3);
	Bureaucrat originel2("Wsh2", 149);
	
	try
	{
		Bureaucrat B1("B1", 3);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat B2("B2", -15);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat B3("B3", 200);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		originel.upgrade();
		originel.upgrade();
		// originel.upgrade();
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		originel2.downgrade();
		// originel2.downgrade();
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}