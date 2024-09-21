/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:46:18 by alirola-          #+#    #+#             */
/*   Updated: 2024/09/22 01:48:03 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void):WrongAnimal("WrongCat")
{
	std::cout << "Default constructor called WrongCat\n";
}

WrongCat::WrongCat (const WrongCat& copy)
:WrongAnimal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called WrongCat\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if(this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called WrongCat\n";
	return (*this);
}

WrongCat::~WrongCat (void)
{
	std::cout << "Destructor called WrongCat\n";
}

void WrongCat::makeSound() const
{
	std::cout << "meeeewwww (WrongCat sound)\n";
}