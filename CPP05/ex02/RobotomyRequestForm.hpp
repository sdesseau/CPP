/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:27:59 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/03 15:55:22 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
		
		std::string	getTarget() const;

		virtual void execute(Bureaucrat const & executor) const;
    private:
		std::string _target;
		
};

std::ostream&	operator<<(std::ostream & ostream, RobotomyRequestForm const & src);