/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:23:06 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/05 00:44:02 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor called..." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Default Intern destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, Intern const & src)
{
	(void)src;
	ostream << "Intern";
	return (ostream);
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
    std::cout << "Intern copy constructor called" << std::endl << std::endl;
}

Form *Intern::makeForm(std::string formType, std::string formTarget)
{
	switch (formType[0])
	{
		case 'P':
		{
			Form	*president = new PresidentialPardonForm(formTarget);
			return (president);
		}
		case 'R':
		{
			Form	*robot = new RobotomyRequestForm(formTarget);
			return (robot);
		}
		case 'S':
		{
			Form	*shrubbery = new ShrubberyCreationForm(formTarget);
			return (shrubbery);
		}
		default:
		{
			std::cout << "Intern can't make a form \"" << formType << "\" this form type doesn't exist." << std::endl;
			return (NULL);
		}
	}
}