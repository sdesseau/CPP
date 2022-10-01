/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:20:22 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 17:01:08 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const& src);
		virtual ~Dog();
		Dog& operator=(Dog const& src);
		virtual void makeSound() const;

	private:
		Brain *_brain;
		std::string _type;
};

std::ostream&	operator<<(std::ostream & ostream, Dog const & src);
