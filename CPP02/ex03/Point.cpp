/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:30 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 12:56:29 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(Point const &point)
{
	*this = point;
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
}

const Point &Point::operator=(Point const &point)
{
	return (point);
}


Point::~Point()
{
}

Fixed	Point::getX() const
{
	return (this->_x);
}

Fixed	Point::getY() const
{
	return (this->_y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool ret = true;
	
	Fixed Ax = (a.getX());
	Fixed Ay = (a.getY());
	Fixed Bx = (b.getX());
	Fixed By = (b.getY());
	Fixed Cx = (c.getX());
	Fixed Cy = (c.getY());
	Fixed Px = (point.getX());
	Fixed Py = (point.getY());
		std::cout << "Ax: " << a.getX() << " Ay: " << Ay << " Bx: " << Bx << " By: " << By << " Cx: " << Cx << " Cy: " << Cy << " Px: " << Px << " Py: " << Py << std::endl;

	Fixed num = (Ax * (Cy - Ay)) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay);
	Fixed denum = (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay);
	Fixed *w1 = new Fixed(num/denum);


	num = Py - Ay - (num/denum) * (By - Ay);
	denum = Cy - Ay;
	Fixed *w2 = new Fixed(num/denum);
		std::cout << "W1: " << *w1 << " W2: " << *w2 << std::endl;

	
	if (*w1 > 0 && *w2 > 0 && (*w1 + *w2) < 1)
		ret = true;
	else
		ret = false;
	delete w1;
	delete w2;
	
	return (ret);
}

std::ostream&	operator<<(std::ostream & ostream, Point const & src)
{
	ostream << "X: " << src.getX() << " Y: " << src.getY();
	return (ostream);
}