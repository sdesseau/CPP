/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:05:32 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 17:54:03 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const& src);
		virtual ~WrongCat();
		WrongCat& operator=(WrongCat const& src);
		virtual void makeSound() const;
};

std::ostream&	operator<<(std::ostream & ostream, WrongCat const & src);