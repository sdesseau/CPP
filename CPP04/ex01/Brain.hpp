/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:11:59 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/01 12:24:39 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const& src);
		~Brain();
		Brain& operator=(Brain const& src);
	private:
		std::string _ideas[100];
};

std::ostream&	operator<<(std::ostream & ostream, Brain const & src);