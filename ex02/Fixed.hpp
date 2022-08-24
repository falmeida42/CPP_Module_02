#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

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
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        float   operator+(const Fixed &other) const;
        float   operator-(const Fixed &other) const;
        float   operator*(const Fixed &other) const;
        float   operator/(const Fixed &other) const;
        Fixed&   operator++() const;
        Fixed    operator++(int) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat() const;
        int   toInt() const;
        
};
        std::ostream& operator<<(std::ostream& os, Fixed const &other);

#endif