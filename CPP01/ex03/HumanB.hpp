/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:47 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 20:09:53 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB {

private:
    std::string _name;
    Weapon *_weapon;

public:
    void    setWeapon(Weapon &weapon);
    HumanB(std::string name, Weapon &weapon);
    HumanB(std::string name);
    ~HumanB();
    void    attack(void);
        
};