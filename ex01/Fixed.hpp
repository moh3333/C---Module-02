/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:54:19 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/11 17:43:38 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    int FixedPInt;
    static const int FractBits;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int integer);
	Fixed(const float floatingPoint);
    Fixed&  operator=(const Fixed& other);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};
std::ostream& operator<<(std::ostream& strm, const Fixed& fixPoint);


#endif