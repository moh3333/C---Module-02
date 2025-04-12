/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-12 10:56:47 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-12 10:56:47 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed eraGLoibal = Point::TriangleEra(a, b, c);
    Fixed era1 = Point::TriangleEra(point, b, c);
    Fixed era2 = Point::TriangleEra(a, point, c);
    Fixed era3 = Point::TriangleEra(a, b, point);
    std::cout << eraGLoibal.toFloat() << "\n";
    std::cout << era1.toFloat() << "\n";
    std::cout << era2.toFloat() << "\n";
    std::cout << era3.toFloat() << "\n";
    Fixed add(era1 + era2 + era3);
    return (eraGLoibal == add);
}