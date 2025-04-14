/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:56:56 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/14 16:44:33 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point point1(2, 2); 
    Point point2(6, 6); 
    if (bsp(a, b, c, point1)) {
        std::cout << "Point1 (2, 2) is inside the triangle." << std::endl;
    } else {
        std::cout << "Point1 (2, 2) is outside the triangle." << std::endl;
    }
    if (bsp(a, b, c, point2)) {
        std::cout << "Point2 (6, 6) is inside the triangle." << std::endl;
    } else {
        std::cout << "Point2 (6, 6) is outside the triangle." << std::endl;
    }
    return 0;
}
