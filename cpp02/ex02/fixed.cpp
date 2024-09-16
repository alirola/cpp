/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:26:53 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/17 00:00:31 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	_raw_bits = 0;
	std::cout << "Default constructor called \n";
}

Fixed::Fixed(const Fixed& copy)
{
	_raw_bits = copy._raw_bits;
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int value)
{
	_raw_bits = value << _bits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value)
{
	_raw_bits = roundf(value * (1 << _bits));
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_raw_bits = src._raw_bits;
	return(*this);
}

bool Fixed::operator > (const Fixed& other)
{
	if (this->_raw_bits > other._raw_bits)
		return (true);
	return(false);
}

bool Fixed::operator < (const Fixed& other)
{
	if (this->_raw_bits < other._raw_bits)
		return (true);
	return(false);
}

bool Fixed::operator >= (const Fixed& other)
{
	if (this->_raw_bits >= other._raw_bits)
		return (true);
	return(false);
}

bool Fixed::operator <= (const Fixed& other)
{
	if (this->_raw_bits <= other._raw_bits)
		return (true);
	return(false);
}

bool Fixed::operator == (const Fixed& other)
{
	if (this->_raw_bits == other._raw_bits)
		return (true);
	return(false);
}

bool Fixed::operator != (const Fixed& other)
{
	if (this->_raw_bits != other._raw_bits)
		return (true);
	return(false);
}

Fixed Fixed::operator + (const Fixed& other)
{
	Fixed a;
	a._raw_bits = this->_raw_bits + other._raw_bits;
	return(a);
}

Fixed Fixed::operator - (const Fixed& other)
{
	Fixed a;
	a._raw_bits = this->_raw_bits - other._raw_bits;
	return(a);
}

Fixed Fixed::operator * (const Fixed& other)
{
	Fixed a;
	a = this->toFloat() * other.toFloat();
	return(a);
}

Fixed Fixed::operator / (const Fixed& other)
{
	Fixed a;
	a = this->toFloat() / other.toFloat();
	return(a);
}

Fixed& Fixed::operator ++ (void)
{
	this->_raw_bits++;
	return (*this);
}

Fixed& Fixed::operator -- (void)
{
	this->_raw_bits--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed a;

	a._raw_bits = this->_raw_bits;
	this->_raw_bits++;
	return (a);
}

Fixed Fixed::operator -- (int)
{
	Fixed a;

	a._raw_bits = this->_raw_bits;
	this->_raw_bits--;
	return (a);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	_raw_bits = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_raw_bits) / (1 << _bits));
}

int Fixed::toInt(void) const	
{
	return (_raw_bits >> _bits);
}

const Fixed& Fixed::min (const Fixed& a, const Fixed& b)
{
	if (a._raw_bits < b._raw_bits)
		return (a);
	return(b);
}

const Fixed& Fixed::max (const Fixed& a, const Fixed& b)
{
	if (a._raw_bits > b._raw_bits)
		return (a);
	return(b);
}

Fixed& Fixed::max (Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::min (Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

std::ostream& operator << (std::ostream& out, const Fixed& nbr)
{
	return (out << nbr.toFloat());
}