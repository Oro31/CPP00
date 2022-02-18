#ifndef FIXED_HPP
#define FIXED_HPP

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

	float	toFloat(void) const;
	int		toInt(void) const;

	private:
	int					_fvalue;
	static const int	_nb_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
