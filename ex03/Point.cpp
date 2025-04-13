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

Point::Point(const Point& other){}

Point&  Point::operator=(const Point& other){ return (*this); }

Point::~Point(){}

Fixed Point::getX() const{
    return (x);
}

Fixed Point::getY() const{
    return (y);
}

Fixed Point::DeterminantTwoByTwo(Point const& a, Point const& b, Point const& p){
    float x1 = a.getX().toFloat() - b.getX().toFloat();
    float y1 = a.getY().toFloat() - b.getY().toFloat();
    float x2 = a.getY().toFloat() - p.getY().toFloat();
    float y2 = a.getY().toFloat() - p.getY().toFloat();
    return (Fixed((x1 * y2) - (x2 * y1)));
}

bool Point::Inside(Fixed& B, Fixed& S , Fixed& P){
    if ((B.toFloat() < 0.f && S.toFloat() < 0.f && P.toFloat() < 0.f)
        || (B.toFloat() > 0.f && S.toFloat() > 0.f && P.toFloat() > 0.f))
        return (true);
    return (false);
}
