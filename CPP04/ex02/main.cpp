/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:18:32 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/19 18:29:45 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	*cat2 = *cat1;
	delete cat1;
	delete cat2;


	Cat	cat;
	Dog	dog;

	Cat copycat = cat;
	Dog	copygog(dog);

	Animal*	animal[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			std::cout << ((Dog*)animal[i])->getBrain()->getIdea(rand() % 100) << std::endl;
		else
			std::cout << ((Cat*)animal[i])->getBrain()->getIdea(rand() % 100) << std::endl;
		animal[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete animal[i];
}