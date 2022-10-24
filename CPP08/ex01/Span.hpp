/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 07:43:06 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/22 07:47:24 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Span
{
    public:
        Span();
        Span(const unsigned int n);
        Span(Span const& src);
        ~Span();
        Span& operator=(Span const& src);

        void addNumber(int num);
        int longestSpan() const;
        int shortestSpan() const;
        
    private:
        unsigned int _size;
        
};

std::ostream& operator<<(std::ostream & ostream, Span const & src)