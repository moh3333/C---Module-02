/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:43:17 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/14 14:33:20 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::FractBits = 8;

Fixed::Fixed():FixedPInt(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int integer):FixedPInt(integer << Fixed::FractBits){
	std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(const float floatingPoint){
	std::cout << "Float constructor called" << std::endl;
	this->FixedPInt = roundf((floatingPoint * (1 << Fixed::FractBits)));
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        FixedPInt = (other).getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return (FixedPInt);
}

void Fixed::setRawBits(int const raw){
    FixedPInt = raw;
}

float	Fixed::toFloat(void) const {
	return (FixedPInt / (float)(1 << Fixed::FractBits));
}

int	Fixed::toInt(void) const{
	return (FixedPInt  >> Fixed::FractBits);
}

std::ostream& operator<<(std::ostream& strm, const Fixed& fixPoint){
	strm << fixPoint.toFloat();
	return (strm);
}