/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:45:46 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 22:59:41 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2 || !argv[1])
    {
        std::cout << "Usage: debug, info, warning or error" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(argv[1]);
    return (0);
}