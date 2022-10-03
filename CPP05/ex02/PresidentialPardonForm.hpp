/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:27:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/03 15:49:57 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
		
		std::string	getTarget() const;

		virtual void execute(Bureaucrat const & executor) const;
    private:
		std::string _target;
		
};

std::ostream&	operator<<(std::ostream & ostream, PresidentialPardonForm const & src);