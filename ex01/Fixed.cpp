#include "Fixed.hpp"

const int FractBits = 8;

Fixed::Fixed():FixedPInt(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other):FixedPInt(other.FixedPInt){
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        FixedPInt = (other).getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called\n";
    return (FixedPInt);
}

void Fixed::setRawBits(int const raw){
    FixedPInt = raw;
}