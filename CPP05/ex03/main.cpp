/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/26 18:06:10 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{

    Bureaucrat boss("boss", 1);
    Intern someRandomIntern;
    Form* rrf = someRandomIntern.makeForm("PresidentialPardon", "Jean");
    
    try
    {
		rrf->fullSign(boss);
        rrf->execute(boss);
    }
    catch(const std::invalid_argument& e)
    {
        std::cout  << e.what() << std::endl;
    }
    
    delete rrf;
	return (0);
}