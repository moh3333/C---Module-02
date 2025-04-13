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
    Fixed B (Point::DeterminantTwoByTwo(a, b, point));
    Fixed S (Point::DeterminantTwoByTwo(b, c, point));
    Fixed P (Point::DeterminantTwoByTwo(c, a, point));
    return (Point::Inside(B, S, P));
}