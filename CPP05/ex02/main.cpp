/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 19:21:14 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat boss("Boss", 1);
	Bureaucrat originel("Wsh", 20);
	Bureaucrat apprenti("larbin" ,150);
	PresidentialPardonForm F6("Jean");
	RobotomyRequestForm F7("Pierre");
	ShrubberyCreationForm F8("Duplex");

	try
	{
		{
			F6.fullSign(originel);			
			F7.fullSign(originel);
			F8.fullSign(originel);
			F6.execute(boss);
			F7.execute(boss);
			F8.execute(boss);
		}
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}