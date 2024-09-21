/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:13:38 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:26:36 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat:public Animal
{
	public:
		Cat(void);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		~Cat(void);
		void makeSound() const;
};