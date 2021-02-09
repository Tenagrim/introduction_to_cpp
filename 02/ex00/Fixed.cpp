#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	value = 0;
}

Fixed::Fixed(const Fixed &ref) : value(ref.value)
{
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called\n";
	return(value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	value = raw;
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called\n";
	value = ref.value;
	return (*this);
}