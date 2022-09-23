/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:23:47 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 16:34:40 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string String = "HI THIS IS BRAIN";
    std::string *stringPTR = &String;
    std::string &stringREF = String;

    std::cout << "Adresse stockee dans String: " << &String << std::endl;
    std::cout << "Adresse stockee dans stringPTR: " << &stringPTR << std::endl;
    std::cout << "Adresse stockee dans stringREF: " << &stringREF << std::endl << std::endl;

    std::cout << "Valeur pointee par String: " << String << std::endl;
    std::cout << "Valeur pointee par stringPTR: " << stringPTR << std::endl;
    std::cout << "Valeur pointee par stringREF: " << stringREF << std::endl;
    return (0);
}