/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:30:07 by sdesseau          #+#    #+#             */
/*   Updated: 2022/08/30 17:48:15 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>

void print_Contact(std::string str);

class Contact
{
	public:
		void setFname(std::string str);
    	void setLname(std::string str);
    	void setNname(std::string str);
    	void setPnumber(std::string str);
    	void setDsecrets(std::string str);
    	void setId(int nb);
    	std::string get_Dsecrets() const;
    	std::string get_Pnumber() const;
    	std::string get_Nname() const;
    	std::string get_Lname() const;
    	std::string get_Fname() const;
    	int get_Id() const;
	
	private:
		int	id;
		std::string fName;
		std::string lName;
		std::string nName;
		std::string pNumber;
		std::string dSecrets;
};