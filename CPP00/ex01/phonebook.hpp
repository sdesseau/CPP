/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:29:04 by sdesseau          #+#    #+#             */
/*   Updated: 2022/08/30 18:00:01 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include "contact.hpp"

int is_number(std::string str);

class PhoneBook
{
	public:
		PhoneBook();
		void	add();
		void	showAllContact();
		void	search();
		void	showSingleContact(int index);
	private:
		Contact user[8];
		int nb_Contact;
};