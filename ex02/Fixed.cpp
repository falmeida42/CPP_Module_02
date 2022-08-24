#include "Fixed.hpp"

Fixed::Fixed() { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &copy) { 
    std::cout << "Copy constructor called" << std::endl; 
    (*this) = copy;
}

Fixed::Fixed(int const &copy) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed_points = copy << fractional_bits;
}

Fixed::Fixed(const float &copy) {
    std::cout << "Float constructor called" << std::endl;
    this->fixed_points = (int)roundf(copy * (1 << Fixed::fractional_bits));
}

Fixed& Fixed::operator=(Fixed const &other) {
   std::cout << "Copy assignment operator called" << std::endl;
   
   if (this != &other)
    this->fixed_points = other.getRawBits();
   return (*this);
}

bool  Fixed::operator>(Fixed const &other) const {
   return(this->fixed_points > other.fixed_points);
}

bool  Fixed::operator<(Fixed const &other) const {
   return(this->fixed_points < other.fixed_points);
}

bool  Fixed::operator>=(Fixed const &other) const {
   return(this->fixed_points >= other.fixed_points);
}

bool  Fixed::operator<=(Fixed const &other) const {
   return(this->fixed_points <= other.fixed_points);
}

bool  Fixed::operator==(Fixed const &other) const {
   return(this->fixed_points == other.fixed_points);
}

bool  Fixed::operator!=(Fixed const &other) const {
   return(this->fixed_points != other.fixed_points);
}

float   Fixed::operator+(Fixed const &other) const {
    return(this->toFloat() + other.toFloat());
}

float   Fixed::operator-(Fixed const &other) const {
    return(this->toFloat() - other.toFloat());
}

float   Fixed::operator*(Fixed const &other) const {
    return(this->toFloat() * other.toFloat());
}

float   Fixed::operator/(Fixed const &other) const {
    return(this->toFloat() / other.toFloat());
}

std::ostream& operator<<(std::ostream& os, Fixed const &other) {
   os << other.toFloat();
   return os;
}

int Fixed::getRawBits( void ) const {
    return (fixed_points);
}

void Fixed::setRawBits( int const raw ) { fixed_points = raw; }

float Fixed::toFloat() const {

    return ((float) getRawBits() / (float) (1 << fractional_bits));
}

int Fixed::toInt() const {

    return (fixed_points >> fractional_bits);
}