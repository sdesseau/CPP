/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:22:47 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 15:02:05 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Intern
{
    public:

        Intern(void);
        Intern(Intern const & src);
        ~Intern(void);
        Form	*makeForm(std::string formType, std::string formTarget);
        Intern&     operator=(Intern const & src);
};