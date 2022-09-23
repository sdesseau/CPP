/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:27:51 by sdesseau          #+#    #+#             */
/*   Updated: 2022/08/30 18:01:46 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string input;
	PhoneBook PhoneBook;

	std::cout << "WELECOME_TO_AWESOME_PHONE_BOOK!" << std::endl;
	while (1)
	{
		std::cout << "COMMAND: ";
		if (std::getline(std::cin, input) == 0)
			return (0);
		else if (input == "ADD")
			PhoneBook.add();
		else if (input == "SEARCH")
		{
			PhoneBook.showAllContact();
			PhoneBook.search();
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Error: you can only use (ADD, SEARCH, EXIT)" << std::endl;
	}
	return (0);
}