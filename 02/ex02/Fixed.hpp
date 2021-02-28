/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:38:24 by gshona            #+#    #+#             */
/*   Updated: 2021/02/28 15:38:25 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
	int					value;
	static const int	frac_bits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed &ref);
	int					getRawBits(void);
	void				setRawBits(int const raw);
	Fixed				&operator=(const Fixed& ref);
	int					toInt(void) const;
	float				toFloat(void) const;
	Fixed				operator+(const Fixed &right);
	Fixed				operator-(const Fixed &right);
	Fixed				operator*(const Fixed &right);
	Fixed				operator/(const Fixed &right);
	bool				operator>(const Fixed &right) const;
	bool				operator<(const Fixed &right) const;
	bool				operator<=(const Fixed &right) const;
	bool				operator>=(const Fixed &right) const;
	bool				operator==(const Fixed &right) const;
	bool				operator!=(const Fixed &right) const;
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
};
std::ostream			&operator<<(std::ostream &os, const Fixed &ref);
Fixed					&min(Fixed &a, Fixed &b);
Fixed					&max(Fixed &a, Fixed &b);
#endif
