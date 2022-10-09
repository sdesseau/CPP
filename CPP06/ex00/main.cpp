/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:47:15 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/07 14:35:08 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
    {
        std::cout << "Usage: ./Convert \"string\"" << std::endl;
        return (1);
    }

    Convert conv(argv[1]);

    (void)static_cast<char>(conv);
    (void)static_cast<int>(conv);
    (void)static_cast<float>(conv);
    (void)static_cast<double>(conv);

	return (0);
}