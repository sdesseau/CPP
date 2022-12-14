/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:44 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/12 16:51:18 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {

public:
    Zombie();
    ~Zombie();
    void    announce();
    Zombie* zombieHorde(int N, std::string name);
private:
    std::string _name;
        
};