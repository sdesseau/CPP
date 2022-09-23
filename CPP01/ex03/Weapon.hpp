/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 20:06:17 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {

public:
    Weapon(std::string name);
    ~Weapon();
    std::string getType() const;
    void setType(std::string newType);
private:
    std::string _type;
        
};