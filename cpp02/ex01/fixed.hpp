/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:03:03 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/16 17:39:08 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
			int _raw_bits;
			static const int _bits = 8;
	public:
			Fixed(); //default constr
			Fixed(int const value); //parametrized constr (INT)
			Fixed(float const value); //parametrized constr (FLOAT)
			Fixed(const Fixed &copy); //cpy constr
			Fixed &operator=(const Fixed &src); //assignation operator overload
			~Fixed(); //destructor

			int getRawBits(void) const; //return raw value
			void setRawBits(int const raw); //sets raw valued
			int toInt(void) const; //return FP value as int
			float toFloat(void) const; //return FP value as float
};