#include "Fixed.hpp"
#define QUIET
Fixed::Fixed()
{
	#ifndef QUIET
	std::cout << "Default constructor called\n";
	#endif
	value = 0;
}

Fixed::Fixed(const int value)
{
	#ifndef QUIET
	std::cout << "Int constructor called\n";
	#endif
	this->value = value << frac_bits;
}

Fixed::Fixed(const float value)
{
	#ifndef QUIET
	std::cout << "Float constructor called\n";
	#endif
	this->value = roundf(value * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &ref) : value(ref.value)
{
	#ifndef QUIET
	std::cout << "Copy constructor called\n";
	#endif
}

Fixed::~Fixed()
{
	#ifndef QUIET
	std::cout << "Destructor called\n";
	#endif
}

int		Fixed::getRawBits(void)
{
	//std::cout << "getRawBits member function called\n";
	return(value);
}

void	Fixed::setRawBits(const int raw)
{
	//std::cout << "setRawBits member function called\n";
	value = raw;
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	#ifndef QUIET
	std::cout << "Assignation operator called\n";
	#endif
	value = ref.value;
	return (*this);
}

int		Fixed::toInt(void) const
{
	return (value >> frac_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << frac_bits));
}

Fixed	Fixed::operator+(const Fixed &right)
{
	Fixed res;
	res.setRawBits(this->value + right.value);
	return(res);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &ref)
{
	os << ref.toFloat();
	return (os);
}

Fixed	Fixed::operator-(const Fixed &right)
{
	Fixed res;
	res.setRawBits(this->value - right.value);
	return(res);
}

Fixed	Fixed::operator*(const Fixed &right)
{
	Fixed res;
	res.setRawBits(this->value * (right.value >> frac_bits));
	return(res);
}

Fixed	Fixed::operator/(const Fixed &right)
{
	Fixed res;
	res.setRawBits(this->value / (right.value << frac_bits));
	return(res);
}

bool	Fixed::operator<(const Fixed &right) const
{
	return(this->value < right.value);
}

bool	Fixed::operator>(const Fixed &right) const
{
	return(this->value > right.value);
}

bool	Fixed::operator==(const Fixed &right) const
{
	return(this->value == right.value);
}

bool	Fixed::operator!=(const Fixed &right) const
{
	return(this->value != right.value);
}

bool	Fixed::operator>=(const Fixed &right) const
{
	return(this->value >= right.value);
}

bool	Fixed::operator<=(const Fixed &right) const
{
	return(this->value <= right.value);
}

Fixed	&Fixed::operator++(void)
{
	value++;
	return(*this);
}

Fixed	&Fixed::operator--(void)
{
	value--;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp.setRawBits(this->value);
	value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp.setRawBits(this->value);
	value--;
	return (tmp);
}

Fixed					&min(Fixed &a, Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed					&max(Fixed &a, Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? b : a);
}