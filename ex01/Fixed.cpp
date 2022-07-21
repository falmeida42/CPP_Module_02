#include "Fixed.hpp"

Fixed::Fixed() { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &copy) { 
    std::cout << "Copy constructor called" << std::endl; 
    (*this) = copy;
}

Fixed::Fixed(const int &copy) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed_points = copy;
    
}

Fixed::Fixed(const float &copy) {
    std::cout << "Float constructor called" << std::endl;
    this->fixed_points = copy;
    
}

Fixed& Fixed::operator=(Fixed const &other) {
   std::cout << "Copy assignment operator called" << std::endl;
   
   if (this != &other)
    this->fixed_points = other.getRawBits();
   return (*this);
}


std::ostream& operator<<(std::ostream& os, Fixed &other) {
   os << other.toFloat();
   return os;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_points);
}

void Fixed::setRawBits( int const raw ) { fixed_points = raw; }

float Fixed::toFloat() const {

    return ((float) getRawBits() / (float) (1 << Fixed::fractional_bits);
}