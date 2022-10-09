/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:47:11 by sdesseau          #+#    #+#             */
/*   Updated: 2022/10/07 14:46:32 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	throw std::invalid_argument("Convert::InvalidInput");
}

Convert::Convert(std::string arg) : _arg(arg)
{
	// std::cout << "Default Convert constructor called..."<< std::endl;
}

Convert::~Convert()
{
	// std::cout << "Default Convert destructor called..." << std::endl;
}

std::ostream&	operator<<(std::ostream & ostream, Convert const & src)
{
	ostream << "Convert Argument: " << src.getArg() << std::endl;
	return (ostream);
}

Convert& Convert::operator=(Convert const& src)
{
	this->_arg = src.getArg();
    // std::cout << "Assignation Convert operator called" << std::endl << std::endl;
    return(*this);
}

Convert::Convert(Convert const& src) : _arg(src.getArg())
{
	this->_arg = src._arg;
    // std::cout << "Convert copy constructor called" << std::endl << std::endl;
}

std::string Convert::getArg() const { return (this->_arg); }

Convert::operator int() const
{
	int i;

	std::cout << "int    : ";
	try
	{
        i = std::stoi(this->_arg);
        std::cout << i << std::endl;
    } 
    catch (std::out_of_range &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
    catch (std::invalid_argument &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
    return (i);
}

Convert::operator double() const
{
	double d;
	
	std::cout << "double : ";
	try
	{
		d = std::stod(this->_arg);
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::out_of_range &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
    catch (std::invalid_argument &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
	return (d);
}

Convert::operator float() const
{
	float f;
	
	std::cout << "float  : ";
	try
	{
		f = std::stof(this->_arg);
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::out_of_range &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
    catch (std::invalid_argument &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
	return (f);
}

Convert::operator char() const
{
	char c = 0;

	std::cout << "char   : ";
	try
	{
		c = std::stoi(this->_arg);
		if (c > CHAR_MAX || c < CHAR_MIN)
		{
			std::cout << "ImpossibleConversion";
			return (c);
		}
		if (c < 32 || c > 126)
		{
			std::cout << "NotDisplayable" << std::endl;
			return (c);
		}
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::out_of_range &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
    catch (std::invalid_argument &e)
	{
        std::cout << "ImpossibleConversion" << std::endl;
    }
	return (c);
}