/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:56:59 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/14 17:30:44 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const float& x_val, const float& y_val):x(Fixed(x_val)), y(Fixed(y_val)){
}

Point::Point(const Point& other):x(other.x), y(other.y){}

Point&  Point::operator=(const Point& other){

	(void)other;
    return (*this); 
}

Point::~Point(){}

const Fixed& Point::getX() const{
    const Fixed& ret  = x;
    return (ret);
}

const Fixed& Point::getY() const{
    const Fixed& ret = y;
    return (ret);
}

Fixed Point::DeterminantTwoByTwo(Point const& a, Point const& b, Point const& p) {

    Fixed xa = a.getX();
    Fixed ya = a.getY();
    Fixed xb = b.getX();
    Fixed yb = b.getY();
    Fixed xp = p.getX();
    Fixed yp = p.getY();

    Fixed x1 = xb - xa;
    Fixed y1 = yb - ya;
    Fixed x2 = xp - xa;
    Fixed y2 = yp - ya;
    Fixed result = x1 * y2 - x2 * y1;

    return (result);
}

bool Point::Inside(Fixed& B, Fixed& S , Fixed& P){
    Fixed other;
    if ((B < other && S < other && P < other)
        || (B > other && S > other && P > other))
        return (true);
    return (false);
}
