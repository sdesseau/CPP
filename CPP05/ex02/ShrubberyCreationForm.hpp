/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:28:56 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/03 15:56:54 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class ShruberryCreationForm : public Form
{
    public:
		ShruberryCreationForm();
		ShruberryCreationForm(std::string target);
		ShruberryCreationForm(ShruberryCreationForm const& src);
		~ShruberryCreationForm();
		ShruberryCreationForm& operator=(ShruberryCreationForm const& src);
		
		std::string	getTarget() const;

		virtual void execute(Bureaucrat const & executor) const;
    private:
		std::string _target;
		
};

std::ostream&	operator<<(std::ostream & ostream, ShruberryCreationForm const & src);