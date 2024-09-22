/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:44:01 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:46:06 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat(void);
		void makeSound() const;
};