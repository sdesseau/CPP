/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 07:43:02 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/31 15:19:39 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span s(11);
    s.addNumber(30);
    s.addNumber(10);
    s.addNumber(425);
    s.addNumber(1);
    std::cout << "Tab : { 30, 10, 425, 1 }" << std::endl;
    
    std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << s.longestSpan() << std::endl;

    Span a(5);
    a.addNumber(31);
    a.addNumber(5);
    a.addNumber(-10000);
    a.addNumber(1000);

    std::cout << std::endl << "Tab : { 31, 5, -10000, 1000 }" << std::endl;
    
    std::cout << "Shortest Span: " << a.shortestSpan() << std::endl;

    std::cout << "Longest Span: " << a.longestSpan() << std::endl;

    // call addNumber with a vector of int
    std::vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(987);

    try {
    std::cout << std::endl << "Tab : { 1, 3, 5, 987 }" << std::endl;
    s.addNumber(v.begin(), v.end());
    // print tab s 
    for (unsigned long int i = 0; i < s.getVector().size(); i++)
        std::cout << s.getVector()[i] << " ";
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
    std::cout << std::endl << "Tab : { 30, 10, 425, 1, 1, 3, 5, 987 }" << std::endl;
    s.addNumber(v.begin(), v.end());
    // print tab s 
    for (unsigned long int i = 0; i < s.getVector().size(); i++)
        std::cout << s.getVector()[i] << " ";
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl << std::endl;
    }


    Span sp = Span(10000);
	std::vector<int> v2;
	// 1 to 9999
	for (int i = 0; i < 10000; i++)
		v2.push_back(i);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(v2.begin(), v2.end());
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
    return(0);
}