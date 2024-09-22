/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:13:38 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 17:16:44 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain* _brain;
	
	public:
		Cat(void);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		~Cat(void);
		void makeSound() const;
};