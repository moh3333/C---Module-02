/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-12 10:57:01 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-12 10:57:01 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float& x_val, const float& y_val);
    Point(const Point& other);
    Point&  operator=(const Point& other);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
    static Fixed DeterminantTwoByTwo(Point const& a, Point const& b, Point const& p);
    static bool Inside(Fixed& B, Fixed& S , Fixed& P);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);