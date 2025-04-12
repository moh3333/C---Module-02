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

Fixed Point::TriangleEra(Point const& a, Point const& b, Point const& c){
    float x1 = a.getX().toFloat();
    float y1 = a.getY().toFloat();
    float x2 = b.getX().toFloat();
    float y2 = b.getY().toFloat();
    float x3 = c.getX().toFloat();
    float y3 = c.getY().toFloat();

    float determinant = ((x1 * (y2 - y3))) + x2 * (y3 - y1) + x3 * (y1 - y2);
    std::cout << "here  "<< x2 << "\n";
    return (Fixed(std::abs(determinant) / 2.0f));
}

