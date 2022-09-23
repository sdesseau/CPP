/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:29:43 by sdesseau          #+#    #+#             */
/*   Updated: 2022/08/19 15:50:08 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int		arg = 1;
	int		i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (arg < argc)
		{
			for (i = 0; argv[arg][i]; i++)
				std::cout << (char)std::toupper(argv[arg][i]);
			arg++;
		}
		std::cout << std::endl;
	}
	return (0);
}