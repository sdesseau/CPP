/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:40:39 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/07 14:54:52 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {
}

Data::Data(Data const & src) {
    *this = src;
}

Data::~Data(void) {
}

Data::Data(std::string str) : _str(str) {
    
}

Data&  Data::operator=(Data const & src) {
    _str = src._str;
    return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Data &src)
{
    ostream << "Data String: " << src.getStr() << std::endl;
    return (ostream);
}

std::string Data::getStr() const { return (this->_str); }