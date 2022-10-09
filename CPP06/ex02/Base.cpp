/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:07:24 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/07 15:41:11 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{}

Base* generate(void)
{
	srand(time(NULL));
	std::cout << std::endl << "Generating ";
	int random = rand() % 3;
	switch (random)
	{
		case 0:
        	std::cout << "A" << std::endl << std::endl;
			return (new A);
		case 1:
        	std::cout << "B" << std::endl << std::endl;
			return (new B);
		default:
        	std::cout << "C" << std::endl << std::endl;
			return (new C);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	identify(&p);
}