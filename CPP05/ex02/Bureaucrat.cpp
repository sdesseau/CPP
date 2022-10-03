/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:00:06 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/03 16:00:37 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called..." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(150)
{
	std::cout << "Default Bureaucrat(name) constructor called..."<< std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name(""), _grade(grade)
{
	std::cout << "Default Bureaucrat constructor called..." << std::endl;
	if (this->_grade > 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	if (this->_grade <= 0)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Default Bureaucrat constructor called..." << std::endl;
	if (this->_grade > 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	if (this->_grade <= 0)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
}

Bureaucrat::~Bureaucrat()
{
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
    std::cout << "Assignation Bureaucrat operator called" << std::endl << std::endl;
    return(*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName())
{
	this->_grade = src._grade;
    std::cout << "Bureaucrat copy constructor called" << std::endl << std::endl;
}

std::string Bureaucrat::getName() const { return(this->_name); }
int Bureaucrat::getGrade() const { return((const int)this->_grade); }

void	Bureaucrat::upgrade()
{
	this->_grade -= 1;
	if (this->_grade <= 0)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
}

void	Bureaucrat::downgrade()
{
	this->_grade += 1;
	if (this->_grade > 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (this->getGrade() < form.getExecuteGrade())
		std::cout << "Bureaucrat " << this->getName() << "executed form " << form.getName() << std::endl;
	else
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
}