/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:26:36 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/03 15:54:11 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("")
{
	std::cout << "Default PresidentialPardonForm constructor called..." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Default PresidentialPardonForm(with grades) constructor called..." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, PresidentialPardonForm const & src)
{
	ostream << "PresidentialPardonForm signed: " << src.getSigned() << " , grade needed to sign:" << src.getSignedGrade() << ", grade needid to execute: " << src.getExecuteGrade();
	return (ostream);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src)
{
	this->_target = src._target;
    std::cout << "Assignation PresidentialPardonForm operator called" << std::endl << std::endl;
    return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form(src), _target(src.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl << std::endl;
}

std::string PresidentialPardonForm::getTarget() const { return (this->_target); }

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
    {
        std::cout << executor.getName() + " are not high enough to execute this form" << std::endl;
        throw std::invalid_argument("Form::GradeTooLowException");
    }
    else if (!this->getSigned()) {
        std::cout << this->getName() + " cannot be executed because it is not signed" << std::endl;
        throw std::invalid_argument("Form::FormNotSignedException");;
    }
    std::cout << executor.getName() + " executes " + this->getName() << std::endl;

    std::cout << this->getTarget() + " has been pardoned by Zafod Beeblebrox." << std::endl;
}