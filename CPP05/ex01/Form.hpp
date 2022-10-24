/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:47:58 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/24 19:16:02 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, int gradeSigned, int gradeExecute);
		Form(Form const& src);
		~Form();
		Form& operator=(Form const& src);
		
		void	beSigned(Bureaucrat const& bureaucrat);
		void	fullSign(Bureaucrat& bureaucrat);
		
		std::string	getName() const;
		int	getSignedGrade() const;
		int	getExecuteGrade() const;
		bool	getSigned() const;
	private:
		const std::string _name;
		bool _signed;
		int	_gradeSigned;
		int	_gradeExecute;
};

std::ostream&	operator<<(std::ostream & ostream, Form const & src);