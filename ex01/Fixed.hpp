#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        static const int fractional_bits = 8;
        int              fixed_points = 0;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int &copy);
        Fixed(const float &copy);
        Fixed& operator=(Fixed const &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat() const;
};
        std::ostream& operator<<(std::ostream& os, Fixed &other);

#endif