/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:26:13 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/31 15:50:42 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <algorithm>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {};
        ~MutantStack() {};
        MutantStack(MutantStack const &mstack) {this = mstack;}
        MutantStack &operator=(MutantStack<T> const &a) { this->c = a.c; return *this; };


    	typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }

        iterator begin() const { return this->c.begin(); }
        iterator end() const { return this->c.end(); }
    
    private:

};