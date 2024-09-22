/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:56:43 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 17:04:51 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
	private:
		Brain* _brain;
	public:
		Dog(void);
		Dog (const Dog& copy);
		Dog& operator=(const Dog& other);
		~Dog (void);
		void makeSound() const;
};