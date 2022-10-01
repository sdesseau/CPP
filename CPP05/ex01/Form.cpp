/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:47:56 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/01 14:34:06 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _gradeSigned(150), _gradeExecute(150)
{
	std::cout << "Default Form constructor called..." << std::endl;
}

Form::Form(const std::string name, int gradeSigned, int gradeExecute) : _name(name), _signed(false), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	std::cout << "Default Form(with grades) constructor called..." << std::endl;
}

Form::~Form()
{
	std::cout << "Default Form destructor called..." << std::endl;
};

std::ostream&	operator<<(std::ostream & ostream, Form const & src)
{
	ostream << "Form " << src.getName() << " ,signed: " << src.getSigned() << " , grade needed to sign:" << src.getSignedGrade() << ", grade needid to execute: " << src.getExecuteGrade();
	return (ostream);
}

Form& Form::operator=(Form const& src)
{
	this->_signed = src.getSigned();
	this->_gradeExecute = src.getExecuteGrade();
	this->_gradeSigned = src.getSignedGrade();
    std::cout << "Assignation Form operator called" << std::endl << std::endl;
    return(*this);
}

Form::Form(Form const& src)
{
	this->_signed = src.getSigned();
	this->_gradeExecute = src.getExecuteGrade();
	this->_gradeSigned = src.getSignedGrade();
    std::cout << "Form copy constructor called" << std::endl << std::endl;
}

std::string	Form::getName() const { return (this->_name); }
int	Form::getSignedGrade() const { return (this->_gradeSigned); }
int	Form::getExecuteGrade() const { return (this->_gradeExecute); }
bool	Form::getSigned() const { return (this->_signed); }

// void	Form::setSign() { this->_signed = true; }


void Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSignedGrade())
		this->_signed = true;
	else
		throw std::invalid_argument("Form::GradeTooLowException");
}

void Form::signForm(Bureaucrat const& bureaucrat)
{
	if (this->getSigned() == false)
		std::cout << bureaucrat.getName() << " couldn't sign " << this->getName() << " because Form::GradeTooLowException" << std::endl;
	else
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
}