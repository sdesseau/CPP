/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:09:20 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/07 15:25:46 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base*	base = generate();

	std::cout << " --- [ Identify from Pointer ] ---" << std::endl;
	identify(base);
	std::cout << std::endl << " --- [ Identify from Reference ] ---" << std::endl;
	identify(*base);
	return (0);
}