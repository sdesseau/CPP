/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:43 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 16:59:43 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA {

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack(void);

private:
    std::string _name;
    Weapon &_weapon;
        
};