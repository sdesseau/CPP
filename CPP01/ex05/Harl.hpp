/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:45:43 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 22:53:51 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl {
    
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
    
    private: 
        void debug( void ) const;
        void info( void ) const;
        void warning( void ) const;
        void error( void ) const;
};