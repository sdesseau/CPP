/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:28:21 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/25 19:21:28 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("")
{
	if (MSG > 0)
	    std::cout << "Default ShrubberyCreationForm constructor called..." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 72, 45), _target(target)
{
	if (MSG > 0)
	    std::cout << "Default ShrubberyCreationForm(with target) constructor called..." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (MSG > 0)
	    std::cout << "Default ShrubberyCreationForm destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, ShrubberyCreationForm const & src)
{
	ostream << "ShrubberyCreationForm signed: " << src.getSigned() << " , grade needed to sign:" << src.getSignedGrade() << ", grade needid to execute: " << src.getExecuteGrade();
	return (ostream);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	this->_target = src._target;
	if (MSG > 0)
        std::cout << "Assignation ShrubberyCreationForm operator called" << std::endl << std::endl;
    return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form(src), _target(src.getTarget())
{
	if (MSG > 0)
        std::cout << "ShrubberyCreationForm copy constructor called" << std::endl << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const { return (this->_target); }

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
    {
        std::cout << executor.getName() + " are not high enough to execute this form" << std::endl;
        throw std::invalid_argument("Form::GradeTooLowException");
    }
    else if (!this->getSigned())
	{
        std::cout << this->getName() + " cannot be executed because it is not signed" << std::endl;
        throw std::invalid_argument("Form::FormNotSignedException");
    }
    std::cout << executor.getName() + " executes " + this->getName() << std::endl;

    std::fstream file;
    std::string newFileName = this->getTarget() + "_shruberry";
    file.open(newFileName.c_str(), std::fstream::out);

    if (!file)
    {
        std::cout << "Error while creating " + this->_target + "_shrubbery file" << std::endl;
        throw std::invalid_argument("Form::ErrorFileException");
    }

    file << "    oxoxoo    ooxoo    " << std::endl;
    file << "  ooxoxo oo  oxoxooo   " << std::endl;
    file << " oooo xxoxoo ooo ooox  " << std::endl;
    file << " oxo o oxoxo  xoxxoxo  " << std::endl;
    file << "  oxo xooxoooo o ooo   " << std::endl;
    file << "    ooo\\oo\\  /o/o    " << std::endl;
    file << "        \\  \\/ /      " << std::endl;
    file << "         |   /         " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         | D|          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "  ______/____\\____    " << std::endl << std::endl;
    file << "    oxoxoo    ooxoo    " << std::endl;
    file << "  ooxoxo oo  oxoxooo   " << std::endl;
    file << " oooo xxoxoo ooo ooox  " << std::endl;
    file << " oxo o oxoxo  xoxxoxo  " << std::endl;
    file << "  oxo xooxoooo o ooo   " << std::endl;
    file << "    ooo\\oo\\  /o/o    " << std::endl;
    file << "        \\  \\/ /      " << std::endl;
    file << "         |   /         " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         | D|          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "  ______/____\\____    " << std::endl << std::endl;
    file << "    oxoxoo    ooxoo    " << std::endl;
    file << "  ooxoxo oo  oxoxooo   " << std::endl;
    file << " oooo xxoxoo ooo ooox  " << std::endl;
    file << " oxo o oxoxo  xoxxoxo  " << std::endl;
    file << "  oxo xooxoooo o ooo   " << std::endl;
    file << "    ooo\\oo\\  /o/o    " << std::endl;
    file << "        \\  \\/ /      " << std::endl;
    file << "         |   /         " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         | D|          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "  ______/____\\____    " << std::endl;
    file.close();
}