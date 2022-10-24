/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:25:29 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 15:53:51 by sdesseau         ###   ########.fr       */
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
  try{
        Bureaucrat josh("josh", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("PresidentialPardon", "tree");
		rrf->fullSign(josh);
        rrf->execute(josh);
    }
    catch(const std::invalid_argument& e)
    {
        std::cout  << e.what() << std::endl;
    }
    
	return (0);
}