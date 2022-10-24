/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 06:51:44 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/22 07:39:51 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << std::endl; 
}

int main()
{
	std::list<int> list;
	std::vector<int> vector;

	for (int i = 0; i <= 42; i++)
		vector.push_back(i);
	for (int i = 0; i <= 42; i++)
		vector.push_back(i);

	try
	{
		std::cout << "Try to find 12 in vector:" << std::endl;
		std::vector<int>::iterator it_vector = easyfind(vector, 12);
        std::cout << "Element found at position " << std::distance(vector.begin(), it_vector) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i <= 18; i++)
		list.push_back(i);
	for (int i = 20; i <= 42; i++)
		list.push_back(i);

	try
	{
		std::cout << "Try to find 19 in list:" << std::endl;
		std::list<int>::iterator it_list = easyfind(list, 19);
        std::cout << "Element found at position " << std::distance(list.begin(), it_list) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "19 added in list..." << std::endl;
    list.push_back(19);
    try
	{
		std::cout << "Try to find 19 in list:" << std::endl;
		std::list<int>::iterator it_list = easyfind(list, 19);
        std::cout << "Element found at position " << std::distance(list.begin(), it_list) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}