/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:45:45 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 12:43:51 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl created..." << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destroyed..." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string s[4] = {"debug", "info", "warning", "error"};
    
    void    (Harl::*f[4])(void)const = {&Harl::debug,
                                        &Harl::info,
                                        &Harl::warning,
                                        &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == level)
            (this->*f[i])();
    }
}

void    Harl::debug() const
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void    Harl::info() const
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning() const
{
    std::cout << "I think I deserve to have some extra bacon. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error() const
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}