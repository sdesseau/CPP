/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/26 18:01:07 by sdesseau         ###   ########.fr       */
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
	PresidentialPardonForm F6("Jean");
	RobotomyRequestForm F7("Pierre");
	ShrubberyCreationForm F8("Jardin");

	Form *F9 = new PresidentialPardonForm("target");

	try
	{
		{
			F6.fullSign(boss);			
			F7.fullSign(boss);
			F8.fullSign(boss);
			F6.execute(boss);
			F7.execute(boss);
			F8.execute(boss);

			F9->fullSign(boss);
			F9->execute(boss);
		}
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete F9;
	
	return (0);
}