/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/26 17:54:48 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat cardre("Cadre", 20);
	Bureaucrat apprenti("Apprenti" ,150);
	Form form("formulaire 150-30", 150, 30);
	Form form2("formulaire chiant", 1, 1);

	try
	{
		form.fullSign(apprenti);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		form2.fullSign(apprenti);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat Boss("Boss", 1);

	try
	{
		form2.fullSign(Boss);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		form2.fullSign(Boss);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}