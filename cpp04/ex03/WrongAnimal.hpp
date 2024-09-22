/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:33:32 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:36:28 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal (void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal(void);
		void makeSound() const;
		std::string getType(void) const;
};