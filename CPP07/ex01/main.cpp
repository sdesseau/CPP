/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:57:47 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/09 16:29:56 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int	tab[] = {0, 1, 2, 3, 4};

	std::cout << "Int tab:" << std::endl;
	::iter(tab, 5, printElem);

	double	tab2[] = {15.26, 14.14, 2.02, -3.78, 4.0};

	std::cout << std::endl << "Double tab:" << std::endl;
	::iter(tab2, 5, printElem);

	std::string	str[] = {"two", "forty"};
	
	std::cout << std::endl << "String tab:" << std::endl;
	::iter(str, 2, printElem);

	return (0);
}