/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:04:26 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 14:05:05 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const& src);
		void	makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
};

std::ostream&	operator<<(std::ostream & ostream, WrongAnimal const & src);