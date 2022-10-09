/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   watever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:32:32 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/09 14:50:44 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
T max (T a, T b) {
 return (a > b ? a : b);
}

template <typename T>
T min (T a, T b) {
 return (a < b ? a : b);
}

template <typename T>
void swap (T &a, T &b) {
	T	c = a;
	a = b;
	b = c;
}