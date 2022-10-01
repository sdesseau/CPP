/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:11:51 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/01 12:42:37 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called..." << std::endl << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called..." << std::endl;
};

std::ostream&	operator<<(std::ostream & ostream, Brain const & src)
{
	(void)src;
	return (ostream);
}

Brain& Brain::operator=(Brain const& src)
{
    std::cout << "Assignation Brain operator called" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
    return(*this);
}

Brain::Brain(Brain const& src)
{
    std::cout << "Brain copy constructor called" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}