/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:07:22 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/17 00:01:11 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
			int _raw_bits;
			static const int _bits = 8;
	public:
			Fixed(void);
			Fixed(const Fixed&copy);
			Fixed(const int value);
			Fixed(const float value);
			~Fixed();
			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat(void) const;
			int toInt(void) const;
			//comparison operators
			bool operator > (const Fixed& other);
			bool operator < (const Fixed& other);
			bool operator >= (const Fixed& other);
			bool operator <= (const Fixed& other);
			bool operator == (const Fixed& other);
			bool operator != (const Fixed& other);
			//arithmetic operators
			Fixed& operator=(const Fixed& src);
			Fixed operator + (const Fixed& other);
			Fixed operator - (const Fixed& other);
			Fixed operator * (const Fixed& other);
			Fixed operator / (const Fixed& other);
			//increment and decrement operators
			Fixed& operator ++ (void);
			Fixed& operator -- (void);
			Fixed operator ++ (int);
			Fixed operator -- (int);
			//comparison functions with two parameters passed (2 constant FP nbrs)
			static const Fixed& min (const Fixed& a, const Fixed& b);
			static const Fixed& max (const Fixed& a, const Fixed& b);
			//comparison functions with two parameters passed (references to FP nbrs)
			static Fixed& min (Fixed& a, Fixed& b);
			static Fixed& max (Fixed& a, Fixed& b);
};

std::ostream& operator << (std::ostream& out, const Fixed& nbr);