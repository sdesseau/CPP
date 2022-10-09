/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/05 00:40:04 by sdesseau         ###   ########.fr       */
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
			// F6.beSigned(apprenti);		
			F6.beSigned(originel);
			F6.signForm(originel);		
			F7.beSigned(originel);
			F7.signForm(originel);		
			F8.beSigned(originel);
			F8.signForm(originel);
			// F6.execute(originel);
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