/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:18:16 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 17:47:13 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const& src);
		virtual ~Animal();
		Animal& operator=(Animal const& src);
		virtual void	makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string _type;
};

std::ostream&	operator<<(std::ostream & ostream, Animal const & src);