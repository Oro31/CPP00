#ifndef FIXED_HPP
#define FIXED_HPP

#define GREEN "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <ostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>

class	Fixed {
	public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float i);
	Fixed(const Fixed &fixed);
	~Fixed(void);

	Fixed &operator=(const Fixed &fixed);
	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	bool operator>(const Fixed &fixed);
	bool operator<(const Fixed &fixed);
	bool operator>=(const Fixed &fixed);
	bool operator<=(const Fixed &fixed);
	bool operator==(const Fixed &fixed);
	bool operator!=(const Fixed &fixed);


	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);

	float	toFloat(void) const;
	int		toInt(void) const;

	private:
	int					_fvalue;
	static const int	_nb_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
