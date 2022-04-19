#include "Fixed.hpp"

Fixed::Fixed() { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &copy) { 
    std::cout << "Copy constructor called" << std::endl; 
    *this = copy;
}

Fixed& Fixed::operator=(Fixed const &other) {
   std::cout << "Copy assignment operator called" << std::endl;
   
   if (this != &other)
    this->fixed_points = other.getRawBits();
   return (*this);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_points);
}

void Fixed::setRawBits( int const raw ) { fixed_points = raw; }