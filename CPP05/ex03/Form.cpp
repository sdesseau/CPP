/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:47:56 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 19:37:55 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _gradeSigned(150), _gradeExecute(150)
{
	if (MSG > 0)
		std::cout << "Default Form constructor called..." << std::endl;
}

Form::Form(const std::string name, int gradeSigned, int gradeExecute) : _name(name), _signed(false), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute)
{
	if (this->_gradeSigned > 150 || this->_gradeExecute > 150)
		throw std::invalid_argument("Form::GradeTooLowException");
	if (this->_gradeSigned <= 0 || this->_gradeExecute <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	if (MSG > 0)
		std::cout << "Default Form(with grades) constructor called..." << std::endl;
}

Form::~Form()
{
	if (MSG > 0)
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
	if (MSG > 0)
    	std::cout << "Assignation Form operator called" << std::endl << std::endl;
    return(*this);
}

Form::Form(Form const& src) : _name(src.getName())
{
	this->_signed = src.getSigned();
	this->_gradeExecute = src.getExecuteGrade();
	this->_gradeSigned = src.getSignedGrade();
	if (MSG > 0)
    	std::cout << "Form copy constructor called" << std::endl << std::endl;
}

std::string	Form::getName() const { return (this->_name); }
int	Form::getSignedGrade() const { return (this->_gradeSigned); }
int	Form::getExecuteGrade() const { return (this->_gradeExecute); }
bool	Form::getSigned() const { return (this->_signed); }

void Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (this->_signed == true)
		throw std::invalid_argument("Form::AlreadySigned");
	else if (bureaucrat.getGrade() <= this->getSignedGrade())
		this->_signed = true;
	else
		throw std::invalid_argument("Form::GradeTooLowException");
}

void Form::fullSign(Bureaucrat const& bureaucrat)
{
	beSigned(bureaucrat);
	bureaucrat.signForm(*this);
}