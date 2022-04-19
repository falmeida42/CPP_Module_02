#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int              fixed_points = 0;
        static const int fractional_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed& operator=(Fixed const &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif