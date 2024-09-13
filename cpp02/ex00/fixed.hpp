/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:06:37 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/13 17:06:27 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
			int _raw_bits;
			static const int _bits = 8;
	public:
			Fixed(); //default constructor
			Fixed(const Fixed &copy); //cpy constructor
			Fixed &operator=(const Fixed &src); //cpy asignment operator
			~Fixed(); //destructor

			int  getRawBits(void) const; //return raw value of the FP value
			void setRawBits(int const raw); //sets raw value of the FP value
};
