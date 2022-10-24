/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:47:58 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 15:48:23 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, int gradeSigned, int gradeExecute);
		Form(Form const& src);
		virtual ~Form();
		Form& operator=(Form const& src);
		
		void	beSigned(Bureaucrat const& bureaucrat);
		void	signForm(Bureaucrat const& bureaucrat);
		void	fullSign(Bureaucrat const& bureaucrat);


		std::string	getName() const;
		int	getSignedGrade() const;
		int	getExecuteGrade() const;
		bool	getSigned() const;

        virtual void execute(Bureaucrat const &src) const = 0;
	protected:
		const std::string _name;
		bool _signed;
		int	_gradeSigned;
		int	_gradeExecute;
};

std::ostream&	operator<<(std::ostream & ostream, Form const & src);