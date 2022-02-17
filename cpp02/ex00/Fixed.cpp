#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	_value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignement operator called\n";
	_value = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return _value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called\n";
	_value = raw;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
}
