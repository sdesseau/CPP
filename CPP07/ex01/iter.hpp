/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:57:13 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/09 16:28:22 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void printElem(T const & elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void iter (T *tab, int size, void fct(T const &elem)) {
	for (int i = 0; i < size; i++)
		fct(tab[i]);
}