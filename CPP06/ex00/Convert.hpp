/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:47:12 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/07 14:46:28 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class Convert
{
	public:
		Convert();
		Convert(std::string arg);
		Convert(Convert const& src);
		~Convert();
		Convert& operator=(Convert const& src);

		std::string getArg() const;

		operator char() const;
		operator int() const;
		operator float() const;
		operator double() const;
	private:
		std::string _arg;
};

std::ostream&	operator<<(std::ostream & ostream, Convert const & src);