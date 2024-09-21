/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:56:43 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:26:41 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog:public Animal
{
	public:
		Dog(void);
		Dog (const Dog& copy);
		Dog& operator=(const Dog& other);
		~Dog (void);
		void makeSound() const;
};