/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:43:40 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/14 16:48:28 by mthamir          ###   ########.fr       */
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
    ~Fixed();
    
	Fixed&	operator=(const Fixed& other);
    bool	operator>(const Fixed& other) const;
    bool	operator<(const Fixed& other) const;
    bool	operator>=(const Fixed& other) const;
    bool	operator<=(const Fixed& other) const;
    bool	operator==(const Fixed& other) const;
    bool	operator!=(const Fixed& other) const;
    Fixed	operator+(const Fixed& other);
    Fixed	operator-(const Fixed& other);
    Fixed	operator*(const Fixed& other);
    Fixed	operator/(const Fixed& other);
    Fixed&	operator++();
    Fixed	operator++(int);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& strm, const Fixed& fixPoint);

#endif