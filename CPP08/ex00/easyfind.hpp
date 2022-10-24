/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 06:51:38 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/22 07:36:20 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int toFind)
{
    typename T::iterator i = std::find(container.begin(), container.end(), toFind);
    if (i != container.end())
        return (i);
    else
        throw std::invalid_argument("Element not found...");
}