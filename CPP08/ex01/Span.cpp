/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 07:43:04 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/31 15:34:04 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _v()
{
    if (MSG > 0)
        std::cout << "Span default constructor called..." << std::endl;
}

Span::Span(const unsigned int n) : _size(n)
{
    if (MSG > 0)
        std::cout << "Span constructor(with param) called..." << std::endl;
}

Span::Span(Span const& src)
{
   if (MSG > 0)
        std::cout << "Span copy constructor called..." << std::endl;
    *this = src;
}

Span::~Span()
{
    if (MSG > 0)
        std::cout << "Span destructor called..." << std::endl;
}

Span &Span::operator=(Span const& src)
{
    if (MSG > 0)
        std::cout << "Span assignation operator called..." << std::endl;
    this->_size = src.getSize();
    this->_v = src.getVector();
    return (*this);
}

void Span::addNumber(int num)
{
    if (this->_v.size() < this->_size)
        this->_v.push_back(num);
    else
        throw std::invalid_argument("No room left to add a number");
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_size - this->_v.size() < std::distance(begin, end))
        throw std::invalid_argument("Not enough room for all the numbers");
    this->_v.insert(this->_v.end(), begin, end);
}

int Span::shortestSpan() const
{
    std::vector<int> tmp = this->_v;
    
    if (this->_v.size() <= 1)
        throw std::invalid_argument("Not enough numbers for a span");
    sort(tmp.begin(), tmp.end());
    int shortest = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size(); i++)
    {
        if ((tmp[i] - tmp[i - 1]) < shortest)
            shortest = tmp[i] - tmp[i - 1];
    }
    return (shortest);
}

int Span::longestSpan() const
{
   std::vector<int> tmp = this->_v;
    
    if (this->_v.size() <= 1)
        throw std::invalid_argument("Not enought numbers for a span");
    sort(tmp.begin(), tmp.end());
    return (*(tmp.end() - 1) - *tmp.begin());
}

unsigned int Span::getSize() const { return (this->_size); }
std::vector<int> Span::getVector() const { return (this->_v); }
