/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:35:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/21 15:12:33 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
    public:
        Array() : _size(0), _array(new T[0]) {};
        Array(unsigned int n) : _size(n), _array(new T[n]) {};
        Array(Array const& src) { *this = src; };
        ~Array() { delete[] this->_array; };
		Array& operator=(Array const& src) 
        {
            if (this == &src)
				return (*this);
			delete[] this->_array;
			this->_array = new T[src._size];
			this->_size = src._size;
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
			return (*this);
        };

        T& operator[](unsigned int index)
        {
            if (index >= this->size())
                throw std::invalid_argument("Array::OutOfRange");
            return (this->_array[index]);
        };

        unsigned int size() const { return (this->_size); };
    private:
        unsigned int _size;
        T* _array;
};