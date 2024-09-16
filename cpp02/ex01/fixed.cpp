/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:08:54 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/16 22:57:19 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	_raw_bits = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called\n";
	_raw_bits = value << _bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called\n";
	_raw_bits = roundf(value * (1 << _bits)); //roundf round the float
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	_raw_bits = copy._raw_bits;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		_raw_bits = src._raw_bits;
	return(*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called\n";
	return(_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called\n";
	_raw_bits = raw;
}

int Fixed::toInt(void) const
{
	return (_raw_bits >> _bits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_raw_bits) / (1 << _bits));
}

std::ostream& operator << (std::ostream& out, const Fixed& nbr)
{
	return (out << nbr.toFloat());
}