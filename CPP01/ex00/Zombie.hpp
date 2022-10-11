/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:10:44 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 15:11:58 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {

public:
    Zombie(std::string name);
    ~Zombie();
    void    announce();
private:
    std::string _name;
        
};


Zombie* newZombie(std::string name);
void    randomChump(std::string name);