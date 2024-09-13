/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:04:48 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/13 17:32:30 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	int _raw_bits = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called\n";
	if(this != &src)
	{
		this->_raw_bits = src.getRawBits();
	}
	return(*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_raw_bits = raw;
}