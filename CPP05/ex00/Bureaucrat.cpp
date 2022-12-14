/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:00:06 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 15:28:09 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
	if (MSG > 0)
		std::cout << "Default Bureaucrat constructor called..." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	if (this->_grade <= 0)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	if (MSG > 0)
		std::cout << "Default Bureaucrat constructor called..." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	if (MSG > 0)
		std::cout << "Default Bureaucrat destructor called..." << std::endl;
};

std::ostream&	operator<<(std::ostream & ostream, Bureaucrat const & src)
{
	ostream << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (ostream);
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
	this->_grade = src.getGrade();
	if (MSG > 0)
    	std::cout << "Assignation Bureaucrat operator called" << std::endl << std::endl;
    return(*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName())
{
	this->_grade = src._grade;
	if (MSG > 0)
    	std::cout << "Bureaucrat copy constructor called" << std::endl << std::endl;
}

std::string Bureaucrat::getName() const { return(this->_name); }
int Bureaucrat::getGrade() const { return((const int)this->_grade); }

void	Bureaucrat::upgrade()
{
	if (this->_grade <= 1)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	this->_grade -= 1;
}

void	Bureaucrat::downgrade()
{
	if (this->_grade >= 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	this->_grade += 1;
}