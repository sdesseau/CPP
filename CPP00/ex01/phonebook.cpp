/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:51:55 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 14:10:02 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ft_stoi(std::string str)
{
    int i = 0;
    int n = 0;
    while (str[i])
    {
        n = n * 10 + str[i] - '0';
        i++;
    }
    return n;
}

std::string enter_info(std::string str)
{
	std::string input;
	std::cout << "Enter " << str << " : ";
	if (std::getline(std::cin, input) == 0)
		return ("ERROR");
	while (input.length() == 0)
	{
		std::cout << "No Empty Input, Retry.\n" << std::endl;
		input = "";
		if (std::getline(std::cin, input) == 0)
			return ("ERROR");
	}
	if (str == "Phone Number")
	{
		while (is_number(input) != 1)
		{
			std::cout << "Only Numbers.\n" << std::endl;
			input = "";
			if (std::getline(std::cin, input) == 0)
				return ("ERROR");
		}
	}
	return (input);
}

void PhoneBook::add()
{
	if (PhoneBook::nb_Contact == 8)
		PhoneBook::nb_Contact--;;
	std::string input;
	input = enter_info("First Name");
	user[PhoneBook::nb_Contact].setFname(input);
	input = enter_info("Last Name");
	user[PhoneBook::nb_Contact].setLname(input);
	input = enter_info("NickName");
	user[PhoneBook::nb_Contact].setNname(input);
	input = enter_info("Phone Number");
	user[PhoneBook::nb_Contact].setPnumber(input);
	input = enter_info("Darkest Secret");
	user[PhoneBook::nb_Contact].setDsecrets(input);
    user[PhoneBook::nb_Contact].setId(PhoneBook::nb_Contact);
    PhoneBook::nb_Contact++;
    std::cout << std::endl << "CONTACT ADDED ✅\n\n\n\n" << std::endl << std::endl;
}

void PhoneBook::showAllContact()
{
	if (PhoneBook::nb_Contact == 0)
    {
        std::cout << "Error: No Contact in memory" << std::endl;
        return ;
    }
    int i = 0;
    std::string input;
    std::cout << "\n ___________________________________________\n";
    std::cout << "|                                           |\n";
    std::cout << "|  Index   |First Name| Last Name| Nickname |\n";
    std::cout << "|                                           |";
    while (i < PhoneBook::nb_Contact)
    {
        std::cout << "\n|";
        std::cout << std::setw(10) << user[i].get_Id()+1;
        std::cout << "|";
        print_Contact(user[i].get_Fname());
        std::cout << "|";
        print_Contact(user[i].get_Lname());
        std::cout << "|";
        print_Contact(user[i].get_Nname());
        std::cout << "|";
        i++;
    }
    std::cout << "\n|___________________________________________|\n" << std::endl;
}

void PhoneBook::search()
{
	std::string input;
	
	std::cout << "Index Desired: ";
	if (std::getline(std::cin, input) == 0)
		return ;
	    while (is_number(input) == 0 || ft_stoi(input) > PhoneBook::nb_Contact || ft_stoi(input) < 1)
    {
        if (is_number(input) == 0)
            std::cout << "\nError not a number\nQuick search (type index):  ";
        else
            std::cout << "\nError index not exist\nQuick search (type index):  ";
        if (std::getline(std::cin, input) == 0)
            return ;
    }
    showSingleContact(ft_stoi(input) - 1);
}

void PhoneBook::showSingleContact(int index)
{
    std::cout << "\nContact " << index + 1 << " :\n" << std::endl;
    std::cout << "FIRST_NAME     = " << user[index].get_Fname() << std::endl;
    std::cout << "LAST_NAME      = " << user[index].get_Lname() << std::endl;
    std::cout << "NICKNAME       = " << user[index].get_Nname() << std::endl;
    std::cout << "NUMBER         = " << user[index].get_Pnumber() << std::endl;
    std::cout << "DARKEST_SECRET = " << user[index].get_Dsecrets() << std::endl;
    std::cout << std::endl;
}

PhoneBook::PhoneBook()
{
    nb_Contact = 0;
}

int is_number(std::string str)
{
    int i;

    i = 0;
    if (str.empty())
        return (0);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}