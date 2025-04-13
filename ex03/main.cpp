/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-12 10:56:56 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-12 10:56:56 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    // Define the triangle points
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    // Define the point to check
    Point point1(2, 2); // Point inside the triangle
    Point point2(6, 6); // Point outside the triangle

    // Check if point1 is inside the triangle
    if (bsp(a, b, c, point1)) {
        std::cout << "Point1 (2, 2) is inside the triangle." << std::endl;
    } else {
        std::cout << "Point1 (2, 2) is outside the triangle." << std::endl;
    }

    // Check if point2 is inside the triangle
    if (bsp(a, b, c, point2)) {
        std::cout << "Point2 (6, 6) is inside the triangle." << std::endl;
    } else {
        std::cout << "Point2 (6, 6) is outside the triangle." << std::endl;
    }

    return 0;
}
