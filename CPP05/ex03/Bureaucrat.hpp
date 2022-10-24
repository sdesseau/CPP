/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:00:08 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 19:24:03 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const& src);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& src);
		
		std::string getName() const;
		int getGrade() const;
		
		void	upgrade();
		void	downgrade();
		void 	signForm(Form const& Form) const;
		void	executeForm(Form const & form);
	private:
		const std::string _name;
		int	_grade;
};

std::ostream&	operator<<(std::ostream & ostream, Bureaucrat const & src);