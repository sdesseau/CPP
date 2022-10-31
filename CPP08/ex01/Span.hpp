/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 07:43:06 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/31 15:34:06 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public:
        Span();
        Span(const unsigned int n);
        Span(Span const& src);
        ~Span();
        Span& operator=(Span const& src);

        void addNumber(int num);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int longestSpan() const;
        int shortestSpan() const;

        unsigned int getSize() const;
        std::vector<int> getVector() const;
        
    private:
        unsigned int _size;
        std::vector<int> _v;
        
};