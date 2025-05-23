/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:42:54 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/14 17:18:34 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractBits = 8;

Fixed::Fixed() : FixedPInt(0) {}

Fixed::Fixed(const Fixed& other){
	*this = other;
}

Fixed::Fixed(const int integer):FixedPInt(integer << Fixed::FractBits){}


Fixed::Fixed(const float floatingPoint){
	this->FixedPInt = roundf((floatingPoint * (1 << Fixed::FractBits)));
}

Fixed& Fixed::operator=(const Fixed& other){
    if (this != &other)
        FixedPInt = (other).getRawBits();
    return (*this);
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const {
    return (FixedPInt);
}

void Fixed::setRawBits(int const raw){
    FixedPInt = raw;
}

float	Fixed::toFloat(void) const{
	return (FixedPInt / (float)(1 << Fixed::FractBits));
}

int	Fixed::toInt(void) const {
	return (FixedPInt  >> Fixed::FractBits);
}

std::ostream& operator<<(std::ostream& strm, const Fixed& fixPoint){
	strm << fixPoint.toFloat();
	return (strm);
}

bool  Fixed::operator>(const Fixed& other) const {
	return (FixedPInt > other.FixedPInt); 
}

bool  Fixed::operator<(const Fixed& other) const {
	return (FixedPInt < other.FixedPInt);
}

bool  Fixed::operator>=(const Fixed& other) const {
	return (FixedPInt >= other.FixedPInt);
}

bool  Fixed::operator<=(const Fixed& other) const {
	return (FixedPInt <= other.FixedPInt);
}

bool  Fixed::operator==(const Fixed& other) const {
	return (FixedPInt == other.FixedPInt);
}

bool  Fixed::operator!=(const Fixed& other) const{
	return (FixedPInt != other.FixedPInt);
}

Fixed  Fixed::operator+(const Fixed& other){
	Fixed ret;
	ret.FixedPInt = this->FixedPInt + other.FixedPInt;
	return (ret);
}

Fixed  Fixed::operator-(const Fixed& other){
	Fixed ret;
	ret.FixedPInt = this->FixedPInt - other.FixedPInt;
	return (ret);	
}

Fixed  Fixed::operator*(const Fixed& other){
	Fixed ret;
	ret.FixedPInt = ((this->FixedPInt * other.FixedPInt) >> FractBits);
	return (ret);
}

Fixed  Fixed::operator/(const Fixed& other){
	Fixed ret;
	if (other.FixedPInt == 0)
		return (ret.setRawBits(0), ret);
	ret.FixedPInt = (this->FixedPInt / (float)other.FixedPInt) * (1 << FractBits);
	return (ret);
}

Fixed&  Fixed::operator++(void){
	this->FixedPInt += 1;
	return (*this);
}

Fixed  Fixed::operator++(int){
	Fixed ret = *this;
	++(*this);
	return (ret);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b){
	if (a > b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b){
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b){
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b){
	if (a < b)
		return (a);
	return (b);
}
