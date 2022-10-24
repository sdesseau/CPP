/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:27:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/24 15:47:36 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("")
{
	if (MSG > 0)
	    std::cout << "Default RobotomyRequestForm constructor called..." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	if (MSG > 0)
	    std::cout << "Default RobotomyRequestForm(with target) constructor called..." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (MSG > 0)
	    std::cout << "Default RobotomyRequestForm destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, RobotomyRequestForm const & src)
{
	ostream << "RobotomyRequestForm signed: " << src.getSigned() << " , grade needed to sign:" << src.getSignedGrade() << ", grade needid to execute: " << src.getExecuteGrade();
	return (ostream);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
	this->_target = src._target;
	if (MSG > 0)
        std::cout << "Assignation RobotomyRequestForm operator called" << std::endl << std::endl;
    return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form(src), _target(src.getTarget())
{
	if (MSG > 0)
        std::cout << "RobotomyRequestForm copy constructor called" << std::endl << std::endl;
}

std::string RobotomyRequestForm::getTarget() const { return (this->_target); }

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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

    std::cout << "bzzzzzz bzbz *bruit de vis qui se visse*" << std::endl;
	srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << this->getTarget() + " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getTarget() + " has failed to be robotomized" << std::endl;
}