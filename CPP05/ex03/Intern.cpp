/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:23:06 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 15:52:44 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	if (MSG > 0)
		std::cout << "Default Intern constructor called..." << std::endl;
}

Intern::~Intern()
{
	if (MSG > 0)
		std::cout << "Default Intern destructor called..." << std::endl;
}

Intern& Intern::operator=(Intern const& src)
{
	(void)src;
    std::cout << "Assignation Intern operator called" << std::endl << std::endl;
    return(*this);
}

Intern::Intern(Intern const& src)
{
	*this = src;
	if (MSG > 0)
    	std::cout << "Intern copy constructor called" << std::endl << std::endl;
}

Form *Intern::makeForm(std::string formType, std::string formTarget)
{
	int lvl = -1;
	std::string differentForm[] = {
		"PresidentialPardon",
		"RobotomyRequest",
		"ShruberryCreation"
	};

	for (int i = 0; i < 3; i++)
	{
		if (formType == differentForm[i])
			lvl = i;
	}
	
	switch (lvl)
	{
		case 0:
		{
			Form	*president = new PresidentialPardonForm(formTarget);
			return (president);
		}
		case 1:
		{
			Form	*robot = new RobotomyRequestForm(formTarget);
			return (robot);
		}
		case 2:
		{
			Form	*shrubbery = new ShrubberyCreationForm(formTarget);
			return (shrubbery);
		}
		default:
		{
			std::cout << "Intern can't make a form \"" << formType << "\", this form type doesn't exist." << std::endl;
			throw std::invalid_argument("Intern::Form::FormDontExist");
		}
	}
}