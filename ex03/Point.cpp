/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-12 10:56:59 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-12 10:56:59 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const float& x_val, const float& y_val):x(Fixed(x_val)), y(Fixed(y_val)){
}

Point::Point(const Point& other):x(other.x), y(other.y){}

Point&  Point::operator=(const Point& other){ 
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
    float xa = a.getX().toFloat();
    float ya = a.getY().toFloat();
    float xb = b.getX().toFloat();
    float yb = b.getY().toFloat();
    float xp = p.getX().toFloat();
    float yp = p.getY().toFloat();

    float x1 = xb - xa;
    float y1 = yb - ya;
    float x2 = xp - xa;
    float y2 = yp - ya;

    float result = x1 * y2 - x2 * y1;


    return Fixed(result);
}

bool Point::Inside(Fixed& B, Fixed& S , Fixed& P){
    if ((B <= 0.f && S <= 0.f && P <= 0.f)
        || (B >= 0.f && S >= 0.f && P >= 0.f))
        return (true);
    return (false);
}
