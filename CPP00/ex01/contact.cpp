/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:05:22 by sdesseau          #+#    #+#             */
/*   Updated: 2022/08/30 17:48:02 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

std::string Contact::get_Fname() const
{
    return fName;
}

std::string Contact::get_Lname() const
{
    return lName;
}

std::string Contact::get_Nname() const
{
    return nName;
}

std::string Contact::get_Pnumber() const
{
    return pNumber;
}

std::string Contact::get_Dsecrets() const
{
    return dSecrets;
}

int Contact::get_Id() const
{
    return id;
}

void Contact::setFname(std::string str)
{
    fName = str;
}

void Contact::setLname(std::string str)
{
    lName = str;
}

void Contact::setNname(std::string str)
{
    nName = str;
}

void Contact::setPnumber(std::string str)
{
    pNumber = str;
}

void Contact::setDsecrets(std::string str)
{
    dSecrets = str;
}

void Contact::setId(int nb)
{
    id = nb;
}

void print_Contact(std::string str)
{
    int i = 0;

    if (str.length() > 10)
    {
        str[9] = '.';
        while (str[i] && i < 10)
        {
            std::cout << str[i];
            i++;
        }
    }
    else
        std::cout << std::setw(10) << str;
}