/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:37:43 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 17:46:12 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal (void);
		Animal (std::string type);
		Animal (const Animal& copy);
		Animal& operator=(const Animal& other);
		virtual ~Animal (void);
		virtual void makeSound() const = 0; // this means that this class is uninstantiable
		std::string getType(void) const;
};