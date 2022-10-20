/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:11:51 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 18:26:44 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Brain.hpp"

Brain::Brain()
{
	const std::string examples[] = {
		"I want to sleep...",
		"I want food...",
		"I want pets...",
		"I want to go for a walk...",
		"I want water...",
		"I want a treat..." };
	for (int i = 0; i < 100; i++)
	{
		int my_rand = rand();
		// std::cout << "rand : " << my_rand << std::endl;
		this->_ideas[i] = examples[my_rand % (sizeof(examples) / sizeof(std::string))];
	}
	// std::cout << "Default Brain constructor called..." << std::endl << std::endl;
}

Brain::~Brain()
{
	// std::cout << "Default Brain destructor called..." << std::endl;
};

Brain& Brain::operator=(Brain const& src)
{
    // std::cout << "Assignation Brain operator called" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
    return(*this);
}

Brain::Brain(Brain const& src)
{
    // std::cout << "Brain copy constructor called" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

const std::string& Brain::getIdea(int index) const { return this->_ideas[index]; }