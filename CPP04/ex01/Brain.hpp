/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:11:59 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 18:07:55 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const& src);
		~Brain();
		Brain& operator=(Brain const& src);
		const std::string& getIdea(int index) const;
	private:
		std::string _ideas[100];
};