#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    int FixedPInt;
    static const int FractBits;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int integer);
    Fixed&  operator=(const Fixed& other);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

#endif