/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:09:26 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/07 14:54:48 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Data
{
    public:
        Data(void);
        Data(std::string str);
        Data(Data const & src);
        ~Data(void);
        Data&     operator=(Data const & src);

		std::string getStr() const;		

    private :
        std::string _str;
};

std::ostream    &operator<<(std::ostream &ostream, const Data &src);