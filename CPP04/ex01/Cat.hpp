/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:19:30 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 18:06:36 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& src);
		virtual ~Cat();
		Cat& operator=(Cat const& src);
		virtual void makeSound() const;
		Brain* getBrain() const;
	private:
		Brain* _brain;
};

std::ostream&	operator<<(std::ostream & ostream, Cat const & src);