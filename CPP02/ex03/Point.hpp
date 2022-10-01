/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:32 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/27 12:52:56 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Fixed const x, Fixed const y);
		Point(Point const &point);
		const Point &operator=(Point const &a);
		~Point();

		Fixed	getX() const;
		Fixed	getY() const;
	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream&	operator<<(std::ostream & ostream, Point const & src);