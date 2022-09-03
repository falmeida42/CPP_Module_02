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
        Fixed&   operator++();
        Fixed    operator++(int);
        Fixed&   operator--();
        Fixed    operator--(int);
        static  Fixed const  &min( Fixed const&a,  Fixed const&b);
        static  Fixed const  &max( Fixed const&a,  Fixed const&b);
        static Fixed  min(Fixed &a, Fixed &b);
        static Fixed  max(Fixed &a, Fixed &b);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat() const;
        int   toInt() const;
        
};
        std::ostream& operator<<(std::ostream& os, Fixed const &other);

#endif