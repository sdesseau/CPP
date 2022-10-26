/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/26 17:53:19 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		Bureaucrat test;
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
		Bureaucrat originel("Wsh", 3);
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
		Bureaucrat originel2("Wsh2", 149);
		originel2.downgrade();
		// originel2.downgrade();
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}