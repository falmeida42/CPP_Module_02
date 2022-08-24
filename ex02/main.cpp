#include "Fixed.hpp"

int main(void) {
    
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << std::endl;

    std::cout << "a is a + a = " << a + a << std::endl;
    std::cout << "b is b + a = " << b + a << std::endl;
    std::cout << "c is c + a = " << c + a << std::endl;
    std::cout << "d is d + a = " << d + a << std::endl;

    std::cout << std::endl;

    std::cout << "a is a + b = " << a + b << std::endl;
    std::cout << "b is b + b = " << b + b << std::endl;
    std::cout << "c is c + b = " << c + b << std::endl;
    std::cout << "d is d + b = " << d + b << std::endl;

    

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}